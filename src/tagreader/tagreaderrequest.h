/*
 * Strawberry Music Player
 * Copyright 2024-2025, Jonas Kvinge <jonas@jkvinge.net>
 *
 * Strawberry is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Strawberry is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Strawberry.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef TAGREADERREQUEST_H
#define TAGREADERREQUEST_H

#include <QString>
#include <QUrl>

#include "includes/shared_ptr.h"
#include "tagreaderreply.h"

class TagReaderRequest {
 public:
  explicit TagReaderRequest(const QString &_filename);
  explicit TagReaderRequest(const QUrl &_url, const QString &_filename);
  virtual ~TagReaderRequest();
  QString filename;
  QUrl url;
  TagReaderReplyPtr reply;
};

using TagReaderRequestPtr = SharedPtr<TagReaderRequest>;

#endif  // TAGREADERREQUEST_H
