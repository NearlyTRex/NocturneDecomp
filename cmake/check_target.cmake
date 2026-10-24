# -----------------------------------------------------------------------------
# Target: nocturne_check  (per-file -fsyntax-only)
# Produces a stamp per successfully checked file so incremental re-runs only
# touch changed files. This is the drop-in for the existing verification path.
# -----------------------------------------------------------------------------
set(_stamp_dir "${CMAKE_BINARY_DIR}/check_stamps")
file(MAKE_DIRECTORY "${_stamp_dir}")
set(_all_stamps "")

foreach(_module IN LISTS NOCTURNE_MODULES)
    file(STRINGS "${NOCTURNE_GEN_DIR}/sources_${_module}.txt" _sources)
    foreach(_src IN LISTS _sources)
        # Relative path from pseudocode/ so modules outside src/ (main,
        # checks) produce stable stamp names too.
        file(RELATIVE_PATH _rel "${NOCTURNE_PSEUDOCODE_DIR}" "${_src}")
        string(REPLACE "/" "_" _stamp_name "${_rel}")
        string(REPLACE "." "_" _stamp_name "${_stamp_name}")
        set(_stamp "${_stamp_dir}/${_stamp_name}.stamp")

        # Always use clang++ / -std=gnu++11 — matches compiler_config.py
        # (the decompiled .c files include C++ headers like <cctype>).
        add_custom_command(
            OUTPUT  "${_stamp}"
            COMMAND "${CMAKE_CXX_COMPILER}"
                    -fsyntax-only -std=gnu++11
                    -x c++
                    ${NOCTURNE_COMMON_WARNINGS}
                    ${NOCTURNE_INCLUDE_FLAGS}
                    "${_src}"
            COMMAND "${CMAKE_COMMAND}" -E touch "${_stamp}"
            DEPENDS "${_src}"
            COMMENT "syntax ${_rel}"
            VERBATIM
        )
        list(APPEND _all_stamps "${_stamp}")
    endforeach()
endforeach()

add_custom_target(nocturne_check DEPENDS ${_all_stamps})
message(STATUS "nocturne_check: ${_module} modules, "
               "${CMAKE_BINARY_DIR}/check_stamps/")
