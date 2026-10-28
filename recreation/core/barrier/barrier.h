#pragma once

#include "common/math/vector3f.h"
#include "core/actor/demonactor.h"
#include "core/fwd.h"

#include <memory>
#include <string>

namespace nocturne::core {

// An invisible box in the set that stops what moves into it. The virtual functions not ported
// yet quit when called.
class CBarrier : public CDemonActor {
public:
    static const CDemonActorType kType;

    CBarrier();
    ~CBarrier() override;
    CBarrier(const CBarrier &) = delete;
    CBarrier &operator=(const CBarrier &) = delete;
    CBarrier(CBarrier &&) = delete;
    CBarrier &operator=(CBarrier &&) = delete;

    void setup() override;
    int renderTransparent() override;
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    void updateCollisionData() override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
    void archive(CActorArchive &actor_archive) override;

    // Width, height and depth.
    [[nodiscard]] const common::CVector3f &getSize() const;
    // The classes the barrier stops; empty for every class.
    [[nodiscard]] const std::string &getEffectClassNameList() const;
    // Whether the barrier also blocks the paths characters find.
    [[nodiscard]] bool isAddedToPathGrid() const;

private:
    static constexpr common::CVector3f kDefaultSize{.x = 5.0F, .y = 5.0F, .z = 5.0F};

    static std::unique_ptr<CDemonActor> create();

    common::CVector3f size_ = kDefaultSize;
    std::string effect_class_name_list_;
    bool add_to_path_grid_ = true;
};

} // namespace nocturne::core
