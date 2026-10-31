#pragma once

#include "common/fwd.h"
#include "core/enemy/enemy.h"
#include "core/fwd.h"
#include "core/werewolf/werewolftype.h"

#include <memory>

namespace nocturne::core {

// The bones of a werewolf's skeleton its own code poses and hits.
struct SWerewolfBones {
    int spine3 = 0;
    int left_finger = 0;
    int right_finger = 0;
    int jaw = 0;
    int head = 0;
};

// An enemy that runs the heroes down, howling, its eyes alight; one may be chained, and one leads
// the pack. The virtual functions not ported yet quit when called.
class CWerewolf : public CEnemy {
public:
    static const CDemonActorType kType;

    explicit CWerewolf(CActor &classes);
    ~CWerewolf() override;
    CWerewolf(const CWerewolf &) = delete;
    CWerewolf &operator=(const CWerewolf &) = delete;
    CWerewolf(CWerewolf &&) = delete;
    CWerewolf &operator=(CWerewolf &&) = delete;

    void setup() override;
    void process(float delta_time) override;
    int renderTransparent() override;
    int getTargetPoints(common::CVector3f *out_points_array) override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
    void archive(CActorArchive &actor_archive) override;
    void processDamage(SDamageInfo *damage_info) override;
    EDeathState getDeathState() override;
    void setWalkTarget(CDemonActor *target, float min_distance, float max_distance) override;

    [[nodiscard]] EWerewolfType getWerewolfType() const;
    [[nodiscard]] bool areEyesLit() const;
    // What it is chained to, if anything, and how far the chain lets it go.
    [[nodiscard]] CDemonActor *getChainAnchor() const;
    [[nodiscard]] float getChainLength() const;
    // The alpha's step in its fight, and how long until the next.
    [[nodiscard]] int getPhase() const;
    [[nodiscard]] float getPhaseTimer() const;
    // The pack's two leaders.
    [[nodiscard]] CDemonActor *getFirstAlpha() const;
    [[nodiscard]] CDemonActor *getSecondAlpha() const;
    [[nodiscard]] const SWerewolfBones &getBones() const;
    // Where its eyes' glow starts, from 0 to 1.
    [[nodiscard]] float getEyeGlowPhase() const;
    // Seconds, from 10 to 30, until it may howl.
    [[nodiscard]] float getHowlCooldown() const;

private:
    static constexpr float kDefaultChainLength = 5.0F;
    static constexpr float kDefaultPhaseTimer = 10.0F;

    static std::unique_ptr<CDemonActor> create(CActor &classes);

    CActor &classes_;
    SWerewolfBones bones_;
    float eye_glow_phase_ = 0.0F;
    float howl_cooldown_ = 0.0F;

    EWerewolfType werewolf_type_ = EWerewolfType::kTrain;
    bool eyes_lit_ = true;
    CDemonActor *chain_anchor_ = nullptr;
    float chain_length_ = kDefaultChainLength;
    int phase_ = 0;
    float phase_timer_ = kDefaultPhaseTimer;
    CDemonActor *first_alpha_ = nullptr;
    CDemonActor *second_alpha_ = nullptr;
};

} // namespace nocturne::core
