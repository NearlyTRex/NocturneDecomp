# vanilla.cmake — set every authenticity toggle to the shipped answer.
#
# Included from CMakeLists.txt when NOCTURNE_VANILLA is ON, before the loop that
# forwards NOCTURNE_AUTHENTIC_* into the compile definitions.
#
# THE RULE, AND WHY IT IS NOT A LIST OF NAMES. The header already classifies
# every toggle, and one of those kinds — `host` — means exactly "the shipped
# behaviour depends on Win32 + DirectDraw and cannot be reproduced here". So the
# exceptions are read out of the header's own index table rather than written
# down a second time, and a toggle added later is authentic in vanilla the
# moment it exists, without anyone remembering to come back here.
#
# Each kind, and what vanilla does with it:
#
#   defect    1 — the shipped bug, restored. This is most of the file.
#   choice    1 — the shipped answer rather than the one we prefer.
#   addition  1 — the feature absent, since the shipped game did not have it.
#   host      left at its default. At 1 these ask for a Windows that is not
#             there: RENDERER_DLL wants the renderer as a file on disk when it
#             is compiled in, and UI_CURSOR_WARP's SetCursorPos becomes an
#             SDL warp that drags the pointer away every frame. A vanilla build
#             nobody can run is not a faithful one.
#   binary    0 — EDITOR_BUILD picks *which* binary this is, and neither value
#             is less faithful than the other. Vanilla is the retail game, so
#             the editor presentation is off.
#
# An explicit -D on the configure line still wins: these are plain cache entries
# without FORCE, so `-DNOCTURNE_VANILLA=ON -DNOCTURNE_AUTHENTIC_FMV=0` is a
# vanilla build that still plays the intro movie.

set(_vanilla_header
    "${CMAKE_SOURCE_DIR}/annotations/nocedit.exe/pseudocode/shims/config/shim_config_authentic.h")
if(NOT EXISTS "${_vanilla_header}")
    message(FATAL_ERROR "NOCTURNE_VANILLA: cannot find ${_vanilla_header}")
endif()

file(STRINGS "${_vanilla_header}" _vanilla_lines
     REGEX "^// \\| `NOCTURNE_(AUTHENTIC_[A-Z0-9_]+|EDITOR_BUILD)` \\| [01] \\| [a-z]+ \\|")

if(NOT _vanilla_lines)
    message(FATAL_ERROR
        "NOCTURNE_VANILLA: no toggles found in the header's index table. "
        "scripts/Python/check_authentic_flags.py keeps that table in step with "
        "the #defines; if it has changed shape, this parser has to follow.")
endif()

set(_vanilla_authentic "")
set(_vanilla_host "")
set(_vanilla_editor "")
foreach(_line IN LISTS _vanilla_lines)
    string(REGEX MATCH "NOCTURNE_(AUTHENTIC_[A-Z0-9_]+|EDITOR_BUILD)" _name "${_line}")
    string(REGEX REPLACE "^// \\| `[^`]+` \\| [01] \\| ([a-z]+) \\|.*$" "\\1" _kind "${_line}")

    if(_name STREQUAL "NOCTURNE_EDITOR_BUILD")
        set(${_name} 0 CACHE STRING "vanilla: retail presentation")
        list(APPEND _vanilla_editor "${_name}")
    elseif(_kind STREQUAL "host")
        list(APPEND _vanilla_host "${_name}")
    else()
        set(${_name} 1 CACHE STRING "vanilla: shipped behaviour")
        list(APPEND _vanilla_authentic "${_name}")
    endif()
endforeach()

list(LENGTH _vanilla_authentic _vanilla_count)
list(LENGTH _vanilla_host _vanilla_host_count)
string(REPLACE ";" ", " _vanilla_host_pretty "${_vanilla_host}")
message(STATUS "vanilla: ${_vanilla_count} toggles set to the shipped behaviour")
message(STATUS "vanilla: ${_vanilla_host_count} left at their defaults (host): ${_vanilla_host_pretty}")
