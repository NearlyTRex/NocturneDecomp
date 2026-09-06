// =============================================================================
// WATCOM PATH RESOLUTION — implementation
// =============================================================================
//
// See path.h.

#include "watcom/path.h"

#include <filesystem>
#include <string>
#include <system_error>

namespace {

// Case folding for ASCII only, deliberately. The names being matched are asset
// filenames baked into a 1999 Windows game — ASCII throughout — and the
// alternative, the C library's locale-sensitive folding, would answer
// differently depending on a setting that has nothing to do with what is on
// disk. Turkish locales fold 'I' to a dotless 'ı', which would stop ACT1.POD
// matching act1.pod on a machine configured for Turkish and nowhere else. A
// fixed rule is both portable and correct here.
bool same_name_ignoring_case(const std::string &a, const std::string &b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        char x = a[i];
        char y = b[i];
        if (x >= 'A' && x <= 'Z') x = (char)(x - 'A' + 'a');
        if (y >= 'A' && y <= 'Z') y = (char)(y - 'A' + 'a');
        if (x != y) return false;
    }
    return true;
}

bool exists(const std::string &path) {
    std::error_code ignored;
    return std::filesystem::exists(std::filesystem::path(path), ignored);
}

// The real name of a child of `parent` that differs from `wanted` only in case,
// or empty if there is none. `parent` empty means the working directory.
std::string sibling_ignoring_case(const std::string &parent, const std::string &wanted) {
    std::error_code ignored;
    const std::filesystem::path directory(parent.empty() ? "." : parent);
    // The non-throwing iterator: scanning a directory that does not exist, or
    // cannot be read, is an ordinary outcome here and means no match rather than
    // an error to propagate.
    std::filesystem::directory_iterator it(directory, ignored), end;
    if (ignored) return std::string();
    for (; it != end; it.increment(ignored)) {
        if (ignored) return std::string();
        const std::string name = it->path().filename().string();
        if (same_name_ignoring_case(name, wanted)) return name;
    }
    return std::string();
}

std::string resolve_case_insensitive(const std::string &slashed) {
    // Whole path already right: the common case once a directory has been
    // resolved, and worth not walking.
    if (slashed.empty() || exists(slashed)) return slashed;

    std::string result;
    size_t i = 0;
    // A leading "/" or "./" is kept so absolute stays absolute and a relative
    // path the game spelled with "./" keeps the shape it had.
    if (slashed[0] == '/') {
        result = "/";
        i = 1;
    } else if (slashed.size() >= 2 && slashed[0] == '.' && slashed[1] == '/') {
        result = "./";
        i = 2;
    }

    while (i < slashed.size()) {
        size_t next = slashed.find('/', i);
        if (next == std::string::npos) next = slashed.size();
        const std::string component(slashed, i, next - i);
        i = (next == slashed.size()) ? next : next + 1;

        if (component.empty() || component == ".") continue;

        // Exact spelling first, so a directory holding both "Save" and "save"
        // resolves to the one that was asked for rather than whichever the
        // filesystem lists first.
        const std::string candidate = result + component;
        if (exists(candidate)) {
            result = candidate + (i < slashed.size() ? "/" : "");
            continue;
        }

        std::string parent = result;
        // The trailing separator goes before the scan, except at the root where
        // it is the whole name.
        if (parent.size() > 1 && parent.back() == '/') parent.pop_back();
        const std::string matched = sibling_ignoring_case(parent, component);

        if (matched.empty()) {
            // Nothing by that name in any case. The rest is appended untouched
            // and handed back: the caller is about to fail, and it should fail
            // on the path it asked for.
            result += component + (i < slashed.size() ? "/" : "");
            if (i < slashed.size()) result.append(slashed, i, std::string::npos);
            return result;
        }
        result += matched + (i < slashed.size() ? "/" : "");
    }

    return result;
}

}  // namespace

std::string watcom_resolve_fs_path(const char *path) {
    if (path == nullptr) return std::string();
    std::string slashed(path);
    // Windows accepts both separators, so the game uses both, sometimes in one
    // path. Everything downstream here is written in terms of '/'.
    for (char &c : slashed) {
        if (c == '\\') c = '/';
    }
    return resolve_case_insensitive(slashed);
}
