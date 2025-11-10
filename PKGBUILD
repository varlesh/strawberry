pkgname=strawberry-git-fix
pkgver=1.2.14.a92d9ca
pkgrel=1
pkgdesc="A music player aimed at audio enthusiasts and music collectors"
arch=(x86_64 i686 armv7h aarch64)
url="https://www.strawberrymusicplayer.org/"
license=(GPL-3.0-or-later)
depends=(alsa-lib
         chromaprint
         fftw
         gcc-libs
         gdk-pixbuf2
         glib2
         glibc
         gst-plugins-base
         gst-plugins-base-libs
         gst-plugins-good
         gstreamer
         icu
         kdsingleapplication
         libcdio
         libebur128
         libgpod
         libmtp
         libpulse
         libx11
         qt6-base
         sqlite
         taglib
         udisks2)
makedepends=(boost
             cmake
             git
             qt6-tools
             rapidjson
             sparsehash)
optdepends=('gst-libav: additional codecs'
            'gst-plugins-bad: additional codecs'
            'gst-plugins-ugly: additional codecs')
provides=(strawberry)
conflicts=(strawberry strawberry-git)
source=("git+https://github.com/varlesh/strawberry.git")
sha256sums=('SKIP')

prepare() {
  cd strawberry
  install -d strawberry-build
}

build() {
  local _flags=(
  -DCMAKE_CXX_FLAGS="$CXXFLAGS -DQT_NO_DEBUG_OUTPUT"
  -DCMAKE_INSTALL_PREFIX=/usr
#   -DENABLE_TIDAL=OFF
#   -DENABLE_QOBUZ=OFF
#   -DENABLE_SPOTIFY=OFF
#   -DENABLE_SUBSONIC=OFF
#   -DENABLE_GPOD=OFF
#   -DENABLE_MTP=OFF
#   -DENABLE_PULSE=OFF
#   -DENABLE_STREAMTAGREADER=OFF
#   -DENABLE_DISCORD_RPC=OFF
#   -DENABLE_DEBUG_OUTPUT=OFF
  )
  cd strawberry/strawberry-build
  cmake .. \
  "${_flags[@]}"
  make -j16
}

package() {
  cd strawberry/strawberry-build
  make DESTDIR="${pkgdir}" install
}
