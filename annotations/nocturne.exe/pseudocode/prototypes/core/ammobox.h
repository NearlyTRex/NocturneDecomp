#pragma once

// Function prototypes for core/ammobox.cpp
// Generated from Ghidra function signatures

// Original: core_ammobox.cpp_staticInit_FUN_0040efe0
// Address: 0040efe0
void __cdecl staticInit(void);

// Original: core_ammobox.cpp_factoryFunc_FUN_0040f010
// Address: 0040f010
CAmmoBox * __cdecl factoryFunc(void);

// Original: core_ammobox.cpp_CAmmoBox_getActorType_FUN_0040f030
// Address: 0040f030
CDemonActorType * __cdecl CAmmoBox::getActorType(CAmmoBox *this_ptr);

// Original: core_ammobox.cpp_CAmmoBox_ctor_FUN_0040f040
// Address: 0040f040
CAmmoBox * __cdecl CAmmoBox::ctor(CAmmoBox *this_ptr);

// Original: core_ammobox.cpp_CAmmoBox_setup_FUN_0040f0f0
// Address: 0040f0f0
void __cdecl CAmmoBox::setup(CAmmoBox *this_ptr);

// Original: core_ammobox.cpp_CAmmoBox_process_FUN_0040f120
// Address: 0040f120
void __cdecl CAmmoBox::process(CAmmoBox *this_ptr,float delta_time);

// Original: core_ammobox.cpp_CAmmoBox_openBox_FUN_0040f130
// Address: 0040f130
void __cdecl CAmmoBox::openBox(CAmmoBox *this_ptr,float open_pct);

// Original: core_ammobox.cpp_CAmmoBox_FUN_0040f1a0
// Address: 0040f1a0
void __cdecl CAmmoBox(CAmmoBox *this_ptr,CInventory *inventory);

// Original: core_ammobox.cpp_CAmmoBox_renderOpaque_FUN_0040f2b0
// Address: 0040f2b0
int __cdecl CAmmoBox::renderOpaque(CAmmoBox *this_ptr);

// Original: core_ammobox.cpp_CAmmoBox_getBoundingBox_FUN_0040f340
// Address: 0040f340
CBoundingBox3D * __cdecl CAmmoBox::getBoundingBox(CAmmoBox *this_ptr,CBoundingBox3D *out_box);

// Original: core_ammobox.cpp_CAmmoBox_archive_FUN_0040f390
// Address: 0040f390
void __cdecl CAmmoBox::archive(CAmmoBox *this_ptr);

// Original: core_ammobox.cpp_CAmmoBox_getCollisionType_FUN_0040f460
// Address: 0040f460
ECollisionType __cdecl CAmmoBox::getCollisionType(CAmmoBox *this_ptr,SCollisionInfo *collision_info);

// Original: core_ammobox.cpp_CAmmoBox_canPickup_FUN_0040f480
// Address: 0040f480
int __cdecl CAmmoBox::canPickup(CAmmoBox *this_ptr,CDemonActor *carrier);

// Original: core_ammobox.cpp_CAmmoBox_dtor_FUN_0040f4b0
// Address: 0040f4b0
CAmmoBox * __cdecl CAmmoBox::dtor(CAmmoBox *this_ptr,uint flags);
