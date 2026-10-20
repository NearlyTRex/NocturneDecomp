#pragma once

#include "core/fwd.h"
#include "core/hero/hero.h"

#include <memory>

namespace nocturne::core {

// The hero Scat. The virtual functions not ported yet quit when called.
class CScat : public CHero {
public:
    static const CDemonActorType kType;

    CScat();
    ~CScat() override;
    CScat(const CScat &) = delete;
    CScat &operator=(const CScat &) = delete;
    CScat(CScat &&) = delete;
    CScat &operator=(CScat &&) = delete;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
    void archive(CActorArchive &actor_archive) override;
    void processDamage(SDamageInfo *damage_info) override;
    void createDefaultWeapon() override;
    void drawWeapon(int drawn) override;
    int isWeaponDrawn() override;

private:
    static std::unique_ptr<CDemonActor> create();
};

} // namespace nocturne::core
