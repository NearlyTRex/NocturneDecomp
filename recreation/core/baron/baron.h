#pragma once

#include "core/fwd.h"
#include "core/hero/hero.h"

#include <memory>

namespace nocturne::core {

// The hero Baron. The virtual functions not ported yet quit when called.
class CBaron : public CHero {
public:
    static const CDemonActorType kType;

    CBaron();
    ~CBaron() override;
    CBaron(const CBaron &) = delete;
    CBaron &operator=(const CBaron &) = delete;
    CBaron(CBaron &&) = delete;
    CBaron &operator=(CBaron &&) = delete;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    int renderTransparent() override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
    void archive(CActorArchive &actor_archive) override;
    int isGrabbable(CDemonActor *grabber) override;
    void processDamage(SDamageInfo *damage_info) override;
    void drawWeapon(int drawn) override;
    int isWeaponDrawn() override;

    void attachToOwner(CDemonActor *target);
    void detachFromOwner(CDemonActor *target);

private:
    static std::unique_ptr<CDemonActor> create();
};

} // namespace nocturne::core
