#pragma once

#include "core/fwd.h"
#include "core/hero/hero.h"

#include <memory>

namespace nocturne::core {

// The hero Haystack. The virtual functions not ported yet quit when called.
class CHaystack : public CHero {
public:
    static const CDemonActorType kType;

    CHaystack();
    ~CHaystack() override;
    CHaystack(const CHaystack &) = delete;
    CHaystack &operator=(const CHaystack &) = delete;
    CHaystack(CHaystack &&) = delete;
    CHaystack &operator=(CHaystack &&) = delete;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
    void archive(CActorArchive &actor_archive) override;
    void processDamage(SDamageInfo *damage_info) override;
    void drawWeapon(int drawn) override;
    int isWeaponDrawn() override;

private:
    static std::unique_ptr<CDemonActor> create();
};

} // namespace nocturne::core
