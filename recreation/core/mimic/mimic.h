#pragma once

#include "core/enemy/enemy.h"
#include "core/fwd.h"

namespace nocturne::core {

class CMimic : public CEnemy {
public:
    static const CDemonActorType kType;

    CMimic();
    ~CMimic() override;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    int renderTransparent() override;
    void renderBackground(int layer_flag) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
    void archive(CActorArchive &actor_archive) override;
    EDeathState getDeathState() override;
};

} // namespace nocturne::core
