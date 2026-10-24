# -----------------------------------------------------------------------------
# Window icon. Included from cmake/shims.cmake, before the shim library.
#
# By default the icon is shims/core/window_icon_moon.h, a committed header
# of RGBA pixels. Nothing runs at build time for it.
#
# NOCTURNE_ICON_FROM_EXE swaps in the shipped game's own icon instead — the
# 32x32 4bpp moon in nocturne.exe's / nocedit.exe's PE resource directory.
# That one cannot be committed, since the game binaries stay out of the
# repository, so it has to be extracted from whichever exe the developer
# has locally. With the option on and no exe present, the committed header
# stays in use: no build fails for want of an icon.
#
# Only files that exist NOW can be listed as dependencies (Ninja rejects a
# dependency nothing produces), so dropping an exe in later needs a
# reconfigure. The stamp is what the build edge tracks; the header itself is
# a byproduct the generator rewrites only when its contents actually change,
# so an unchanged icon doesn't recompile the shims on every build.
# -----------------------------------------------------------------------------
option(NOCTURNE_ICON_FROM_EXE
    "Use the shipped game exe's own icon instead of the committed one"
    OFF)
set(NOCTURNE_ICON_SIZE 128 CACHE STRING
    "Edge length in pixels of the icon extracted by NOCTURNE_ICON_FROM_EXE")

set(_icon_script "${CMAKE_SOURCE_DIR}/scripts/Python/extract_exe_icon.py")
set(_icon_header "${NOCTURNE_GEN_DIR}/nocturne_icon.h")
set(_icon_stamp  "${NOCTURNE_GEN_DIR}/nocturne_icon.stamp")
set(_icon_args "")
set(_icon_deps "${_icon_script}")
if(NOCTURNE_ICON_FROM_EXE)
    foreach(_icon_exe "${CMAKE_SOURCE_DIR}/nocturne.exe"
                      "${CMAKE_SOURCE_DIR}/nocedit.exe")
        if(EXISTS "${_icon_exe}")
            list(APPEND _icon_args --exe "${_icon_exe}")
            list(APPEND _icon_deps "${_icon_exe}")
        endif()
    endforeach()
endif()

if(_icon_args)
    list(GET _icon_args 1 _icon_first)
    message(STATUS "window icon: ${_icon_first} (${NOCTURNE_ICON_SIZE}px)")
    add_custom_command(
        OUTPUT "${_icon_stamp}"
        BYPRODUCTS "${_icon_header}"
        COMMAND "${Python3_EXECUTABLE}" "${_icon_script}"
                --out "${_icon_header}" --size ${NOCTURNE_ICON_SIZE} ${_icon_args}
        COMMAND "${CMAKE_COMMAND}" -E touch "${_icon_stamp}"
        DEPENDS ${_icon_deps}
        COMMENT "Extracting window icon"
        VERBATIM
    )
    add_custom_target(nocturne_icon DEPENDS "${_icon_stamp}")
else()
    if(NOCTURNE_ICON_FROM_EXE)
        message(WARNING "NOCTURNE_ICON_FROM_EXE is ON but neither "
                        "nocturne.exe nor nocedit.exe is present — "
                        "falling back to the committed icon")
    endif()
    message(STATUS "window icon: shims/core/window_icon_moon.h (committed)")
endif()
