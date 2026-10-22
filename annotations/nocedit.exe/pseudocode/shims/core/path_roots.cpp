// =============================================================================
// PATH ROOTS — implementation
// =============================================================================
//
// See path_roots.h.

#include "core/path_roots.h"
#include "watcom/path.h"

#if defined(NOCTURNE_USER_DIR_FROM_SDL)
#include <SDL.h>
#endif

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <string>
#include <system_error>

namespace {

// The value of --<name> <dir> or --<name>=<dir>, or null.
const char *option(int argc, char **argv, const char *name) {
    const size_t length = strlen(name);
    for (int i = 1; i < argc; i++) {
        const char *arg = argv[i];
        if (arg == nullptr || strncmp(arg, name, length) != 0) continue;
        if (arg[length] == '=') return arg + length + 1;
        if (arg[length] == '\0' && i + 1 < argc) return argv[i + 1];
    }
    return nullptr;
}

std::string pick(const char *from_command_line, const char *environment_name,
                 const char *compiled_in) {
    const char *chosen = from_command_line;
    if (chosen == nullptr) chosen = getenv(environment_name);
    if (chosen == nullptr) chosen = compiled_in;
    if (chosen == nullptr || chosen[0] == '\0') return std::string();

    std::error_code ignored;
    std::filesystem::path path = std::filesystem::absolute(chosen, ignored);
    if (ignored) path = chosen;
    std::string result = path.lexically_normal().generic_string();
    while (result.size() > 1 && result.back() == '/') result.pop_back();
    return result;
}

}  // namespace

void nocturne_init_path_roots(int argc, char **argv) {
#if defined(NOCTURNE_DEFAULT_DATA_DIR)
    const char *default_data = NOCTURNE_DEFAULT_DATA_DIR;
#else
    const char *default_data = nullptr;
#endif

#if defined(NOCTURNE_USER_DIR_FROM_SDL)
    // SDL_GetPrefPath creates the directory and keeps no hold on the string.
    char *pref = SDL_GetPrefPath("NocturneDecomp", "Nocturne");
    const std::string sdl_user = pref != nullptr ? pref : "";
    SDL_free(pref);
    const char *default_user = sdl_user.c_str();
#elif defined(NOCTURNE_DEFAULT_USER_DIR)
    const char *default_user = NOCTURNE_DEFAULT_USER_DIR;
#else
    const char *default_user = nullptr;
#endif

    WatcomPathRoots roots;
    roots.data = pick(option(argc, argv, "--data-dir"), "NOCTURNE_DATA_DIR", default_data);
    roots.user = pick(option(argc, argv, "--user-dir"), "NOCTURNE_USER_DIR", default_user);
    // One directory given as both is the default arrangement with a new working
    // directory, and needs no overlay.
    if (roots.user == roots.data) roots.user.clear();

    if (!roots.user.empty()) {
        std::error_code ignored;
        std::filesystem::create_directories(roots.user, ignored);
    }
    watcom_set_path_roots(roots);

    if (!roots.data.empty() || !roots.user.empty()) {
        fprintf(stderr, "nocturne: data directory %s, user directory %s\n",
                roots.data.empty() ? "(working directory)" : roots.data.c_str(),
                roots.user.empty() ? "(the data directory)" : roots.user.c_str());
    }
}
