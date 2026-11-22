#pragma once

#include "platform/layeredfilesystem.h"

#include <string_view>

namespace nocturne::engine {

// The game's files as the running game sees them: its system, save, video and other folders are
// its package's, over the install's. A relative path is read from the game's folder, then the
// install folder, and written to the game's folder, so two games keep their own settings and
// saves. Under a user directory, that is the game's folder there (the path roots' doing).
// Every path is the install's as given until a game is chosen, and while it is the install's own.
class CGameFolders final : public platform::CLayeredFileSystem {
public:
    explicit CGameFolders(platform::IFileSystem &install);

    // The game's folder, relative to the install's ("" the install's own).
    void useGame(std::string_view folder);
};

} // namespace nocturne::engine
