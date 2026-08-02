#pragma once

// Function prototypes for core/colonel.cpp
// Generated from Ghidra function signatures

// Original: core_colonel.cpp_staticInit_FUN_00439cd0
// Address: 00439cd0
void __cdecl staticInit(void);

// Original: core_colonel.cpp_factoryFunc_FUN_00439d00
// Address: 00439d00
CColonel * __cdecl factoryFunc(void);

// Original: core_colonel.cpp_CColonel_getActorType_FUN_00439d20
// Address: 00439d20
CDemonActorType * CColonel::getActorType(void);

// Original: core_colonel.cpp_CColonel_ctor_FUN_00439d30
// Address: 00439d30
CColonel * __cdecl CColonel::ctor(CColonel *this_ptr);

// Original: core_colonel.cpp_CColonel_setup_FUN_00439da0
// Address: 00439da0
void __cdecl CColonel::setup(CColonel *this_ptr);

// Original: core_colonel.cpp_CColonel_process_FUN_00439f50
// Address: 00439f50
void CColonel::process(CColonel *param_1,float param_2);

// Original: core_colonel.cpp_CColonel_processAI_FUN_0043a470
// Address: 0043a470
void __cdecl CColonel::processAI(CColonel *this_ptr,float delta_time);

// Original: core_colonel.cpp_CColonel_processMotionEvents_FUN_0043a980
// Address: 0043a980
ushort CColonel::processMotionEvents(CCharacter *param_1,float param_2);

// Original: core_colonel.cpp_CColonel_archive_FUN_0043a9e0
// Address: 0043a9e0
void CColonel::archive(CHero *param_1);

// Original: core_colonel.cpp_CColonel_renderOpaque_FUN_0043a9f0
// Address: 0043a9f0
void CColonel::renderOpaque(CCharacter *param_1);

// Original: core_colonel.cpp_CColonel_processDamage_FUN_0043aa00
// Address: 0043aa00
void CColonel::processDamage(CCharacter *param_1,SDamageInfo *param_2);

// Original: core_colonel.cpp_CColonel_isWeaponDrawn_FUN_0043ab20
// Address: 0043ab20
int __cdecl CColonel::isWeaponDrawn(CColonel *this_ptr);

// Original: core_colonel.cpp_CColonel_drawWeapon_FUN_0043ab30
// Address: 0043ab30
void __cdecl CColonel::drawWeapon(CColonel *this_ptr,int drawn);

// Original: core_colonel.cpp_getCurrentMotionState_FUN_0043ab40
// Address: 0043ab40
int __cdecl getCurrentMotionState(CMotionController *motion_ptr);

// Original: core_colonel.cpp_CColonel_dtor_FUN_0043ab60
// Address: 0043ab60
CColonel * __cdecl CColonel::dtor(CColonel *this_ptr,uint flags);
