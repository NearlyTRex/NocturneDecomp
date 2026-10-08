#pragma once

#include "core/actor/demonactor.h"
#include "core/fwd.h"

namespace nocturne::core {

class CTeleportDest : public CDemonActor {
public:
    CTeleportDest();
    ~CTeleportDest() override;

    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    CDemonActorType *getActorType() override;
};

} // namespace nocturne::core
