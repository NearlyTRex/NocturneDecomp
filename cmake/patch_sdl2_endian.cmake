# Run by SDL2's FetchContent patch step, in its source directory:
#   cmake -P patch_sdl2_endian.cmake
#
# SDL2's SDL_endian.h defines _m_prefetch itself for clang-cl, working around
# Clang 11's headers. Newer clang-cl has _m_prefetch as a builtin, and defining
# a builtin is an error, so every file that includes SDL.h fails to compile.
# This is SDL's own fix (9343246616 and 07c3b3fb7c on the SDL2 branch), which
# no SDL2 release has yet: the workaround only where the builtin is missing.
# Running it again changes nothing.

set(_header "include/SDL_endian.h")
file(READ "${_header}" _text)
set(_before "#ifdef __clang__\n#ifndef __PRFCHWINTRIN_H")
set(_after "#if defined(__clang__) &&  !_SDL_HAS_BUILTIN(_m_prefetch)\n#ifndef __PRFCHWINTRIN_H")

string(FIND "${_text}" "${_after}" _patched)
if(_patched GREATER_EQUAL 0)
    return()
endif()
string(FIND "${_text}" "${_before}" _found)
if(_found LESS 0)
    message(FATAL_ERROR "${_header} has neither SDL's _m_prefetch workaround nor its fix; "
                        "check whether this SDL2 still needs the patch")
endif()
string(REPLACE "${_before}" "${_after}" _text "${_text}")
file(WRITE "${_header}" "${_text}")
