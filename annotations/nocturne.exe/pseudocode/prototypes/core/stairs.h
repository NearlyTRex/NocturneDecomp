#pragma once

// Function prototypes for core/stairs.cpp
// Generated from Ghidra function signatures

// Original: core_stairs.cpp_staticInit_FUN_00534750
// Address: 00534750
void __cdecl staticInit(void);

// Original: core_stairs.cpp_factoryFuncStairs_FUN_00534780
// Address: 00534780
CStairs * __cdecl factoryFuncStairs(void);

// Original: core_stairs.cpp_CStairs_getActorType_FUN_005347a0
// Address: 005347a0
CDemonActorType * __cdecl CStairs::getActorType(CStairs *this_ptr);

// Original: core_stairs.cpp_CStairs_ctor_FUN_005347b0
// Address: 005347b0
CStairs * __cdecl CStairs::ctor(CStairs *this_ptr);

// Original: core_stairs.cpp_CStairs_setup_FUN_00534820
// Address: 00534820
void __cdecl CStairs::setup(CStairs *this_ptr);

// Original: core_stairs.cpp_CStairs_process_FUN_00534840
// Address: 00534840
void __cdecl CStairs::process(CStairs *this_ptr,float delta_time);

// Original: core_stairs.cpp_CStairs_renderOpaque_FUN_00534850
// Address: 00534850
int __cdecl CStairs::renderOpaque(CStairs *this_ptr);

// Original: core_stairs.cpp_CStairs_getBoundingBox_FUN_00534860
// Address: 00534860
CBoundingBox3D * __cdecl CStairs::getBoundingBox(CStairs *this_ptr,CBoundingBox3D *out_box);

// Original: core_stairs.cpp_CStairs_archive_FUN_005348c0
// Address: 005348c0
void __cdecl CStairs::archive(CStairs *this_ptr);

// Original: core_stairs.cpp_CStairs_getCollisionType_FUN_00534940
// Address: 00534940
ECollisionType __cdecl CStairs::getCollisionType(CStairs *this_ptr,SCollisionInfo *collision_info);

// Original: core_stairs.cpp_CStairs_customRayIntersect_FUN_00534960
// Address: 00534960
float __cdecl CStairs::customRayIntersect(CStairs *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal);

// Original: core_stairs.cpp_CStairs_customIntersectCylinderXZ_FUN_00534a30
// Address: 00534a30
void __cdecl CStairs::customIntersectCylinderXZ(CStairs *this_ptr,SIntersectXZCylinder *cylinder);

// Original: core_stairs.cpp_CStairs_customGetFloorHeight_FUN_00534a70
// Address: 00534a70
int __cdecl CStairs::customGetFloorHeight(CStairs *this_ptr,CVector3f *position,float search_radius,float *out_floor_height);

// Original: core_stairs.cpp_CStairs_getGroundType_FUN_00534ac0
// Address: 00534ac0
EGroundType __cdecl CStairs::getGroundType(CStairs *this_ptr);

// Original: core_stairs.cpp_CStairs_buildCollision_FUN_00534ad0
// Address: 00534ad0
void __cdecl CStairs::buildCollision(CStairs *this_ptr);

// Original: core_stairs.cpp_CStairs_dtor_FUN_00534c10
// Address: 00534c10
CStairs * __cdecl CStairs::dtor(CStairs *this_ptr,uint flags);

// Original: core_stairs.cpp_SFly_arrdtor_FUN_00534c80
// Address: 00534c80
SFly * __cdecl SFly::arrdtor(SFly *this_ptr,uint flags);
