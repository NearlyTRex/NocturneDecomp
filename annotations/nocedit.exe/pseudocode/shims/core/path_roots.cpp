// =============================================================================
// PATH ROOTS — implementation
// =============================================================================
//
// See path_roots.h.

#include "core/path_roots.h"
#include "watcom/path.h"

#if defined(NOCTURNE_USER_DIR_FROM_SDL) || defined(NOCTURNE_DATA_DIR_FROM_SDL)
#include <SDL.h>
#endif

#include <cctype>
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

#if defined(NOCTURNE_DATA_DIR_FROM_SDL)
// Whether `dir` holds any .pod, in any case: the one thing every install has.
bool has_game_data(const std::string &dir) {
    std::error_code ignored;
    for (const auto &entry : std::filesystem::directory_iterator(dir, ignored)) {
        std::string extension = entry.path().extension().string();
        for (char &c : extension) c = (char)tolower((unsigned char)c);
        if (extension == ".pod") return true;
    }
    return false;
}

// A file:// URL for `dir`, percent-encoding everything but the unreserved set
// and the separator ("Application Support" has a space in it).
std::string file_url(const std::string &dir) {
    static const char hex[] = "0123456789ABCDEF";
    std::string url = "file://";
    for (unsigned char c : dir) {
        if (isalnum(c) || c == '/' || c == '-' || c == '_' || c == '.' || c == '~') {
            url += (char)c;
        } else {
            url += '%';
            url += hex[c >> 4];
            url += hex[c & 15];
        }
    }
    return url;
}

// The default data directory is one people fill by hand. Empty, the game would
// fail somewhere deep in its startup with nothing on screen to say why, so say
// where the files go, show the folder, and stop.
[[noreturn]] void ask_for_game_data(const std::string &dir) {
    const std::string message =
        "Nocturne could not find its game files.\n\n"
        "Copy everything from your Nocturne install folder (the .POD files and "
        "the rest) into:\n\n" + dir + "\n\n"
        "That folder will open now. Start Nocturne again once the files are in it.";
    SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Nocturne", message.c_str(), nullptr);
    SDL_OpenURL(file_url(dir).c_str());
    exit(1);
}
#endif

}  // namespace

void nocturne_init_path_roots(int argc, char **argv) {
#if defined(NOCTURNE_DATA_DIR_FROM_SDL)
    // SDL_GetPrefPath creates the directory; an empty organisation leaves one
    // level, ~/Library/Application Support/NocturneDecomp/ on macOS.
    char *data_pref = SDL_GetPrefPath("", "NocturneDecomp");
    const std::string sdl_data = data_pref != nullptr ? data_pref : "";
    SDL_free(data_pref);
    const char *default_data = sdl_data.c_str();
#elif defined(NOCTURNE_DEFAULT_DATA_DIR)
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
    const char *data_override = option(argc, argv, "--data-dir");
    if (data_override == nullptr) data_override = getenv("NOCTURNE_DATA_DIR");
    roots.data = pick(data_override, "NOCTURNE_DATA_DIR", default_data);
#if defined(NOCTURNE_DATA_DIR_FROM_SDL)
    if (data_override == nullptr && !roots.data.empty() && !has_game_data(roots.data)) {
        ask_for_game_data(roots.data);
    }
#endif
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
