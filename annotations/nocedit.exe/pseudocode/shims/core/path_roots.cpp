// =============================================================================
// PATH ROOTS — implementation
// =============================================================================
//
// See path_roots.h.

#include "core/path_roots.h"

#include "core/crash_report.h"
#include "watcom/path.h"

#include <SDL.h>
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
        if (arg == nullptr || strncmp(arg, name, length) != 0)
            continue;
        if (arg[length] == '=')
            return arg + length + 1;
        if (arg[length] == '\0' && i + 1 < argc)
            return argv[i + 1];
    }
    return nullptr;
}

std::string pick(const char *from_command_line, const char *environment_name,
                 const char *compiled_in) {
    const char *chosen = from_command_line;
    if (chosen == nullptr)
        chosen = getenv(environment_name);
    if (chosen == nullptr)
        chosen = compiled_in;
    if (chosen == nullptr || chosen[0] == '\0')
        return std::string();

    std::error_code ignored;
    std::filesystem::path path = std::filesystem::absolute(chosen, ignored);
    if (ignored)
        path = chosen;
    std::string result = path.lexically_normal().generic_string();
    while (result.size() > 1 && result.back() == '/')
        result.pop_back();
    return result;
}

// The directory named on the first line of `dir`/data_dir.txt, or empty when
// there is no such file or it names no directory that is there.
std::string remembered_data_dir(const std::string &dir) {
    if (dir.empty())
        return std::string();
    FILE *file = fopen((dir + "/data_dir.txt").c_str(), "rb");
    if (file == nullptr)
        return std::string();
    char line[1024] = {0};
    const bool read = fgets(line, sizeof(line), file) != nullptr;
    fclose(file);
    std::string named = read ? line : "";
    while (!named.empty() && isspace((unsigned char)named.back()))
        named.pop_back();
    std::error_code ignored;
    if (named.empty() || !std::filesystem::is_directory(named, ignored))
        return std::string();
    return named;
}

// Where a data_dir.txt was looked for this run, empty when none was; and
// whether the data directory is a folder of the platform's that people fill by
// hand, to be opened when it is empty.
std::string s_pointer_dir;
bool s_fill_by_hand = false;

// Whether `dir` holds any .pod, in any case: the one thing every install has.
bool has_game_data(const std::string &dir) {
    std::error_code ignored;
    for (const auto &entry : std::filesystem::directory_iterator(dir, ignored)) {
        std::string extension = entry.path().extension().string();
        for (char &c : extension)
            c = (char)tolower((unsigned char)c);
        if (extension == ".pod")
            return true;
    }
    return false;
}

// Where the game reads from with no data directory: on Windows winMain moves
// to the executable's folder, elsewhere it stays where it was started.
std::string game_directory() {
#if defined(_WIN32)
    char *base = SDL_GetBasePath();
    const std::string dir = base != nullptr ? base : ".";
    SDL_free(base);
    return dir;
#else
    std::error_code ignored;
    return std::filesystem::current_path(ignored).string();
#endif
}

#if defined(NOCTURNE_DATA_DIR_FROM_SDL)
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
#endif

} // namespace

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
    roots.user = pick(option(argc, argv, "--user-dir"), "NOCTURNE_USER_DIR", default_user);
    const char *data_override = option(argc, argv, "--data-dir");
    if (data_override == nullptr)
        data_override = getenv("NOCTURNE_DATA_DIR");
    std::string remembered;
    s_pointer_dir.clear();
    if (data_override == nullptr) {
        if (!roots.user.empty()) {
            s_pointer_dir = roots.user;
            remembered = remembered_data_dir(roots.user);
        } else {
            const std::string fallback = pick(nullptr, "NOCTURNE_DATA_DIR", default_data);
            s_pointer_dir = fallback;
            remembered = remembered_data_dir(fallback);
            // The folder that names the game files keeps what the game writes.
            if (!remembered.empty())
                roots.user = fallback;
        }
        if (!remembered.empty())
            data_override = remembered.c_str();
    }
    roots.data = pick(data_override, "NOCTURNE_DATA_DIR", default_data);
#if defined(NOCTURNE_DATA_DIR_FROM_SDL)
    s_fill_by_hand = (data_override == nullptr);
#endif
    // One directory given as both is the default arrangement with a new working
    // directory, and needs no overlay.
    if (roots.user == roots.data)
        roots.user.clear();

    if (!roots.user.empty()) {
        std::error_code ignored;
        std::filesystem::create_directories(roots.user, ignored);
    }
    watcom_set_path_roots(roots);
    // A crash report is written where the logs are.
    nocturne_crash_report_set_dir(!roots.user.empty() ? roots.user.c_str() : roots.data.c_str());

    if (!roots.data.empty() || !roots.user.empty()) {
        fprintf(stderr, "nocturne: data directory %s, user directory %s\n",
                roots.data.empty() ? "(working directory)" : roots.data.c_str(),
                roots.user.empty() ? "(the data directory)" : roots.user.c_str());
    }
}

int nocturne_check_game_data(void) {
    std::string dir = watcom_path_roots().data;
    if (dir.empty())
        dir = game_directory();
    if (has_game_data(dir))
        return 1;

    std::string message =
        "Nocturne could not find its game files in:\n\n" + dir +
        "\n\n"
        "Copy everything from your Nocturne install folder (the .POD files and the "
        "rest) there, or start Nocturne with --data-dir and the folder they are in.";
    if (!s_pointer_dir.empty()) {
        message += "\n\nOr put the path of that folder on the first line of a file named "
                   "data_dir.txt in:\n\n" +
                   s_pointer_dir;
    }
#if defined(NOCTURNE_DATA_DIR_FROM_SDL)
    if (s_fill_by_hand) {
        message += "\n\nThat folder will open now. Start Nocturne again once the files are in it.";
    }
#endif
    fprintf(stderr, "nocturne: %s\n", message.c_str());
    SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Nocturne", message.c_str(), nullptr);
#if defined(NOCTURNE_DATA_DIR_FROM_SDL)
    if (s_fill_by_hand)
        SDL_OpenURL(file_url(dir).c_str());
#endif
    return 0;
}
