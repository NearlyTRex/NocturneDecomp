#pragma once

#include "core/fwd.h"
#include "core/hero/hero.h"

#include <memory>

namespace nocturne::core {

// The hero Svetlana. The virtual functions not ported yet quit when called.
class CSvetlana : public CHero {
public:
    static const CDemonActorType kType;

    CSvetlana();
    ~CSvetlana() override;
    CSvetlana(const CSvetlana &) = delete;
    CSvetlana &operator=(const CSvetlana &) = delete;
    CSvetlana(CSvetlana &&) = delete;
    CSvetlana &operator=(CSvetlana &&) = delete;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
    void archive(CActorArchive &actor_archive) override;
    int getGrabbed(CDemonActor *grabber, int grab_type) override;
    void processDamage(SDamageInfo *damage_info) override;
    void drawWeapon(int drawn) override;
    int isWeaponDrawn() override;

private:
    static std::unique_ptr<CDemonActor> create();
};

} // namespace nocturne::core
