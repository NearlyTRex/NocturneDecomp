#pragma once

#include "core/fwd.h"
#include "core/platfrm/platform.h"

namespace nocturne::core {

class CConveyor : public CPlatform {
public:
    static const CDemonActorType kType;

    CConveyor();
    ~CConveyor() override;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    void renderBackground(int layer_flag) override;
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
    void archive(CActorArchive &actor_archive) override;
};

} // namespace nocturne::core
