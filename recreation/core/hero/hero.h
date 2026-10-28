#pragma once

#include "common/fwd.h"
#include "core/charactr/character.h"
#include "core/fwd.h"
#include "core/hero/gasmaskstate.h"
#include "core/hero/herocontroltype.h"
#include "core/hero/herotask.h"
#include "core/inv/inventory.h"

#include <cstdint>

namespace nocturne::core {

// A character the player, or the game for the player's partner, controls. The virtual functions
// not ported yet quit when called.
class CHero : public CCharacter {
public:
    // Abstract: missions can't hold one.
    static const CDemonActorType kType;

    CHero();
    ~CHero() override;
    CHero(const CHero &) = delete;
    CHero &operator=(const CHero &) = delete;
    CHero(CHero &&) = delete;
    CHero &operator=(CHero &&) = delete;

    void setup() override;
    int canLookAt() override;
    int testCylinderCollision(SCollisionReturnInfo *collision_info, float tolerance) override;
    int testLineIntersection(common::CVector3f *line_start, common::CVector3f *line_end,
                             common::CVector3f *out_intersection_point) override;
    CPathMap *getPathMap() override;
    void archive(CActorArchive &actor_archive) override;
    void kill(int damage_type, common::CVector3f *damage_direction, float impact_force) override;
    int isInvulnerable() override;
    int isGrabbable(CDemonActor *grabber) override;
    int canBeGrabbed(CDemonActor *grabber, int grab_type) override;
    int getGrabbed(CDemonActor *grabber, int grab_type) override;
    void releaseFromGrab() override;
    virtual void createDefaultWeapon();
    virtual void drawWeapon(int drawn) = 0;
    virtual int isWeaponDrawn() = 0;
    virtual void reset();

    int tryInteract();
    int tryTalkToNearbyCharacter();
    int tryOpenNearbyDoor();
    int tryOpenDoor();
    int tryPullLever();
    int executeLeverPull();
    int tryPushNearbyBox();
    void stopPushingBox();
    int tryApproachNearbyActor();
    void stopNearbyInteraction();
    int tryUseSelectedItem();
    void executeObjectPickup(int hand_index);
    void addCarriedItemToInventory(int hand_index);
    void removeMatchingKeys(std::uint32_t key_mask);
    void setAiTask(int ai_task);
    CEnemy *closestEnemy(float *out_distance);

    [[nodiscard]] EHeroControlType getControlType() const;
    // What the hero was on the way to, as the file names it; null for nothing.
    [[nodiscard]] CDemonActor *getObjectToPickUp() const;
    [[nodiscard]] CDemonActor *getDoorToOpen() const;
    [[nodiscard]] CDemonActor *getLeverToPull() const;
    [[nodiscard]] CDemonActor *getLadderToClimb() const;
    [[nodiscard]] CDemonActor *getPushedObject() const;
    [[nodiscard]] EHeroTask getAiTask() const;
    [[nodiscard]] EGasMaskState getGasMaskState() const;
    [[nodiscard]] const CInventory &getInventory() const;

protected:
    // What the hero was on the way to, but not what it pushed, for a derived class whose older
    // files held them.
    void archiveInteractionTargets(CActorArchive &actor_archive);

private:
    CInventory inventory_;
    EHeroControlType control_type_ = EHeroControlType::kAi;
    CDemonActor *object_to_pick_up_ = nullptr;
    CDemonActor *door_to_open_ = nullptr;
    CDemonActor *lever_to_pull_ = nullptr;
    CDemonActor *ladder_to_climb_ = nullptr;
    CDemonActor *pushed_object_ = nullptr;
    EHeroTask ai_task_ = EHeroTask::kKill;
    EGasMaskState gas_mask_state_ = EGasMaskState::kAway;
};

} // namespace nocturne::core
