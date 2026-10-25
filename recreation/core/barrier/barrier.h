#pragma once

#include "core/actor/demonactor.h"
#include "core/fwd.h"

namespace nocturne::core {

class CBarrier : public CDemonActor {
public:
    static const CDemonActorType kType;

    CBarrier();
    ~CBarrier() override;

    void setup() override;
    int renderTransparent() override;
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    void updateCollisionData() override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
    void archive(CActorArchive &actor_archive) override;
};

} // namespace nocturne::core
