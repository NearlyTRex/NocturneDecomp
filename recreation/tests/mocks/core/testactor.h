#pragma once

#include "core/actor/demonactor.h"
#include "core/actor/demonactortype.h"

#include <functional>
#include <utility>

namespace nocturne::core {

// An actor of whatever class record the test gives it, whose archive() does what the test says.
class CTestActor : public CDemonActor {
public:
    explicit CTestActor(const CDemonActorType &type) : type_(type) {}

    [[nodiscard]] const CDemonActorType &getActorType() const override {
        return type_;
    }

    void archive(CActorArchive &actor_archive) override {
        if (on_archive_) {
            on_archive_(actor_archive);
        }
    }

    void onArchive(std::function<void(CActorArchive &)> on_archive) {
        on_archive_ = std::move(on_archive);
    }

private:
    const CDemonActorType &type_;
    std::function<void(CActorArchive &)> on_archive_;
};

// A base class, one derived from it, one derived from that, and an unrelated one.
inline constexpr CDemonActorType kTestBaseType = makeActorType("CTestBase", nullptr, nullptr, 1);
inline constexpr CDemonActorType kTestMiddleType =
    makeActorType("CTestMiddle", &kTestBaseType, nullptr, 1);
inline constexpr CDemonActorType kTestLeafType =
    makeActorType("CTestLeaf", &kTestMiddleType, nullptr, 1);
inline constexpr CDemonActorType kTestOtherType = makeActorType("CTestOther", nullptr, nullptr, 1);

} // namespace nocturne::core
