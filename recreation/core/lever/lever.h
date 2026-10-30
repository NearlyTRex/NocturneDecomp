#pragma once

#include "common/fwd.h"
#include "core/actor/demonactor.h"
#include "core/dmodel/keyframedmodelinstance.h"
#include "core/event/rulelist.h"
#include "core/fwd.h"
#include "core/lever/levertype.h"

#include <memory>
#include <string>

namespace nocturne::core {

// A lever in the set that raises events as it is pulled on and off. The virtual functions not
// ported yet quit when called.
class CLever : public CDemonActor {
public:
    static const CDemonActorType kType;

    CLever();
    ~CLever() override;
    CLever(const CLever &) = delete;
    CLever &operator=(const CLever &) = delete;
    CLever(CLever &&) = delete;
    CLever &operator=(CLever &&) = delete;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
    void archive(CActorArchive &actor_archive) override;

    void setState(float new_state);
    void activate();
    common::CVector3f *getHandlePosition(common::CVector3f *out_position);
    int isAccessibleFrom(common::CVector3f *world_position);

    [[nodiscard]] const CKeyFramedModelInstance &getModel() const;
    [[nodiscard]] ELeverType getLeverType() const;
    // The events the lever raises as it goes on and off.
    [[nodiscard]] const std::string &getOnEvent() const;
    [[nodiscard]] const std::string &getOffEvent() const;
    [[nodiscard]] const std::string &getSound() const;
    // How far on the lever is.
    [[nodiscard]] float getParam() const;
    // Whether the lever springs back off once let go.
    [[nodiscard]] bool isMomentary() const;
    // The lever that moves with this one, if any.
    [[nodiscard]] CDemonActor *getLinkedLever() const;
    // The model's vertex at the handle's end.
    [[nodiscard]] int getEndVertexIndex() const;
    [[nodiscard]] bool isMoving() const;
    // How far on the lever is moving to.
    [[nodiscard]] float getMoveToPct() const;
    [[nodiscard]] const CRuleList &getRules() const;
    [[nodiscard]] ELeverOpenSides getAllowedSides() const;

private:
    static constexpr int kDefaultEndVertexIndex = 23;

    static std::unique_ptr<CDemonActor> create();

    CKeyFramedModelInstance model_;
    ELeverType lever_type_ = ELeverType::kGround;
    std::string on_event_;
    std::string off_event_;
    std::string sound_;
    float param_ = 0.0F;
    bool momentary_ = true;
    CDemonActor *linked_lever_ = nullptr;
    int end_vertex_index_ = kDefaultEndVertexIndex;
    bool moving_ = false;
    float move_to_pct_ = 0.0F;
    CRuleList rules_;
    ELeverOpenSides allowed_sides_ = ELeverOpenSides::kBoth;
    bool collision_enabled_ = true;
};

} // namespace nocturne::core
