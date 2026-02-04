#pragma once

// Function prototypes for core/conveyor.cpp
// Generated from Ghidra function signatures

// Original: core_conveyor.cpp_staticInit_FUN_00441c30
// Address: 00441c30
void __cdecl staticInit(void);

// Original: core_conveyor.cpp_factoryFunc_FUN_00441c60
// Address: 00441c60
CConveyor * __cdecl factoryFunc(void);

// Original: core_conveyor.cpp_CConveyor_getActorType_FUN_00441c90
// Address: 00441c90
CDemonActorType * __cdecl CConveyor::getActorType(CConveyor *this_ptr);

// Original: core_conveyor.cpp_CConveyor_ctor_FUN_00441ca0
// Address: 00441ca0
CConveyor * __cdecl CConveyor::ctor(CConveyor *this_ptr);

// Original: core_conveyor.cpp_CConveyor_setup_FUN_00441d60
// Address: 00441d60
void __cdecl CConveyor::setup(CConveyor *this_ptr);

// Original: core_conveyor.cpp_CConveyor_process_FUN_00441df0
// Address: 00441df0
void __cdecl CConveyor::process(CConveyor *this_ptr,float delta_time);

// Original: core_conveyor.cpp_CConveyor_renderOpaque_FUN_00441f40
// Address: 00441f40
int __cdecl CConveyor::renderOpaque(CConveyor *this_ptr);

// Original: core_conveyor.cpp_CConveyor_renderBackground_FUN_00441f50
// Address: 00441f50
void __cdecl CConveyor::renderBackground(CConveyor *this_ptr,int layer_flag);

// Original: core_conveyor.cpp_CConveyor_renderTransparent_FUN_00441f60
// Address: 00441f60
int __cdecl CConveyor::renderTransparent(CConveyor *this_ptr);

// Original: core_conveyor.cpp_CConveyor_archive_FUN_00442020
// Address: 00442020
void __cdecl CConveyor::archive(CConveyor *this_ptr);

// Original: core_conveyor.cpp_CConveyor_hasCollision_FUN_004420c0
// Address: 004420c0
int __cdecl CConveyor::hasCollision(CConveyor *this_ptr,SCollisionInfo *collision_info);

// Original: core_conveyor.cpp_CConveyor_getBoundingBox_FUN_004420d0
// Address: 004420d0
CBoundingBox3D * __cdecl CConveyor::getBoundingBox(CConveyor *this_ptr,CBoundingBox3D *out_box);

// Original: core_conveyor.cpp_CConveyor_getPropertyList_FUN_00442130
// Address: 00442130
void __cdecl CConveyor::getPropertyList(CConveyor *this_ptr,CActorPropertyList *property_list);

// Original: core_conveyor.cpp_CConveyor_processInEditor_FUN_004421c0
// Address: 004421c0
void __cdecl CConveyor::processInEditor(CConveyor *this_ptr);

// Original: core_conveyor.cpp_CConveyor_addFilesToExtract_FUN_004422f0
// Address: 004422f0
void __cdecl CConveyor::addFilesToExtract(CConveyor *this_ptr,_FILE *file_handle);

// Original: core_conveyor.cpp_CConveyor_dtor_FUN_00442310
// Address: 00442310
CConveyor * __cdecl CConveyor::dtor(CConveyor *this_ptr,uint flags);

// Original: core_conveyor.cpp_CPlatform_dtor_FUN_00442380
// Address: 00442380
CPlatform * __cdecl CPlatform::dtor(CPlatform *this_ptr,uint flags);

// Original: core_conveyor.cpp_FUN_004423f0
// Address: 004423f0
int __cdecl FUN_004423f0(void);

// Original: core_conveyor.cpp_FUN_00442400
// Address: 00442400
float __cdecl FUN_00442400(void);

// Original: core_conveyor.cpp_FUN_004424a0
// Address: 004424a0
void __cdecl FUN_004424a0(void);
