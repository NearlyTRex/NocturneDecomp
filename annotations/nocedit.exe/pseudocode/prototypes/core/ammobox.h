#pragma once

// Function prototypes for core/ammobox.cpp
// Generated from Ghidra function signatures

// Original: core_ammobox.cpp_staticInit_FUN_00411530
// Address: 00411530
void __cdecl staticInit(void);

// Original: core_ammobox.cpp_factoryFunc_FUN_00411560
// Address: 00411560
CAmmoBox * __cdecl factoryFunc(void);

// Original: core_ammobox.cpp_CAmmoBox_getActorType_FUN_00411590
// Address: 00411590
CDemonActorType * __cdecl CAmmoBox::getActorType(CAmmoBox *this_ptr);

// Original: core_ammobox.cpp_CAmmoBox_ctor_FUN_004115a0
// Address: 004115a0
CAmmoBox * __cdecl CAmmoBox::ctor(CAmmoBox *this_ptr);

// Original: core_ammobox.cpp_CAmmoBox_setup_FUN_00411650
// Address: 00411650
void __cdecl CAmmoBox::setup(CAmmoBox *this_ptr);

// Original: core_ammobox.cpp_CAmmoBox_process_FUN_00411680
// Address: 00411680
void __cdecl CAmmoBox::process(CAmmoBox *this_ptr,float delta_time);

// Original: core_ammobox.cpp_CAmmoBox_FUN_00411690
// Address: 00411690
void __cdecl CAmmoBox(CAmmoBox *this_ptr);

// Original: core_ammobox.cpp_CAmmoBox_FUN_00411700
// Address: 00411700
void __cdecl CAmmoBox(CAmmoBox *this_ptr,CInventory *inventory);

// Original: core_ammobox.cpp_CAmmoBox_renderOpaque_FUN_00411820
// Address: 00411820
int __cdecl CAmmoBox::renderOpaque(CAmmoBox *this_ptr);

// Original: core_ammobox.cpp_CAmmoBox_getBoundingBox_FUN_004118b0
// Address: 004118b0
CBoundingBox3D * __cdecl CAmmoBox::getBoundingBox(CAmmoBox *this_ptr,CBoundingBox3D *out_box);

// Original: core_ammobox.cpp_CAmmoBox_archive_FUN_00411900
// Address: 00411900
void __cdecl CAmmoBox::archive(CAmmoBox *this_ptr);

// Original: core_ammobox.cpp_CAmmoBox_hasCollision_FUN_004119d0
// Address: 004119d0
int __cdecl CAmmoBox::hasCollision(CAmmoBox *this_ptr,SCollisionInfo *collision_info);

// Original: core_ammobox.cpp_CAmmoBox_canPickup_FUN_004119f0
// Address: 004119f0
int __cdecl CAmmoBox::canPickup(CAmmoBox *this_ptr,CDemonActor *carrier);

// Original: core_ammobox.cpp_CAmmoBox_propertyDisplayCallback_FUN_00411a30
// Address: 00411a30
void __cdecl CAmmoBox::propertyDisplayCallback(CAmmoBox *this_ptr,CActorProperty *property,char *output_buffer);

// Original: core_ammobox.cpp_CAmmoBox_propertyActionFunc_FUN_00411ab0
// Address: 00411ab0
int __cdecl CAmmoBox::propertyActionFunc(CAmmoBox *this_ptr,CActorProperty *property);

// Original: core_ammobox.cpp_CAmmoBox_getPropertyList_FUN_00411b30
// Address: 00411b30
void __cdecl CAmmoBox::getPropertyList(CAmmoBox *this_ptr,CActorPropertyList *property_list);

// Original: core_ammobox.cpp_CAmmoBox_writeDependencies_FUN_00411c00
// Address: 00411c00
void __cdecl CAmmoBox::writeDependencies(CAmmoBox *this_ptr,_FILE *file_handle);

// Original: core_ammobox.cpp_CAmmoBox_dtor_FUN_00411c20
// Address: 00411c20
CAmmoBox * __cdecl CAmmoBox::dtor(CAmmoBox *this_ptr,uint flags);
