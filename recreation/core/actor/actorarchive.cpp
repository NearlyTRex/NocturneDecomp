#include "core/actor/actorarchive.h"

namespace nocturne::core {

CActorArchive::CActorArchive(common::CTextScanner &scanner) : scanner_(scanner) {}

common::CTextScanner &CActorArchive::getScanner() const {
    return scanner_;
}

} // namespace nocturne::core
