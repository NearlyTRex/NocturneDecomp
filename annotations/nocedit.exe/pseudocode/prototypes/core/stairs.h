#pragma once

// Function prototypes for core/stairs.cpp
// Generated from Ghidra function signatures

// Original: core_stairs.cpp_staticInit_FUN_005b9b00
// Address: 005b9b00
void __cdecl staticInit(void);

// Original: core_stairs.cpp_factoryFunc_FUN_005b9b30
// Address: 005b9b30
CStairs * __cdecl factoryFunc(void);

// Original: core_stairs.cpp_CStairs_getActorType_FUN_005b9b60
// Address: 005b9b60
CDemonActorType * __cdecl CStairs::getActorType(CStairs *this_ptr);

// Original: core_stairs.cpp_CStairs_ctor_FUN_005b9b70
// Address: 005b9b70
CStairs * __cdecl CStairs::ctor(CStairs *this_ptr);

// Original: core_stairs.cpp_CStairs_setup_FUN_005b9be0
// Address: 005b9be0
void __cdecl CStairs::setup(CStairs *this_ptr);

// Original: core_stairs.cpp_CStairs_process_FUN_005b9c00
// Address: 005b9c00
void __cdecl CStairs::process(CStairs *this_ptr,float delta_time);

// Original: core_stairs.cpp_CStairs_renderOpaque_FUN_005b9c10
// Address: 005b9c10
int __cdecl CStairs::renderOpaque(CStairs *this_ptr);

// Original: core_stairs.cpp_CStairs_getBoundingBox_FUN_005ba490
// Address: 005ba490
CBoundingBox3D * __cdecl CStairs::getBoundingBox(CStairs *this_ptr,CBoundingBox3D *out_box);

// Original: core_stairs.cpp_CStairs_archive_FUN_005ba4f0
// Address: 005ba4f0
void __cdecl CStairs::archive(CStairs *this_ptr);

// Original: core_stairs.cpp_CStairs_getCollisionType_FUN_005ba570
// Address: 005ba570
ECollisionType __cdecl CStairs::getCollisionType(CStairs *this_ptr,SCollisionInfo *collision_info);

// Original: core_stairs.cpp_CStairs_customRayIntersect_FUN_005ba590
// Address: 005ba590
float __cdecl CStairs::customRayIntersect(CStairs *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal);

// Original: core_stairs.cpp_CStairs_customIntersectCylinderXZ_FUN_005ba660
// Address: 005ba660
void __cdecl CStairs::customIntersectCylinderXZ(CStairs *this_ptr,SIntersectXZCylinder *cylinder);

// Original: core_stairs.cpp_CStairs_customGetFloorHeight_FUN_005ba6a0
// Address: 005ba6a0
int __cdecl CStairs::customGetFloorHeight(CStairs *this_ptr,float x_pos,float z_pos,float *out_floor_height);

// Original: core_stairs.cpp_CStairs_getGroundType_FUN_005ba6f0
// Address: 005ba6f0
EGroundType __cdecl CStairs::getGroundType(CStairs *this_ptr);

// Original: core_stairs.cpp_CStairs_buildCollision_FUN_005ba700
// Address: 005ba700
void __cdecl CStairs::buildCollision(CStairs *this_ptr);

// Original: core_stairs.cpp_CStairs_getPropertyList_FUN_005ba840
// Address: 005ba840
void __cdecl CStairs::getPropertyList(CStairs *this_ptr,CActorPropertyList *property_list);

// Original: core_stairs.cpp_CStairs_processInEditor_FUN_005ba900
// Address: 005ba900
void __cdecl CStairs::processInEditor(CStairs *this_ptr);

// Original: core_stairs.cpp_CStairs_showEditorHelp_FUN_005bab90
// Address: 005bab90
void __cdecl CStairs::showEditorHelp(CStairs *this_ptr,int *y_pos);

// Original: core_stairs.cpp_CStairs_onActorDeleted_FUN_005babf0
// Address: 005babf0
void __cdecl CStairs::onActorDeleted(CStairs *this_ptr,CDemonActor *deleted_actor);

// Original: core_stairs.cpp_CStairs_dtor_FUN_005bac10
// Address: 005bac10
CStairs * __cdecl CStairs::dtor(CStairs *this_ptr,uint flags);

// Original: core_stairs.cpp_CDemonTriangle_arrdtor_FUN_005bac80
// Address: 005bac80
CDemonTriangle * __cdecl CDemonTriangle::arrdtor(CDemonTriangle *objs,uint flags);
