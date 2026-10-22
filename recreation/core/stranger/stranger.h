#pragma once

#include "common/fwd.h"
#include "core/fwd.h"
#include "core/hero/hero.h"

#include <memory>

namespace nocturne::core {

// The hero the Stranger. The virtual functions not ported yet quit when called.
class CStranger : public CHero {
public:
    static const CDemonActorType kType;

    CStranger();
    ~CStranger() override;
    CStranger(const CStranger &) = delete;
    CStranger &operator=(const CStranger &) = delete;
    CStranger(CStranger &&) = delete;
    CStranger &operator=(CStranger &&) = delete;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    int renderTransparent() override;
    void setPositionAndOrientation(common::CVector3f *new_position,
                                   common::CVector3f *new_orientation) override;
    void drop(CDemonActor *carrier, common::CVector3f *drop_position) override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
    void archive(CActorArchive &actor_archive) override;
    int getGrabbed(CDemonActor *grabber, int grab_type) override;
    void processDamage(SDamageInfo *damage_info) override;
    EDeathState getDeathState() override;
    void dropCarriedObject(int hand_index, common::CVector3f *drop_direction) override;
    common::CMatrix3x4f *getCarryObjToBodyXForm(int hand_index,
                                                common::CMatrix3x4f *out_matrix) override;
    void drawWeapon(int drawn) override;
    int isWeaponDrawn() override;
    void reset() override;

private:
    static std::unique_ptr<CDemonActor> create();
};

} // namespace nocturne::core
