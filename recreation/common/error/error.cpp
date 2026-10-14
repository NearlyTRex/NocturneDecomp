#include "common/error/error.h"

#include "common/error/fatalerror.h"
#include "common/text/path.h"

#include <cerrno>
#include <string>

namespace nocturne::common {

// The original's core/main.c; it lives here because every module reports through it. The throw
// unwinds through the sound and graphics owners, which tear down as the original did by hand,
// and main writes gtfo.txt and shows the box.
// nocedit 0x00506f10
void displayErrorAndQuit(std::string_view message, std::source_location where) {
    throw CFatalError(std::string(message), std::string(pathLeaf(where.file_name())),
                      static_cast<int>(where.line()), errno);
}

} // namespace nocturne::common
