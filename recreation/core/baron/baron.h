#pragma once

#include "core/fwd.h"
#include "core/hero/hero.h"

#include <memory>
#include <string>

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

    // The events that summon the Baron and send the Baron away; "none" for no event.
    [[nodiscard]] const std::string &getSummonEvent() const;
    [[nodiscard]] const std::string &getGoAwayEvent() const;
    [[nodiscard]] bool isSummoned() const;

private:
    static std::unique_ptr<CDemonActor> create();

    std::string summon_event_ = "none";
    std::string go_away_event_ = "none";
    bool summoned_ = false;
};

} // namespace nocturne::core
