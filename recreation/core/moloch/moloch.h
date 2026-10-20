#pragma once

#include "core/fwd.h"
#include "core/hero/hero.h"

#include <memory>

namespace nocturne::core {

// The hero Moloch. The virtual functions not ported yet quit when called.
class CMoloch : public CHero {
public:
    static const CDemonActorType kType;

    CMoloch();
    ~CMoloch() override;
    CMoloch(const CMoloch &) = delete;
    CMoloch &operator=(const CMoloch &) = delete;
    CMoloch(CMoloch &&) = delete;
    CMoloch &operator=(CMoloch &&) = delete;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
    void archive(CActorArchive &actor_archive) override;
    void drawWeapon(int drawn) override;
    int isWeaponDrawn() override;

private:
    static std::unique_ptr<CDemonActor> create();
};

} // namespace nocturne::core
