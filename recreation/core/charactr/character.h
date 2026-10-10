#pragma once

#include "common/fwd.h"
#include "core/actor/demonactor.h"
#include "core/fwd.h"

#include <cstdint>

namespace nocturne::core {

class CCharacter : public CDemonActor {
public:
    CCharacter();
    ~CCharacter() override;

    void setup() override;
    int renderOpaque() override;
    int renderTransparent() override;
    void renderBackground(int layer_flag) override;
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    int canLookAt() override;
    void setPositionAndOrientation(common::CVector3f *new_position,
                                   common::CVector3f *new_orientation) override;
    void drop(CDemonActor *carrier, common::CVector3f *drop_position) override;
    void spawnFlies(int fly_count, float spawn_radius) override;
    void calculateChecksum(std::uint32_t *out_crc) override;
    void archive() override;
    virtual void applyDamage(int damage_type, float damage_amount);
    virtual void kill(int damage_type, common::CVector3f *damage_direction, float impact_force);
    virtual int isInvulnerable();
    virtual int isGrabbable(CDemonActor *grabber);
    virtual int canBeGrabbed(CDemonActor *grabber, int grab_type);
    virtual int getGrabbed(CDemonActor *grabber, int grab_type);
    virtual void releaseFromGrab();
    virtual CDemonActor *getGrabber();
    virtual void releaseVictim();
    virtual void onVictimLost(CDemonActor *lost_actor);
    virtual int checkCylinderCollisionWorld(common::CVector3f *world_point, float tolerance,
                                            SDamageInfo *damage_info);
    virtual int testDamageLine(common::CVector3f *start, common::CVector3f *end,
                               SDamageInfo *damage_info, common::CVector3f *out_hit);
    virtual void processDamage(SDamageInfo *damage_info);
    virtual EDeathState getDeathState();
    virtual int attractActorToward(CDemonActor *actor, common::CVector3f *target_local_point);
    virtual int canBeAttracted(common::CVector3f *out_attract_position);
    virtual int getPartDominantBone(int part_index);
    virtual void setDoorTarget(CDoor *door_target);
    virtual void clearDoorTarget();
    virtual int hasDoorTarget();
    virtual void dropCarriedObject(int hand_index, common::CVector3f *drop_direction);
    virtual common::CMatrix3x4f *getCarryObjToBodyXForm(int hand_index,
                                                        common::CMatrix3x4f *out_matrix);
    virtual void setWalkTarget(CDemonActor *target, float min_distance, float max_distance);
    virtual void setWalkTargetImmediate(CDemonActor *target);
    virtual void setWalkTimeout(float timeout);
    virtual int isWalkComplete();

    int walkToPoint(common::CVector3f *target_pos, CPathMap *path_map, common::CVector3f *direction,
                    float min_distance, float max_distance);
    void turnTowardPoint(common::CVector3f *target);
    void moveAndCollide(common::CVector3f *velocity);
    int isOnGround();
    void preProcess();
    int processCharacter(float delta_time);
    void renderCharacter();
    void renderAttachedModels();
    void igniteBone(common::CVector3f *position, int fire_type, int flame_type, float flame_scale,
                    int include_hero);
    void processDamageDecals();
    void spawnGoreAtBone(int part_index, int bone_index, float chance);
    void spawnBloodAtBone(int part_index, int bone_index, float chance);
    void shatter();
    void dismember(common::CVector3f *impact_point, float impact_force, int render_in_background);
    void detachBodyPart(int part_index, common::CVector3f *initial_velocity,
                        int render_in_background);
    void dismemberPartInternal(CBodyPart *body_part, int part_index, int render_in_background);
    void followActor(CDemonActor *actor, float min_dist, float max_dist, int *out_state);
    int processWalking(float delta_time);
    void pickupObjectNow(int hand_index, CDemonActor *object, float blend_time);
    void dropAllCarriedObjects();
    void updateCarriedObjects(float delta_time);
    int isCarryingAnything();
    int initGesture(char *motion_name);
    void computeBoundingBox();
    void findSomethingToLookAt(float delta_time, int disable_search);
    void setLookAtTarget(CDemonActor *target);
    void setOrientation(common::UOrientationVector *orientation);
    void applyGestureLookAt(float delta_time);
    int updateWanderToWaypoint(float delta_time, char *pattern);
    int advanceLayerAction(float *remaining_time, int target_bone_index);
    void addLayerAction(int from_bone_index, int to_bone_index, char *motion_name, int direction);
    float getLayerActionBlendWeight(int state_index);
    void chooseNextLayerAction(int layer_action_index);
    void processSmoking(float delta_time);
    int processMotion(int bone_index);
    int moveOutOfHeroWay(float delta_time);
    void playSoundWithCooldown(char *sound_name);
};

} // namespace nocturne::core
