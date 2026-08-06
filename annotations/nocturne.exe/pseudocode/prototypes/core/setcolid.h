#pragma once

// Function prototypes for core/setcolid.cpp
// Generated from Ghidra function signatures

// Original: core_setcolid.cpp_staticInit_FUN_0050eb80
// Address: 0050eb80
void __cdecl staticInit(void);

// Original: core_setcolid.cpp_rayTestQuadFloor_FUN_0050eba0
// Address: 0050eba0
int __cdecl rayTestQuadFloor(CVector3f *position,float search_radius,CVector3f *out_height,CVector3f *vertex1,CVector3f *vertex2,CVector3f *vertex3,CVector3f *vertex4,CVector3f *out_transformed_normal);

// Original: core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_0050ec80
// Address: 0050ec80
float __cdecl CDemonSet::processCollisionTypes(CDemonSet *this_ptr,CVector3f *position,float radius);

// Original: core_setcolid.cpp_CDemonSet_FUN_0050f910
// Address: 0050f910
float __cdecl CDemonSet(CDemonSet *this_ptr,CVector3f *param_2);

// Original: core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_0050fa30
// Address: 0050fa30
int __cdecl CDemonSet::testLineOcclusion(CDemonSet *this_ptr,CVector3f *start_pos,CVector3f *end_pos);

// Original: core_setcolid.cpp_CDemonSet_getVoxelHeight_FUN_0050fab0
// Address: 0050fab0
float __cdecl CDemonSet::getVoxelHeight(CDemonSet *this_ptr,CVector3f *world_position);

// Original: core_setcolid.cpp_CDemonSet_testVoxelRaycast_FUN_0050fae0
// Address: 0050fae0
int __cdecl CDemonSet::testVoxelRaycast(CDemonSet *this_ptr,CVector3f *start_pos,CVector3f *end_pos);

// Original: core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00
// Address: 0050fb00
float __cdecl CDemonSet::raycast(CDemonSet *this_ptr,CVector3f *ray_origin,CVector3f *ray_target);

// Original: core_setcolid.cpp_CDemonSet_FUN_0050fc90
// Address: 0050fc90
float __cdecl CDemonSet(CDemonSet *this_ptr);

// Original: core_setcolid.cpp_CDemonSet_iterativeRaycast_FUN_0050fdd0
// Address: 0050fdd0
float __cdecl CDemonSet::iterativeRaycast(CDemonSet *this_ptr,CVector3f *start_pos,CVector3f *direction);

// Original: core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_0050ffe0
// Address: 0050ffe0
float __cdecl CDemonSet::raycastAgainstActors(CDemonSet *this_ptr,float min_t,CVector3f *ray_origin,CVector3f *ray_target,float max_t);

// Original: core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_005103f0
// Address: 005103f0
int __cdecl CDemonSet::isActorIgnored(CDemonSet *this_ptr,CDemonActor *actor);

// Original: core_setcolid.cpp_intersectXZCylinder_FUN_00510450
// Address: 00510450
int __cdecl intersectXZCylinder(SIntersectXZCylinder *cylinder,float obstacle_x,float obstacle_y,SCollisionInfo *collision_info);

// Original: core_setcolid.cpp_testCylinderQuadCollision_FUN_005106a0
// Address: 005106a0
void __cdecl testCylinderQuadCollision(SIntersectXZCylinder *cylinder,CVector3f *vertex1,CVector3f *vertex2,CVector3f *vertex3,CVector3f *vertex4);

// Original: core_setcolid.cpp_CDemonSet_testOBBCylinderCollision_FUN_00510710
// Address: 00510710
int __cdecl CDemonSet::testOBBCylinderCollision(CDemonSet *this_ptr,SIntersectXZCylinder *cylinder,CBoundingBox3D *bounding_box,CVector3f *position,CMatrix3x3f *orientation_matrix);

// Original: core_setcolid.cpp_CDemonSet_testCylinderCollision_FUN_00510a40
// Address: 00510a40
float __cdecl CDemonSet::testCylinderCollision(CDemonSet *this_ptr,float start_x,float start_z,float dir_x,float dir_z,float radius,float bottom_y,float top_y);

// Original: core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_005113e0
// Address: 005113e0
void __cdecl CDemonSet::pushRaytraceState(CDemonSet *this_ptr);

// Original: core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00511590
// Address: 00511590
void __cdecl CDemonSet::popRaytraceState(CDemonSet *this_ptr);

// Original: core_setcolid.cpp_CDemonSet_FUN_00511740
// Address: 00511740
void __cdecl CDemonSet(CDemonSet *this_ptr);

// Original: core_setcolid.cpp_CDemonSet_init_FUN_00511750
// Address: 00511750
void __cdecl CDemonSet::init(CDemonSet *this_ptr);

// Original: core_setcolid.cpp_CDemonSet_ignore_FUN_00511780
// Address: 00511780
void __cdecl CDemonSet::ignore(CDemonSet *this_ptr,CDemonActor *actor);

// Original: core_setcolid.cpp_CDemonSet_disableIgnore_FUN_005117e0
// Address: 005117e0
void __cdecl CDemonSet::disableIgnore(CDemonSet *this_ptr);

// Original: core_setcolid.cpp_CDemonSet_FUN_005117f0
// Address: 005117f0
void __cdecl CDemonSet(CDemonSet *this_ptr);

// Original: core_setcolid.cpp_CDemonSet_setRayType_FUN_00511800
// Address: 00511800
void __cdecl CDemonSet::setRayType(CDemonSet *this_ptr,int ray_type);

// Original: core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00511840
// Address: 00511840
void __cdecl CDemonSet::setRayTypeLaser(CDemonSet *this_ptr,int laser_type,int color_r,int color_g,int color_b);

// Original: core_setcolid.cpp_CDemonSet_notifyDamageListeners_FUN_00511880
// Address: 00511880
void __cdecl CDemonSet::notifyDamageListeners(CDemonSet *this_ptr,CVector3f *position,CVector3f *actor_position,SDamageInfo *damage_info);

// Original: core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990
// Address: 00511990
SCollisionInfo * __cdecl SCollisionInfo::ctor(SCollisionInfo *this_ptr);

// Original: core_setcolid.cpp_CDemonSet_buildCollidableActorList_FUN_005119b0
// Address: 005119b0
void __cdecl CDemonSet::buildCollidableActorList(CDemonSet *this_ptr);

// Original: core_setcolid.cpp_CDemonSet_FUN_00511a10
// Address: 00511a10
void __cdecl CDemonSet(CDemonSet *this_ptr,CDemonActor *actor);

// Original: core_setcolid.cpp_CDemonSet_FUN_00511aa0
// Address: 00511aa0
void __cdecl CDemonSet(CDemonSet *this_ptr,CDemonActor *actor);

// Original: core_setcolid.cpp_CDemonSet_commitVoxelBuffer_FUN_00511b30
// Address: 00511b30
void __cdecl CDemonSet::commitVoxelBuffer(CDemonSet *this_ptr);

// Original: core_setcolid.cpp_CDemonSet_isPointInWater_FUN_00511b50
// Address: 00511b50
int __cdecl CDemonSet::isPointInWater(CDemonSet *this_ptr,CVector3f *point);

// Original: core_setcolid.cpp_SRaytraceState_ctor_FUN_00511c60
// Address: 00511c60
SRaytraceState * __cdecl SRaytraceState::ctor(SRaytraceState *this_ptr);

// Original: core_setcolid.cpp_SRaytraceState_dtor_FUN_00511c70
// Address: 00511c70
SRaytraceState * __cdecl SRaytraceState::dtor(SRaytraceState *this_ptr,uint flags);

// Original: core_setcolid.cpp_SIntersectXZCylinder_ctor_FUN_00511c80
// Address: 00511c80
SIntersectXZCylinder * __cdecl SIntersectXZCylinder::ctor(SIntersectXZCylinder *this_ptr);

// Original: core_setcolid.cpp_SIntersectXZCylinder_dtor_FUN_00511c90
// Address: 00511c90
SIntersectXZCylinder * __cdecl SIntersectXZCylinder::dtor(SIntersectXZCylinder *this_ptr,uint flags);

// Original: core_setcolid.cpp_SDamageInfo_copy_FUN_00511ca0
// Address: 00511ca0
void __cdecl SDamageInfo::copy(SDamageInfo *this_ptr,SDamageInfo *other);

// Original: core_setcolid.cpp_SCollisionReturnInfo_ctor_FUN_00511d20
// Address: 00511d20
SCollisionReturnInfo * __cdecl SCollisionReturnInfo::ctor(SCollisionReturnInfo *this_ptr);

// Original: core_setcolid.cpp_SCollisionReturnInfo_dtor_FUN_00511d30
// Address: 00511d30
SCollisionReturnInfo * __cdecl SCollisionReturnInfo::dtor(SCollisionReturnInfo *this_ptr,uint flags);
