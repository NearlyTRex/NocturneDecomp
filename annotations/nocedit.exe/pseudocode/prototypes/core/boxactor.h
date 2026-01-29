#pragma once

// Function prototypes for core/boxactor.cpp
// Generated from Ghidra function signatures

// Original: core_boxactor.cpp_staticInit_FUN_00421650
// Address: 00421650
void __cdecl staticInit(void);

// Original: core_boxactor.cpp_factoryFunc_FUN_004216c0
// Address: 004216c0
CBoxActor * __cdecl factoryFunc(void);

// Original: core_boxactor.cpp_CBoxActor_getActorType_FUN_004216f0
// Address: 004216f0
CDemonActorType * __cdecl CBoxActor::getActorType(void);

// Original: core_boxactor.cpp_CBoxActor_ctor_FUN_00421700
// Address: 00421700
CBoxActor * __cdecl CBoxActor::ctor(CBoxActor *this_ptr);

// Original: core_boxactor.cpp_CBoxActor_setup_FUN_00421830
// Address: 00421830
void __cdecl CBoxActor::setup(CBoxActor *this_ptr);

// Original: core_boxactor.cpp_CBoxActor_FUN_004218d0
// Address: 004218d0
void __cdecl CBoxActor(CBoxActor *this_ptr);

// Original: core_boxactor.cpp_CBoxActor_process_FUN_004219e0
// Address: 004219e0
void __cdecl CBoxActor::process(CBoxActor *this_ptr,float delta_time);

// Original: core_boxactor.cpp_CBoxActor_renderOpaque_FUN_00421e00
// Address: 00421e00
int __cdecl CBoxActor::renderOpaque(CBoxActor *this_ptr);

// Original: core_boxactor.cpp_CBoxActor_renderTransparent_FUN_00421ef0
// Address: 00421ef0
int __cdecl CBoxActor::renderTransparent(CBoxActor *this_ptr);

// Original: core_boxactor.cpp_CBoxActor_FUN_00421fe0
// Address: 00421fe0
CBoundingBox3D * __cdecl CBoxActor(CBoxActor *this_ptr,CBoundingBox3D *out_box);

// Original: core_boxactor.cpp_CBoxActor_serialize_FUN_00422060
// Address: 00422060
void __cdecl CBoxActor::serialize(CBoxActor *this_ptr);

// Original: core_boxactor.cpp_CBoxActor_getBlockVirtualDirectorFlag_FUN_00422330
// Address: 00422330
int __cdecl CBoxActor::getBlockVirtualDirectorFlag(CBoxActor *this_ptr);

// Original: core_boxactor.cpp_CBoxActor_hasCollision_FUN_00422340
// Address: 00422340
int __cdecl CBoxActor::hasCollision(CBoxActor *this_ptr,SCollisionInfo *collision_info);

// Original: core_boxactor.cpp_CBoxActor_FUN_00422390
// Address: 00422390
void __cdecl CBoxActor(CBoxActor *this_ptr);

// Original: core_boxactor.cpp_CBoxActor_canPickup_FUN_004224b0
// Address: 004224b0
int __cdecl CBoxActor::canPickup(CBoxActor *this_ptr,CDemonActor *picker);

// Original: core_boxactor.cpp_CBoxActor_pickup_FUN_004224e0
// Address: 004224e0
void __cdecl CBoxActor::pickup(CBoxActor *this_ptr,CDemonActor *carrier);

// Original: core_boxactor.cpp_CBoxActor_onDropped_FUN_004224f0
// Address: 004224f0
void __cdecl CBoxActor::onDropped(CBoxActor *this_ptr,CVector3f *drop_position);

// Original: core_boxactor.cpp_CBoxActor_getCarrier_FUN_00422550
// Address: 00422550
CDemonActor * __cdecl CBoxActor::getCarrier(CBoxActor *this_ptr);

// Original: core_boxactor.cpp_CBoxActor_getGroundType_FUN_00422560
// Address: 00422560
int __cdecl CBoxActor::getGroundType(CBoxActor *this_ptr);

// Original: core_boxactor.cpp_CBoxActor_onPickup_FUN_00422570
// Address: 00422570
void __cdecl CBoxActor::onPickup(CBoxActor *this_ptr,CDemonActor *owner);

// Original: core_boxactor.cpp_CBoxActor_FUN_00422590
// Address: 00422590
void __cdecl CBoxActor(CBoxActor *this_ptr);

// Original: core_boxactor.cpp_CBoxActor_setPositionAndOrientation_FUN_00422640
// Address: 00422640
void __cdecl CBoxActor::setPositionAndOrientation(CBoxActor *this_ptr,CVector3f *new_position,CVector3f *new_orientation);

// Original: core_boxactor.cpp_CBoxActor_getAllowedMeleeAttackTypes_FUN_004226d0
// Address: 004226d0
int __cdecl CBoxActor::getAllowedMeleeAttackTypes(CBoxActor *this_ptr);

// Original: core_boxactor.cpp_CBoxActor_getPropertyList_FUN_004226e0
// Address: 004226e0
void __cdecl CBoxActor::getPropertyList(CBoxActor *this_ptr,CActorPropertyList *property_list);

// Original: core_boxactor.cpp_CBoxActor_processInEditor_FUN_004228e0
// Address: 004228e0
void __cdecl CBoxActor::processInEditor(CBoxActor *this_ptr);

// Original: core_boxactor.cpp_CBoxActor_writeDependencies_FUN_00422900
// Address: 00422900
void __cdecl CBoxActor::writeDependencies(CBoxActor *this_ptr,_FILE *file_handle);

// Original: core_boxactor.cpp_factoryFunc_FUN_00422950
// Address: 00422950
CLightActor * __cdecl factoryFunc(void);

// Original: core_boxactor.cpp_CLightActor_getActorType_FUN_00422980
// Address: 00422980
CDemonActorType * __cdecl CLightActor::getActorType(CLightActor *this_ptr);

// Original: core_boxactor.cpp_CLightActor_ctor_FUN_00422990
// Address: 00422990
CLightActor * __cdecl CLightActor::ctor(CLightActor *this_ptr);

// Original: core_boxactor.cpp_CLightActor_setup_FUN_00422a20
// Address: 00422a20
void __cdecl CLightActor::setup(CLightActor *this_ptr);

// Original: core_boxactor.cpp_CLightActor_process_FUN_00422a50
// Address: 00422a50
void __cdecl CLightActor::process(CLightActor *this_ptr,float delta_time);

// Original: core_boxactor.cpp_CLightActor_serialize_FUN_00422c80
// Address: 00422c80
void __cdecl CLightActor::serialize(CLightActor *this_ptr);

// Original: core_boxactor.cpp_CLightActor_FUN_00422d60
// Address: 00422d60
void __cdecl CLightActor(CLightActor *this_ptr);

// Original: core_boxactor.cpp_FUN_0042307e
// Address: 0042307e
char * __cdecl FUN_0042307e(int param_1);

// Original: core_boxactor.cpp_CLightActor_FUN_00423110
// Address: 00423110
int __cdecl CLightActor(CLightActor *this_ptr);

// Original: core_boxactor.cpp_CLightActor_FUN_00423310
// Address: 00423310
void __cdecl CLightActor(CLightActor *this_ptr);

// Original: core_boxactor.cpp_CLightActor_FUN_00423380
// Address: 00423380
undefined4 CLightActor(void);

// Original: core_boxactor.cpp_CLightActor_FUN_00423400
// Address: 00423400
void CLightActor(undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4, CDemonActor *param_5,undefined4 param_6,char *param_7);

// Original: core_boxactor.cpp_CLightActor_FUN_00423440
// Address: 00423440
undefined4 CLightActor(void);

// Original: core_boxactor.cpp_CLightActor_FUN_004234e0
// Address: 004234e0
void CLightActor(void);

// Original: core_boxactor.cpp_CLightActor_FUN_00423590
// Address: 00423590
undefined4 CLightActor(void);

// Original: core_boxactor.cpp_CLightActor_FUN_004235c0
// Address: 004235c0
void __cdecl CLightActor(CLightActor *this_ptr);

// Original: core_boxactor.cpp_CLightActor_FUN_004235d0
// Address: 004235d0
int __cdecl CLightActor(CLightActor *this_ptr);

// Original: core_boxactor.cpp_CLightActor_dtor_FUN_004235f0
// Address: 004235f0
CLightActor * __cdecl CLightActor::dtor(CLightActor *this_ptr,uint d1);

// Original: core_boxactor.cpp_CBoxActor_dtor_FUN_00423670
// Address: 00423670
CBoxActor * __cdecl CBoxActor::dtor(CBoxActor *this_ptr,uint d1,uint d2,uint d3);

// Original: core_boxactor.cpp_freeFilters_FUN_004236e0
// Address: 004236e0
int __cdecl freeFilters(CDemonFilter **objs);
