#pragma once

#include "core/actor/demonactor.h"
#include "core/fwd.h"

namespace nocturne::core {

class CActorDestination : public CDemonActor {
public:
    CActorDestination();
    ~CActorDestination() override;

    void setup() override;
    void process(float delta_time) override;
    int renderTransparent() override;
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
    void archive(CActorArchive &actor_archive) override;

    int acceptsActor(CDemonActor *actor);
};

} // namespace nocturne::core
