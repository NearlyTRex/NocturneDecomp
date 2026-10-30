#pragma once

#include "common/fwd.h"
#include "core/enemy/enemy.h"
#include "core/fwd.h"

#include <memory>

namespace nocturne::core {

// An enemy that keeps to the dark and feeds on the dead, rising again until its lives run out.
// The virtual functions not ported yet quit when called.
class CGhoul : public CEnemy {
public:
    static const CDemonActorType kType;

    explicit CGhoul(CActor &classes);
    ~CGhoul() override;
    CGhoul(const CGhoul &) = delete;
    CGhoul &operator=(const CGhoul &) = delete;
    CGhoul(CGhoul &&) = delete;
    CGhoul &operator=(CGhoul &&) = delete;

    void setup() override;
    void process(float delta_time) override;
    void renderBackground(int layer_flag) override;
    int getTargetPoints(common::CVector3f *out_points_array) override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
    void archive(CActorArchive &actor_archive) override;
    void processDamage(SDamageInfo *damage_info) override;
    int canBeAttracted(common::CVector3f *out_attract_position) override;
    common::CVector3f *getTargetPoint(common::CVector3f *out_point) override;

    // In 16.16 seconds: until it next burps, and until it next spasms.
    [[nodiscard]] int getBurpTimer() const;
    [[nodiscard]] int getSpasmTimer() const;
    // How many times it rises again.
    [[nodiscard]] int getLivesLeft() const;
    [[nodiscard]] int getSpasmCount() const;
    // In 16.16 seconds: how long it takes to rise.
    [[nodiscard]] int getAriseTimer() const;

private:
    static constexpr int kDefaultSpasmCount = 2;
    static constexpr int kDefaultAriseTimer = 0xa0000;

    static std::unique_ptr<CDemonActor> create(CActor &classes);

    int burp_timer_;
    int spasm_timer_;
    int lives_left_;
    int spasm_count_ = kDefaultSpasmCount;
    int arise_timer_ = kDefaultAriseTimer;
};

} // namespace nocturne::core
