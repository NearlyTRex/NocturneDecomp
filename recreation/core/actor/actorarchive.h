#pragma once

#include "common/fwd.h"

namespace nocturne::core {

// What an actor's archive() reads its fields from: the mission or save file it is loaded from,
// which the original kept in actor.cpp's globals while an actor was read.
class CActorArchive {
public:
    explicit CActorArchive(common::CTextScanner &scanner);

    [[nodiscard]] common::CTextScanner &getScanner() const;

private:
    common::CTextScanner &scanner_;
};

} // namespace nocturne::core
