#pragma once

#include "core/charactr/character.h"
#include "core/fwd.h"

namespace nocturne::core {

class CAnvil : public CCharacter {
public:
    CAnvil();
    ~CAnvil() override;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    CDemonActorType *getActorType() override;
    void archive() override;
};

} // namespace nocturne::core
