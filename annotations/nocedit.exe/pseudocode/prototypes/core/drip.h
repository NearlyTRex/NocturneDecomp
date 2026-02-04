#pragma once

// Function prototypes for core/drip.cpp
// Generated from Ghidra function signatures

// Original: core_drip.cpp_staticInit_FUN_0048df80
// Address: 0048df80
void __cdecl staticInit(void);

// Original: core_drip.cpp_factoryFunc_FUN_0048dfc0
// Address: 0048dfc0
CDrip * __cdecl factoryFunc(void);

// Original: core_drip.cpp_CDrip_getActorType_FUN_0048dff0
// Address: 0048dff0
CDemonActorType * __cdecl CDrip::getActorType(CDrip *this_ptr);

// Original: core_drip.cpp_CDrip_ctor_FUN_0048e000
// Address: 0048e000
CDrip * __cdecl CDrip::ctor(CDrip *this_ptr);

// Original: core_drip.cpp_CDrip_setup_FUN_0048e0e0
// Address: 0048e0e0
void __cdecl CDrip::setup(CDrip *this_ptr);

// Original: core_drip.cpp_CDrip_archive_FUN_0048e170
// Address: 0048e170
void __cdecl CDrip::archive(CDrip *this_ptr);

// Original: core_drip.cpp_CDrip_process_FUN_0048e2a0
// Address: 0048e2a0
void __cdecl CDrip::process(CDrip *this_ptr,float delta_time);

// Original: core_drip.cpp_CDrip_FUN_0048e6b0
// Address: 0048e6b0
void __cdecl CDrip(CDrip *this_ptr);

// Original: core_drip.cpp_CDrip_renderOpaque_FUN_0048e6c0
// Address: 0048e6c0
int __cdecl CDrip::renderOpaque(CDrip *this_ptr);

// Original: core_drip.cpp_CDrip_getBoundingBox_FUN_0048e740
// Address: 0048e740
CBoundingBox3D * __cdecl CDrip::getBoundingBox(CDrip *this_ptr,CBoundingBox3D *out_box);

// Original: core_drip.cpp_CDrip_hasCollision_FUN_0048e820
// Address: 0048e820
int __cdecl CDrip::hasCollision(CDrip *this_ptr,SCollisionInfo *collision_info);

// Original: core_drip.cpp_CDrip_propertyDisplayCallback_FUN_0048e830
// Address: 0048e830
void __cdecl CDrip::propertyDisplayCallback(CDrip *this_ptr,CActorProperty *property,char *output_buffer);

// Original: core_drip.cpp_CDrip_propertyActionCallback_FUN_0048e8d0
// Address: 0048e8d0
int __cdecl CDrip::propertyActionCallback(CDrip *this_ptr,CActorProperty *property);

// Original: core_drip.cpp_CDrip_getPropertyList_FUN_0048e930
// Address: 0048e930
void __cdecl CDrip::getPropertyList(CDrip *this_ptr,CActorPropertyList *property_list);

// Original: core_drip.cpp_CDrip_processInEditor_FUN_0048ea30
// Address: 0048ea30
void __cdecl CDrip::processInEditor(CDrip *this_ptr);

// Original: core_drip.cpp_CDrip_addFilesToExtract_FUN_0048ea60
// Address: 0048ea60
void __cdecl CDrip::addFilesToExtract(CDrip *this_ptr,_FILE *file_handle);

// Original: core_drip.cpp_CDrip_dtor_FUN_0048ea90
// Address: 0048ea90
CDrip * __cdecl CDrip::dtor(CDrip *this_ptr,uint flags);
