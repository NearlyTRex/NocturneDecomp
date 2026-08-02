#pragma once

// Function prototypes for core/gore.cpp
// Generated from Ghidra function signatures

// Original: core_gore.cpp_staticInit_FUN_004adf90
// Address: 004adf90
void __cdecl staticInit(void);

// Original: core_gore.cpp_CBloodParticle_setup_FUN_004ae070
// Address: 004ae070
void __cdecl CBloodParticle::setup(CBloodParticle *this_ptr,CVector3f *position,CVector3f *velocity,int blood_type);

// Original: core_gore.cpp_CBloodParticle_setupRenderState_FUN_004ae0a0
// Address: 004ae0a0
void __cdecl CBloodParticle::setupRenderState(CBloodParticle *this_ptr);

// Original: core_gore.cpp_CBloodParticle_render_FUN_004ae190
// Address: 004ae190
void CBloodParticle::render(CVector3f *param_1);

// Original: core_gore.cpp_CBloodParticle_onCollision_FUN_004ae900
// Address: 004ae900
int __cdecl CBloodParticle::onCollision(CBloodParticle *this_ptr,CVector3f *collision_normal);

// Original: core_gore.cpp_CBloodSplat_initGroundSplat_FUN_004ae960
// Address: 004ae960
void __cdecl CBloodSplat::initGroundSplat(CBloodSplat *this_ptr,CVector3f *position,int blood_type);

// Original: core_gore.cpp_CBloodSplat_initWallSplat_FUN_004aea00
// Address: 004aea00
void __cdecl CBloodSplat::initWallSplat(CBloodSplat *this_ptr,CVector3f *position,CVector3f *normal,int blood_type);

// Original: core_gore.cpp_CBloodSplat_setupRenderState_FUN_004aeae0
// Address: 004aeae0
void __cdecl CBloodSplat::setupRenderState(CBloodSplat *this_ptr);

// Original: core_gore.cpp_CBloodSplat_render_FUN_004aeb70
// Address: 004aeb70
void CBloodSplat::render(undefined4 *param_1);

// Original: core_gore.cpp_CBloodSplat_processAge_FUN_004af130
// Address: 004af130
void __cdecl CBloodSplat::processAge(CBloodSplat *this_ptr);

// Original: core_gore.cpp_CBloodSplat_load_FUN_004af160
// Address: 004af160
int __cdecl CBloodSplat::load(CBloodSplat *this_ptr,_FILE *file_handle);

// Original: core_gore.cpp_CBloodSplat_save_FUN_004af1f0
// Address: 004af1f0
int __cdecl CBloodSplat::save(CBloodSplat *this_ptr,_FILE *file_handle);

// Original: core_gore.cpp_CBloodPool_setupRenderState_FUN_004af2a0
// Address: 004af2a0
int __cdecl CBloodPool::setupRenderState(CBloodPool *this_ptr);

// Original: core_gore.cpp_CBloodPool_render_FUN_004af340
// Address: 004af340
void CBloodPool::render(undefined4 *param_1);

// Original: core_gore.cpp_CBloodPool_processAge_FUN_004af700
// Address: 004af700
void __cdecl CBloodPool::processAge(CBloodPool *this_ptr);

// Original: core_gore.cpp_CBloodPool_init_FUN_004af730
// Address: 004af730
void __cdecl CBloodPool::init(CBloodPool *this_ptr,CVector3f *position,int blood_type);

// Original: core_gore.cpp_CBloodPool_load_FUN_004af7c0
// Address: 004af7c0
int __cdecl CBloodPool::load(CBloodPool *this_ptr,_FILE *file_handle);

// Original: core_gore.cpp_CBloodPool_save_FUN_004af820
// Address: 004af820
int __cdecl CBloodPool::save(CBloodPool *this_ptr,_FILE *file_handle);

// Original: core_gore.cpp_CFootstep_init_FUN_004af8a0
// Address: 004af8a0
void __cdecl CFootstep::init(CFootstep *this_ptr,CVector3f *position,UOrientationVector *orientation,int is_bloody,int alpha,int blood_type);

// Original: core_gore.cpp_CFootstep_render_FUN_004afa20
// Address: 004afa20
void CFootstep::render(undefined4 *param_1);

// Original: core_gore.cpp_CGore_ctor_FUN_004afd80
// Address: 004afd80
CGore * __cdecl CGore::ctor(CGore *this_ptr);

// Original: core_gore.cpp_CGore_dtor_FUN_004afda0
// Address: 004afda0
CGore * __cdecl CGore::dtor(CGore *this_ptr,uint flags);

// Original: core_gore.cpp_CGore_reset_FUN_004afdb0
// Address: 004afdb0
void __cdecl CGore::reset(CGore *this_ptr);

// Original: core_gore.cpp_CGore_renderParticles_FUN_004afe00
// Address: 004afe00
void __cdecl CGore::renderParticles(CGore *this_ptr);

// Original: core_gore.cpp_CGore_renderDecals_FUN_004afe80
// Address: 004afe80
int CGore::renderDecals(undefined4 param_1,int param_2);

// Original: core_gore.cpp_CGore_process_FUN_004b0030
// Address: 004b0030
void __cdecl CGore::process(CGore *this_ptr);

// Original: core_gore.cpp_CGore_spawnBloodParticles_FUN_004b00f0
// Address: 004b00f0
void __cdecl CGore::spawnBloodParticles(CGore *this_ptr,CVector3f *position,CVector3f *velocity,int blood_type);

// Original: core_gore.cpp_CGore_allocateBloodSplat_FUN_004b0140
// Address: 004b0140
CBloodSplat * __cdecl CGore::allocateBloodSplat(CGore *this_ptr);

// Original: core_gore.cpp_CGore_createGroundBloodSplat_FUN_004b0190
// Address: 004b0190
void __cdecl CGore::createGroundBloodSplat(CGore *this_ptr,CVector3f *position,int blood_type);

// Original: core_gore.cpp_CGore_createWallBloodSplat_FUN_004b01c0
// Address: 004b01c0
void __cdecl CGore::createWallBloodSplat(CGore *this_ptr,CVector3f *position,CVector3f *normal,int blood_type);

// Original: core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200
// Address: 004b0200
void __cdecl CGore::spawnBloodBurst(CGore *this_ptr,CVector3f *position,CVector3f *direction,int count,int blood_type);

// Original: core_gore.cpp_CGore_allocateBloodPool_FUN_004b0430
// Address: 004b0430
CBloodPool * __cdecl CGore::allocateBloodPool(CGore *this_ptr);

// Original: core_gore.cpp_CGore_createBloodPool_FUN_004b0480
// Address: 004b0480
void __cdecl CGore::createBloodPool(CGore *this_ptr,CVector3f *position,int blood_type);

// Original: core_gore.cpp_CGore_loadAssets_FUN_004b04b0
// Address: 004b04b0
void __cdecl CGore::loadAssets(CGore *this_ptr);

// Original: core_gore.cpp_CGore_spawnFlies_FUN_004b0580
// Address: 004b0580
CFlies * CGore::spawnFlies(undefined4 param_1,float *param_2,int param_3,float param_4,float *param_5);

// Original: core_gore.cpp_CGore_spawnFliesOnActor_FUN_004b0670
// Address: 004b0670
void __cdecl CGore::spawnFliesOnActor(CGore *this_ptr,CDemonActor *actor,int gather_count,float spawn_rate,CVector3f *box_size);

// Original: core_gore.cpp_CGore_createFootstep_FUN_004b06b0
// Address: 004b06b0
void __cdecl CGore::createFootstep(CGore *this_ptr,CVector3f *position,UOrientationVector *orientation,int surface_type ,int alpha,int blood_type);

// Original: core_gore.cpp_CGore_findBloodTypeAtPosition_FUN_004b0730
// Address: 004b0730
int __cdecl CGore::findBloodTypeAtPosition(CGore *this_ptr,CVector3f *position,int *out_blood_type);

// Original: core_gore.cpp_CGore_load_FUN_004b0820
// Address: 004b0820
int __cdecl CGore::load(CGore *this_ptr,_FILE *file_handle);

// Original: core_gore.cpp_CGore_save_FUN_004b08d0
// Address: 004b08d0
int __cdecl CGore::save(CGore *this_ptr,_FILE *file_handle);

// Original: core_gore.cpp_CFootstep_ctor_FUN_004b09b0
// Address: 004b09b0
CFootstep * __cdecl CFootstep::ctor(CFootstep *this_ptr);

// Original: core_gore.cpp_CFootstep_dtor_FUN_004b09d0
// Address: 004b09d0
CFootstep * __cdecl CFootstep::dtor(CFootstep *this_ptr,uint flags);

// Original: core_gore.cpp_CBloodPool_ctor_FUN_004b09f0
// Address: 004b09f0
CBloodPool * __cdecl CBloodPool::ctor(CBloodPool *this_ptr);

// Original: core_gore.cpp_CBloodPool_dtor_FUN_004b0a00
// Address: 004b0a00
CBloodPool * __cdecl CBloodPool::dtor(CBloodPool *this_ptr,uint flags);

// Original: core_gore.cpp_CBloodSplat_ctor_FUN_004b0a10
// Address: 004b0a10
CBloodSplat * __cdecl CBloodSplat::ctor(CBloodSplat *this_ptr);

// Original: core_gore.cpp_CBloodSplat_dtor_FUN_004b0a20
// Address: 004b0a20
CBloodSplat * __cdecl CBloodSplat::dtor(CBloodSplat *this_ptr,uint flags);

// Original: core_gore.cpp_CBloodParticle_ctor_FUN_004b0a30
// Address: 004b0a30
CBloodParticle * __cdecl CBloodParticle::ctor(CBloodParticle *this_ptr);

// Original: core_gore.cpp_CBloodParticle_dtor_FUN_004b0a50
// Address: 004b0a50
CBloodParticle * __cdecl CBloodParticle::dtor(CBloodParticle *this_ptr,uint flags);

// Original: core_gore.cpp_FUN_004b0a60
// Address: 004b0a60
void FUN_004b0a60(void *param_1);

// Original: core_gore.cpp_FUN_004b0a80
// Address: 004b0a80
void FUN_004b0a80(void *param_1);

// Original: core_gore.cpp_FUN_004b0aa0
// Address: 004b0aa0
void FUN_004b0aa0(void *param_1);

// Original: core_gore.cpp_FUN_004b0ac0
// Address: 004b0ac0
void FUN_004b0ac0(void *param_1);
