#include "platform/sdl/sdlpathroots.h"

#include "platform/sdl/sdlfree.h"

#include <SDL3/SDL.h>
#include <cctype>
#include <cstdio>
#include <optional>
#include <string>

namespace nocturne::platform::sdl {
namespace {

[[maybe_unused]] std::optional<std::string> getPrefPath(const char *organisation,
                                                        const char *application) {
    const SdlOwned<char> path(SDL_GetPrefPath(organisation, application));
    if (path == nullptr) {
        return std::nullopt;
    }
    return std::string(path.get());
}

// A file:// URL for the folder, everything but the unreserved set and the separator
// percent-encoded ("Application Support" has a space in it).
[[maybe_unused]] std::string makeFileUrl(std::string_view folder) {
    static constexpr std::string_view kHex = "0123456789ABCDEF";
    std::string url = "file://";
    for (const char c : folder) {
        const auto byte = static_cast<unsigned char>(c);
        if (std::isalnum(byte) != 0 || c == '/' || c == '-' || c == '_' || c == '.' || c == '~') {
            url += c;
        } else {
            url += '%';
            url += kHex[byte >> 4U];
            url += kHex[byte & 15U];
        }
    }
    return url;
}

} // namespace

SPathRootDefaults getPathRootDefaults() {
    SPathRootDefaults defaults;
#if defined(NOCTURNE_DATA_DIR_FROM_SDL)
    // An empty organisation leaves one level: ~/Library/Application Support/NocturneDecomp/.
    defaults.data = getPrefPath("", "NocturneDecomp");
    defaults.data_filled_by_hand = true;
#elif defined(NOCTURNE_DEFAULT_DATA_DIR)
    defaults.data = NOCTURNE_DEFAULT_DATA_DIR;
#endif
#if defined(NOCTURNE_USER_DIR_FROM_SDL)
    defaults.user = getPrefPath("NocturneDecomp", "Nocturne");
#elif defined(NOCTURNE_DEFAULT_USER_DIR)
    defaults.user = NOCTURNE_DEFAULT_USER_DIR;
#endif
    return defaults;
}

void reportMissingGameData(const SPathRoots &roots, std::string_view message) {
    const std::string text(message);
    std::fprintf(stderr, "nocturne: %s\n", text.c_str());
    SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Nocturne", text.c_str(), nullptr);
    if (roots.filled_by_hand) {
        SDL_OpenURL(makeFileUrl(roots.data).c_str());
    }
}

} // namespace nocturne::platform::sdl
