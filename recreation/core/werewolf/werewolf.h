#pragma once

#include "common/fwd.h"
#include "core/enemy/enemy.h"
#include "core/fwd.h"

namespace nocturne::core {

class CWerewolf : public CEnemy {
public:
    CWerewolf();
    ~CWerewolf() override;

    void setup() override;
    void process(float delta_time) override;
    int renderTransparent() override;
    int getTargetPoints(common::CVector3f *out_points_array) override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
    void archive(CActorArchive &actor_archive) override;
    void processDamage(SDamageInfo *damage_info) override;
    EDeathState getDeathState() override;
    void setWalkTarget(CDemonActor *target, float min_distance, float max_distance) override;
};

} // namespace nocturne::core
