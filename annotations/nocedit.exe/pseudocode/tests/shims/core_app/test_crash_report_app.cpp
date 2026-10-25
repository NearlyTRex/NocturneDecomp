// =============================================================================
// CRASH REPORT, PACKAGED — a fault in a packaged app leaves its report
// =============================================================================
//
// The test runs itself again with only the faulting case selected and the
// environment saying to fault; that process installs the handler, names a
// directory, and reads through a null pointer. It dies with the fault's code,
// leaving nocturne_crash.txt behind with the version, the fault and the
// stack. A C++ throw caught on the way does not set it off.

#include "core/crash_report.h"
#include "nocturne_test.h"

#if defined(_WIN32)

#define WIN32_LEAN_AND_MEAN
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>
#include <system_error>
#include <windows.h>

namespace {

namespace fs = std::filesystem;

const char kChildVariable[] = "NOCTURNE_CRASH_TEST_CHILD";

fs::path report_dir() {
    std::error_code ec;
    return fs::temp_directory_path(ec) / "nocturne_crash_report_app_test";
}

} // namespace

// The child: only when asked to.
NOCTURNE_TEST(child_faults_when_asked) {
    char dir[MAX_PATH];
    if (GetEnvironmentVariableA(kChildVariable, dir, sizeof(dir)) == 0)
        return;
    nocturne_install_crash_handler("NocturneDecomp test-version");
    nocturne_crash_report_set_dir(dir);
    try {
        throw std::runtime_error("caught on the way");
    } catch (const std::exception &) {
    }
    volatile int *nothing = nullptr;
    *nothing = 1;
}

NOCTURNE_TEST(a_fault_leaves_its_report) {
    std::error_code ec;
    const fs::path dir = report_dir();
    fs::remove_all(dir, ec);
    fs::create_directories(dir, ec);

    char self[MAX_PATH];
    GetModuleFileNameA(nullptr, self, sizeof(self));
    std::string command = std::string("\"") + self + "\" child_faults_when_asked";
    SetEnvironmentVariableA(kChildVariable, dir.string().c_str());
    STARTUPINFOA startup = {};
    startup.cb = sizeof(startup);
    PROCESS_INFORMATION process = {};
    const BOOL started = CreateProcessA(nullptr, &command[0], nullptr, nullptr, FALSE, 0, nullptr,
                                        nullptr, &startup, &process);
    SetEnvironmentVariableA(kChildVariable, nullptr);
    CHECK(started != 0);
    if (started == 0)
        return;
    WaitForSingleObject(process.hProcess, 60000);
    DWORD exit_code = 0;
    GetExitCodeProcess(process.hProcess, &exit_code);
    CloseHandle(process.hThread);
    CloseHandle(process.hProcess);
    CHECK_EQ(exit_code, (DWORD)EXCEPTION_ACCESS_VIOLATION);

    std::ifstream in((dir / "nocturne_crash.txt").string().c_str());
    std::stringstream text;
    text << in.rdbuf();
    const std::string report = text.str();
    CHECK(report.find("Nocturne crash report") != std::string::npos);
    CHECK(report.find("NocturneDecomp test-version") != std::string::npos);
    CHECK(report.find("access violation") != std::string::npos);
    CHECK(report.find("writing address 0x0000000000000000") != std::string::npos);
    CHECK(report.find("#0  shims_core_app_test_crash_report_app.exe+0x") != std::string::npos);
    fs::remove_all(dir, ec);
}

#else

// Not Windows: nothing is installed and nothing written.
NOCTURNE_TEST(elsewhere_the_handler_is_inert) {
    nocturne_install_crash_handler("test");
    nocturne_crash_report_set_dir("somewhere");
    CHECK(true);
}

#endif

NOCTURNE_TEST_MAIN()
