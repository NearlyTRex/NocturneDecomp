# -----------------------------------------------------------------------------
# Per-module source lists (priority-resolved) generated at configure time by
# cmake/collect_sources.py into NOCTURNE_GEN_DIR, and the module names in
# NOCTURNE_MODULES. Re-running cmake regenerates the lists; adding a new
# .keep/.mmx/.byval variant requires a reconfigure.
# -----------------------------------------------------------------------------

# Entry/ is always replaced by the hand-written pseudocode/main/ module.
# Crt/ is excluded — we link against a modern C/C++ runtime.
set(_collect_excludes --exclude-module entry --exclude-module crt)

message(STATUS "Collecting Nocturne sources (priority: .keep > .cpp/.c; .mmx/.byval/.chunked are reference-only, skipped)")
execute_process(
    COMMAND "${Python3_EXECUTABLE}"
            "${CMAKE_SOURCE_DIR}/cmake/collect_sources.py"
            --src-root   "${NOCTURNE_SRC_ROOT}"
            --module     "${NOCTURNE_MAIN_DIR}"
            --module     "${NOCTURNE_CHECKS_DIR}"
            --out-dir    "${NOCTURNE_GEN_DIR}"
            --skip-list  "${NOCTURNE_SKIP_LIST}"
            --modules-file "${NOCTURNE_GEN_DIR}/modules.txt"
            ${_collect_excludes}
    RESULT_VARIABLE _collect_rc
    OUTPUT_VARIABLE _collect_out
    ERROR_VARIABLE  _collect_err
)
if(NOT _collect_rc EQUAL 0)
    message(FATAL_ERROR "collect_sources.py failed:\n${_collect_out}${_collect_err}")
endif()
# Emit the per-module file counts as individual STATUS lines so CMake
# prefixes each with `-- ` instead of leaving the tail of a multi-line
# message unprefixed and offset.
string(STRIP "${_collect_out}" _collect_out_stripped)
string(REPLACE "\n" ";" _collect_lines "${_collect_out_stripped}")
foreach(_line IN LISTS _collect_lines)
    string(STRIP "${_line}" _line_stripped)
    if(_line_stripped)
        message(STATUS "${_line_stripped}")
    endif()
endforeach()

file(STRINGS "${NOCTURNE_GEN_DIR}/modules.txt" NOCTURNE_MODULES)

# Re-run cmake if the skip list changes.
set_property(DIRECTORY APPEND PROPERTY CMAKE_CONFIGURE_DEPENDS
    "${NOCTURNE_SKIP_LIST}"
    "${CMAKE_SOURCE_DIR}/cmake/collect_sources.py"
)
