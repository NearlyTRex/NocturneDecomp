#pragma once

// Function prototypes for core/flies.cpp
// Generated from Ghidra function signatures

// Original: core_flies.cpp_staticInit_FUN_004cbcf0
// Address: 004cbcf0
void __cdecl staticInit(void);

// Original: core_flies.cpp_factoryFuncFlies_FUN_004cbd20
// Address: 004cbd20
CFlies * __cdecl factoryFuncFlies(void);

// Original: core_flies.cpp_CFlies_getActorType_FUN_004cbd50
// Address: 004cbd50
CDemonActorType * __cdecl CFlies::getActorType(CFlies *this_ptr);

// Original: core_flies.cpp_CFlies_ctor_FUN_004cbd60
// Address: 004cbd60
CFlies * __cdecl CFlies::ctor(CFlies *this_ptr);

// Original: core_flies.cpp_CFlies_setup_FUN_004cbe20
// Address: 004cbe20
void __cdecl CFlies::setup(CFlies *this_ptr);

// Original: core_flies.cpp_CFlies_archive_FUN_004cbe60
// Address: 004cbe60
void __cdecl CFlies::archive(CFlies *this_ptr);

// Original: core_flies.cpp_CFlies_process_FUN_004cbf00
// Address: 004cbf00
void __cdecl CFlies::process(CFlies *this_ptr,float delta_time);

// Original: core_flies.cpp_drawFlyPixel_FUN_004cc230
// Address: 004cc230
void __cdecl drawFlyPixel(int screen_x,int screen_y,int z_depth);

// Original: core_flies.cpp_drawFlyPixelClipped_FUN_004cc2c0
// Address: 004cc2c0
void __cdecl drawFlyPixelClipped(int screen_x,int screen_y,int z_depth);

// Original: core_flies.cpp_CFlies_renderOpaque_FUN_004cc300
// Address: 004cc300
int __cdecl CFlies::renderOpaque(CFlies *this_ptr);

// Original: core_flies.cpp_CFlies_getBoundingBox_FUN_004cc700
// Address: 004cc700
CBoundingBox3D * __cdecl CFlies::getBoundingBox(CFlies *this_ptr,CBoundingBox3D *out_box);

// Original: core_flies.cpp_CFlies_getCollisionType_FUN_004cc750
// Address: 004cc750
ECollisionType __cdecl CFlies::getCollisionType(CFlies *this_ptr,SCollisionInfo *collision_info);

// Original: core_flies.cpp_CFlies_initFly_FUN_004cc760
// Address: 004cc760
void __cdecl CFlies::initFly(CFlies *this_ptr,int fly_index);

// Original: core_flies.cpp_CFlies_generateRandomPoint_FUN_004cc820
// Address: 004cc820
CVector3f * __cdecl CFlies::generateRandomPoint(CFlies *this_ptr,CVector3f *out_point,CVector3f *reference_point);

// Original: core_flies.cpp_findFliesByFollowActor_FUN_004cca50
// Address: 004cca50
CFlies * __cdecl findFliesByFollowActor(CDemonActor *actor);

// Original: core_flies.cpp_CFlies_getPropertyList_FUN_004ccaa0
// Address: 004ccaa0
void __cdecl CFlies::getPropertyList(CFlies *this_ptr,CActorPropertyList *property_list);

// Original: core_flies.cpp_CFlies_processInEditor_FUN_004ccaf0
// Address: 004ccaf0
void __cdecl CFlies::processInEditor(CFlies *this_ptr);

// Original: core_flies.cpp_CFlies_showEditorHelp_FUN_004ccc70
// Address: 004ccc70
void __cdecl CFlies::showEditorHelp(CFlies *this_ptr,int *y_pos);

// Original: core_flies.cpp_CFlies_dtor_FUN_004cccb0
// Address: 004cccb0
CFlies * __cdecl CFlies::dtor(CFlies *this_ptr,uint flags);

// Original: core_flies.cpp_SFly_ctor_FUN_004ccd20
// Address: 004ccd20
SFly * __cdecl SFly::ctor(SFly *this_ptr);

// Original: core_flies.cpp_SFly_dtor_FUN_004ccd40
// Address: 004ccd40
SFly * __cdecl SFly::dtor(SFly *this_ptr,uint flags);

// Original: core_flies.cpp_SFly_arrdtor200_FUN_004ccd60
// Address: 004ccd60
SFly * __cdecl SFly::arrdtor200(SFly *objs,uint flags);
