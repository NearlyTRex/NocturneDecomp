#pragma once

#include "common/fwd.h"
#include "core/enemy/bipedbones.h"
#include "core/enemy/enemy.h"
#include "core/fwd.h"

#include <array>
#include <cstddef>
#include <memory>
#include <span>
#include <string>

namespace nocturne::core {

// An enemy that shoots, taunts and drives, keeping to a post or holding its place until a
// condition lets it go. The virtual functions not ported yet quit when called.
class CMobster : public CEnemy {
public:
    static const CDemonActorType kType;

    explicit CMobster(CActor &classes);
    ~CMobster() override;
    CMobster(const CMobster &) = delete;
    CMobster &operator=(const CMobster &) = delete;
    CMobster(CMobster &&) = delete;
    CMobster &operator=(CMobster &&) = delete;

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

    // Counts its idle turns while it looks for a weapon.
    [[nodiscard]] int getIdleCounter() const;
    // The letter its taunts' sounds are named with.
    [[nodiscard]] char getVoice() const;
    // Whether it is at its post, and the post.
    [[nodiscard]] int getPostMode() const;
    [[nodiscard]] CDemonActor *getPost() const;
    // The car it rides, and the side it rides on.
    [[nodiscard]] CDemonActor *getVehicle() const;
    [[nodiscard]] int getSideOfCar() const;
    // Whether it holds its place until the condition holds.
    [[nodiscard]] bool isHoldingPosition() const;
    [[nodiscard]] const std::string &getHoldPositionCondition() const;
    [[nodiscard]] const SBipedBones &getBones() const;
    // The model's parts, each fatal when it hasn't it: the arms, upper then lower, left then
    // right, the legs, thigh then shin, right then left, the waist, torso and head.
    [[nodiscard]] std::span<const int> getParts() const;

    static constexpr std::size_t kPartCount = 11;

private:
    static std::unique_ptr<CDemonActor> create(CActor &classes);

    SBipedBones bones_;
    std::array<int, kPartCount> parts_{};

    int idle_counter_;
    char voice_;
    int post_mode_ = 0;
    CDemonActor *post_ = nullptr;
    CDemonActor *vehicle_ = nullptr;
    int side_of_car_ = 0;
    bool holding_position_ = false;
    std::string hold_position_condition_ = "none";
};

} // namespace nocturne::core
