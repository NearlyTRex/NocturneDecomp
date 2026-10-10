#pragma once

#include "core/boxactor/boxactor.h"
#include "core/fwd.h"

namespace nocturne::core {

class CTempleStone : public CBoxActor {
public:
    CTempleStone();
    ~CTempleStone() override;

    int canPickup(CDemonActor *picker) override;
    CDemonActorType *getActorType() override;
    void archive() override;
};

} // namespace nocturne::core
