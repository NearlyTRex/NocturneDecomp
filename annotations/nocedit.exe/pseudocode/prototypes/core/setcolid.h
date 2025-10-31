#pragma once

// Function prototypes for core/setcolid.cpp
// Generated from Ghidra function signatures

// Original: core_setcolid.cpp_staticInit_FUN_005715b0
// Address: 005715b0
void staticInit(void);

// Original: core_setcolid.cpp_rayTestQuadFloor_FUN_005715d0
// Address: 005715d0
int rayTestQuadFloor(float x, float z, CVector3f * out_height, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3, CVector3f * vertex4, CVector3f * out_transformed_normal);

// Original: core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0
// Address: 005716b0
float CDemonSet::processCollisionTypes(CDemonSet * this_ptr, CVector3f * position, float radius);

// Original: core_setcolid.cpp_CDemonSet_rayVoxelHeightQuery_FUN_00572340
// Address: 00572340
float CDemonSet::rayVoxelHeightQuery(CDemonSet * this_ptr, CVector3f * position);

// Original: core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00572460
// Address: 00572460
int CDemonSet::testLineOcclusion(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * end_pos);

// Original: core_setcolid.cpp_CDemonSet_getVoxelHeight_FUN_005724e0
// Address: 005724e0
float CDemonSet::getVoxelHeight(CDemonSet * this_ptr, CVector3f * world_position);

// Original: core_setcolid.cpp_CDemonSet_testVoxelRaycast_FUN_00572510
// Address: 00572510
int CDemonSet::testVoxelRaycast(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * end_pos);

// Original: core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
// Address: 00572530
float CDemonSet::raycast(CDemonSet * this_ptr, CVector3f * ray_origin, CVector3f * ray_target);

// Original: core_setcolid.cpp_CDemonSet_refinedRaycast_FUN_005726c0
// Address: 005726c0
float CDemonSet::refinedRaycast(CDemonSet * this_ptr);

// Original: core_setcolid.cpp_CDemonSet_iterativeRaycast_FUN_00572800
// Address: 00572800
float CDemonSet::iterativeRaycast(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * direction);

// Original: core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_00572a10
// Address: 00572a10
float CDemonSet::raycastAgainstActors(CDemonSet * this_ptr, float min_t, CVector3f * ray_origin, CVector3f * ray_target, float max_t);

// Original: core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_00572e20
// Address: 00572e20
int CDemonSet::isActorIgnored(CDemonSet * this_ptr, CDemonActor * actor);

// Original: core_setcolid.cpp_intersectXZCylinder_FUN_00572e80
// Address: 00572e80
int intersectXZCylinder(SIntersectXZCylinder * cylinder, float ray_x, float ray_z, void * bounds_struct);

// Original: core_setcolid.cpp_testCylinderQuadCollision_FUN_005730d0
// Address: 005730d0
void testCylinderQuadCollision(SIntersectXZCylinder * cylinder, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3, CVector3f * vertex4);

// Original: core_setcolid.cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140
// Address: 00573140
int CDemonSet::testOBBCylinderCollision(CDemonSet * this_ptr, CBoundingBox3D * bounding_box, CMatrix3x3f * orientation_matrix, SIntersectXZCylinder * cylinder1, SIntersectXZCylinder * cylinder2);

// Original: core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470
// Address: 00573470
float CDemonSet::testCapsuleCollision(CDemonSet * this_ptr, float start_x, float start_z, float dir_x, float dir_z, float radius, void * user_data1, void * user_data2);

// Original: core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00573e10
// Address: 00573e10
void CDemonSet::pushRaytraceState(CDemonSet * this_ptr);

// Original: core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00573fc0
// Address: 00573fc0
void CDemonSet::popRaytraceState(CDemonSet * this_ptr);

// Original: core_setcolid.cpp_CDemonSet_FUN_00574170
// Address: 00574170
void CDemonSet(CDemonSet * this_ptr);

// Original: core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
// Address: 00574180
void CDemonSet::initMaybe(CDemonSet * this_ptr);

// Original: core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
// Address: 005741b0
void CDemonSet::ignore(CDemonSet * this_ptr, CDemonActor * actor);

// Original: core_setcolid.cpp_CDemonSet_disableIgnore_FUN_00574210
// Address: 00574210
void CDemonSet::disableIgnore(CDemonSet * this_ptr);

// Original: core_setcolid.cpp_CDemonSet_FUN_00574220
// Address: 00574220
void CDemonSet(CDemonSet * this_ptr);

// Original: core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230
// Address: 00574230
void CDemonSet::setRayType(CDemonSet * this_ptr, int ray_type);

// Original: core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00574270
// Address: 00574270
void CDemonSet::setRayTypeLaser(CDemonSet * this_ptr, float f1, float f2, float f3, float f4);

// Original: core_setcolid.cpp_CDemonSet_notifyDamageListeners_FUN_005742b0
// Address: 005742b0
void CDemonSet::notifyDamageListeners(CDemonSet * this_ptr, SDamageInfo * damage_info, CVector3f * actor_position, void * unknown_param);

// Original: core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
// Address: 005743c0
SCollisionInfo * SCollisionInfo::ctor(SCollisionInfo * this_ptr);

// Original: core_setcolid.cpp_CDemonSet_FUN_005743e0
// Address: 005743e0
void CDemonSet(CDemonSet * this_ptr);

// Original: core_setcolid.cpp_CDemonSet_FUN_00574440
// Address: 00574440
void CDemonSet(CDemonSet * this_ptr);

// Original: core_setcolid.cpp_CDemonSet_FUN_005744d0
// Address: 005744d0
void CDemonSet(CDemonSet * this_ptr);

// Original: core_setcolid.cpp_CDemonSet_FUN_00574560
// Address: 00574560
void CDemonSet(CDemonSet * this_ptr);

// Original: core_setcolid.cpp_CDemonSet_FUN_00574580
// Address: 00574580
int CDemonSet(CDemonSet * this_ptr);

// Original: core_setcolid.cpp_SRaytraceState_ctor_FUN_00574690
// Address: 00574690
SRaytraceState * SRaytraceState::ctor(SRaytraceState * this_ptr);

// Original: core_setcolid.cpp_SRaytraceState_dtor_FUN_005746a0
// Address: 005746a0
SRaytraceState * SRaytraceState::dtor(SRaytraceState * this_ptr);

// Original: core_setcolid.cpp_SIntersectXZCylinder_ctor_FUN_005746b0
// Address: 005746b0
SIntersectXZCylinder * SIntersectXZCylinder::ctor(SIntersectXZCylinder * this_ptr);

// Original: core_setcolid.cpp_SIntersectXZCylinder_dtor_FUN_005746c0
// Address: 005746c0
SIntersectXZCylinder * SIntersectXZCylinder::dtor(SIntersectXZCylinder * this_ptr);

// Original: core_setcolid.cpp_SDamageInfo_copy_FUN_005746d0
// Address: 005746d0
void SDamageInfo::copy(SDamageInfo * this_ptr, SDamageInfo * other);

// Original: core_setcolid.cpp_SCollisionReturnInfo_ctor_FUN_00574750
// Address: 00574750
SCollisionReturnInfo * SCollisionReturnInfo::ctor(SCollisionReturnInfo * this_ptr);

// Original: core_setcolid.cpp_SCollisionReturnInfo_dtor_FUN_00574760
// Address: 00574760
SCollisionReturnInfo * SCollisionReturnInfo::dtor(SCollisionReturnInfo * this_ptr);

// Original: core_setcolid.cpp_freeRaytraceState_FUN_00574770
// Address: 00574770
void freeRaytraceState(SRaytraceState * * array);
