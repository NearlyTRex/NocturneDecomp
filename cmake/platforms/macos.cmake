# macOS: an application bundle, Nocturne.app (Nocturne Vanilla.app on the
# vanilla lane), with SDL's dylibs in Contents/Frameworks. SDL's Cocoa video and
# CoreAudio backends are system frameworks, always present, so there is no
# backend check.
#
# Launched from Finder, an app's working directory is /, so the game files have
# to live somewhere fixed: ~/Library/Application Support/NocturneDecomp/, where
# people copy them by hand (shims/core/path_roots.h). Saves, settings and logs go
# there too. --data-dir still overrides it.
# The contract every platform file follows is in cmake/platforms/README.md.

set(NOCTURNE_PLATFORM_SHIM_EXCLUDE "/win32/winsock_win32\\.c$")
set(NOCTURNE_PLATFORM_DEFINITIONS NOCTURNE_DATA_DIR_FROM_SDL)
set(NOCTURNE_FFMPEG_TARGET_OS "darwin")
set(NOCTURNE_FFMPEG_SYSTEM_LIBRARIES m pthread)

# The two lanes are separate apps, so both can sit in /Applications. They share
# the one data folder: the game files are the same, and so are the saves.
if(NOCTURNE_VANILLA)
    set(NOCTURNE_APP_NAME "Nocturne Vanilla")
    set(NOCTURNE_APP_IDENTIFIER "io.github.nearlytrex.nocturnedecomp.vanilla")
else()
    set(NOCTURNE_APP_NAME "Nocturne")
    set(NOCTURNE_APP_IDENTIFIER "io.github.nearlytrex.nocturnedecomp")
endif()

set(NOCTURNE_PLATFORM_LAUNCHERS ON)
set(NOCTURNE_LAUNCHER_EXE "${NOCTURNE_APP_NAME}.app/Contents/MacOS/${NOCTURNE_APP_NAME}")

# FFmpeg is told the architecture CMake builds for, which on an Apple silicon
# host building x86_64 is a cross build: configure cannot run what it probes.
set(NOCTURNE_FFMPEG_EXTRA_ARGS --cc=clang --ld=clang)
foreach(_arch IN LISTS CMAKE_OSX_ARCHITECTURES)
    list(APPEND NOCTURNE_FFMPEG_EXTRA_ARGS
        "--extra-cflags=-arch ${_arch}" "--extra-ldflags=-arch ${_arch}")
endforeach()
if(CMAKE_OSX_ARCHITECTURES AND NOT CMAKE_OSX_ARCHITECTURES STREQUAL CMAKE_HOST_SYSTEM_PROCESSOR)
    list(APPEND NOCTURNE_FFMPEG_EXTRA_ARGS --enable-cross-compile)
endif()

function(nocturne_platform_finalize target)
    # The Finder and Dock icon is the window icon: the header the build is
    # already using, generated or committed.
    if(TARGET nocturne_icon)
        set(_icon_header "${NOCTURNE_GEN_DIR}/nocturne_icon.h")
        set(_icon_deps "${NOCTURNE_GEN_DIR}/nocturne_icon.stamp")
    else()
        set(_icon_header "${NOCTURNE_SHIMS_DIR}/core/window_icon_moon.h")
        set(_icon_deps "${_icon_header}")
    endif()
    set(_icns "${NOCTURNE_GEN_DIR}/Nocturne.icns")
    add_custom_command(
        OUTPUT "${_icns}"
        COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/scripts/Python/make_icns.py"
                --header "${_icon_header}" --out "${_icns}"
        DEPENDS "${CMAKE_SOURCE_DIR}/scripts/Python/make_icns.py" ${_icon_deps}
        COMMENT "Building the app icon"
        VERBATIM)

    # The controller mappings travel inside the bundle: the data folder is the
    # player's, and gamepad.cpp looks beside the program first.
    set(_resources "${_icns}" "${CMAKE_SOURCE_DIR}/gamecontrollerdb.txt"
                   "${CMAKE_SOURCE_DIR}/gamecontrollerdb.license.txt")
    target_sources(${target} PRIVATE ${_resources})
    set_source_files_properties(${_resources} PROPERTIES MACOSX_PACKAGE_LOCATION Resources)

    set_target_properties(${target} PROPERTIES
        MACOSX_BUNDLE TRUE
        OUTPUT_NAME "${NOCTURNE_APP_NAME}"
        MACOSX_BUNDLE_INFO_PLIST "${CMAKE_SOURCE_DIR}/cmake/macos/Info.plist.in"
        MACOSX_BUNDLE_BUNDLE_NAME "${NOCTURNE_APP_NAME}"
        MACOSX_BUNDLE_GUI_IDENTIFIER "${NOCTURNE_APP_IDENTIFIER}"
        MACOSX_BUNDLE_ICON_FILE "Nocturne.icns"
        MACOSX_BUNDLE_SHORT_VERSION_STRING "${PROJECT_VERSION}"
        MACOSX_BUNDLE_BUNDLE_VERSION "${PROJECT_VERSION}"
        MACOSX_BUNDLE_COPYRIGHT "Nocturne is (c) 1999 Terminal Reality. Game data not included.")

    # The dylibs go where a bundle keeps them, so the app built here is the
    # app a release ships. The build-tree paths the link records stay first.
    target_link_options(${target} PRIVATE "-Wl,-rpath,@executable_path/../Frameworks")
    set(_frameworks "$<TARGET_BUNDLE_CONTENT_DIR:${target}>/Frameworks")
    add_custom_command(TARGET ${target} POST_BUILD
        COMMAND "${CMAKE_COMMAND}" -E make_directory "${_frameworks}"
        COMMAND "${CMAKE_COMMAND}" -E copy_if_different
                "$<TARGET_SONAME_FILE:SDL2::SDL2>" "$<TARGET_SONAME_FILE:SDL2_ttf::SDL2_ttf>"
                "${_frameworks}"
        # Ad hoc: no identity, but a sealed bundle. Apple silicon will not run
        # unsigned code at all, and copying the dylibs in after the link left
        # the bundle's seal stale.
        COMMAND codesign --force --deep --sign - "$<TARGET_BUNDLE_DIR:${target}>"
        COMMENT "Staging SDL dylibs into ${NOCTURNE_APP_NAME}.app and signing it"
        VERBATIM)
    nocturne_package_bundle("$<TARGET_BUNDLE_DIR:${target}>")
endfunction()
