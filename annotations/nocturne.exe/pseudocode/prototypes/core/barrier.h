#pragma once

// Function prototypes for core/barrier.cpp
// Generated from Ghidra function signatures

// Original: core_barrier.cpp_staticInit_FUN_004116b0
// Address: 004116b0
void __cdecl staticInit(void);

// Original: core_barrier.cpp_factoryFuncBarrier_FUN_004116e0
// Address: 004116e0
CBarrier * __cdecl factoryFuncBarrier(void);

// Original: core_barrier.cpp_CBarrier_getActorType_FUN_00411700
// Address: 00411700
CDemonActorType * __cdecl CBarrier::getActorType(CBarrier *this_ptr);

// Original: core_barrier.cpp_CBarrier_ctor_FUN_00411710
// Address: 00411710
CBarrier * __cdecl CBarrier::ctor(CBarrier *this_ptr);

// Original: core_barrier.cpp_CBarrier_setup_FUN_00411760
// Address: 00411760
void __cdecl CBarrier::setup(CBarrier *this_ptr);

// Original: core_barrier.cpp_CBarrier_renderTransparent_FUN_00411790
// Address: 00411790
int __cdecl CBarrier::renderTransparent(CBarrier *this_ptr);

// Original: core_barrier.cpp_CBarrier_getBoundingBox_FUN_004117a0
// Address: 004117a0
CBoundingBox3D * __cdecl CBarrier::getBoundingBox(CBarrier *this_ptr,CBoundingBox3D *out_box);

// Original: core_barrier.cpp_CBarrier_archive_FUN_00411800
// Address: 00411800
void __cdecl CBarrier::archive(CBarrier *this_ptr);

// Original: core_barrier.cpp_CBarrier_getCollisionType_FUN_00411860
// Address: 00411860
ECollisionType __cdecl CBarrier::getCollisionType(CBarrier *this_ptr,SCollisionInfo *collision_info);

// Original: core_barrier.cpp_CBarrier_updateCollisionData_FUN_004118a0
// Address: 004118a0
void __cdecl CBarrier::updateCollisionData(CBarrier *this_ptr);

// Original: core_barrier.cpp_CBarrier_dtor_FUN_004118c0
// Address: 004118c0
CBarrier * __cdecl CBarrier::dtor(CBarrier *this_ptr,uint flags);
