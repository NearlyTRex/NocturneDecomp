#pragma once

// Function prototypes for core/colonel.cpp
// Generated from Ghidra function signatures

// Original: core_colonel.cpp_staticInit_FUN_0043f770
// Address: 0043f770
void __cdecl staticInit(void);

// Original: core_colonel.cpp_factoryFunc_FUN_0043f7a0
// Address: 0043f7a0
CColonel * __cdecl factoryFunc(void);

// Original: core_colonel.cpp_CColonel_getActorType_FUN_0043f7d0
// Address: 0043f7d0
CDemonActorType * __cdecl CColonel::getActorType(CColonel *this_ptr);

// Original: core_colonel.cpp_CColonel_ctor_FUN_0043f7e0
// Address: 0043f7e0
CColonel * __cdecl CColonel::ctor(CColonel *this_ptr);

// Original: core_colonel.cpp_CColonel_setup_FUN_0043f850
// Address: 0043f850
void __cdecl CColonel::setup(CColonel *this_ptr);

// Original: core_colonel.cpp_CColonel_process_FUN_0043fa00
// Address: 0043fa00
void __cdecl CColonel::process(CColonel *this_ptr,float delta_time);

// Original: core_colonel.cpp_CColonel_processAI_FUN_0043ff20
// Address: 0043ff20
void __cdecl CColonel::processAI(CColonel *this_ptr,float delta_time);

// Original: core_colonel.cpp_CColonel_processMotionEvents_FUN_00440430
// Address: 00440430
void __cdecl CColonel::processMotionEvents(CColonel *this_ptr,float delta_time);

// Original: core_colonel.cpp_CColonel_archive_FUN_00440490
// Address: 00440490
void __cdecl CColonel::archive(CColonel *this_ptr);

// Original: core_colonel.cpp_CColonel_renderOpaque_FUN_004404a0
// Address: 004404a0
void __cdecl CColonel::renderOpaque(CColonel *this_ptr);

// Original: core_colonel.cpp_CColonel_processDamage_FUN_004404b0
// Address: 004404b0
void __cdecl CColonel::processDamage(CColonel *this_ptr,SDamageInfo *damage_info);

// Original: core_colonel.cpp_CColonel_isWeaponDrawn_FUN_004405d0
// Address: 004405d0
int __cdecl CColonel::isWeaponDrawn(CColonel *this_ptr);

// Original: core_colonel.cpp_CColonel_drawWeapon_FUN_004405e0
// Address: 004405e0
void __cdecl CColonel::drawWeapon(CColonel *this_ptr,int drawn);

// Original: core_colonel.cpp_CColonel_onActorDeleted_FUN_004405f0
// Address: 004405f0
void __cdecl CColonel::onActorDeleted(CColonel *this_ptr,CDemonActor *deleted_actor);

// Original: core_colonel.cpp_CColonel_getPropertyList_FUN_00440610
// Address: 00440610
void __cdecl CColonel::getPropertyList(CColonel *this_ptr,CActorPropertyList *property_list);

// Original: core_colonel.cpp_CColonel_addFilesToExtract_FUN_00440630
// Address: 00440630
void __cdecl CColonel::addFilesToExtract(CColonel *this_ptr,_FILE *file_handle);

// Original: core_colonel.cpp_getCurrentMotionState_FUN_00440650
// Address: 00440650
int __cdecl getCurrentMotionState(CMotionController *motion_ptr);

// Original: core_colonel.cpp_CColonel_dtor_FUN_00440670
// Address: 00440670
CColonel * __cdecl CColonel::dtor(CColonel *this_ptr,uint flags);
