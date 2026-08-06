#pragma once

// Function prototypes for core/flies.cpp
// Generated from Ghidra function signatures

// Original: core_flies.cpp_staticInit_FUN_0048ee90
// Address: 0048ee90
void __cdecl staticInit(void);

// Original: core_flies.cpp_factoryFunc_FUN_0048eec0
// Address: 0048eec0
CFlies * __cdecl factoryFunc(void);

// Original: core_flies.cpp_CFlies_getActorType_FUN_0048eee0
// Address: 0048eee0
CDemonActorType * __cdecl CFlies::getActorType(CFlies *this_ptr);

// Original: core_flies.cpp_CFlies_ctor_FUN_0048eef0
// Address: 0048eef0
CFlies * __cdecl CFlies::ctor(CFlies *this_ptr);

// Original: core_flies.cpp_CFlies_setup_FUN_0048efb0
// Address: 0048efb0
void __cdecl CFlies::setup(CFlies *this_ptr);

// Original: core_flies.cpp_CFlies_archive_FUN_0048eff0
// Address: 0048eff0
void __cdecl CFlies::archive(CFlies *this_ptr);

// Original: core_flies.cpp_CFlies_process_FUN_0048f090
// Address: 0048f090
void __cdecl CFlies::process(CFlies *this_ptr,float delta_time);

// Original: core_flies.cpp_drawFlyPixel_FUN_0048f3c0
// Address: 0048f3c0
void __cdecl drawFlyPixel(int screen_x,int screen_y,int z_depth);

// Original: core_flies.cpp_CFlies_renderOpaque_FUN_0048f490
// Address: 0048f490
int __cdecl CFlies::renderOpaque(CFlies *this_ptr);

// Original: core_flies.cpp_CFlies_getBoundingBox_FUN_0048f890
// Address: 0048f890
CBoundingBox3D * __cdecl CFlies::getBoundingBox(CFlies *this_ptr,CBoundingBox3D *out_box);

// Original: core_flies.cpp_CFlies_getCollisionType_FUN_0048f8e0
// Address: 0048f8e0
ECollisionType __cdecl CFlies::getCollisionType(CFlies *this_ptr,SCollisionInfo *collision_info);

// Original: core_flies.cpp_CFlies_initFly_FUN_0048f8f0
// Address: 0048f8f0
void __cdecl CFlies::initFly(CFlies *this_ptr,int fly_index);

// Original: core_flies.cpp_CFlies_generateRandomPoint_FUN_0048f9b0
// Address: 0048f9b0
CVector3f * __cdecl CFlies::generateRandomPoint(CFlies *this_ptr,CVector3f *out_point,CVector3f *reference_point);

// Original: core_flies.cpp_findFliesByFollowActor_FUN_0048fbe0
// Address: 0048fbe0
CFlies * __cdecl findFliesByFollowActor(CDemonActor *actor);

// Original: core_flies.cpp_CFlies_dtor_FUN_0048fc30
// Address: 0048fc30
CFlies * __cdecl CFlies::dtor(CFlies *this_ptr,uint flags);

// Original: core_flies.cpp_SFly_ctor_FUN_0048fca0
// Address: 0048fca0
SFly * __cdecl SFly::ctor(SFly *this_ptr);

// Original: core_flies.cpp_SFly_dtor_FUN_0048fcc0
// Address: 0048fcc0
SFly * __cdecl SFly::dtor(SFly *this_ptr,uint flags);

// Original: core_flies.cpp_SFly_arrdtor_FUN_0048fce0
// Address: 0048fce0
SFly * __cdecl SFly::arrdtor(SFly *this_ptr,uint flags);
