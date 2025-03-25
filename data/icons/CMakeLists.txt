install(FILES
    ${CMAKE_SOURCE_DIR}/data/icons/hicolor/16x16/actions/new-audio-alarm-symbolic.svg
    ${CMAKE_SOURCE_DIR}/data/icons/hicolor/16x16/actions/strwbr-qobuz-symbolic.svg
    ${CMAKE_SOURCE_DIR}/data/icons/hicolor/16x16/actions/strwbr-radioparadise-symbolic.svg
    ${CMAKE_SOURCE_DIR}/data/icons/hicolor/16x16/actions/strwbr-somafm-symbolic.svg
    ${CMAKE_SOURCE_DIR}/data/icons/hicolor/16x16/actions/strwbr-spotify-symbolic.svg
    ${CMAKE_SOURCE_DIR}/data/icons/hicolor/16x16/actions/strwbr-subsonic-symbolic.svg
    ${CMAKE_SOURCE_DIR}/data/icons/hicolor/16x16/actions/strwbr-symbolic.svg
    ${CMAKE_SOURCE_DIR}/data/icons/hicolor/16x16/actions/strwbr-tidal-symbolic.svg
    DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/icons/hicolor/16x16/actions/
    COMPONENT data
)
install(FILES
    ${CMAKE_SOURCE_DIR}/data/icons/hicolor/22x22/status/strwbr-tray-symbolic.svg
    ${CMAKE_SOURCE_DIR}/data/icons/hicolor/22x22/status/strwbr-tray-pause-symbolic.svg
    ${CMAKE_SOURCE_DIR}/data/icons/hicolor/22x22/status/strwbr-tray-play-symbolic.svg
    DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/icons/hicolor/22x22/status/
    COMPONENT data
)
