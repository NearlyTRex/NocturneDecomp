#pragma once

#include "core/cloth/cloth.h"
#include "core/fwd.h"
#include "core/hero/hero.h"
#include "core/hero/herobones.h"

#include <memory>

namespace nocturne::core {

// The hero Svetlana. The virtual functions not ported yet quit when called.
class CSvetlana : public CHero {
public:
    static const CDemonActorType kType;

    explicit CSvetlana(CActor &classes);
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

    [[nodiscard]] const SHeroBones &getBones() const;
    // The bones of her left blade and of her hair's ribbon.
    [[nodiscard]] int getBladeBone() const;
    [[nodiscard]] int getRibbonBone() const;
    // Her blades' parts, left then right.
    [[nodiscard]] int getLeftBladePart() const;
    [[nodiscard]] int getRightBladePart() const;
    [[nodiscard]] const CCloth &getCape() const;
    [[nodiscard]] const CCloth &getHair() const;

private:
    static std::unique_ptr<CDemonActor> create(CActor &classes);

    const CGame &game_;
    SHeroBones bones_;
    int blade_bone_ = 0;
    int ribbon_bone_ = 0;
    int left_blade_part_ = 0;
    int right_blade_part_ = 0;
    CCloth cape_;
    CCloth hair_;
};

} // namespace nocturne::core
