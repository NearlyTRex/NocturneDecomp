#pragma once

// Function prototypes for core/barrier.cpp
// Generated from Ghidra function signatures

// Original: core_barrier.cpp_staticInit_FUN_00414150
// Address: 00414150
void __cdecl staticInit(void);

// Original: core_barrier.cpp_factoryFuncBarrier_FUN_00414180
// Address: 00414180
CBarrier * __cdecl factoryFuncBarrier(void);

// Original: core_barrier.cpp_CBarrier_getActorType_FUN_004141b0
// Address: 004141b0
CDemonActorType * __cdecl CBarrier::getActorType(CBarrier *this_ptr);

// Original: core_barrier.cpp_CBarrier_ctor_FUN_004141c0
// Address: 004141c0
CBarrier * __cdecl CBarrier::ctor(CBarrier *this_ptr);

// Original: core_barrier.cpp_CBarrier_setup_FUN_00414210
// Address: 00414210
void __cdecl CBarrier::setup(CBarrier *this_ptr);

// Original: core_barrier.cpp_CBarrier_renderTransparent_FUN_00414240
// Address: 00414240
int __cdecl CBarrier::renderTransparent(CBarrier *this_ptr);

// Original: core_barrier.cpp_CBarrier_getBoundingBox_FUN_004142e0
// Address: 004142e0
CBoundingBox3D * __cdecl CBarrier::getBoundingBox(CBarrier *this_ptr,CBoundingBox3D *out_box);

// Original: core_barrier.cpp_CBarrier_archive_FUN_00414340
// Address: 00414340
void __cdecl CBarrier::archive(CBarrier *this_ptr);

// Original: core_barrier.cpp_CBarrier_getCollisionType_FUN_004143a0
// Address: 004143a0
ECollisionType __cdecl CBarrier::getCollisionType(CBarrier *this_ptr,SCollisionInfo *collision_info);

// Original: core_barrier.cpp_CBarrier_updateCollisionData_FUN_004143e0
// Address: 004143e0
void __cdecl CBarrier::updateCollisionData(CBarrier *this_ptr);

// Original: core_barrier.cpp_CBarrier_getPropertyList_FUN_00414400
// Address: 00414400
void __cdecl CBarrier::getPropertyList(CBarrier *this_ptr,CActorPropertyList *property_list);

// Original: core_barrier.cpp_CBarrier_processInEditor_FUN_00414460
// Address: 00414460
void __cdecl CBarrier::processInEditor(CBarrier *this_ptr);

// Original: core_barrier.cpp_CBarrier_showEditorHelp_FUN_00414610
// Address: 00414610
void __cdecl CBarrier::showEditorHelp(CBarrier *this_ptr,int *y_pos);

// Original: core_barrier.cpp_CBarrier_dtor_FUN_00414670
// Address: 00414670
CBarrier * __cdecl CBarrier::dtor(CBarrier *this_ptr,uint flags);
