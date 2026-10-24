# The crash handler as a packaged app (UWP, the Xbox in Dev Mode) builds it: the
# Windows headers' app family, which has no message box, so the report can be
# made by a test that faults and read back by the test that started it. The
# app-only calls it makes are Windows 10's.
if(WIN32)
    set_source_files_properties("${NOCTURNE_PSEUDOCODE_DIR}/shims/core/crash_report.cpp"
        PROPERTIES COMPILE_DEFINITIONS "WINAPI_FAMILY=WINAPI_FAMILY_APP;_WIN32_WINNT=0x0A00")
endif()

nocturne_test_suite(shims_core_app
    SUBJECTS
        shims/core/crash_report.cpp
)
