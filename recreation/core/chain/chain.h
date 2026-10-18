#pragma once

#include "core/actor/demonactor.h"
#include "core/fwd.h"

namespace nocturne::core {

class CChain : public CDemonActor {
public:
    CChain();
    ~CChain() override;

    void setup() override;
    void process(float delta_time) override;
    int renderTransparent() override;
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
    void archive(CActorArchive &actor_archive) override;
};

} // namespace nocturne::core
