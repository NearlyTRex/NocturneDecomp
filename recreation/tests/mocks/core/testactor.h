#pragma once

#include "core/actor/actorrenderowners.h"
#include "core/actor/demonactor.h"
#include "core/actor/demonactortype.h"

#include <functional>
#include <optional>
#include <utility>

namespace nocturne::core {

// An actor of whatever class record the test gives it, whose archive() and renderBackground() do
// what the test says, and which counts how often it is set up and its collision data updated.
class CTestActor : public CDemonActor {
public:
    explicit CTestActor(const CDemonActorType &type) : type_(type) {}

    [[nodiscard]] const CDemonActorType &getActorType() const override {
        return type_;
    }

    void setup() override {
        ++setup_count_;
    }

    void updateCollisionData(CDemonSet & /*set*/) override {
        ++collision_updates_;
    }

    [[nodiscard]] int getSetupCount() const {
        return setup_count_;
    }

    [[nodiscard]] int getCollisionUpdates() const {
        return collision_updates_;
    }

    void archive(CActorArchive &actor_archive) override {
        if (on_archive_) {
            on_archive_(actor_archive);
        }
    }

    void onArchive(std::function<void(CActorArchive &)> on_archive) {
        on_archive_ = std::move(on_archive);
    }

    // Without one, the actor draws its background as every actor does.
    void renderBackground(int layer_flag, const SActorRenderOwners &owners) override {
        render_owners_.emplace(owners);
        if (on_render_background_) {
            on_render_background_(layer_flag);
            return;
        }
        CDemonActor::renderBackground(layer_flag, owners);
    }

    // What its background was last drawn with; none before the first.
    [[nodiscard]] const std::optional<SActorRenderOwners> &getRenderOwners() const {
        return render_owners_;
    }

    void onRenderBackground(std::function<void(int)> on_render_background) {
        on_render_background_ = std::move(on_render_background);
    }

private:
    const CDemonActorType &type_;
    std::function<void(CActorArchive &)> on_archive_;
    std::function<void(int)> on_render_background_;
    std::optional<SActorRenderOwners> render_owners_;
    int setup_count_ = 0;
    int collision_updates_ = 0;
};

// A base class, one derived from it, one derived from that, and an unrelated one.
inline constexpr CDemonActorType kTestBaseType = makeActorType("CTestBase", nullptr, nullptr, 1);
inline constexpr CDemonActorType kTestMiddleType =
    makeActorType("CTestMiddle", &kTestBaseType, nullptr, 1);
inline constexpr CDemonActorType kTestLeafType =
    makeActorType("CTestLeaf", &kTestMiddleType, nullptr, 1);
inline constexpr CDemonActorType kTestOtherType = makeActorType("CTestOther", nullptr, nullptr, 1);

} // namespace nocturne::core
