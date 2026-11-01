#pragma once

#include "common/fwd.h"
#include "core/cloth/cloth.h"
#include "core/fwd.h"
#include "core/hero/hero.h"
#include "core/hero/herobones.h"

#include <memory>

namespace nocturne::core {

// The bones and motions of Gabriella's skeleton her own code poses and plays.
struct SGabriellaParts {
    SHeroBones bones;
    int draw_motion = 0;
    int shoot_motion = 0;
    int crossbow_shoot_motion = 0;
};

// The hero Gabriella. The virtual functions not ported yet quit when called.
class CGabriella : public CHero {
public:
    static const CDemonActorType kType;

    explicit CGabriella(CActor &classes);
    ~CGabriella() override;
    CGabriella(const CGabriella &) = delete;
    CGabriella &operator=(const CGabriella &) = delete;
    CGabriella(CGabriella &&) = delete;
    CGabriella &operator=(CGabriella &&) = delete;

    // As a hero, then on her own model: the bones and motions she needs, each fatal when the
    // skeleton hasn't it, and nothing pushed, nor a lever or ladder to go to.
    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    int renderTransparent() override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
    void archive(CActorArchive &actor_archive) override;
    void processDamage(SDamageInfo *damage_info) override;
    common::CMatrix3x4f *getCarryObjToBodyXForm(int hand_index,
                                                common::CMatrix3x4f *out_matrix) override;
    void drawWeapon(int drawn) override;
    int isWeaponDrawn() override;

    [[nodiscard]] const SGabriellaParts &getParts() const;
    [[nodiscard]] const CCloth &getCoat() const;

private:
    static std::unique_ptr<CDemonActor> create(CActor &classes);

    SGabriellaParts parts_;
    CCloth coat_;
};

} // namespace nocturne::core
