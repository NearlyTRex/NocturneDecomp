#pragma once

#include "core/charactr/character.h"
#include "core/fwd.h"

#include <cstdint>

namespace nocturne::core {

class CHero : public CCharacter {
public:
    CHero();
    ~CHero() override;

    void setup() override;
    int canLookAt() override;
    int testCylinderCollision(SCollisionReturnInfo *collision_info, float tolerance) override;
    int testLineIntersection(CVector3f *line_start, CVector3f *line_end,
                             CVector3f *out_intersection_point) override;
    CPathMap *getPathMap() override;
    void archive() override;
    void kill(int damage_type, CVector3f *damage_direction, float impact_force) override;
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
};

} // namespace nocturne::core
