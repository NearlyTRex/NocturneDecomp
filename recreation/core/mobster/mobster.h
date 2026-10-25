#pragma once

#include "common/fwd.h"
#include "core/enemy/enemy.h"
#include "core/fwd.h"

namespace nocturne::core {

class CMobster : public CEnemy {
public:
    static const CDemonActorType kType;

    CMobster();
    ~CMobster() override;

    void setup() override;
    void process(float delta_time) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    int getTargetPoints(common::CVector3f *out_points_array) override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
    void archive(CActorArchive &actor_archive) override;
    void processDamage(SDamageInfo *damage_info) override;
    common::CMatrix3x4f *getCarryObjToBodyXForm(int hand_index,
                                                common::CMatrix3x4f *out_matrix) override;
    virtual void reset();
};

} // namespace nocturne::core
