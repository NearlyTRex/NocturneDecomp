#pragma once

#include "common/fwd.h"
#include "core/fwd.h"

#include <cstdint>
#include <cstdio>

namespace nocturne::core {

class CDemonActor {
public:
    using FactoryFunc = CDemonActor *();

    CDemonActor();
    virtual ~CDemonActor();

    virtual void setup();
    virtual void process(float delta_time);
    virtual int renderOpaque();
    virtual int renderTransparent();
    virtual void renderBackground(int layer_flag);
    virtual CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box);
    virtual std::uint32_t processFootstep(float volume);
    virtual std::uint32_t processFootstepAtOffset(common::CVector3f *location, float volume);
    virtual std::uint32_t handleFootstep(common::CVector3f *position, EGroundType ground_type,
                                         float volume);
    virtual std::uint32_t playSound(char *sound_name);
    virtual std::uint32_t playAmbientSound(char *sound_name);
    virtual std::uint32_t playSoundWithDelay(char *sound_name, float delay);
    virtual std::uint32_t playAmbientSoundWithDelay(char *sound_name, float delay);
    virtual ECollisionType getCollisionType(SCollisionInfo *collision_info);
    virtual float cylinderGroundCheck(float radius, common::CVector3f *out_normal);
    virtual EGroundType getGroundType();
    virtual int getBlockVirtualDirectorFlag();
    virtual int allowBulletHoles();
    virtual void updateCollisionData();
    virtual int getTargetPoints(common::CVector3f *out_points_array);
    virtual void renderTargetPoints();
    virtual int canLookAt();
    virtual float evaluateTriggerCondition(CDemonActor *querying_actor,
                                           common::CVector3f *query_position);
    virtual int processActionButton();
    virtual void setPositionAndOrientation(common::CVector3f *new_position,
                                           common::CVector3f *new_orientation);
    virtual void onPickup(CDemonActor *owner);
    virtual int shouldIgnoreForTargeting();
    virtual int getAllowedMeleeAttackTypes();
    virtual int processMeleeHit(int hit_type);
    virtual void fillAttackDamageInfo(int attack_flags, SDamageInfo *out_damage_info,
                                      CDemonActor *victim);
    virtual void playAttackHitEffects(int attack_flags, SDamageInfo *damage_info,
                                      CDemonActor *victim);
    virtual int canPickup(CDemonActor *picker);
    virtual void pickup(CDemonActor *carrier);
    virtual void onDropped(common::CVector3f *drop_position);
    virtual void drop(CDemonActor *carrier, common::CVector3f *drop_position);
    virtual CDemonActor *getCarrier();
    virtual void getInteractionInfo(SInteractionInfo *out_info);
    virtual int startInteraction(CDemonActor *user);
    virtual int updateInteraction(common::UOrientationVector *user_orientation,
                                  SPlayerInput *player_control);
    virtual void stopInteraction(CDemonActor *user);
    virtual void spawnFlies(int fly_count, float spawn_radius);
    virtual int testCylinderCollision(SCollisionReturnInfo *collision_info, float tolerance);
    virtual int testLineIntersection(common::CVector3f *line_start, common::CVector3f *line_end,
                                     common::CVector3f *out_intersection_point);
    virtual void onLaserHit(SLaserInfo *laser_info);
    virtual float customRayIntersect(common::CVector3f *ray_origin,
                                     common::CVector3f *ray_direction,
                                     common::CVector3f *out_normal);
    virtual void customIntersectCylinderXZ(SIntersectXZCylinder *cylinder);
    virtual int customGetFloorHeight(common::CVector3f *position, float search_radius,
                                     float *out_floor_height);
    virtual CPathMap *getPathMap();
    virtual void calculateChecksum(std::uint32_t *out_crc);
    virtual CDemonActorType *getActorType();
    virtual void archive();

    void setupRenderState();
    void restoreRenderState();
    char *getActorClassName();
    void updateOrientationMatrix();
    common::CVector3f *transformVector(common::CVector3f *output, common::CVector3f *input);
    common::CVector3f *inverseTransformVector(common::CVector3f *output_vector,
                                              common::CVector3f *input_vector);
    common::CVector3f *localToWorldPoint(common::CVector3f *output_world_point,
                                         common::CVector3f *input_local_point);
    common::CVector3f *worldToLocalPoint(common::CVector3f *output_local_point,
                                         common::CVector3f *input_world_point);
    CBoundingBox3D *getWorldBoundingBox(CBoundingBox3D *output_bbox, SCollisionInfo *collision_info,
                                        int bounding_box_type);
    float rayIntersect(common::CVector3f *ray_origin, common::CVector3f *ray_direction,
                       SActorRayHit *out_hit, SCollisionInfo *collision_info, int bbox_type,
                       CBoundingBox3D *ray_bbox);
    void doCheckForInvalidPointers(char *context_file, int context_line);
    void save(std::FILE *file_handle);
    void load(std::FILE *file_handle);
};

} // namespace nocturne::core
