#pragma once

#include "common/fwd.h"
#include "core/enemy/enemy.h"
#include "core/fwd.h"

namespace nocturne::core {

class CImp : public CEnemy {
public:
    static const CDemonActorType kType;

    CImp();
    ~CImp() override;

    void setup() override;
    void process(float delta_time) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    int getTargetPoints(common::CVector3f *out_points_array) override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
    void archive(CActorArchive &actor_archive) override;
    void processDamage(SDamageInfo *damage_info) override;
    int attractActorToward(CDemonActor *actor, common::CVector3f *target_local_point) override;
    common::CMatrix3x4f *getCarryObjToBodyXForm(int hand_index,
                                                common::CMatrix3x4f *out_matrix) override;
};

} // namespace nocturne::core
