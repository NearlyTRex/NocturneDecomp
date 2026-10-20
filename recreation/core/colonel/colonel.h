#pragma once

#include "core/fwd.h"
#include "core/hero/hero.h"

#include <memory>

namespace nocturne::core {

// The hero the Colonel. The virtual functions not ported yet quit when called.
class CColonel : public CHero {
public:
    static const CDemonActorType kType;

    CColonel();
    ~CColonel() override;
    CColonel(const CColonel &) = delete;
    CColonel &operator=(const CColonel &) = delete;
    CColonel(CColonel &&) = delete;
    CColonel &operator=(CColonel &&) = delete;

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
