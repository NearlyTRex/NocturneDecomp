#include "platform/pathroots.h"

#include "common/text/path.h"
#include "platform/environment.h"
#include "platform/filesystem.h"

#include <algorithm>
#include <cctype>
#include <format>
#include <utility>

namespace nocturne::platform {
namespace {

constexpr std::string_view kDataDirOption = "--data-dir";
constexpr std::string_view kUserDirOption = "--user-dir";
constexpr std::string_view kDataDirVariable = "NOCTURNE_DATA_DIR";
constexpr std::string_view kUserDirVariable = "NOCTURNE_USER_DIR";

// The value of --<name> <dir> or --<name>=<dir>; nothing when it isn't given, or has no value.
std::optional<std::string> findOption(std::span<const std::string_view> args,
                                      std::string_view name) {
    for (std::size_t i = 0; i < args.size(); ++i) {
        const std::string_view arg = args[i];
        if (!arg.starts_with(name)) {
            continue;
        }
        if (arg.size() > name.size() && arg[name.size()] == '=') {
            return std::string(arg.substr(name.size() + 1));
        }
        if (arg.size() == name.size() && i + 1 < args.size()) {
            return std::string(args[i + 1]);
        }
    }
    return std::nullopt;
}

// The first given, absolute, with '/' between its components and none at its end; "" for none.
std::string pick(std::optional<std::string> chosen, const std::optional<std::string> &fallback,
                 IFileSystem &host) {
    if (!chosen) {
        chosen = fallback;
    }
    if (!chosen || chosen->empty()) {
        return {};
    }
    std::string path = common::toPortablePath(host.getFullPath(*chosen).value_or(*chosen));
    while (path.size() > 1 && path.back() == '/') {
        path.pop_back();
    }
    return path;
}

// The directory on the first line of the folder's data_dir.txt, or "" when there is none or it
// names no directory that is there.
std::string findRememberedDataDir(IFileSystem &host, const std::string &folder) {
    if (folder.empty()) {
        return {};
    }
    const std::optional<std::string> text =
        host.readFile(common::joinPath(folder, kDataDirFileName));
    if (!text) {
        return {};
    }
    std::string named = text->substr(0, text->find('\n'));
    while (!named.empty() && std::isspace(static_cast<unsigned char>(named.back())) != 0) {
        named.pop_back();
    }
    const std::optional<SFileInfo> info = named.empty() ? std::nullopt : host.getFileInfo(named);
    return info && info->is_directory ? named : std::string();
}

bool isPod(std::string_view name) {
    std::string extension(common::pathExtension(name));
    std::ranges::transform(extension, extension.begin(), [](char c) {
        return static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
    });
    return extension == ".pod";
}

bool holdsPods(IFileSystem &host, const std::string &folder, int depth) {
    for (const SFileInfo &entry : host.findFiles(common::joinPath(folder, "*"))) {
        if (entry.is_directory) {
            if (depth < kNestedPodDepth && !entry.is_hidden && !entry.name.starts_with('.') &&
                holdsPods(host, common::joinPath(folder, entry.name), depth + 1)) {
                return true;
            }
        } else if (isPod(entry.name)) {
            return true;
        }
    }
    return false;
}

} // namespace

std::vector<std::string> SPathRoots::getFolders() const {
    if (user.empty()) {
        return data.empty() ? std::vector<std::string>{} : std::vector<std::string>{data};
    }
    return {user, data};
}

SPathRoots choosePathRoots(std::span<const std::string_view> args, IEnvironment &environment,
                           const SPathRootDefaults &defaults, IFileSystem &host) {
    SPathRoots roots;
    std::optional<std::string> user = findOption(args, kUserDirOption);
    if (!user) {
        user = environment.getVariable(kUserDirVariable);
    }
    roots.user = pick(std::move(user), defaults.user, host);
    std::optional<std::string> data = findOption(args, kDataDirOption);
    if (!data) {
        data = environment.getVariable(kDataDirVariable);
    }
    if (!data) {
        std::string remembered;
        if (!roots.user.empty()) {
            roots.data_dir_file_folder = roots.user;
            remembered = findRememberedDataDir(host, roots.user);
        } else {
            const std::string fallback = pick(std::nullopt, defaults.data, host);
            roots.data_dir_file_folder = fallback;
            remembered = findRememberedDataDir(host, fallback);
            // The folder that names the game's files keeps what the game writes.
            if (!remembered.empty()) {
                roots.user = fallback;
            }
        }
        if (!remembered.empty()) {
            data = std::move(remembered);
        }
        roots.filled_by_hand = !data && defaults.data_filled_by_hand;
    }
    roots.data = pick(std::move(data), defaults.data, host);
    // One directory given as both is the working arrangement moved, with nothing laid over it.
    if (roots.user == roots.data) {
        roots.user.clear();
    }
    if (!roots.user.empty()) {
        host.makeDirectory(roots.user);
    }
    return roots;
}

std::optional<std::string> describePathRoots(const SPathRoots &roots) {
    if (roots.data.empty() && roots.user.empty()) {
        return std::nullopt;
    }
    return std::format("data directory {}, user directory {}",
                       roots.data.empty() ? "(working directory)" : roots.data,
                       roots.user.empty() ? "(the data directory)" : roots.user);
}

bool hasGameData(IFileSystem &host, const SPathRoots &roots) {
    return holdsPods(host, roots.data, 0);
}

std::string describeMissingGameData(IFileSystem &host, const SPathRoots &roots) {
    const std::string folder =
        roots.data.empty() ? host.getFullPath(".").value_or(".") : roots.data;
    std::string message = std::format(
        "Nocturne could not find its game files in:\n\n{}\n\nCopy each game's install folder "
        "(the .POD files and the rest) there, or start Nocturne with --data-dir and the folder "
        "they are in.",
        folder);
    if (!roots.data_dir_file_folder.empty()) {
        message += std::format("\n\nOr put the path of that folder on the first line of a file "
                               "named {} in:\n\n{}",
                               kDataDirFileName, roots.data_dir_file_folder);
    }
    if (roots.filled_by_hand) {
        message += "\n\nThat folder will open now. Start Nocturne again once the files are in it.";
    }
    return message;
}

} // namespace nocturne::platform
