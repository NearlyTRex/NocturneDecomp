#pragma once

// Function prototypes for core/gore.cpp
// Generated from Ghidra function signatures

// Original: core_gore.cpp_CBloodParticle_setup_FUN_004ae070
// Address: 004ae070
void __cdecl CBloodParticle::setup(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);

// Original: core_gore.cpp_CBloodParticle_setupRenderState_FUN_004ae0a0
// Address: 004ae0a0
void CBloodParticle::setupRenderState(void);

// Original: core_gore.cpp_CBloodParticle_render_FUN_004ae190
// Address: 004ae190
void CBloodParticle::render(float *param_1);

// Original: core_gore.cpp_CBloodParticle_onCollision_FUN_004ae900
// Address: 004ae900
undefined4 CBloodParticle::onCollision(int param_1,int param_2);

// Original: core_gore.cpp_CBloodSplat_initGroundSplat_FUN_004ae960
// Address: 004ae960
void __cdecl CBloodSplat::initGroundSplat(undefined4 *param_1,float *param_2,undefined4 param_3);

// Original: core_gore.cpp_CBloodSplat_initWallSplat_FUN_004aea00
// Address: 004aea00
void __cdecl CBloodSplat::initWallSplat(undefined4 *param_1,float *param_2,float *param_3);

// Original: core_gore.cpp_CBloodSplat_setupRenderState_FUN_004aeae0
// Address: 004aeae0
void __cdecl CBloodSplat::setupRenderState(void);

// Original: core_gore.cpp_CBloodSplat_render_FUN_004aeb70
// Address: 004aeb70
void CBloodSplat::render(undefined4 *param_1);

// Original: core_gore.cpp_CBloodSplat_processAge_FUN_004af130
// Address: 004af130
void __cdecl CBloodSplat::processAge(int param_1);

// Original: core_gore.cpp_CBloodSplat_load_FUN_004af160
// Address: 004af160
void CBloodSplat::load(int param_1,undefined4 param_2);

// Original: core_gore.cpp_CBloodSplat_save_FUN_004af1f0
// Address: 004af1f0
void CBloodSplat::save(int param_1,undefined4 param_2);

// Original: core_gore.cpp_CBloodPool_setupRenderState_FUN_004af2a0
// Address: 004af2a0
void __cdecl CBloodPool::setupRenderState(void);

// Original: core_gore.cpp_CBloodPool_render_FUN_004af340
// Address: 004af340
void CBloodPool::render(undefined4 *param_1);

// Original: core_gore.cpp_CBloodPool_processAge_FUN_004af700
// Address: 004af700
void __cdecl CBloodPool::processAge(int param_1);

// Original: core_gore.cpp_CBloodPool_init_FUN_004af730
// Address: 004af730
void __cdecl CBloodPool::init(int param_1,undefined4 *param_2,undefined4 param_3);

// Original: core_gore.cpp_CBloodPool_load_FUN_004af7c0
// Address: 004af7c0
void CBloodPool::load(int param_1,undefined4 param_2);

// Original: core_gore.cpp_CBloodPool_save_FUN_004af820
// Address: 004af820
void CBloodPool::save(undefined4 *param_1,undefined4 param_2);

// Original: core_gore.cpp_CFootstep_init_FUN_004af8a0
// Address: 004af8a0
void __cdecl CFootstep::init(undefined4 *param_1,float *param_2,int param_3,undefined4 param_4,undefined4 param_5 ,undefined4 param_6);

// Original: core_gore.cpp_CFootstep_render_FUN_004afa20
// Address: 004afa20
void CFootstep::render(undefined4 *param_1);

// Original: core_gore.cpp_CGore_reset_FUN_004afdb0
// Address: 004afdb0
void __cdecl CGore::reset(void);

// Original: core_gore.cpp_CGore_renderParticles_FUN_004afe00
// Address: 004afe00
void __cdecl CGore::renderParticles(void);

// Original: core_gore.cpp_CGore_process_FUN_004b0030
// Address: 004b0030
undefined4 __cdecl CGore::process(void);

// Original: core_gore.cpp_CGore_spawnBloodParticles_FUN_004b00f0
// Address: 004b00f0
void __cdecl CGore::spawnBloodParticles(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4);

// Original: core_gore.cpp_CGore_allocateBloodSplat_FUN_004b0140
// Address: 004b0140
int __cdecl CGore::allocateBloodSplat(void);

// Original: core_gore.cpp_CGore_createGroundBloodSplat_FUN_004b0190
// Address: 004b0190
void __cdecl CGore::createGroundBloodSplat(undefined4 param_1,undefined4 param_2,int param_3);

// Original: core_gore.cpp_CGore_createWallBloodSplat_FUN_004b01c0
// Address: 004b01c0
void __cdecl CGore::createWallBloodSplat(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4);

// Original: core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200
// Address: 004b0200
void __cdecl CGore::spawnBloodBurst(undefined4 param_1,undefined4 param_2,float *param_3,int param_4,int param_5);

// Original: core_gore.cpp_CGore_allocateBloodPool_FUN_004b0430
// Address: 004b0430
int __cdecl CGore::allocateBloodPool(void);

// Original: core_gore.cpp_CGore_loadAssets_FUN_004b04b0
// Address: 004b04b0
void __cdecl CGore::loadAssets(void);

// Original: core_gore.cpp_CGore_spawnFlies_FUN_004b0580
// Address: 004b0580
int CGore::spawnFlies(undefined4 param_1,undefined4 *param_2,undefined4 param_3,float param_4,undefined4 *param_5);

// Original: core_gore.cpp_CGore_spawnFliesOnActor_FUN_004b0670
// Address: 004b0670
void __cdecl CGore::spawnFliesOnActor(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);

// Original: core_gore.cpp_CGore_createFootstep_FUN_004b06b0
// Address: 004b06b0
void CGore::createFootstep(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,undefined4 param_6);

// Original: core_gore.cpp_CGore_findBloodTypeAtPosition_FUN_004b0730
// Address: 004b0730
undefined4 __cdecl CGore::findBloodTypeAtPosition(undefined4 param_1,float *param_2,undefined4 *param_3);

// Original: core_gore.cpp_CGore_load_FUN_004b0820
// Address: 004b0820
undefined4 __cdecl CGore::load(undefined4 param_1,undefined4 param_2);

// Original: core_gore.cpp_CGore_save_FUN_004b08d0
// Address: 004b08d0
undefined4 __cdecl CGore::save(undefined4 param_1,undefined4 param_2);

// Original: core_gore.cpp_CFootstep_ctor_FUN_004b09b0
// Address: 004b09b0
int CFootstep::ctor(int param_1);

// Original: core_gore.cpp_CFootstep_dtor_FUN_004b09d0
// Address: 004b09d0
int CFootstep::dtor(int param_1);
