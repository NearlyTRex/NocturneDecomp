#pragma once

// Function prototypes for core/platfrm.cpp
// Generated from Ghidra function signatures

// Original: core_platfrm.cpp_staticInit_FUN_0054c7e0
// Address: 0054c7e0
void __cdecl staticInit(void);

// Original: core_platfrm.cpp_factoryFunc_FUN_0054c810
// Address: 0054c810
CPlatform * __cdecl factoryFunc(void);

// Original: core_platfrm.cpp_CPlatform_getActorType_FUN_0054c840
// Address: 0054c840
CDemonActorType * __cdecl CPlatform::getActorType(CPlatform *this_ptr);

// Original: core_platfrm.cpp_CPlatform_ctor_FUN_0054c850
// Address: 0054c850
CPlatform * __cdecl CPlatform::ctor(CPlatform *this_ptr);

// Original: core_platfrm.cpp_CPlatform_setup_FUN_0054ca20
// Address: 0054ca20
void __cdecl CPlatform::setup(CPlatform *this_ptr);

// Original: core_platfrm.cpp_CPlatform_evaluatePosition_FUN_0054cab0
// Address: 0054cab0
void __cdecl CPlatform::evaluatePosition(CPlatform *this_ptr);

// Original: core_platfrm.cpp_CPlatform_process_FUN_0054cc30
// Address: 0054cc30
void __cdecl CPlatform::process(CPlatform *this_ptr,float delta_time);

// Original: core_platfrm.cpp_CPlatform_startMovement_FUN_0054d690
// Address: 0054d690
void __cdecl CPlatform::startMovement(CPlatform *this_ptr,float goal_param,float movement_rate);

// Original: core_platfrm.cpp_CPlatform_renderOpaque_FUN_0054d720
// Address: 0054d720
int __cdecl CPlatform::renderOpaque(CPlatform *this_ptr);

// Original: core_platfrm.cpp_CPlatform_renderBackground_FUN_0054d9b0
// Address: 0054d9b0
void __cdecl CPlatform::renderBackground(CPlatform *this_ptr,int layer_flag);

// Original: core_platfrm.cpp_CPlatform_getBoundingBox_FUN_0054db70
// Address: 0054db70
CBoundingBox3D * __cdecl CPlatform::getBoundingBox(CPlatform *this_ptr,CBoundingBox3D *out_box);

// Original: core_platfrm.cpp_CPlatform_archive_FUN_0054dbc0
// Address: 0054dbc0
void __cdecl CPlatform::archive(CPlatform *this_ptr);

// Original: core_platfrm.cpp_CPlatform_isActorOnPlatform_FUN_0054df80
// Address: 0054df80
int __cdecl CPlatform::isActorOnPlatform(CPlatform *this_ptr,CDemonActor *actor);

// Original: core_platfrm.cpp_CPlatform_getCollisionType_FUN_0054e180
// Address: 0054e180
ECollisionType __cdecl CPlatform::getCollisionType(CPlatform *this_ptr,SCollisionInfo *collision_info);

// Original: core_platfrm.cpp_CPlatform_allowBulletHoles_FUN_0054e1a0
// Address: 0054e1a0
int __cdecl CPlatform::allowBulletHoles(CPlatform *this_ptr);

// Original: core_platfrm.cpp_CPlatform_getGroundType_FUN_0054e1c0
// Address: 0054e1c0
EGroundType __cdecl CPlatform::getGroundType(CPlatform *this_ptr);

// Original: core_platfrm.cpp_CPlatform_getBlockVirtualDirectorFlag_FUN_0054e1d0
// Address: 0054e1d0
int __cdecl CPlatform::getBlockVirtualDirectorFlag(CPlatform *this_ptr);

// Original: core_platfrm.cpp_CPlatform_attachActor_FUN_0054e1e0
// Address: 0054e1e0
void __cdecl CPlatform::attachActor(CPlatform *this_ptr,CDemonActor *actor);

// Original: core_platfrm.cpp_CPlatform_onActorDeleted_FUN_0054e2e0
// Address: 0054e2e0
void __cdecl CPlatform::onActorDeleted(CPlatform *this_ptr,CDemonActor *deleted_actor);

// Original: core_platfrm.cpp_CPlatform_updateAttachedActors_FUN_0054e320
// Address: 0054e320
void __cdecl CPlatform::updateAttachedActors(CPlatform *this_ptr);

// Original: core_platfrm.cpp_CPlatform_propertyDisplaySlewCallback_FUN_0054e400
// Address: 0054e400
void __cdecl CPlatform::propertyDisplaySlewCallback(CPlatform *this_ptr,CActorProperty *property,char *output_buffer);

// Original: core_platfrm.cpp_CPlatform_propertyActionSlewCallback_FUN_0054e480
// Address: 0054e480
int __cdecl CPlatform::propertyActionSlewCallback(CPlatform *this_ptr);

// Original: core_platfrm.cpp_CPlatform_propertyDisplayTypeCallback_FUN_0054e4e0
// Address: 0054e4e0
void __cdecl CPlatform::propertyDisplayTypeCallback(CPlatform *this_ptr,CActorProperty *property,char *output_buffer);

// Original: core_platfrm.cpp_CPlatform_propertyActionTypeCallback_FUN_0054e530
// Address: 0054e530
int __cdecl CPlatform::propertyActionTypeCallback(CPlatform *this_ptr,CActorProperty *property);

// Original: core_platfrm.cpp_CPlatform_propertyDisplayStateCallback_FUN_0054e700
// Address: 0054e700
void __cdecl CPlatform::propertyDisplayStateCallback(CPlatform *this_ptr,CActorProperty *property,char *output_buffer);

// Original: core_platfrm.cpp_CPlatform_propertyActionStateCallback_FUN_0054e760
// Address: 0054e760
int __cdecl CPlatform::propertyActionStateCallback(CPlatform *this_ptr);

// Original: core_platfrm.cpp_CPlatform_getPropertyList_FUN_0054e7d0
// Address: 0054e7d0
void __cdecl CPlatform::getPropertyList(CPlatform *this_ptr,CActorPropertyList *property_list);

// Original: core_platfrm.cpp_CPlatform_processInEditor_FUN_0054ea00
// Address: 0054ea00
void __cdecl CPlatform::processInEditor(CPlatform *this_ptr);

// Original: core_platfrm.cpp_CPlatform_showEditorHelp_FUN_0054f060
// Address: 0054f060
void __cdecl CPlatform::showEditorHelp(CPlatform *this_ptr,int *y_pos);

// Original: core_platfrm.cpp_CPlatform_addFilesToExtract_FUN_0054f2a0
// Address: 0054f2a0
void __cdecl CPlatform::addFilesToExtract(CPlatform *this_ptr,_FILE *file_handle);
