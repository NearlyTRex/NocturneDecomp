// =============================================================================
// WATCOM PATH RESOLUTION — implementation
// =============================================================================
//
// See path.h.

#include "watcom/path.h"

#include "core/ascii_case.h"

#include <algorithm>
#include <filesystem>
#include <mutex>
#include <string>
#include <system_error>
#include <unordered_map>

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
    if (ignored)
        return std::string();
    // A failed step leaves the iterator at end, which is no match.
    for (; it != end; it.increment(ignored)) {
        const std::string name = it->path().filename().string();
        if (nocturne_ascii_iequals(name.c_str(), wanted.c_str()))
            return name;
    }
    return std::string();
}

std::string resolve_case_insensitive(const std::string &slashed) {
    // Whole path already right: the common case once a directory has been
    // resolved, and worth not walking.
    if (slashed.empty() || exists(slashed))
        return slashed;

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
        if (next == std::string::npos)
            next = slashed.size();
        const std::string component(slashed, i, next - i);
        i = (next == slashed.size()) ? next : next + 1;

        if (component.empty() || component == ".")
            continue;

        // Exact spelling first, so a directory holding both "Save" and "save"
        // resolves to the one that was asked for rather than whichever the
        // filesystem lists first.
        const std::string candidate = result + component;
        if (exists(candidate)) {
            result = candidate + (i < slashed.size() ? "/" : "");
            continue;
        }

        std::string parent = result;
        // Anything built so far ends in a separator, which goes before the scan,
        // except at the root where it is the whole name.
        if (parent.size() > 1)
            parent.pop_back();
        const std::string matched = sibling_ignoring_case(parent, component);

        if (matched.empty()) {
            // Nothing by that name in any case. The rest is appended untouched
            // and handed back: the caller is about to fail, and it should fail
            // on the path it asked for.
            result += component + (i < slashed.size() ? "/" : "");
            if (i < slashed.size())
                result.append(slashed, i, std::string::npos);
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
        if (c == '\\')
            c = '/';
    }
    return result;
}

// "/x", "//server/x" and "C:/x" name the same file whatever the roots are.
bool is_absolute(const std::string &path) {
    if (!path.empty() && path[0] == '/')
        return true;
    return path.size() >= 2 && path[1] == ':' &&
           ((path[0] >= 'A' && path[0] <= 'Z') || (path[0] >= 'a' && path[0] <= 'z'));
}

// `relative` under `root`, case-resolved below the root. The root is the host's
// own path and is used exactly as given.
std::string under(const std::string &root, std::string relative) {
    while (relative.size() >= 2 && relative[0] == '.' && relative[1] == '/')
        relative.erase(0, 2);
    if (relative == ".")
        relative.clear();
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
    std::filesystem::create_directories(std::filesystem::path(target).parent_path(), ignored);
    if (!exists(target)) {
        const std::string shipped =
            r.data.empty() ? resolve_case_insensitive(relative) : under(r.data, relative);
        if (is_regular_file(shipped))
            std::filesystem::copy_file(shipped, target, ignored);
    }
    return target;
}

// The directory nested PODs are looked for under: the data directory, or the
// working directory without one.
std::string data_directory() {
    const WatcomPathRoots &r = roots();
    if (!r.data.empty())
        return r.data;
    std::error_code ignored;
    return std::filesystem::current_path(ignored).string();
}

bool is_pod_name(const std::string &name) {
    return name.size() > 4 && nocturne_ascii_iequals(name.c_str() + name.size() - 4, ".pod");
}

void collect_nested_pods(const std::filesystem::path &top, std::vector<WatcomNestedPod> *pods) {
    std::error_code ignored;
    std::filesystem::recursive_directory_iterator it(top, ignored), end;
    if (ignored)
        return;
    std::vector<std::string> own;
    for (; it != end; it.increment(ignored)) {
        const std::string name = it->path().filename().string();
        const bool is_dir = it->is_directory(ignored);
        if (it.depth() == 0 && !is_dir) {
            own.push_back(name);
            continue;
        }
        if (is_dir) {
            if (name[0] == '.' || it->is_symlink(ignored) || it.depth() >= kWatcomNestedPodDepth)
                it.disable_recursion_pending();
            continue;
        }
        if (!is_pod_name(name))
            continue;
        std::string relative = it->path().lexically_relative(top).generic_string();
        pods->push_back({name, relative});
    }
    std::sort(pods->begin(), pods->end(), [](const WatcomNestedPod &a, const WatcomNestedPod &b) {
        return a.relative < b.relative;
    });
    // The first of each name, and none the data directory has itself.
    std::vector<WatcomNestedPod> kept;
    for (const WatcomNestedPod &pod : *pods) {
        const auto same = [&pod](const std::string &name) {
            return nocturne_ascii_iequals(name.c_str(), pod.name.c_str());
        };
        const bool shadowed =
            std::any_of(own.begin(), own.end(), same) ||
            std::any_of(kept.begin(), kept.end(),
                        [&same](const WatcomNestedPod &other) { return same(other.name); });
        if (!shadowed)
            kept.push_back(pod);
    }
    *pods = kept;
}

struct NestedPodIndex {
    std::mutex lock;
    bool built = false;
    unsigned generation = 0;
    std::string top;
    std::vector<WatcomNestedPod> pods;
};

NestedPodIndex &nested_pod_index() {
    static NestedPodIndex index;
    return index;
}

std::vector<WatcomNestedPod> nested_pods() {
    NestedPodIndex &index = nested_pod_index();
    std::lock_guard<std::mutex> guard(index.lock);
    const std::string top = data_directory();
    if (!index.built || index.generation != watcom_path_roots_generation() || index.top != top) {
        index.pods.clear();
        collect_nested_pods(std::filesystem::path(top), &index.pods);
        index.built = true;
        index.generation = watcom_path_roots_generation();
        index.top = top;
    }
    return index.pods;
}

// A bare .pod name the data directory does not have, from a subfolder that does.
std::string nested_pod(const std::string &relative, const std::string &resolved) {
    if (relative.find('/') != std::string::npos || !is_pod_name(relative) || exists(resolved))
        return resolved;
    for (const WatcomNestedPod &pod : nested_pods()) {
        if (nocturne_ascii_iequals(pod.name.c_str(), relative.c_str())) {
            const WatcomPathRoots &r = roots();
            return r.data.empty() ? pod.relative : r.data + "/" + pod.relative;
        }
    }
    return resolved;
}

std::string resolve(const char *path, WatcomPathUse use) {
    const std::string relative = slashed(path);
    const WatcomPathRoots &r = roots();
    if (is_absolute(relative))
        return resolve_case_insensitive(relative);
    if (r.data.empty() && r.user.empty()) {
        const std::string resolved = resolve_case_insensitive(relative);
        return use == WatcomPathUse::Read ? nested_pod(relative, resolved) : resolved;
    }
    if (!r.user.empty()) {
        if (use == WatcomPathUse::Write)
            return for_writing(relative);
        const std::string own = under(r.user, relative);
        if (exists(own))
            return own;
    }
    const std::string shipped =
        r.data.empty() ? resolve_case_insensitive(relative) : under(r.data, relative);
    return use == WatcomPathUse::Read ? nested_pod(relative, shipped) : shipped;
}

// What each read found, for asking again without the walk: the game opens the
// same files over and over, and every resolution is a few filesystem calls.
// Only answers that found a file are kept, so one that appears later is still
// found; only absolute ones, so a change of working directory cannot make one
// wrong (the roots are absolute, so that is every read under them). A write
// could change any answer, so it forgets them all, as new roots do. A file
// changed behind the game's back is not noticed until then.
struct ReadCache {
    std::mutex lock;
    unsigned generation = 0;
    std::unordered_map<std::string, std::string> found;
};

const size_t kReadCacheLimit = 1024;

ReadCache &read_cache() {
    static ReadCache cache;
    return cache;
}

} // namespace

std::string watcom_resolve_fs_path(const char *path, WatcomPathUse use) {
    if (path == nullptr)
        return std::string();
    ReadCache &cache = read_cache();
    std::lock_guard<std::mutex> guard(cache.lock);
    if (use == WatcomPathUse::Write || cache.generation != watcom_path_roots_generation()) {
        cache.found.clear();
        cache.generation = watcom_path_roots_generation();
    }
    if (use == WatcomPathUse::Write)
        return resolve(path, use);

    const std::string key(path);
    const auto hit = cache.found.find(key);
    if (hit != cache.found.end())
        return hit->second;
    std::string resolved = resolve(path, use);
    if (is_absolute(resolved) && exists(resolved)) {
        if (cache.found.size() >= kReadCacheLimit)
            cache.found.clear();
        cache.found.emplace(key, resolved);
    }
    return resolved;
}

std::vector<WatcomNestedPod> watcom_nested_pods() {
    return nested_pods();
}

std::vector<WatcomNestedPod> watcom_nested_pods_in(const std::string &top) {
    std::vector<WatcomNestedPod> pods;
    collect_nested_pods(std::filesystem::path(top), &pods);
    return pods;
}

std::vector<std::string> watcom_resolve_fs_dirs(const char *directory) {
    const std::string relative = slashed(directory == nullptr ? "" : directory);
    const WatcomPathRoots &r = roots();
    if (is_absolute(relative) || (r.data.empty() && r.user.empty())) {
        return {resolve_case_insensitive(relative)};
    }
    std::vector<std::string> dirs;
    if (!r.user.empty())
        dirs.push_back(under(r.user, relative));
    dirs.push_back(r.data.empty() ? resolve_case_insensitive(relative) : under(r.data, relative));
    return dirs;
}
