# macOS with Apple clang, built on a Mac, for either architecture: arm64 for
# Apple silicon, x86_64 for Intel Macs. The preset sets CMAKE_OSX_ARCHITECTURES
# and Apple's clang builds the other one from either host with -arch alone;
# cmake/platforms/macos.cmake tells FFmpeg's configure the same thing. One
# architecture per build, not a universal binary: FFmpeg's configure targets one.
#
# CMAKE_SYSTEM_NAME is not set: the host is a Mac either way.
#
#   xcode-select --install
#   brew install cmake ninja

if(NOT CMAKE_HOST_APPLE)
    message(FATAL_ERROR "macos.cmake builds on a Mac; there is no cross lane to macOS.")
endif()

if(NOT CMAKE_OSX_ARCHITECTURES)
    set(CMAKE_OSX_ARCHITECTURES "${CMAKE_HOST_SYSTEM_PROCESSOR}" CACHE STRING "")
endif()

# The oldest macOS the app runs on. Unset, clang targets the SDK's own release,
# so every binary asks for the macOS of the machine that built it. 11.0 is the
# first with Apple silicon.
if(NOT CMAKE_OSX_DEPLOYMENT_TARGET)
    set(CMAKE_OSX_DEPLOYMENT_TARGET "11.0" CACHE STRING "Minimum macOS")
endif()

# The selected Xcode's own clang, not /usr/bin/clang: that is a trampoline into
# whichever Xcode is selected, and stays the same file when Xcode changes, so
# ccache would keep reusing objects an older compiler built.
function(_nocturne_xcode_compiler lang tool)
    if(DEFINED CMAKE_${lang}_COMPILER)
        return()
    endif()
    execute_process(COMMAND xcrun --find "${tool}"
                    OUTPUT_VARIABLE _found OUTPUT_STRIP_TRAILING_WHITESPACE
                    RESULT_VARIABLE _status ERROR_QUIET)
    if(NOT _status EQUAL 0 OR NOT _found)
        set(_found "${tool}")
    endif()
    set(CMAKE_${lang}_COMPILER "${_found}" PARENT_SCOPE)
endfunction()
_nocturne_xcode_compiler(C clang)
_nocturne_xcode_compiler(CXX clang++)
