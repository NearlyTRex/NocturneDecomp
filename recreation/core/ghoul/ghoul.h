#pragma once

#include "common/fwd.h"
#include "core/enemy/enemy.h"
#include "core/fwd.h"

namespace nocturne::core {

class CGhoul : public CEnemy {
public:
    static const CDemonActorType kType;

    CGhoul();
    ~CGhoul() override;

    void setup() override;
    void process(float delta_time) override;
    void renderBackground(int layer_flag) override;
    int getTargetPoints(common::CVector3f *out_points_array) override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
    void archive(CActorArchive &actor_archive) override;
    void processDamage(SDamageInfo *damage_info) override;
    int canBeAttracted(common::CVector3f *out_attract_position) override;
    common::CVector3f *getTargetPoint(common::CVector3f *out_point) override;
};

} // namespace nocturne::core
