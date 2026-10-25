#pragma once

#include "core/boxactor/boxactor.h"
#include "core/fwd.h"

namespace nocturne::core {

class CTempleStone : public CBoxActor {
public:
    static const CDemonActorType kType;

    CTempleStone();
    ~CTempleStone() override;

    int canPickup(CDemonActor *picker) override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
    void archive(CActorArchive &actor_archive) override;
};

} // namespace nocturne::core
