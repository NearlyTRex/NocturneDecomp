#pragma once

#include "common/fwd.h"
#include "core/fwd.h"
#include "core/hero/hero.h"

#include <memory>

namespace nocturne::core {

// The hero Gabriella. The virtual functions not ported yet quit when called.
class CGabriella : public CHero {
public:
    static const CDemonActorType kType;

    CGabriella();
    ~CGabriella() override;
    CGabriella(const CGabriella &) = delete;
    CGabriella &operator=(const CGabriella &) = delete;
    CGabriella(CGabriella &&) = delete;
    CGabriella &operator=(CGabriella &&) = delete;

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

private:
    static std::unique_ptr<CDemonActor> create();
};

} // namespace nocturne::core
