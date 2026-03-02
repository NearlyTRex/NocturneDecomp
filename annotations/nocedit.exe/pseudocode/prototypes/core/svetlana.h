#pragma once

// Function prototypes for core/svetlana.cpp
// Generated from Ghidra function signatures

// Original: core_svetlana.cpp_staticInit_FUN_005d87e0
// Address: 005d87e0
void __cdecl staticInit(void);

// Original: core_svetlana.cpp_factoryFunc_FUN_005d8810
// Address: 005d8810
CSvetlana * __cdecl factoryFunc(void);

// Original: core_svetlana.cpp_CSvetlana_getActorType_FUN_005d8840
// Address: 005d8840
CDemonActorType * __cdecl CSvetlana::getActorType(CSvetlana *this_ptr);

// Original: core_svetlana.cpp_CSvetlana_ctor_FUN_005d8850
// Address: 005d8850
CSvetlana * __cdecl CSvetlana::ctor(CSvetlana *this_ptr);

// Original: core_svetlana.cpp_CSvetlana_setup_FUN_005d88e0
// Address: 005d88e0
void __cdecl CSvetlana::setup(CSvetlana *this_ptr);

// Original: core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0
// Address: 005d8ba0
void __cdecl CSvetlana::process(CSvetlana *this_ptr,float delta_time);

// Original: core_svetlana.cpp_CSvetlana_processAI_FUN_005d9260
// Address: 005d9260
void __cdecl CSvetlana::processAI(CSvetlana *this_ptr,float delta_time);

// Original: core_svetlana.cpp_CSvetlana_advanceMotion_FUN_005d9970
// Address: 005d9970
void __cdecl CSvetlana::advanceMotion(CSvetlana *this_ptr,float delta_time);

// Original: core_svetlana.cpp_CSvetlana_performBladeAttack_FUN_005d9a10
// Address: 005d9a10
void __cdecl CSvetlana::performBladeAttack(CSvetlana *this_ptr,int bone_index);

// Original: core_svetlana.cpp_CSVetlana_archive_FUN_005d9bb0
// Address: 005d9bb0
void __cdecl CSVetlana::archive(CSvetlana *this_ptr);

// Original: core_svetlana.cpp_CSvetlana_renderOpaque_FUN_005d9bc0
// Address: 005d9bc0
int __cdecl CSvetlana::renderOpaque(CSvetlana *this_ptr);

// Original: core_svetlana.cpp_CSvetlana_processDamage_FUN_005d9d30
// Address: 005d9d30
void __cdecl CSvetlana::processDamage(CSvetlana *this_ptr,SDamageInfo *damage_info);

// Original: core_svetlana.cpp_CSvetlana_getGrabbed_FUN_005d9ec0
// Address: 005d9ec0
int __cdecl CSvetlana::getGrabbed(CSvetlana *this_ptr,CDemonActor *grabber,int grab_type);

// Original: core_svetlana.cpp_CSvetlana_isWeaponDrawn_FUN_005d9ed0
// Address: 005d9ed0
int __cdecl CSvetlana::isWeaponDrawn(CSvetlana *this_ptr);

// Original: core_svetlana.cpp_CSvetlana_drawWeapon_FUN_005d9ee0
// Address: 005d9ee0
void __cdecl CSvetlana::drawWeapon(CSvetlana *this_ptr,int drawn);

// Original: core_svetlana.cpp_CSvetlana_onActorDeleted_FUN_005d9ef0
// Address: 005d9ef0
void __cdecl CSvetlana::onActorDeleted(CSvetlana *this_ptr,CDemonActor *deleted_actor);

// Original: core_svetlana.cpp_CSvetlana_getPropertyList_FUN_005d9f10
// Address: 005d9f10
void __cdecl CSvetlana::getPropertyList(CSvetlana *this_ptr,CActorPropertyList *property_list);

// Original: core_svetlana.cpp_CSvetlana_addFilesToExtract_FUN_005d9f30
// Address: 005d9f30
void __cdecl CSvetlana::addFilesToExtract(CSvetlana *this_ptr,_FILE *file_handle);

// Original: core_svetlana.cpp_CSvetlana_dtor_FUN_005d9f50
// Address: 005d9f50
CSvetlana * __cdecl CSvetlana::dtor(CSvetlana *this_ptr,uint flags);
