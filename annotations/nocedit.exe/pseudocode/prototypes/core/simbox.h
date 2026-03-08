#pragma once

// Function prototypes for core/simbox.cpp
// Generated from Ghidra function signatures

// Original: core_simbox.cpp_staticInit_FUN_00588cd0
// Address: 00588cd0
void __cdecl staticInit(void);

// Original: core_simbox.cpp_factoryFunc_FUN_00588d00
// Address: 00588d00
CSimBox * __cdecl factoryFunc(void);

// Original: core_simbox.cpp_CSimBox_getActorType_FUN_00588d30
// Address: 00588d30
CDemonActorType * __cdecl CSimBox::getActorType(CSimBox *this_ptr);

// Original: core_simbox.cpp_CSimBox_ctor_FUN_00588d40
// Address: 00588d40
CSimBox * __cdecl CSimBox::ctor(CSimBox *this_ptr);

// Original: core_simbox.cpp_CSimBox_setup_FUN_00588e00
// Address: 00588e00
void __cdecl CSimBox::setup(CSimBox *this_ptr);

// Original: core_simbox.cpp_CSimBox_process_FUN_00588f20
// Address: 00588f20
void __cdecl CSimBox::process(CSimBox *this_ptr,float delta_time);

// Original: core_simbox.cpp_CSimBox_renderOpaque_FUN_005890f0
// Address: 005890f0
int __cdecl CSimBox::renderOpaque(CSimBox *this_ptr);

// Original: core_simbox.cpp_CSimBox_getBoundingBox_FUN_00589160
// Address: 00589160
CBoundingBox3D * __cdecl CSimBox::getBoundingBox(CSimBox *this_ptr,CBoundingBox3D *out_box);

// Original: core_simbox.cpp_CSimBox_archive_FUN_005891b0
// Address: 005891b0
void __cdecl CSimBox::archive(CSimBox *this_ptr);

// Original: core_simbox.cpp_CSimBox_getCollisionType_FUN_00589260
// Address: 00589260
ECollisionType __cdecl CSimBox::getCollisionType(CSimBox *this_ptr,SCollisionInfo *collision_info);

// Original: core_simbox.cpp_CSimBox_propertyDisplayCallback_FUN_00589270
// Address: 00589270
void __cdecl CSimBox::propertyDisplayCallback(CSimBox *this_ptr,CActorProperty *property,char *output_buffer);

// Original: core_simbox.cpp_CSimBox_propertyActionCallback_FUN_005892d0
// Address: 005892d0
int __cdecl CSimBox::propertyActionCallback(CSimBox *this_ptr,CActorProperty *property);

// Original: core_simbox.cpp_CSimBox_getPropertyList_FUN_00589310
// Address: 00589310
void __cdecl CSimBox::getPropertyList(CSimBox *this_ptr,CActorPropertyList *property_list);

// Original: core_simbox.cpp_CSimBox_addFilesToExtract_FUN_005893c0
// Address: 005893c0
void __cdecl CSimBox::addFilesToExtract(CSimBox *this_ptr,_FILE *file_handle);

// Original: core_simbox.cpp_CSimBox_dtor_FUN_005893e0
// Address: 005893e0
CSimBox * __cdecl CSimBox::dtor(CSimBox *this_ptr,uint flags);
