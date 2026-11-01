#include "core/fire/fireeffect.h"

#include "core/dmodel/keyframedmodelinstance.h"
#include "core/dmodel/keyframedmodels.h"
#include "engine/drender/demonrenderer.h"
#include "platform/mrgltexturebasic.h"

#include <cstddef>
#include <format>
#include <span>

namespace nocturne::core {
namespace {

// The number in the first gun flame frame's name, fr46190.raw; the rest count on from it.
constexpr int kFirstGunFlameFrame = 190;

} // namespace

// The original's constructor does nothing; the models and pools are the game's statics, made
// with it.
// nocedit 0x004c6c60
CFireEffect::CFireEffect(const SFireEffectOwners &owners)
    : owners_(owners), stake_model_(owners.keyframed_models),
      fireball_model_(owners.keyframed_models), small_fireball_model_(owners.keyframed_models),
      green_fireball_model_(owners.keyframed_models), gun_flash_model_(owners.keyframed_models),
      debris_models_{CKeyFramedModelInstance(owners.keyframed_models),
                     CKeyFramedModelInstance(owners.keyframed_models),
                     CKeyFramedModelInstance(owners.keyframed_models),
                     CKeyFramedModelInstance(owners.keyframed_models),
                     CKeyFramedModelInstance(owners.keyframed_models)} {
    for (std::size_t bolt = 0; bolt < lightning_bolt_textures_.size(); ++bolt) {
        lightning_bolt_textures_.at(bolt).texture_name = std::format("BOLT{}.RAW", bolt + 1);
    }
}

// Each model is fatal when it can't be found.
// nocedit 0x004c7ab0
void CFireEffect::loadAssets() {
    owners_.renderer.captureTexture(black_hole_texture_);
    owners_.renderer.captureTexture(spark_texture_);
    owners_.renderer.captureTexture(blue_spark_texture_);
    loadStakeAssets();
    loadFireballAssets();
    loadRockAssets();
    loadDynamiteAssets();
    loadGunFlameAssets();
    loadGunFlashAssets();
    loadLightningBoltAssets();
    loadDebrisAssets();
}

// nocedit 0x004bfe00
void CFireEffect::loadStakeAssets() {
    stake_model_.setModelName("stake.kfm");
    stake_model_.preCache();
}

// nocedit 0x004c0ad0
void CFireEffect::loadFireballAssets() {
    fireball_model_.setModelName("fball.kfm");
    fireball_model_.preCache();
    small_fireball_model_.setModelName("smfball.kfm");
    small_fireball_model_.preCache();
    green_fireball_model_.setModelName("grnball.kfm");
    green_fireball_model_.preCache();
}

// nocedit 0x004c17e0
void CFireEffect::loadRockAssets() {}

// The stick of dynamite is loaded for the tosses to find.
// nocedit 0x004c41d0
void CFireEffect::loadDynamiteAssets() {
    static_cast<void>(owners_.keyframed_models.loadModel("dynamitestick.kfm"));
}

// nocedit 0x004c4d50
void CFireEffect::loadGunFlameAssets() {
    for (std::size_t frame = 0; frame < gun_flame_textures_.size(); ++frame) {
        platform::SMRGLTextureBasic &texture = gun_flame_textures_.at(frame);
        texture.texture_name =
            std::format("fr46{:03}.raw", kFirstGunFlameFrame + static_cast<int>(frame));
        owners_.renderer.captureTexture(texture);
    }
}

// nocedit 0x004c1be0
void CFireEffect::loadGunFlashAssets() {
    gun_flash_model_.setModelName("gunflash.kfm");
    gun_flash_model_.preCache();
}

// nocedit 0x004c5600
void CFireEffect::loadLightningBoltAssets() {
    for (platform::SMRGLTextureBasic &texture : lightning_bolt_textures_) {
        owners_.renderer.captureTexture(texture);
    }
}

// Every piece is named before any is found.
// nocedit 0x004c38d0
void CFireEffect::loadDebrisAssets() {
    for (std::size_t piece = 0; piece < debris_models_.size(); ++piece) {
        debris_models_.at(piece).setModelName(std::format("debris{:02}.kfm", piece + 1));
    }
    for (CKeyFramedModelInstance &piece : debris_models_) {
        piece.preCache();
    }
}

const CKeyFramedModelInstance &CFireEffect::getStakeModel() const {
    return stake_model_;
}

const CKeyFramedModelInstance &CFireEffect::getFireballModel() const {
    return fireball_model_;
}

const CKeyFramedModelInstance &CFireEffect::getSmallFireballModel() const {
    return small_fireball_model_;
}

const CKeyFramedModelInstance &CFireEffect::getGreenFireballModel() const {
    return green_fireball_model_;
}

const CKeyFramedModelInstance &CFireEffect::getGunFlashModel() const {
    return gun_flash_model_;
}

std::span<const CKeyFramedModelInstance> CFireEffect::getDebrisModels() const {
    return debris_models_;
}

const platform::SMRGLTextureBasic &CFireEffect::getBlackHoleTexture() const {
    return black_hole_texture_;
}

const platform::SMRGLTextureBasic &CFireEffect::getSparkTexture() const {
    return spark_texture_;
}

const platform::SMRGLTextureBasic &CFireEffect::getBlueSparkTexture() const {
    return blue_spark_texture_;
}

std::span<const platform::SMRGLTextureBasic> CFireEffect::getGunFlameTextures() const {
    return gun_flame_textures_;
}

std::span<const platform::SMRGLTextureBasic> CFireEffect::getLightningBoltTextures() const {
    return lightning_bolt_textures_;
}

} // namespace nocturne::core
