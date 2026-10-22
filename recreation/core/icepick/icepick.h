#pragma once

#include "common/fwd.h"
#include "core/fwd.h"
#include "core/hero/hero.h"

#include <memory>

namespace nocturne::core {

// The hero Ice Pick. The virtual functions not ported yet quit when called.
class CIcePick : public CHero {
public:
    static const CDemonActorType kType;

    CIcePick();
    ~CIcePick() override;
    CIcePick(const CIcePick &) = delete;
    CIcePick &operator=(const CIcePick &) = delete;
    CIcePick(CIcePick &&) = delete;
    CIcePick &operator=(CIcePick &&) = delete;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
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
