#pragma once

// Function prototypes for core/hostage.cpp
// Generated from Ghidra function signatures

// Original: core_hostage.cpp_staticInit_FUN_004f47d0
// Address: 004f47d0
void __cdecl staticInit(void);

// Original: core_hostage.cpp_factoryFunc_FUN_004f4800
// Address: 004f4800
CHostage * __cdecl factoryFunc(void);

// Original: core_hostage.cpp_CHostage_getActorType_FUN_004f4830
// Address: 004f4830
CDemonActorType * __cdecl CHostage::getActorType(CHostage *this_ptr);

// Original: core_hostage.cpp_CHostage_ctor_FUN_004f4840
// Address: 004f4840
CHostage * __cdecl CHostage::ctor(CHostage *this_ptr);

// Original: core_hostage.cpp_CHostage_setup_FUN_004f4970
// Address: 004f4970
void __cdecl CHostage::setup(CHostage *this_ptr);

// Original: core_hostage.cpp_CHostage_renderOpaque_FUN_004f4b40
// Address: 004f4b40
int __cdecl CHostage::renderOpaque(CHostage *this_ptr);

// Original: core_hostage.cpp_CHostage_process_FUN_004f4bd0
// Address: 004f4bd0
void __cdecl CHostage::process(CHostage *this_ptr,float delta_time);

// Original: core_hostage.cpp_CHostage_FUN_004f5ff0
// Address: 004f5ff0
int __cdecl CHostage(CHostage *this_ptr,float delta_time);

// Original: core_hostage.cpp_CHostage_renderBackground_FUN_004f6120
// Address: 004f6120
void __cdecl CHostage::renderBackground(CHostage *this_ptr,int layer_flag);

// Original: core_hostage.cpp_CHostage_archive_FUN_004f6170
// Address: 004f6170
void __cdecl CHostage::archive(CHostage *this_ptr);

// Original: core_hostage.cpp_CHostage_isGrabbable_FUN_004f6390
// Address: 004f6390
int __cdecl CHostage::isGrabbable(CHostage *this_ptr,CDemonActor *grabber);

// Original: core_hostage.cpp_CHostage_canBeGrabbed_FUN_004f63d0
// Address: 004f63d0
int __cdecl CHostage::canBeGrabbed(CHostage *this_ptr,CDemonActor *grabber,int grab_type);

// Original: core_hostage.cpp_CHostage_getGrabbed_FUN_004f63e0
// Address: 004f63e0
int __cdecl CHostage::getGrabbed(CHostage *this_ptr,CDemonActor *grabber,int grab_type);

// Original: core_hostage.cpp_CHostage_processDamage_FUN_004f6450
// Address: 004f6450
void __cdecl CHostage::processDamage(CHostage *this_ptr,SDamageInfo *damage_info);

// Original: core_hostage.cpp_CHostage_getCarryObjToBodyXForm_FUN_004f6550
// Address: 004f6550
void __stack2_esi CHostage::getCarryObjToBodyXForm(CHostage *this_ptr,int hand_index,CMatrix3x4f *out_matrix);

// Original: core_hostage.cpp_CHostage_getPropertyList_FUN_004f69c0
// Address: 004f69c0
void __cdecl CHostage::getPropertyList(CHostage *this_ptr,CActorPropertyList *property_list);

// Original: core_hostage.cpp_CHostage_addFilesToExtract_FUN_004f6b30
// Address: 004f6b30
void __cdecl CHostage::addFilesToExtract(CHostage *this_ptr,_FILE *file_handle);

// Original: core_hostage.cpp_CHostage_dtor_FUN_004f6b60
// Address: 004f6b60
CHostage * __cdecl CHostage::dtor(CHostage *this_ptr,uint flags);
