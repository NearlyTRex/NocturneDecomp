#pragma once

// Function prototypes for core/boxactor.cpp
// Generated from Ghidra function signatures

// Original: core_boxactor.cpp_staticInit_FUN_0041e260
// Address: 0041e260
void __cdecl staticInit(void);

// Original: core_boxactor.cpp_factoryFunc_FUN_0041e2d0
// Address: 0041e2d0
CBoxActor * __cdecl factoryFunc(void);

// Original: core_boxactor.cpp_CBoxActor_getActorType_FUN_0041e2f0
// Address: 0041e2f0
CDemonActorType * __cdecl CBoxActor::getActorType(CBoxActor *this_ptr);

// Original: core_boxactor.cpp_CBoxActor_ctor_FUN_0041e300
// Address: 0041e300
CBoxActor * __cdecl CBoxActor::ctor(CBoxActor *this_ptr);

// Original: core_boxactor.cpp_CBoxActor_setup_FUN_0041e430
// Address: 0041e430
void __cdecl CBoxActor::setup(CBoxActor *this_ptr);

// Original: core_boxactor.cpp_CBoxActor_setupPhysicsBox_FUN_0041e4d0
// Address: 0041e4d0
void __cdecl CBoxActor::setupPhysicsBox(CBoxActor *this_ptr);

// Original: core_boxactor.cpp_CBoxActor_process_FUN_0041e5e0
// Address: 0041e5e0
void __cdecl CBoxActor::process(CBoxActor *this_ptr,float delta_time);

// Original: core_boxactor.cpp_CBoxActor_renderOpaque_FUN_0041ea00
// Address: 0041ea00
int CBoxActor::renderOpaque(int param_1);

// Original: core_boxactor.cpp_CBoxActor_renderTransparent_FUN_0041eaf0
// Address: 0041eaf0
int CBoxActor::renderTransparent(int param_1);

// Original: core_boxactor.cpp_CBoxActor_getBoundingBox_FUN_0041ebe0
// Address: 0041ebe0
float * CBoxActor::getBoundingBox(int param_1,float *param_2);

// Original: core_boxactor.cpp_CBoxActor_archive_FUN_0041ec60
// Address: 0041ec60
void __cdecl CBoxActor::archive(CBoxActor *this_ptr);

// Original: core_boxactor.cpp_CBoxActor_getBlockVirtualDirectorFlag_FUN_0041ef30
// Address: 0041ef30
undefined4 CBoxActor::getBlockVirtualDirectorFlag(int param_1);

// Original: core_boxactor.cpp_CBoxActor_getCollisionType_FUN_0041ef40
// Address: 0041ef40
undefined4 CBoxActor::getCollisionType(int param_1,int param_2);

// Original: core_boxactor.cpp_CBoxActor_resolveRayPush_FUN_0041ef90
// Address: 0041ef90
void __cdecl CBoxActor::resolveRayPush(CBoxActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction);

// Original: core_boxactor.cpp_CBoxActor_canPickup_FUN_0041f0b0
// Address: 0041f0b0
undefined4 CBoxActor::canPickup(int param_1,CDemonActor *param_2);

// Original: core_boxactor.cpp_CBoxActor_pickup_FUN_0041f0e0
// Address: 0041f0e0
void CBoxActor::pickup(int param_1,undefined4 param_2);

// Original: core_boxactor.cpp_CBoxActor_onDropped_FUN_0041f0f0
// Address: 0041f0f0
void CBoxActor::onDropped(CBoxActor *param_1,CVector3f *param_2);

// Original: core_boxactor.cpp_CBoxActor_getCarrier_FUN_0041f150
// Address: 0041f150
undefined4 CBoxActor::getCarrier(int param_1);

// Original: core_boxactor.cpp_CBoxActor_getGroundType_FUN_0041f160
// Address: 0041f160
undefined4 CBoxActor::getGroundType(int param_1);

// Original: core_boxactor.cpp_CBoxActor_onPickup_FUN_0041f170
// Address: 0041f170
void CBoxActor::onPickup(CDemonActor *param_1,CDemonActor *param_2);

// Original: core_boxactor.cpp_FUN_0041f190
// Address: 0041f190
void __cdecl FUN_0041f190(CBoxActor *this_ptr);

// Original: core_boxactor.cpp_CBoxActor_setPositionAndOrientation_FUN_0041f240
// Address: 0041f240
void CBoxActor::setPositionAndOrientation(CBoxActor *param_1,float *param_2,float *param_3);

// Original: core_boxactor.cpp_CBoxActor_getAllowedMeleeAttackTypes_FUN_0041f2d0
// Address: 0041f2d0
int __cdecl CBoxActor::getAllowedMeleeAttackTypes(CBoxActor *this_ptr);

// Original: core_boxactor.cpp_factoryFunc_FUN_0041f2e0
// Address: 0041f2e0
CLightActor * __cdecl factoryFunc(void);

// Original: core_boxactor.cpp_CLightActor_getActorType_FUN_0041f300
// Address: 0041f300
CDemonActorType * CLightActor::getActorType(void);

// Original: core_boxactor.cpp_CLightActor_ctor_FUN_0041f310
// Address: 0041f310
CLightActor * __cdecl CLightActor::ctor(CLightActor *this_ptr);

// Original: core_boxactor.cpp_CLightActor_setup_FUN_0041f3a0
// Address: 0041f3a0
void CLightActor::setup(CLightActor *param_1);

// Original: core_boxactor.cpp_CLightActor_process_FUN_0041f3d0
// Address: 0041f3d0
void CLightActor::process(CBoxActor *param_1,float param_2);

// Original: core_boxactor.cpp_CLightActor_archive_FUN_0041f600
// Address: 0041f600
void CLightActor::archive(CBoxActor *param_1);

// Original: core_boxactor.cpp_FUN_0041f6e0
// Address: 0041f6e0
void __cdecl FUN_0041f6e0(CLightActor *this_ptr);

// Original: core_boxactor.cpp_CLightActor_isLightPartVisible_FUN_0041f9f0
// Address: 0041f9f0
int __cdecl CLightActor::isLightPartVisible(CLightActor *this_ptr);

// Original: core_boxactor.cpp_CLightActor_dtor_FUN_0041fa10
// Address: 0041fa10
CLightActor * __cdecl CLightActor::dtor(CLightActor *this_ptr,uint flags);

// Original: core_boxactor.cpp_CBoxActor_dtor_FUN_0041fa90
// Address: 0041fa90
CBoxActor * __cdecl CBoxActor::dtor(CBoxActor *this_ptr,uint flags);

// Original: core_boxactor.cpp_CDemonFilter_arrdtor_FUN_0041fb00
// Address: 0041fb00
CDemonFilter * __cdecl CDemonFilter::arrdtor(CDemonFilter *this_ptr,uint flags);
