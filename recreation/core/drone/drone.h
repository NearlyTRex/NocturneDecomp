#pragma once

#include "common/fwd.h"
#include "core/enemy/enemy.h"
#include "core/fwd.h"

namespace nocturne::core {

class CDrone : public CEnemy {
public:
    CDrone();
    ~CDrone() override;

    void setup() override;
    void process(float delta_time) override;
    int getTargetPoints(common::CVector3f *out_points_array) override;
    CDemonActorType *getActorType() override;
    void archive() override;
    void processDamage(SDamageInfo *damage_info) override;
};

} // namespace nocturne::core
