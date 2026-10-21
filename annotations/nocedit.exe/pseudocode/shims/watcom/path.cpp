// =============================================================================
// WATCOM PATH RESOLUTION — implementation
// =============================================================================
//
// See path.h.

#include "watcom/path.h"
#include "core/ascii_case.h"

#include <filesystem>
#include <string>
#include <system_error>

namespace {

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
        if (nocturne_ascii_iequals(name.c_str(), wanted.c_str())) return name;
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

const WatcomPathRoots &roots() {
    return watcom_path_roots();
}

// Windows accepts both separators, so the game uses both, sometimes in one path.
// Everything downstream here is written in terms of '/'.
std::string slashed(const char *path) {
    std::string result(path);
    for (char &c : result) {
        if (c == '\\') c = '/';
    }
    return result;
}

// "/x", "//server/x" and "C:/x" name the same file whatever the roots are.
bool is_absolute(const std::string &path) {
    if (!path.empty() && path[0] == '/') return true;
    return path.size() >= 2 && path[1] == ':' &&
           ((path[0] >= 'A' && path[0] <= 'Z') || (path[0] >= 'a' && path[0] <= 'z'));
}

// `relative` under `root`, case-resolved below the root. The root is the host's
// own path and is used exactly as given.
std::string under(const std::string &root, std::string relative) {
    while (relative.size() >= 2 && relative[0] == '.' && relative[1] == '/') relative.erase(0, 2);
    if (relative == ".") relative.clear();
    const std::string joined = relative.empty() ? root : root + "/" + relative;
    return resolve_case_insensitive(joined);
}

bool is_regular_file(const std::string &path) {
    std::error_code ignored;
    return std::filesystem::is_regular_file(std::filesystem::path(path), ignored);
}

// A write lands in the user directory. The directories above it are made there,
// and a file that so far exists only in the data directory is copied across
// first, so appending to it or rewriting it in place starts from what the game
// last read rather than from nothing.
std::string for_writing(const std::string &relative) {
    const WatcomPathRoots &r = roots();
    const std::string target = under(r.user, relative);
    std::error_code ignored;
    const std::filesystem::path path(target);
    if (path.has_parent_path()) std::filesystem::create_directories(path.parent_path(), ignored);
    if (!exists(target)) {
        const std::string shipped = r.data.empty() ? resolve_case_insensitive(relative)
                                                   : under(r.data, relative);
        if (is_regular_file(shipped)) std::filesystem::copy_file(shipped, target, ignored);
    }
    return target;
}

}  // namespace

std::string watcom_resolve_fs_path(const char *path, WatcomPathUse use) {
    if (path == nullptr) return std::string();
    const std::string relative = slashed(path);
    const WatcomPathRoots &r = roots();
    if (is_absolute(relative) || (r.data.empty() && r.user.empty())) {
        return resolve_case_insensitive(relative);
    }
    if (!r.user.empty()) {
        if (use == WatcomPathUse::Write) return for_writing(relative);
        const std::string own = under(r.user, relative);
        if (exists(own)) return own;
    }
    return r.data.empty() ? resolve_case_insensitive(relative) : under(r.data, relative);
}

std::vector<std::string> watcom_resolve_fs_dirs(const char *directory) {
    const std::string relative = slashed(directory == nullptr ? "" : directory);
    const WatcomPathRoots &r = roots();
    if (is_absolute(relative) || (r.data.empty() && r.user.empty())) {
        return {resolve_case_insensitive(relative)};
    }
    std::vector<std::string> dirs;
    if (!r.user.empty()) dirs.push_back(under(r.user, relative));
    dirs.push_back(r.data.empty() ? resolve_case_insensitive(relative) : under(r.data, relative));
    return dirs;
}
