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

// An enemy that shambles after the heroes, picks up what it can throw and may rise from a grave.
// The virtual functions not ported yet quit when called.
class CZombie : public CEnemy {
public:
    static const CDemonActorType kType;

    explicit CZombie(CActor &classes);
    ~CZombie() override;
    CZombie(const CZombie &) = delete;
    CZombie &operator=(const CZombie &) = delete;
    CZombie(CZombie &&) = delete;
    CZombie &operator=(CZombie &&) = delete;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    int renderTransparent() override;
    int getTargetPoints(common::CVector3f *out_points_array) override;
    int shouldIgnoreForTargeting() override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
    void archive(CActorArchive &actor_archive) override;
    int isGrabbable(CDemonActor *grabber) override;
    int canBeGrabbed(CDemonActor *grabber, int grab_type) override;
    int getGrabbed(CDemonActor *grabber, int grab_type) override;
    void processDamage(SDamageInfo *damage_info) override;
    int canBeAttracted(common::CVector3f *out_attract_position) override;
    common::CMatrix3x4f *getCarryObjToBodyXForm(int hand_index,
                                                common::CMatrix3x4f *out_matrix) override;

    // How far it reaches for things to pick up, as a fraction of the most.
    [[nodiscard]] float getPickupRangeFactor() const;
    // Which things it picks up first.
    [[nodiscard]] int getPickupSeed() const;
    // The condition under which it rises from its grave.
    [[nodiscard]] const std::string &getRiseFromGraveCondition() const;
    [[nodiscard]] CDemonActor *getGraveActor() const;
    // A miner, in the mine.
    [[nodiscard]] bool isMinerZombie() const;
    [[nodiscard]] bool alwaysChasesFast() const;
    [[nodiscard]] const SBipedBones &getBones() const;
    // The model's parts, each fatal when it hasn't it but the right forearm and waist: the arms,
    // upper then lower, left then right, the waist, torso and head. -1 for no waist.
    [[nodiscard]] std::span<const int> getParts() const;
    // How long, from 0 to 1 second, it waits before rising.
    [[nodiscard]] float getRiseDelay() const;

    static constexpr std::size_t kPartCount = 7;
    // Where a model without a right forearm keeps one, hidden.
    static constexpr int kSpareForearmPart = 29;

private:
    static std::unique_ptr<CDemonActor> create(CActor &classes);

    CActor &classes_;
    SBipedBones bones_;
    std::array<int, kPartCount> parts_{};
    float rise_delay_ = 0.0F;
    float pickup_range_factor_;
    int pickup_seed_;
    std::string rise_from_grave_condition_ = "true";
    CDemonActor *grave_actor_ = nullptr;
    bool miner_zombie_ = false;
    bool always_chase_fast_ = false;
};

} // namespace nocturne::core
