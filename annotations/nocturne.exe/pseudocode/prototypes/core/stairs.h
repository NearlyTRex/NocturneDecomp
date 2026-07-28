#pragma once

// Function prototypes for core/stairs.cpp
// Generated from Ghidra function signatures

// Original: core_stairs.cpp_staticInit_FUN_00534750
// Address: 00534750
void __cdecl staticInit(void);

// Original: core_stairs.cpp_FUN_00534780
// Address: 00534780
void FUN_00534780(void);

// Original: core_stairs.cpp_FUN_005347a0
// Address: 005347a0
CDemonActorType * FUN_005347a0(void);

// Original: core_stairs.cpp_FUN_005347b0
// Address: 005347b0
int FUN_005347b0(undefined4 param_1);

// Original: core_stairs.cpp_FUN_00534820
// Address: 00534820
void FUN_00534820(CStairs *param_1);

// Original: core_stairs.cpp_FUN_00534840
// Address: 00534840
void FUN_00534840(void);

// Original: core_stairs.cpp_FUN_00534850
// Address: 00534850
undefined4 FUN_00534850(void);

// Original: core_stairs.cpp_CStairs_getBoundingBox_FUN_00534860
// Address: 00534860
void CStairs::getBoundingBox(int param_1,float *param_2);

// Original: core_stairs.cpp_FUN_005348c0
// Address: 005348c0
void FUN_005348c0(CDemonActor *param_1);

// Original: core_stairs.cpp_CStairs_getCollisionType_FUN_00534940
// Address: 00534940
undefined4 CStairs::getCollisionType(undefined4 param_1,int *param_2);

// Original: core_stairs.cpp_CStairs_customRayIntersect_FUN_00534960
// Address: 00534960
float CStairs::customRayIntersect(int param_1,undefined4 param_2,undefined4 param_3,float *param_4);

// Original: core_stairs.cpp_CStairs_customIntersectCylinderXZ_FUN_00534a30
// Address: 00534a30
void CStairs::customIntersectCylinderXZ(int param_1,SIntersectXZCylinder *param_2);

// Original: core_stairs.cpp_CStairs_customGetFloorHeight_FUN_00534a70
// Address: 00534a70
undefined4 CStairs::customGetFloorHeight(int param_1,CVector3f *param_2,float param_3,float *param_4);

// Original: core_stairs.cpp_FUN_00534ac0
// Address: 00534ac0
undefined4 FUN_00534ac0(int param_1);

// Original: core_stairs.cpp_CStairs_buildCollision_FUN_00534ad0
// Address: 00534ad0
void __cdecl CStairs::buildCollision(CStairs *this_ptr);

// Original: core_stairs.cpp_CFlies_dtor_FUN_00534c10
// Address: 00534c10
CDemonActor * CFlies::dtor(CDemonActor *param_1,byte param_2);

// Original: core_stairs.cpp_SFly_arrdtor_FUN_00534c80
// Address: 00534c80
SFly * __cdecl SFly::arrdtor(SFly *objs,uint flags);
