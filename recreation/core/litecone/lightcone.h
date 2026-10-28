#pragma once

#include "core/actor/demonactor.h"
#include "core/fwd.h"

#include <memory>
#include <string>

namespace nocturne::core {

// A visible cone of light, which events turn on and off. The virtual functions not ported yet
// quit when called.
class CLightCone : public CDemonActor {
public:
    static const CDemonActorType kType;

    CLightCone();
    ~CLightCone() override;
    CLightCone(const CLightCone &) = delete;
    CLightCone &operator=(const CLightCone &) = delete;
    CLightCone(CLightCone &&) = delete;
    CLightCone &operator=(CLightCone &&) = delete;

    void setup() override;
    void process(float delta_time) override;
    int renderTransparent() override;
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
    void archive(CActorArchive &actor_archive) override;

    // The cone's angle, in degrees.
    [[nodiscard]] float getFov() const;
    [[nodiscard]] float getFalloff() const;
    [[nodiscard]] int getState() const;
    // The events that turn the cone on and off; "none" for no event.
    [[nodiscard]] const std::string &getOnEvent() const;
    [[nodiscard]] const std::string &getOffEvent() const;

private:
    static constexpr float kDefaultFov = 56.0F;
    static constexpr float kDefaultFalloff = 6.0F;

    static std::unique_ptr<CDemonActor> create();

    float fov_ = kDefaultFov;
    float falloff_ = kDefaultFalloff;
    int state_ = 1;
    std::string on_event_ = "none";
    std::string off_event_ = "none";
};

} // namespace nocturne::core
