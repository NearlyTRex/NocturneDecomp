#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/C3DSCamera.h"
#include "types/classes/C3DSLight.h"
#include "types/classes/CActorPropertyList.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorTransformState.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonActor_vtable.h"
#include "types/classes/CGlass.h"
#include "types/classes/CLocation.h"
#include "types/classes/CMatrix3x3f.h"
#include "types/classes/CMirror.h"
#include "types/classes/COrientation.h"
#include "types/classes/CPathMap.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/classes/SMirrorReflection.h"
#include "types/funcdefs/CDemonActor_allowBulletHoles.h"
#include "types/funcdefs/CDemonActor_calculateChecksum.h"
#include "types/funcdefs/CDemonActor_canPickup.h"
#include "types/funcdefs/CDemonActor_customGetFloorHeight.h"
#include "types/funcdefs/CDemonActor_customIntersectCylinderXZ.h"
#include "types/funcdefs/CDemonActor_customRayIntersect.h"
#include "types/funcdefs/CDemonActor_cylinderGroundCheck.h"
#include "types/funcdefs/CDemonActor_drop.h"
#include "types/funcdefs/CDemonActor_dtor.h"
#include "types/funcdefs/CDemonActor_evaluateTriggerCondition.h"
#include "types/funcdefs/CDemonActor_fillAttackDamageInfo.h"
#include "types/funcdefs/CDemonActor_getActorType.h"
#include "types/funcdefs/CDemonActor_getAllowedMeleeAttackTypes.h"
#include "types/funcdefs/CDemonActor_getBlockVirtualDirectorFlag.h"
#include "types/funcdefs/CDemonActor_getBoundingBox.h"
#include "types/funcdefs/CDemonActor_getCarrier.h"
#include "types/funcdefs/CDemonActor_getGroundType.h"
#include "types/funcdefs/CDemonActor_getInteractionInfo.h"
#include "types/funcdefs/CDemonActor_getPathMap.h"
#include "types/funcdefs/CDemonActor_getPropertyList.h"
#include "types/funcdefs/CDemonActor_getSurfaceProperties.h"
#include "types/funcdefs/CDemonActor_getTargetPoints.h"
#include "types/funcdefs/CDemonActor_handleFootstep.h"
#include "types/funcdefs/CDemonActor_hasCollision.h"
#include "types/funcdefs/CDemonActor_initializeInEditor.h"
#include "types/funcdefs/CDemonActor_isActiveTarget.h"
#include "types/funcdefs/CDemonActor_onActorDeleted.h"
#include "types/funcdefs/CDemonActor_onAreaDeleted.h"
#include "types/funcdefs/CDemonActor_onDropped.h"
#include "types/funcdefs/CDemonActor_onPickup.h"
#include "types/funcdefs/CDemonActor_pickup.h"
#include "types/funcdefs/CDemonActor_playAmbientSound.h"
#include "types/funcdefs/CDemonActor_playAmbientSoundWithVolume.h"
#include "types/funcdefs/CDemonActor_playAttackHitEffects.h"
#include "types/funcdefs/CDemonActor_playSound.h"
#include "types/funcdefs/CDemonActor_playSoundWithVolume.h"
#include "types/funcdefs/CDemonActor_process.h"
#include "types/funcdefs/CDemonActor_processActionButton.h"
#include "types/funcdefs/CDemonActor_processFootstep.h"
#include "types/funcdefs/CDemonActor_processFootstepAtOffset.h"
#include "types/funcdefs/CDemonActor_processInEditor.h"
#include "types/funcdefs/CDemonActor_processMeleeHit.h"
#include "types/funcdefs/CDemonActor_renderBackground.h"
#include "types/funcdefs/CDemonActor_renderOpaque.h"
#include "types/funcdefs/CDemonActor_renderTargetPoints.h"
#include "types/funcdefs/CDemonActor_renderTransparent.h"
#include "types/funcdefs/CDemonActor_serialize.h"
#include "types/funcdefs/CDemonActor_setPositionAndOrientation.h"
#include "types/funcdefs/CDemonActor_setup.h"
#include "types/funcdefs/CDemonActor_shouldIgnoreForTargeting.h"
#include "types/funcdefs/CDemonActor_showEditorHelp.h"
#include "types/funcdefs/CDemonActor_spawnFlies.h"
#include "types/funcdefs/CDemonActor_startInteraction.h"
#include "types/funcdefs/CDemonActor_stopInteraction.h"
#include "types/funcdefs/CDemonActor_testCylinderCollision.h"
#include "types/funcdefs/CDemonActor_testLineIntersection.h"
#include "types/funcdefs/CDemonActor_updateCollisionData.h"
#include "types/funcdefs/CDemonActor_updateInteraction.h"
#include "types/funcdefs/CDemonActor_writeDependencies.h"
#include "types/structs/SClipPlane.h"
#include "types/structs/SCollisionInfo.h"
#include "types/structs/SCollisionReturnInfo.h"
#include "types/structs/SDamageInfo.h"
#include "types/structs/SInteractionInfo.h"
#include "types/structs/SInteractionState.h"
#include "types/structs/SIntersectXZCylinder.h"
#include "types/structs/SRoom.h"
#include "types/structs/SSurfaceInfo.h"
#include "types/structs/SVDBox.h"

// Structure: CDemonSet
// Ghidra size: 0x16166c (1447532 bytes)
typedef struct CDemonSet {
    int camera_count; // 0x0
    C3DSCamera cameras[250]; // 0x4
    int light_count; // 0x19a2c
    C3DSLight lights[200]; // 0x19a30
    char geometry_filename[32]; // 0x14d0f0
    CVector3f collision_result_vec1; // 0x14d110
    CVector3f collision_result_vec2; // 0x14d11c
    CVector3f collision_normal; // 0x14d128
    int ground_type; // 0x14d134
    CVector3f collision_impact_position; // 0x14d138
    struct CDemonActor* collision_actor; // 0x14d144
    int field_1364296; // 0x14d148
    int field_1364300; // 0x14d14c
    float min_ambient_value; // 0x14d150
    void* actor_list_ptr; // 0x14d154
    char actor_list_data[96]; // 0x14d158
    char field_1364408[7904]; // 0x14d1b8
    int damage_listener_count; // 0x14f098
    void** damage_listeners; // 0x14f09c
    char field_1372320[48088]; // 0x14f0a0
    int per_pixel_lighting_enabled; // 0x15ac78
    int default_master_reverb; // 0x15ac7c
    int lighting_quality_mode; // 0x15ac80
    int unk_lighting_param1; // 0x15ac84
    int unk_lighting_param2; // 0x15ac88
    int unk_lighting_param3; // 0x15ac8c
    int unk_lighting_param4; // 0x15ac90
    int use_enviro_model; // 0x15ac94
    char enviro_model_name[16]; // 0x15ac98
    int player_on_train; // 0x15aca8
    int set_file_version; // 0x15acac
    int actor_list_capacity; // 0x15acb0
    int mirror_glass_count; // 0x15acb4
    struct CGlass* mirror_glass_actors[100]; // 0x15acb8
    int last_switch_area_invalid; // 0x15ae48
    int use_world_geometry_flag; // 0x15ae4c
    char world_geometry_name[32]; // 0x15ae50
    int rendering_mode; // 0x15ae70
    CVector3i light_direction; // 0x15ae74
    int ambient_base_quick; // 0x15ae80
    int field_1420932; // 0x15ae84
    int light_scale_factor; // 0x15ae88
    int color_scale_factor; // 0x15ae8c
    int fog_scale_factor; // 0x15ae90
    float set_scale_factor; // 0x15ae94
    int field_1420952; // 0x15ae98
    int field_1420956; // 0x15ae9c
    int camera_enabled_flag; // 0x15aea0
    int selected_camera_index; // 0x15aea4
    int previous_best_camera_index; // 0x15aea8
    float previous_best_camera_timer; // 0x15aeac
    int pending_camera_index; // 0x15aeb0
    float camera_switch_cooldown; // 0x15aeb4
    int room_reverb_type; // 0x15aeb8
    int room_count; // 0x15aebc
    SRoom rooms[20]; // 0x15aec0
    int vdir_box_count; // 0x15b410
    SVDBox vdir_boxes[250]; // 0x15b414
    int default_ground_type; // 0x15f67c
    int ray_type; // 0x15f680
    float field_1439364; // 0x15f684
    float field_1439368; // 0x15f688
    float field_1439372; // 0x15f68c
    float field_1439376; // 0x15f690
    int ignore_list_count; // 0x15f694
    int collision_flag; // 0x15f698
    struct CDemonActor* ignore_list[10]; // 0x15f69c
    float raycast_distance; // 0x15f6c4
    int voxel_distance; // 0x15f6c8
    CVector3f voxel_hit_point; // 0x15f6cc
    int voxel_surface_type; // 0x15f6d8
    int field_1439452; // 0x15f6dc
    int* rendering_flags_ptr; // 0x15f6e0
    char field_1439460[8004]; // 0x15f6e4
    int has_sky; // 0x161628
    char sky_texture_name[32]; // 0x16162c
    int sky_type; // 0x16164c
    struct CMirror* active_mirror; // 0x161650
    int mirror_render_flag; // 0x161654
    int mirror_render_param1; // 0x161658
    int mirror_render_param2; // 0x16165c
    int mirror_render_param3; // 0x161660
    int mirror_render_param4; // 0x161664
    int weather_type; // 0x161668
} CDemonSet;

