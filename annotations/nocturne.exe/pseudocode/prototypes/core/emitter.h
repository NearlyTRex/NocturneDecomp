#pragma once

// Function prototypes for core/emitter.cpp
// Generated from Ghidra function signatures

// Original: core_emitter.cpp_staticInit_FUN_00478360
// Address: 00478360
void __cdecl staticInit(void);

// Original: core_emitter.cpp_factoryFunc_FUN_00478390
// Address: 00478390
CEmitter * __cdecl factoryFunc(void);

// Original: core_emitter.cpp_CEmitter_getActorType_FUN_004783b0
// Address: 004783b0
CDemonActorType * CEmitter::getActorType(void);

// Original: core_emitter.cpp_CEmitter_ctor_FUN_004783c0
// Address: 004783c0
CEmitter * __cdecl CEmitter::ctor(CEmitter *this_ptr);

// Original: core_emitter.cpp_CEmitter_setup_FUN_00478520
// Address: 00478520
void CEmitter::setup(CDemonActor *param_1);

// Original: core_emitter.cpp_CEmitter_launchFireballAtHero_FUN_004785a0
// Address: 004785a0
void __cdecl CEmitter::launchFireballAtHero(CEmitter *this_ptr);

// Original: core_emitter.cpp_CEmitter_process_FUN_00478790
// Address: 00478790
void CEmitter::process(CEmitter *param_1,float param_2);

// Original: core_emitter.cpp_CEmitter_renderOpaque_FUN_00478f80
// Address: 00478f80
undefined4 CEmitter::renderOpaque(CDemonActor *param_1);

// Original: core_emitter.cpp_CEmitter_renderBackground_FUN_004790f0
// Address: 004790f0
void CEmitter::renderBackground(CDemonActor *param_1,int param_2);

// Original: core_emitter.cpp_CEmitter_getBoundingBox_FUN_00479140
// Address: 00479140
void CEmitter::getBoundingBox(int param_1,float *param_2);

// Original: core_emitter.cpp_CEmitter_archive_FUN_004791a0
// Address: 004791a0
void CEmitter::archive(CDemonActor *param_1);

// Original: core_emitter.cpp_CEmitter_getCollisionType_FUN_00479380
// Address: 00479380
undefined4 CEmitter::getCollisionType(void);

// Original: core_emitter.cpp_CEmitter_getRandomBoundingBoxPoint_FUN_00479390
// Address: 00479390
CVector3f * __cdecl CEmitter::getRandomBoundingBoxPoint(CEmitter *this_ptr,CVector3f *out_point);

// Original: core_emitter.cpp_CEmitter_dtor_FUN_00479420
// Address: 00479420
CEmitter * __cdecl CEmitter::dtor(CEmitter *this_ptr,uint flags);

// Original: core_emitter.cpp_SLaserInfo_copy_FUN_00479470
// Address: 00479470
void __cdecl SLaserInfo::copy(SLaserInfo *this_ptr,SLaserInfo *copy);

// Original: core_emitter.cpp_SLaserInfo_dtor_FUN_00479520
// Address: 00479520
SLaserInfo * __cdecl SLaserInfo::dtor(SLaserInfo *this_ptr,uint flags);
