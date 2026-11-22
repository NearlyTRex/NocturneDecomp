#pragma once

#include "platform/fwd.h"

#include <optional>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::platform {

// Where this run reads the install from and writes to, the nocedit shim's path roots. The data
// directory holds the install: the games' folders, loadorder.txt and the packages. The user
// directory takes every write, the INI, saves, logs, loadorder.txt and the manifests the game
// writes among them, and is looked in first on every read, so an install that can't be written
// (a console package, a sandboxed app, a shared system folder) still keeps them. Both empty is the
// working directory for everything, which is how the game has always run.
struct SPathRoots {
    std::string data;
    std::string user;
    // Where a data_dir.txt was looked for, empty when none was.
    std::string data_dir_file_folder;
    // The data directory is a folder of the platform's that people fill by hand, to be opened
    // when the game isn't in it.
    bool filled_by_hand = false;

    // The user directory over the data directory, for a CLayeredFileSystem; none when both are
    // the working directory.
    [[nodiscard]] std::vector<std::string> getFolders() const;
};

// What the build and the platform give when neither the command line nor the environment names a
// directory: the platform file's NOCTURNE_DEFAULT_DATA_DIR and NOCTURNE_DEFAULT_USER_DIR, or
// SDL_GetPrefPath's answer for NOCTURNE_USER_DIR_FROM_SDL and NOCTURNE_DATA_DIR_FROM_SDL.
struct SPathRootDefaults {
    std::optional<std::string> data;
    std::optional<std::string> user;
    // The data default is the platform's own folder, which people copy the game into.
    bool data_filled_by_hand = false;
};

inline constexpr std::string_view kDataDirFileName = "data_dir.txt";

// Each directory from the first of: --data-dir <dir> / --user-dir <dir> (or =<dir>);
// NOCTURNE_DATA_DIR / NOCTURNE_USER_DIR; for the data directory only, the directory on the first
// line of data_dir.txt in the user directory, or in the default data directory when there is no
// user directory, which then becomes the user directory, so a front end or a player can point the
// game at its files where they are (a line naming no directory is passed over); then the
// defaults. A relative directory is made absolute, the user directory is made, and one directory
// given as both leaves no user directory.
[[nodiscard]] SPathRoots choosePathRoots(std::span<const std::string_view> args,
                                         IEnvironment &environment,
                                         const SPathRootDefaults &defaults, IFileSystem &host);

// The roots as a line for stderr, or nothing when both are the working directory.
[[nodiscard]] std::optional<std::string> describePathRoots(const SPathRoots &roots);

// The folders a nested POD is looked for in, below the data directory.
inline constexpr int kNestedPodDepth = 4;

// Whether the data directory, or a folder in it up to kNestedPodDepth down (not a hidden one),
// holds a .pod in any case: the one thing every install has.
[[nodiscard]] bool hasGameData(IFileSystem &host, const SPathRoots &roots);

// What to tell the player when it doesn't: the folder looked in and the ways to point the game
// at its files.
[[nodiscard]] std::string describeMissingGameData(IFileSystem &host, const SPathRoots &roots);

} // namespace nocturne::platform
