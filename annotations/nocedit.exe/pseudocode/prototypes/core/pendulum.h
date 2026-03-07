#pragma once

// Function prototypes for core/pendulum.cpp
// Generated from Ghidra function signatures

// Original: core_pendulum.cpp_staticInit_FUN_00549320
// Address: 00549320
void __cdecl staticInit(void);

// Original: core_pendulum.cpp_factoryFunc_FUN_00549350
// Address: 00549350
CPendulum * __cdecl factoryFunc(void);

// Original: core_pendulum.cpp_CPendulum_getActorType_FUN_00549380
// Address: 00549380
CDemonActorType * __cdecl CPendulum::getActorType(CPendulum *this_ptr);

// Original: core_pendulum.cpp_CPendulum_ctor_FUN_00549390
// Address: 00549390
CPendulum * __cdecl CPendulum::ctor(CPendulum *this_ptr);

// Original: core_pendulum.cpp_CPendulum_setup_FUN_005494a0
// Address: 005494a0
void __cdecl CPendulum::setup(CPendulum *this_ptr);

// Original: core_pendulum.cpp_CPendulum_testCollisionWithActor_FUN_005495c0
// Address: 005495c0
void __cdecl CPendulum::testCollisionWithActor(CPendulum *this_ptr,CDemonActor *actor,CDemonActor *left_hand_actor,CDemonActor *right_hand_actor);

// Original: core_pendulum.cpp_didPhaseCross_FUN_00549aa0
// Address: 00549aa0
int __cdecl didPhaseCross(float threshold,float old_phase,float new_phase);

// Original: core_pendulum.cpp_CPendulum_updateSwing_FUN_00549b90
// Address: 00549b90
void __cdecl CPendulum::updateSwing(CPendulum *this_ptr,float delta_time);

// Original: core_pendulum.cpp_CPendulum_process_FUN_0054a180
// Address: 0054a180
void __cdecl CPendulum::process(CPendulum *this_ptr,float delta_time);

// Original: core_pendulum.cpp_CPendulum_renderOpaque_FUN_0054a2f0
// Address: 0054a2f0
int __cdecl CPendulum::renderOpaque(CPendulum *this_ptr);

// Original: core_pendulum.cpp_CPendulum_getBoundingBox_FUN_0054a360
// Address: 0054a360
CBoundingBox3D * __cdecl CPendulum::getBoundingBox(CPendulum *this_ptr,CBoundingBox3D *out_box);

// Original: core_pendulum.cpp_CPendulum_archive_FUN_0054a3b0
// Address: 0054a3b0
void __cdecl CPendulum::archive(CPendulum *this_ptr);

// Original: core_pendulum.cpp_CPendulum_hasCollision_FUN_0054a550
// Address: 0054a550
int __cdecl CPendulum::hasCollision(CPendulum *this_ptr,SCollisionInfo *collision_info);

// Original: core_pendulum.cpp_CPendulum_getGroundType_FUN_0054a590
// Address: 0054a590
int __cdecl CPendulum::getGroundType(CPendulum *this_ptr);

// Original: core_pendulum.cpp_CPendulum_propertyDisplayCallback_FUN_0054a5a0
// Address: 0054a5a0
void __cdecl CPendulum::propertyDisplayCallback(CPendulum *this_ptr,CActorProperty *property,char *output_buffer);

// Original: core_pendulum.cpp_CPendulum_propertyActionCallback_FUN_0054a5e0
// Address: 0054a5e0
int __cdecl CPendulum::propertyActionCallback(CPendulum *this_ptr,CActorProperty *property);

// Original: core_pendulum.cpp_CPendulum_getPropertyList_FUN_0054a5f0
// Address: 0054a5f0
void __cdecl CPendulum::getPropertyList(CPendulum *this_ptr,CActorPropertyList *property_list);

// Original: core_pendulum.cpp_CPendulum_processInEditor_FUN_0054a790
// Address: 0054a790
void __cdecl CPendulum::processInEditor(CPendulum *this_ptr);

// Original: core_pendulum.cpp_CPendulum_addFilesToExtract_FUN_0054a7b0
// Address: 0054a7b0
void __cdecl CPendulum::addFilesToExtract(CPendulum *this_ptr,_FILE *file_handle);

// Original: core_pendulum.cpp_CPendulum_dtor_FUN_0054a7d0
// Address: 0054a7d0
CPendulum * __cdecl CPendulum::dtor(CPendulum *this_ptr,uint flags);
