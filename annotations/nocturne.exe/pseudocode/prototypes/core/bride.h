#pragma once

// Function prototypes for core/bride.cpp
// Generated from Ghidra function signatures

// Original: core_bride.cpp_staticInit_FUN_0041fb20
// Address: 0041fb20
void __cdecl staticInit(void);

// Original: core_bride.cpp_factoryFunc_FUN_0041fb80
// Address: 0041fb80
CBride * __cdecl factoryFunc(void);

// Original: core_bride.cpp_CBride_getActorType_FUN_0041fba0
// Address: 0041fba0
CDemonActorType * CBride::getActorType(void);

// Original: core_bride.cpp_CBride_ctor_FUN_0041fbb0
// Address: 0041fbb0
CBride * __cdecl CBride::ctor(CBride *this_ptr);

// Original: core_bride.cpp_CBride_setup_FUN_0041fc20
// Address: 0041fc20
void CBride::setup(CEnemy *param_1);

// Original: core_bride.cpp_CBride_process_FUN_0041fe40
// Address: 0041fe40
void CBride::process(CEnemy *param_1,float param_2);

// Original: core_bride.cpp_CBride_archive_FUN_00420970
// Address: 00420970
void CBride::archive(CEnemy *param_1);

// Original: core_bride.cpp_CBride_processDismemberment_FUN_00420a10
// Address: 00420a10
void __cdecl CBride::processDismemberment(CBride *this_ptr,SDamageInfo *damage_info);

// Original: core_bride.cpp_CBride_processDamage_FUN_00420c40
// Address: 00420c40
void CBride::processDamage(CBride *param_1,SDamageInfo *param_2);

// Original: core_bride.cpp_CBride_getTargetPoints_FUN_00420e20
// Address: 00420e20
undefined4 CBride::getTargetPoints(int param_1,CVector3f *param_2);

// Original: core_bride.cpp_CBride_getTargetPoint_FUN_00420eb0
// Address: 00420eb0
CVector3f * CBride::getTargetPoint(int param_1,CVector3f *param_2);

// Original: core_bride.cpp_CBride_dtor_FUN_00420f20
// Address: 00420f20
CBride * __cdecl CBride::dtor(CBride *this_ptr,uint flags);
