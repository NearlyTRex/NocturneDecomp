#pragma once

#include "core/actor/demonactor.h"
#include "core/dmodel/keyframedmodelinstance.h"
#include "core/fwd.h"

#include <memory>

namespace nocturne::core {

// Something a hero carries and uses to win back hit points. The virtual functions not ported yet
// quit when called.
class CHealthItem : public CDemonActor {
public:
    static const CDemonActorType kType;

    CHealthItem();
    ~CHealthItem() override;
    CHealthItem(const CHealthItem &) = delete;
    CHealthItem &operator=(const CHealthItem &) = delete;
    CHealthItem(CHealthItem &&) = delete;
    CHealthItem &operator=(CHealthItem &&) = delete;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    void onPickup(CDemonActor *owner) override;
    int canPickup(CDemonActor *picker) override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
    void archive(CActorArchive &actor_archive) override;

    int useItem(CCharacter *user);

    [[nodiscard]] const CKeyFramedModelInstance &getModel() const;
    // How many times the item can be used.
    [[nodiscard]] int getUseCount() const;
    // The hit points each use gives back.
    [[nodiscard]] float getHpRestored() const;

private:
    static constexpr float kDefaultHpRestored = 50.0F;

    static std::unique_ptr<CDemonActor> create();

    CKeyFramedModelInstance model_;
    int use_count_ = 1;
    float hp_restored_ = kDefaultHpRestored;
};

} // namespace nocturne::core
