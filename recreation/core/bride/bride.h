#pragma once

#include "common/fwd.h"
#include "core/enemy/enemy.h"
#include "core/fwd.h"

namespace nocturne::core {

class CBride : public CEnemy {
public:
    CBride();
    ~CBride() override;

    void setup() override;
    void process(float delta_time) override;
    int getTargetPoints(common::CVector3f *out_points_array) override;
    CDemonActorType *getActorType() override;
    void archive() override;
    void processDamage(SDamageInfo *damage_info) override;
    common::CVector3f *getTargetPoint(common::CVector3f *out_point) override;
};

} // namespace nocturne::core
