#pragma once

#include "core/actor/demonactor.h"
#include "core/actor/groundtype.h"
#include "core/dmodel/keyframedmodelinstance.h"
#include "core/fwd.h"

#include <memory>

namespace nocturne::core {

// A model placed in the set as scenery. The virtual functions not ported yet quit when called.
class CBackgroundActor : public CDemonActor {
public:
    static const CDemonActorType kType;

    CBackgroundActor();
    ~CBackgroundActor() override;
    CBackgroundActor(const CBackgroundActor &) = delete;
    CBackgroundActor &operator=(const CBackgroundActor &) = delete;
    CBackgroundActor(CBackgroundActor &&) = delete;
    CBackgroundActor &operator=(CBackgroundActor &&) = delete;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    void renderBackground(int layer_flag) override;
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    EGroundType getGroundType() override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
    void archive(CActorArchive &actor_archive) override;

    [[nodiscard]] const CKeyFramedModelInstance &getModel() const;
    [[nodiscard]] bool isCollidedWith() const;

private:
    static std::unique_ptr<CDemonActor> create();

    CKeyFramedModelInstance model_;
    bool collide_with_me_ = false;
    EGroundType ground_type_ = EGroundType::kDefault;
};

} // namespace nocturne::core
