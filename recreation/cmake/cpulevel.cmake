# How far the build leans on the processor's newer instructions, named by tier rather than by
# instruction set so one setting means the same on every processor the game ships for:
#
#   default   the compiler's own baseline: runs anywhere the target does
#   portable  what every machine still worth shipping for has
#   modern    wider vectors, on machines of the last decade or so
#   newest    the widest vectors there are, on recent workstations and servers
#   native    whatever the building machine has; for local builds only, never to ship
#
# Each tier is a -march or -mcpu per processor. A Mac build of several architectures at once
# (CMAKE_OSX_ARCHITECTURES) passes each its own through -Xarch_, so one compile covers both.
#
#   tier      x86_64          aarch64 (Linux, Windows)   arm64 (Apple)
#   portable  x86-64-v2       armv8-a                    apple-m1
#   modern    x86-64-v3       armv8.2-a                  apple-m1
#   newest    x86-64-v4       armv9-a                    apple-m4
#
# Apple silicon starts at the M1, so its portable and modern are the same.

set(NOCTURNE_RECREATION_CPU_LEVEL "default"
    CACHE STRING "The processor tier the build targets: default, portable, modern, newest or native")
set_property(CACHE NOCTURNE_RECREATION_CPU_LEVEL
    PROPERTY STRINGS default portable modern newest native)

set(_nocturne_cpu_levels default portable modern newest native)
if(NOT NOCTURNE_RECREATION_CPU_LEVEL IN_LIST _nocturne_cpu_levels)
    message(FATAL_ERROR "NOCTURNE_RECREATION_CPU_LEVEL must be one of ${_nocturne_cpu_levels}, "
                        "not '${NOCTURNE_RECREATION_CPU_LEVEL}'")
endif()

# The flag one architecture takes for the tier, in _flag; empty for the compiler's baseline.
function(_nocturne_cpu_level_flag architecture apple _flag)
    set(level "${NOCTURNE_RECREATION_CPU_LEVEL}")
    set(flag "")
    if(architecture MATCHES "^(x86_64|AMD64|amd64)$")
        set(portable x86-64-v2)
        set(modern x86-64-v3)
        set(newest x86-64-v4)
        set(option -march)
    elseif(architecture MATCHES "^(aarch64|arm64|ARM64)$")
        if(apple)
            set(portable apple-m1)
            set(modern apple-m1)
            set(newest apple-m4)
            set(option -mcpu)
        else()
            set(portable armv8-a)
            set(modern armv8.2-a)
            set(newest armv9-a)
            set(option -march)
        endif()
    elseif(NOT level STREQUAL "default")
        message(FATAL_ERROR "NOCTURNE_RECREATION_CPU_LEVEL has no tiers for '${architecture}'")
    endif()
    if(level STREQUAL "native")
        # Arm's compilers tune for the building core only through -mcpu.
        if(architecture MATCHES "^(aarch64|arm64|ARM64)$")
            set(flag -mcpu=native)
        else()
            set(flag -march=native)
        endif()
    elseif(NOT level STREQUAL "default")
        set(flag "${option}=${${level}}")
    endif()
    set(${_flag} "${flag}" PARENT_SCOPE)
endfunction()

# The tier's flags for the target being built, onto the interface library every target links.
function(nocturne_apply_cpu_level target)
    if(NOCTURNE_RECREATION_CPU_LEVEL STREQUAL "default")
        return()
    endif()
    list(LENGTH CMAKE_OSX_ARCHITECTURES _apple_architectures)
    if(APPLE AND _apple_architectures GREATER 1)
        if(NOCTURNE_RECREATION_CPU_LEVEL STREQUAL "native")
            message(FATAL_ERROR "A native build is for the building machine alone, not for "
                                "several architectures at once")
        endif()
        foreach(architecture IN LISTS CMAKE_OSX_ARCHITECTURES)
            _nocturne_cpu_level_flag("${architecture}" TRUE flag)
            target_compile_options(${target} INTERFACE "-Xarch_${architecture}" "${flag}")
        endforeach()
        return()
    endif()
    if(APPLE AND _apple_architectures EQUAL 1)
        set(architecture "${CMAKE_OSX_ARCHITECTURES}")
    else()
        set(architecture "${CMAKE_SYSTEM_PROCESSOR}")
    endif()
    _nocturne_cpu_level_flag("${architecture}" "${APPLE}" flag)
    target_compile_options(${target} INTERFACE "${flag}")
endfunction()
