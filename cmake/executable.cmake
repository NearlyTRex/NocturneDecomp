# -----------------------------------------------------------------------------
# Target: nocturne  (full linked executable)
# The decompiled modules (cmake/game_modules.cmake) and the shims
# (cmake/shims.cmake), linked; the release manifest; and on the platforms that
# ask for them, the run.sh / debug.sh launchers. Only with NOCTURNE_BUILD_EXE.
# -----------------------------------------------------------------------------
add_executable(nocturne)
target_compile_features(nocturne PRIVATE cxx_std_17)
target_include_directories(nocturne PRIVATE
    "${NOCTURNE_INCLUDE_DIR}" "${NOCTURNE_SHIMS_DIR}"
    ${SDL2_INCLUDE_DIRS} ${SDL2TTF_INCLUDE_DIRS} ${FFMPEG_INCLUDE_DIRS})
target_compile_options(nocturne PRIVATE
    ${NOCTURNE_COMMON_WARNINGS}
    ${NOCTURNE_SANITIZE_FLAGS}
    ${SDL2_CFLAGS_OTHER} ${SDL2TTF_CFLAGS_OTHER} ${FFMPEG_CFLAGS_OTHER})
target_link_options(nocturne PRIVATE ${NOCTURNE_SANITIZE_FLAGS} ${NOCTURNE_COVERAGE_FLAGS})

foreach(_lib IN LISTS _module_libs)
    target_link_libraries(nocturne PRIVATE ${_lib})
endforeach()
target_link_libraries(nocturne PRIVATE nocturne_shims
    ${SDL2_LIBRARIES} ${SDL2TTF_LIBRARIES} ${FFMPEG_LIBRARIES}
    ${NOCTURNE_PLATFORM_LIBRARIES})
if(COMMAND nocturne_platform_finalize)
    nocturne_platform_finalize(nocturne)
endif()

# The release manifest scripts/Bash/package_release.sh reads.
set(_package "binary=$<TARGET_FILE:nocturne>\nformat=${NOCTURNE_PACKAGE_FORMAT}\n")
get_property(_package_runtime GLOBAL PROPERTY NOCTURNE_PACKAGE_RUNTIME)
foreach(_file IN LISTS _package_runtime)
    string(APPEND _package "runtime=${_file}\n")
endforeach()
get_property(_package_bundle GLOBAL PROPERTY NOCTURNE_PACKAGE_BUNDLE)
if(_package_bundle)
    string(APPEND _package "bundle=${_package_bundle}\n")
endif()
file(GENERATE OUTPUT "${CMAKE_BINARY_DIR}/package.txt" CONTENT "${_package}")

# -------------------------------------------------------------------------
# run.sh — launcher that sets sanitizer-friendly env defaults (symbolizer
# path, UBSan stack traces, LSan off) and execs the built binary. Drops
# next to the exe so `./run.sh` just works from any build preset. Only on
# platforms that ask for it: the scripts are bash and exec `nocturne`.
# -------------------------------------------------------------------------
if(NOCTURNE_PLATFORM_LAUNCHERS)
    find_program(LLVM_SYMBOLIZER_PATH
        NAMES llvm-symbolizer llvm-symbolizer-18 llvm-symbolizer-17
              llvm-symbolizer-16 llvm-symbolizer-15 llvm-symbolizer-14)
    if(LLVM_SYMBOLIZER_PATH)
        message(STATUS "llvm-symbolizer: ${LLVM_SYMBOLIZER_PATH}")
    else()
        message(STATUS "llvm-symbolizer: not found — sanitizer reports will "
                       "show raw addresses. Install via apt/brew for readable "
                       "stack traces.")
        set(LLVM_SYMBOLIZER_PATH "")
    endif()

    # Best-effort preset name for the "not built" hint in the script.
    if(DEFINED ENV{CMAKE_PRESET_NAME})
        set(NOCTURNE_PRESET_NAME "$ENV{CMAKE_PRESET_NAME}")
    else()
        get_filename_component(NOCTURNE_PRESET_NAME "${CMAKE_BINARY_DIR}" NAME)
    endif()

    foreach(_launcher run_nocturne.sh:run.sh debug_nocturne.sh:debug.sh)
        string(REPLACE ":" ";" _launcher "${_launcher}")
        list(GET _launcher 0 _template)
        list(GET _launcher 1 _script)
        configure_file(
            "${CMAKE_SOURCE_DIR}/cmake/${_template}.in"
            "${CMAKE_BINARY_DIR}/${_script}"
            @ONLY
            FILE_PERMISSIONS
                OWNER_READ OWNER_WRITE OWNER_EXECUTE
                GROUP_READ GROUP_EXECUTE
                WORLD_READ WORLD_EXECUTE)
    endforeach()
endif()
