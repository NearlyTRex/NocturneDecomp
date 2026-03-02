#pragma once

// Function prototypes for core/haystack.cpp
// Generated from Ghidra function signatures

// Original: core_haystack.cpp_staticInit_FUN_004f0ba0
// Address: 004f0ba0
void __cdecl staticInit(void);

// Original: core_haystack.cpp_factoryFunc_FUN_004f0bd0
// Address: 004f0bd0
CHaystack * __cdecl factoryFunc(void);

// Original: core_haystack.cpp_CHaystack_getActorType_FUN_004f0c00
// Address: 004f0c00
CDemonActorType * __cdecl CHaystack::getActorType(CHaystack *this_ptr);

// Original: core_haystack.cpp_CHaystack_ctor_FUN_004f0c10
// Address: 004f0c10
CHaystack * __cdecl CHaystack::ctor(CHaystack *this_ptr);

// Original: core_haystack.cpp_CHaystack_setup_FUN_004f0c80
// Address: 004f0c80
void __cdecl CHaystack::setup(CHaystack *this_ptr);

// Original: core_haystack.cpp_CHaystack_process_FUN_004f0e40
// Address: 004f0e40
void __cdecl CHaystack::process(CHaystack *this_ptr,float delta_time);

// Original: core_haystack.cpp_CHaystack_FUN_004f13f0
// Address: 004f13f0
void __cdecl CHaystack(CHaystack *this_ptr);

// Original: core_haystack.cpp_CHaystack_FUN_004f1970
// Address: 004f1970
void __cdecl CHaystack(CHaystack *this_ptr);

// Original: core_haystack.cpp_CHaystack_FUN_004f1ab0
// Address: 004f1ab0
void __cdecl CHaystack(CHaystack *this_ptr);

// Original: core_haystack.cpp_CHaystack_archive_FUN_004f1b50
// Address: 004f1b50
void __cdecl CHaystack::archive(CHaystack *this_ptr);

// Original: core_haystack.cpp_CHaystack_renderOpaque_FUN_004f1b60
// Address: 004f1b60
void __cdecl CHaystack::renderOpaque(CHaystack *this_ptr);

// Original: core_haystack.cpp_CHaystack_processDamage_FUN_004f1b70
// Address: 004f1b70
void __cdecl CHaystack::processDamage(CHaystack *this_ptr,SDamageInfo *damage_info);

// Original: core_haystack.cpp_CHaystack_isWeaponDrawn_FUN_004f1c90
// Address: 004f1c90
int __cdecl CHaystack::isWeaponDrawn(CHaystack *this_ptr);

// Original: core_haystack.cpp_CHaystack_drawWeapon_FUN_004f1ca0
// Address: 004f1ca0
void __cdecl CHaystack::drawWeapon(CHaystack *this_ptr,int drawn);

// Original: core_haystack.cpp_CHaystack_onActorDeleted_FUN_004f1cb0
// Address: 004f1cb0
void __cdecl CHaystack::onActorDeleted(CHaystack *this_ptr,CDemonActor *deleted_actor);

// Original: core_haystack.cpp_CHaystack_getPropertyList_FUN_004f1cd0
// Address: 004f1cd0
void __cdecl CHaystack::getPropertyList(CHaystack *this_ptr,CActorPropertyList *property_list);

// Original: core_haystack.cpp_CHaystack_addFilesToExtract_FUN_004f1cf0
// Address: 004f1cf0
void __cdecl CHaystack::addFilesToExtract(CHaystack *this_ptr,_FILE *file_handle);

// Original: core_haystack.cpp_CHaystack_dtor_FUN_004f1d10
// Address: 004f1d10
CHaystack * __cdecl CHaystack::dtor(CHaystack *this_ptr,uint flags);
