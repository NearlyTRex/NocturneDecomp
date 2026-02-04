#pragma once

// Function prototypes for core/bat.cpp
// Generated from Ghidra function signatures

// Original: core_bat.cpp_staticInit_FUN_004146c0
// Address: 004146c0
void __cdecl staticInit(void);

// Original: core_bat.cpp_FUN_004146f0
// Address: 004146f0
float __cdecl FUN_004146f0(void);

// Original: core_bat.cpp_factoryFunc_FUN_00414790
// Address: 00414790
CBat * __cdecl factoryFunc(void);

// Original: core_bat.cpp_CBat_getActorType_FUN_004147c0
// Address: 004147c0
CDemonActorType * __cdecl CBat::getActorType(CBat *this_ptr);

// Original: core_bat.cpp_CBat_ctor_FUN_004147d0
// Address: 004147d0
CBat * __cdecl CBat::ctor(CBat *this_ptr);

// Original: core_bat.cpp_CBat_setup_FUN_004148a0
// Address: 004148a0
void __cdecl CBat::setup(CBat *this_ptr);

// Original: core_bat.cpp_CBat_archive_FUN_00414910
// Address: 00414910
void __cdecl CBat::archive(CBat *this_ptr);

// Original: core_bat.cpp_CBat_process_FUN_00414a00
// Address: 00414a00
void __cdecl CBat::process(CBat *this_ptr,float delta_time);

// Original: core_bat.cpp_CBat_renderOpaque_FUN_00414bf0
// Address: 00414bf0
int __cdecl CBat::renderOpaque(CBat *this_ptr);

// Original: core_bat.cpp_CBat_getBoundingBox_FUN_00414c60
// Address: 00414c60
CBoundingBox3D * __cdecl CBat::getBoundingBox(CBat *this_ptr,CBoundingBox3D *out_box);

// Original: core_bat.cpp_CBat_FUN_00414ce0
// Address: 00414ce0
void __cdecl CBat(CBat *this_ptr);

// Original: core_bat.cpp_CBat_getPropertyList_FUN_00414dc0
// Address: 00414dc0
void __cdecl CBat::getPropertyList(CBat *this_ptr,CActorPropertyList *property_list);

// Original: core_bat.cpp_CBat_addFilesToExtract_FUN_00414ec0
// Address: 00414ec0
void __cdecl CBat::addFilesToExtract(CBat *this_ptr,_FILE *file_handle);

// Original: core_bat.cpp_CBat_processInEditor_FUN_00414f00
// Address: 00414f00
void __cdecl CBat::processInEditor(CBat *this_ptr);

// Original: core_bat.cpp_CBat_showEditorHelp_FUN_00414fb0
// Address: 00414fb0
void __cdecl CBat::showEditorHelp(CBat *this_ptr,int *y_pos);

// Original: core_bat.cpp_CBat_dtor_FUN_00414fe0
// Address: 00414fe0
CBat * __cdecl CBat::dtor(CBat *this_ptr,uint flags);

// Original: core_bat.cpp_FUN_00415050
// Address: 00415050
int __cdecl FUN_00415050(void);

// Original: core_bat.cpp_FUN_00415060
// Address: 00415060
int __cdecl FUN_00415060(void);

// Original: core_bat.cpp_FUN_00415070
// Address: 00415070
int __cdecl FUN_00415070(void);
