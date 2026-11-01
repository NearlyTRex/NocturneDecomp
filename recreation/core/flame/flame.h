#pragma once

#include "common/math/vector3f.h"
#include "core/actor/demonactor.h"
#include "core/fwd.h"

#include <memory>
#include <string>

namespace nocturne::core {

// A torch, candle or blue flame that events light and put out, and that can set heroes and
// enemies alight. The virtual functions not ported yet quit when called.
class CFlame : public CDemonActor {
public:
    static const CDemonActorType kType;

    explicit CFlame(CActor &classes);
    ~CFlame() override;
    CFlame(const CFlame &) = delete;
    CFlame &operator=(const CFlame &) = delete;
    CFlame(CFlame &&) = delete;
    CFlame &operator=(CFlame &&) = delete;

    void setup() override;
    void process(float delta_time) override;
    int renderTransparent() override;
    void renderBackground(int layer_flag) override;
    // From the flame's base, a tenth of a unit below it to a tenth above its height.
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
    void archive(CActorArchive &actor_archive) override;

    void hide();

    // Width, height and depth.
    [[nodiscard]] const common::CVector3f &getFlameSize() const;
    [[nodiscard]] EFlameType getFlameType() const;
    [[nodiscard]] float getGlobeScalar() const;
    // The conditions that light it and put it out; empty for none.
    [[nodiscard]] const std::string &getOnEvent() const;
    [[nodiscard]] const std::string &getOffEvent() const;
    [[nodiscard]] bool isFlameOn() const;
    [[nodiscard]] float getIntensity() const;
    [[nodiscard]] float getRandomness() const;
    [[nodiscard]] bool burnsHero() const;
    [[nodiscard]] bool burnsEnemies() const;
    [[nodiscard]] bool isVisible() const;
    // Frames of its eight-frame animation, from 0 to 8.
    [[nodiscard]] float getAnimationTime() const;
    // Whether its frames are drawn mirrored, chosen as it is set up.
    [[nodiscard]] bool isTextureFlipped() const;

private:
    static std::unique_ptr<CDemonActor> create(CActor &classes);

    CActor &classes_;
    bool texture_flipped_ = false;
    common::CVector3f flame_size_{.x = 1.0F, .y = 2.0F, .z = 1.0F};
    float animation_time_;
    EFlameType which_flame_;
    float globe_scalar_ = 1.0F;
    bool flame_state_ = true;
    std::string on_event_;
    std::string off_event_;
    float intensity_ = 0.5F;
    float randomness_ = 0.05F;
    bool burn_hero_ = false;
    bool burn_enemy_ = false;
    bool is_visible_ = true;
};

} // namespace nocturne::core
