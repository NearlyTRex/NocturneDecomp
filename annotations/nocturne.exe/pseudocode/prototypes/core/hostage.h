#pragma once

// Function prototypes for core/hostage.cpp
// Generated from Ghidra function signatures

// Original: core_hostage.cpp_staticInit_FUN_004b6990
// Address: 004b6990
void __cdecl staticInit(void);

// Original: core_hostage.cpp_factoryFuncHostage_FUN_004b69c0
// Address: 004b69c0
CHostage * __cdecl factoryFuncHostage(void);

// Original: core_hostage.cpp_CHostage_getActorType_FUN_004b69e0
// Address: 004b69e0
CDemonActorType * __cdecl CHostage::getActorType(CHostage *this_ptr);

// Original: core_hostage.cpp_CHostage_ctor_FUN_004b69f0
// Address: 004b69f0
CHostage * __cdecl CHostage::ctor(CHostage *this_ptr);

// Original: core_hostage.cpp_CHostage_setup_FUN_004b6b20
// Address: 004b6b20
void __cdecl CHostage::setup(CHostage *this_ptr);

// Original: core_hostage.cpp_CHostage_renderOpaque_FUN_004b6cf0
// Address: 004b6cf0
int __cdecl CHostage::renderOpaque(CHostage *this_ptr);

// Original: core_hostage.cpp_CHostage_process_FUN_004b6d80
// Address: 004b6d80
void __cdecl CHostage::process(CHostage *this_ptr,float delta_time);

// Original: core_hostage.cpp_CHostage_processGrabberFlee_FUN_004b81a0
// Address: 004b81a0
int __cdecl CHostage::processGrabberFlee(CHostage *this_ptr,float delta_time);

// Original: core_hostage.cpp_CHostage_renderBackground_FUN_004b82d0
// Address: 004b82d0
void __cdecl CHostage::renderBackground(CHostage *this_ptr,int layer_flag);

// Original: core_hostage.cpp_CHostage_archive_FUN_004b8320
// Address: 004b8320
void __cdecl CHostage::archive(CHostage *this_ptr);

// Original: core_hostage.cpp_CHostage_isGrabbable_FUN_004b8540
// Address: 004b8540
undefined4 CHostage::isGrabbable(int param_1);

// Original: core_hostage.cpp_CHostage_isGrabbable_FUN_004b8580
// Address: 004b8580
undefined4 CHostage::isGrabbable(void);

// Original: core_hostage.cpp_CHostage_getGrabbed_FUN_004b8590
// Address: 004b8590
int __cdecl CHostage::getGrabbed(CHostage *this_ptr,CDemonActor *grabber,int grab_type);

// Original: core_hostage.cpp_CHostage_processDamage_FUN_004b8600
// Address: 004b8600
void __cdecl CHostage::processDamage(CHostage *this_ptr,SDamageInfo *damage_info);

// Original: core_hostage.cpp_CHostage_getCarryObjToBodyXForm_FUN_004b8700
// Address: 004b8700
CMatrix3x4f * __stack2_esi CHostage::getCarryObjToBodyXForm(CHostage *this_ptr,int hand_index,CMatrix3x4f *out_matrix);

// Original: core_hostage.cpp_CHostage_dtor_FUN_004b8b70
// Address: 004b8b70
CHostage * __cdecl CHostage::dtor(CHostage *this_ptr,uint flags);
