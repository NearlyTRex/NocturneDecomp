#pragma once

// Function prototypes for core/boxactor.cpp
// Generated from Ghidra function signatures

// Original: core_boxactor.cpp_staticInit_FUN_00421650
// Address: 00421650
void __cdecl staticInit(void);

// Original: core_boxactor.cpp_factoryFuncBoxActor_FUN_004216c0
// Address: 004216c0
CBoxActor * __cdecl factoryFuncBoxActor(void);

// Original: core_boxactor.cpp_CBoxActor_getActorType_FUN_004216f0
// Address: 004216f0
CDemonActorType * __cdecl CBoxActor::getActorType(void);

// Original: core_boxactor.cpp_CBoxActor_ctor_FUN_00421700
// Address: 00421700
CBoxActor * __cdecl CBoxActor::ctor(CBoxActor *this_ptr);

// Original: core_boxactor.cpp_CBoxActor_setup_FUN_00421830
// Address: 00421830
void __cdecl CBoxActor::setup(CBoxActor *this_ptr);

// Original: core_boxactor.cpp_CBoxActor_setupPhysicsBox_FUN_004218d0
// Address: 004218d0
void __cdecl CBoxActor::setupPhysicsBox(CBoxActor *this_ptr);

// Original: core_boxactor.cpp_CBoxActor_process_FUN_004219e0
// Address: 004219e0
void __cdecl CBoxActor::process(CBoxActor *this_ptr,float delta_time);

// Original: core_boxactor.cpp_CBoxActor_renderOpaque_FUN_00421e00
// Address: 00421e00
int __cdecl CBoxActor::renderOpaque(CBoxActor *this_ptr);

// Original: core_boxactor.cpp_CBoxActor_renderTransparent_FUN_00421ef0
// Address: 00421ef0
int __cdecl CBoxActor::renderTransparent(CBoxActor *this_ptr);

// Original: core_boxactor.cpp_CBoxActor_getBoundingBox_FUN_00421fe0
// Address: 00421fe0
CBoundingBox3D * __cdecl CBoxActor::getBoundingBox(CBoxActor *this_ptr,CBoundingBox3D *out_box);

// Original: core_boxactor.cpp_CBoxActor_archive_FUN_00422060
// Address: 00422060
void __cdecl CBoxActor::archive(CBoxActor *this_ptr);

// Original: core_boxactor.cpp_CBoxActor_getBlockVirtualDirectorFlag_FUN_00422330
// Address: 00422330
int __cdecl CBoxActor::getBlockVirtualDirectorFlag(CBoxActor *this_ptr);

// Original: core_boxactor.cpp_CBoxActor_getCollisionType_FUN_00422340
// Address: 00422340
ECollisionType __cdecl CBoxActor::getCollisionType(CBoxActor *this_ptr,SCollisionInfo *collision_info);

// Original: core_boxactor.cpp_CBoxActor_resolveRayPush_FUN_00422390
// Address: 00422390
void __cdecl CBoxActor::resolveRayPush(CBoxActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction);

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
EGroundType __cdecl CBoxActor::getGroundType(CBoxActor *this_ptr);

// Original: core_boxactor.cpp_CBoxActor_onPickup_FUN_00422570
// Address: 00422570
void __cdecl CBoxActor::onPickup(CBoxActor *this_ptr,CDemonActor *owner);

// Original: core_boxactor.cpp_CBoxActor_constrainToExtents_FUN_00422590
// Address: 00422590
void __cdecl CBoxActor::constrainToExtents(CBoxActor *this_ptr);

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

// Original: core_boxactor.cpp_CBoxActor_addFilesToExtract_FUN_00422900
// Address: 00422900
void __cdecl CBoxActor::addFilesToExtract(CBoxActor *this_ptr,_FILE *file_handle);

// Original: core_boxactor.cpp_factoryFuncLightActor_FUN_00422950
// Address: 00422950
CLightActor * __cdecl factoryFuncLightActor(void);

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

// Original: core_boxactor.cpp_CLightActor_archive_FUN_00422c80
// Address: 00422c80
void __cdecl CLightActor::archive(CLightActor *this_ptr);

// Original: core_boxactor.cpp_CLightActor_setupLightModel_FUN_00422d60
// Address: 00422d60
void __cdecl CLightActor::setupLightModel(CLightActor *this_ptr);

// Original: core_boxactor.cpp_getLightActorTypeName_FUN_00423080
// Address: 00423080
char * __cdecl getLightActorTypeName(ELightActorType type);

// Original: core_boxactor.cpp_pickLightActorType_FUN_00423110
// Address: 00423110
ELightActorType __cdecl pickLightActorType(char *prompt_text,int allow_custom,uint current_type);

// Original: core_boxactor.cpp_CLightActor_propertyDisplayTypeCallback_FUN_00423310
// Address: 00423310
void __cdecl CLightActor::propertyDisplayTypeCallback(CLightActor *this_ptr,CActorProperty *property,char *output_buffer);

// Original: core_boxactor.cpp_CLightActor_propertyActionTypeCallback_FUN_00423380
// Address: 00423380
int __cdecl CLightActor::propertyActionTypeCallback(CLightActor *this_ptr,CActorProperty *property);

// Original: core_boxactor.cpp_CLightActor_propertyDisplayFOVCallback_FUN_00423400
// Address: 00423400
void __cdecl CLightActor::propertyDisplayFOVCallback(CLightActor *this_ptr,CActorProperty *property,char *output_buffer);

// Original: core_boxactor.cpp_CLightActor_propertyActionFOVCallback_FUN_00423440
// Address: 00423440
int __cdecl CLightActor::propertyActionFOVCallback(CLightActor *this_ptr,CActorProperty *property,char *output_buffer);

// Original: core_boxactor.cpp_CLightActor_getPropertyList_FUN_004234e0
// Address: 004234e0
void __cdecl CLightActor::getPropertyList(CLightActor *this_ptr,CActorPropertyList *property_list);

// Original: core_boxactor.cpp_CLightActor_initializeInEditor_FUN_00423590
// Address: 00423590
int __cdecl CLightActor::initializeInEditor(CLightActor *this_ptr);

// Original: core_boxactor.cpp_CLightActor_setLightOrientZ_FUN_004235c0
// Address: 004235c0
void __cdecl CLightActor::setLightOrientZ(CLightActor *this_ptr,float angle);

// Original: core_boxactor.cpp_CLightActor_isLightPartVisible_FUN_004235d0
// Address: 004235d0
int __cdecl CLightActor::isLightPartVisible(CLightActor *this_ptr);

// Original: core_boxactor.cpp_CLightActor_dtor_FUN_004235f0
// Address: 004235f0
CLightActor * __cdecl CLightActor::dtor(CLightActor *this_ptr,uint flags);

// Original: core_boxactor.cpp_CBoxActor_dtor_FUN_00423670
// Address: 00423670
CBoxActor * __cdecl CBoxActor::dtor(CBoxActor *this_ptr,uint flags);

// Original: core_boxactor.cpp_CDemonFilter_arrdtor_FUN_004236e0
// Address: 004236e0
CDemonFilter * __cdecl CDemonFilter::arrdtor(CDemonFilter *objs,uint flags);
