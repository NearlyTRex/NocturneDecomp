#include "engine/dosio/gamefolders.h"

#include <string>
#include <vector>

namespace nocturne::engine {

CGameFolders::CGameFolders(platform::IFileSystem &install) : CLayeredFileSystem(install) {}

void CGameFolders::useGame(std::string_view folder) {
    if (folder.empty()) {
        setFolders({});
        return;
    }
    setFolders({std::string(folder), std::string()});
}

} // namespace nocturne::engine
