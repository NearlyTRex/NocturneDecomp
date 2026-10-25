#pragma once

#include "core/actor/demonactor.h"
#include "core/fwd.h"

namespace nocturne::core {

class CTeleportDest : public CDemonActor {
public:
    static const CDemonActorType kType;

    CTeleportDest();
    ~CTeleportDest() override;

    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
};

} // namespace nocturne::core
