#pragma once

// Function prototypes for core/gore.cpp
// Generated from Ghidra function signatures

// Original: core_gore.cpp_staticInit_FUN_004eb8c0
// Address: 004eb8c0
void __cdecl staticInit(void);

// Original: core_gore.cpp_getBloodColorParams_FUN_004eb950
// Address: 004eb950
void __cdecl getBloodColorParams(int blood_type,int *out_light,int *out_color,int *out_fog);

// Original: core_gore.cpp_CBloodParticle_setup_FUN_004eb9a0
// Address: 004eb9a0
void __cdecl CBloodParticle::setup(CBloodParticle *this_ptr,CVector3f *position,CVector3f *velocity,int blood_type);

// Original: core_gore.cpp_CBloodParticle_setupRenderState_FUN_004eb9d0
// Address: 004eb9d0
void __cdecl CBloodParticle::setupRenderState(CBloodParticle *this_ptr);

// Original: core_gore.cpp_CBloodParticle_render_FUN_004ebac0
// Address: 004ebac0
void __cdecl CBloodParticle::render(CBloodParticle *this_ptr);

// Original: core_gore.cpp_CBloodParticle_onCollision_FUN_004ec290
// Address: 004ec290
int __cdecl CBloodParticle::onCollision(CBloodParticle *this_ptr,CVector3f *collision_normal);

// Original: core_gore.cpp_CBloodSplat_initGroundSplat_FUN_004ec2f0
// Address: 004ec2f0
void __cdecl CBloodSplat::initGroundSplat(CBloodSplat *this_ptr,CVector3f *position,int blood_type);

// Original: core_gore.cpp_CBloodSplat_initWallSplat_FUN_004ec390
// Address: 004ec390
void __cdecl CBloodSplat::initWallSplat(CBloodSplat *this_ptr,CVector3f *position,CVector3f *normal,int blood_type);

// Original: core_gore.cpp_CBloodSplat_setupRenderState_FUN_004ec470
// Address: 004ec470
void __cdecl CBloodSplat::setupRenderState(CBloodSplat *this_ptr);

// Original: core_gore.cpp_CBloodSplat_render_FUN_004ec500
// Address: 004ec500
void __cdecl CBloodSplat::render(CBloodSplat *this_ptr,int expire_flag);

// Original: core_gore.cpp_CBloodSplat_processAge_FUN_004ecad0
// Address: 004ecad0
void __cdecl CBloodSplat::processAge(CBloodSplat *this_ptr);

// Original: core_gore.cpp_CBloodSplat_load_FUN_004ecb00
// Address: 004ecb00
int __cdecl CBloodSplat::load(CBloodSplat *this_ptr,_FILE *file_handle);

// Original: core_gore.cpp_CBloodSplat_save_FUN_004ecb90
// Address: 004ecb90
int __cdecl CBloodSplat::save(CBloodSplat *this_ptr,_FILE *file_handle);

// Original: core_gore.cpp_CBloodPool_setupRenderState_FUN_004ecc40
// Address: 004ecc40
void __cdecl CBloodPool::setupRenderState(CBloodPool *this_ptr);

// Original: core_gore.cpp_CBloodPool_render_FUN_004ecce0
// Address: 004ecce0
void __cdecl CBloodPool::render(CBloodPool *this_ptr,int expire_flag);

// Original: core_gore.cpp_CBloodPool_processAge_FUN_004ed0a0
// Address: 004ed0a0
void __cdecl CBloodPool::processAge(CBloodPool *this_ptr);

// Original: core_gore.cpp_CBloodPool_init_FUN_004ed0d0
// Address: 004ed0d0
void __cdecl CBloodPool::init(CBloodPool *this_ptr,CVector3f *position,int blood_type);

// Original: core_gore.cpp_CBloodPool_load_FUN_004ed160
// Address: 004ed160
int __cdecl CBloodPool::load(CBloodPool *this_ptr,_FILE *file_handle);

// Original: core_gore.cpp_CBloodPool_save_FUN_004ed1c0
// Address: 004ed1c0
int __cdecl CBloodPool::save(CBloodPool *this_ptr,_FILE *file_handle);

// Original: core_gore.cpp_CFootstep_init_FUN_004ed240
// Address: 004ed240
void __cdecl CFootstep::init(CFootstep *this_ptr,CVector3f *position,UOrientationVector *orientation,int is_bloody,int alpha,int blood_type);

// Original: core_gore.cpp_CFootstep_render_FUN_004ed3c0
// Address: 004ed3c0
void __cdecl CFootstep::render(CFootstep *this_ptr,int expire_flag);

// Original: core_gore.cpp_CGore_ctor_FUN_004ed730
// Address: 004ed730
CGore * __cdecl CGore::ctor(CGore *this_ptr);

// Original: core_gore.cpp_CGore_dtor_FUN_004ed750
// Address: 004ed750
CGore * __cdecl CGore::dtor(CGore *this_ptr,uint flags);

// Original: core_gore.cpp_CGore_reset_FUN_004ed760
// Address: 004ed760
void __cdecl CGore::reset(CGore *this_ptr);

// Original: core_gore.cpp_CGore_renderParticles_FUN_004ed7b0
// Address: 004ed7b0
void __cdecl CGore::renderParticles(CGore *this_ptr);

// Original: core_gore.cpp_CGore_renderDecals_FUN_004ed830
// Address: 004ed830
void __cdecl CGore::renderDecals(CGore *this_ptr,int render_all,int expire_flag);

// Original: core_gore.cpp_CGore_process_FUN_004ed9e0
// Address: 004ed9e0
int __cdecl CGore::process(CGore *this_ptr);

// Original: core_gore.cpp_CGore_spawnBloodParticles_FUN_004edaa0
// Address: 004edaa0
void __cdecl CGore::spawnBloodParticles(CGore *this_ptr,CVector3f *position,CVector3f *velocity,int blood_type);

// Original: core_gore.cpp_CGore_allocateBloodSplat_FUN_004edaf0
// Address: 004edaf0
CBloodSplat * __cdecl CGore::allocateBloodSplat(CGore *this_ptr);

// Original: core_gore.cpp_CGore_createGroundBloodSplat_FUN_004edb40
// Address: 004edb40
void __cdecl CGore::createGroundBloodSplat(CGore *this_ptr,CVector3f *position,int blood_type);

// Original: core_gore.cpp_CGore_createWallBloodSplat_FUN_004edb70
// Address: 004edb70
void __cdecl CGore::createWallBloodSplat(CGore *this_ptr,CVector3f *position,CVector3f *normal,int blood_type);

// Original: core_gore.cpp_CGore_spawnBloodBurst_FUN_004edbb0
// Address: 004edbb0
void __cdecl CGore::spawnBloodBurst(CGore *this_ptr,CVector3f *position,CVector3f *direction,int count,int blood_type);

// Original: core_gore.cpp_CGore_allocateBloodPool_FUN_004edde0
// Address: 004edde0
CBloodPool * __cdecl CGore::allocateBloodPool(CGore *this_ptr);

// Original: core_gore.cpp_CGore_createBloodPool_FUN_004ede30
// Address: 004ede30
void __cdecl CGore::createBloodPool(CGore *this_ptr,CVector3f *position,int blood_type);

// Original: core_gore.cpp_CGore_loadAssets_FUN_004ede60
// Address: 004ede60
void __cdecl CGore::loadAssets(CGore *this_ptr);

// Original: core_gore.cpp_CGore_spawnFlies_FUN_004edf30
// Address: 004edf30
CFlies * __cdecl CGore::spawnFlies(CGore *this_ptr,CVector3f *position,int gather_count,float spawn_rate,CVector3f *box_size);

// Original: core_gore.cpp_CGore_spawnFliesOnActor_FUN_004ee030
// Address: 004ee030
void __cdecl CGore::spawnFliesOnActor(CGore *this_ptr,CDemonActor *actor,int gather_count,float spawn_rate,CVector3f *box_size);

// Original: core_gore.cpp_CGore_createFootstep_FUN_004ee070
// Address: 004ee070
void __cdecl CGore::createFootstep(CGore *this_ptr,CVector3f *position,UOrientationVector *orientation,int surface_type ,int alpha,int blood_type);

// Original: core_gore.cpp_CGore_findBloodTypeAtPosition_FUN_004ee0f0
// Address: 004ee0f0
int __cdecl CGore::findBloodTypeAtPosition(CGore *this_ptr,CVector3f *position,int *out_blood_type);

// Original: core_gore.cpp_CGore_load_FUN_004ee1e0
// Address: 004ee1e0
int __cdecl CGore::load(CGore *this_ptr,_FILE *file_handle);

// Original: core_gore.cpp_CGore_save_FUN_004ee290
// Address: 004ee290
int __cdecl CGore::save(CGore *this_ptr,_FILE *file_handle);

// Original: core_gore.cpp_convertVecFloatToFixed_FUN_004ee340
// Address: 004ee340
CVector3f * __cdecl convertVecFloatToFixed(CVector3f *src,CVector3i *dst);

// Original: core_gore.cpp_CFootstep_ctor_FUN_004ee370
// Address: 004ee370
CFootstep * __cdecl CFootstep::ctor(CFootstep *this_ptr);

// Original: core_gore.cpp_CFootstep_dtor_FUN_004ee390
// Address: 004ee390
CFootstep * __cdecl CFootstep::dtor(CFootstep *this_ptr,uint flags);

// Original: core_gore.cpp_CBloodPool_ctor_FUN_004ee3b0
// Address: 004ee3b0
CBloodPool * __cdecl CBloodPool::ctor(CBloodPool *this_ptr);

// Original: core_gore.cpp_CBloodPool_dtor_FUN_004ee3c0
// Address: 004ee3c0
CBloodPool * __cdecl CBloodPool::dtor(CBloodPool *this_ptr,uint flags);

// Original: core_gore.cpp_CBloodSplat_ctor_FUN_004ee3d0
// Address: 004ee3d0
CBloodSplat * __cdecl CBloodSplat::ctor(CBloodSplat *this_ptr);

// Original: core_gore.cpp_CBloodSplat_dtor_FUN_004ee3e0
// Address: 004ee3e0
CBloodSplat * __cdecl CBloodSplat::dtor(CBloodSplat *this_ptr,uint flags);

// Original: core_gore.cpp_CBloodParticle_ctor_FUN_004ee3f0
// Address: 004ee3f0
CBloodParticle * __cdecl CBloodParticle::ctor(CBloodParticle *this_ptr);

// Original: core_gore.cpp_CBloodParticle_dtor_FUN_004ee410
// Address: 004ee410
CBloodParticle * __cdecl CBloodParticle::dtor(CBloodParticle *this_ptr,uint flags);

// Original: core_gore.cpp_CFootstep_arrdtor_FUN_004ee420
// Address: 004ee420
CFootstep * __cdecl CFootstep::arrdtor(CFootstep *objs,uint flags);

// Original: core_gore.cpp_CBloodPool_arrdtor_FUN_004ee440
// Address: 004ee440
CBloodPool * __cdecl CBloodPool::arrdtor(CBloodPool *objs,uint flags);

// Original: core_gore.cpp_CBloodSplat_arrdtor_FUN_004ee460
// Address: 004ee460
CBloodSplat * __cdecl CBloodSplat::arrdtor(CBloodSplat *objs,uint flags);

// Original: core_gore.cpp_CBloodParticle_arrdtor_FUN_004ee480
// Address: 004ee480
CBloodParticle * __cdecl CBloodParticle::arrdtor(CBloodParticle *objs,uint flags);
