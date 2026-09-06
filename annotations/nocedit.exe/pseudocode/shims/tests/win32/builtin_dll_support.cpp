// =============================================================================
// BUILT-IN DLL REGISTRY — a small one, for the loader tests
// =============================================================================
//
// kernel32's LoadLibrary, GetProcAddress, FreeLibrary and GetModuleHandle are
// now answered entirely from the registry of compiled-in modules: there is no
// dynamic loader behind them, because there is nothing to load. Testing that
// means controlling what the registry knows, which the real one cannot offer —
// it holds the renderers, and linking it would drag the whole renderer tree in
// behind them.
//
// So the tests supply their own two modules with their own exports. What is
// under test is the loader's behaviour — a known name resolves, an unknown one
// is refused rather than passed to the host, a handle from one module does not
// answer for another — and none of that is about which renderers exist.

#include "renderer/builtin_dll.h"
#include "core/ascii_case.h"

#include <chrono>
#include <cstring>
#include <thread>

namespace {

int module_a_marker = 0;
int module_b_marker = 0;

int proc_one(void) { return 1; }
int proc_two(void) { return 2; }

}  // namespace

// What the tests expect to be registered.
extern "C" const char *nocturne_test_module_a_name(void) { return "modulea.dll"; }
extern "C" const char *nocturne_test_module_b_name(void) { return "moduleb.dll"; }
extern "C" void *nocturne_test_module_a_handle(void) { return &module_a_marker; }
extern "C" void *nocturne_test_proc_one(void) { return (void *)proc_one; }

extern "C" void *nocturne_builtin_dll_open(const char *dll_name) {
    if (dll_name == nullptr) return nullptr;
    // The same fold the real registry uses, so a name's case matters here
    // exactly as much as it does there.
    if (nocturne_ascii_iequals(dll_name, "modulea.dll")) return &module_a_marker;
    if (nocturne_ascii_iequals(dll_name, "moduleb.dll")) return &module_b_marker;
    return nullptr;
}

extern "C" int nocturne_builtin_dll_is_handle(void *handle) {
    return handle == &module_a_marker || handle == &module_b_marker;
}

extern "C" void *nocturne_builtin_dll_sym(void *handle, const char *symbol) {
    if (symbol == nullptr) return nullptr;
    // Only module A exports anything, so a handle for B is a way to ask whether
    // the lookup is really per-module rather than global.
    if (handle != &module_a_marker) return nullptr;
    if (strcmp(symbol, "ProcOne") == 0) return (void *)proc_one;
    if (strcmp(symbol, "ProcTwo") == 0) return (void *)proc_two;
    return nullptr;
}

extern "C" int nocturne_builtin_dll_available(const char *dll_name) {
    return nocturne_builtin_dll_open(dll_name) != nullptr;
}

// Sleep is the only thing kernel32 asks SDL for. Linking the whole of SDL to
// reach it would make these tests want a video and audio subsystem to run, for
// one call nothing here exercises. Waiting really does wait, so a caller that
// depends on it still gets what it asked for.
extern "C" void SDL_Delay(unsigned int milliseconds) {
    std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
}

