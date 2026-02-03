#pragma once

// Function prototypes for core/litecone.cpp
// Generated from Ghidra function signatures

// Original: core_litecone.cpp_staticInit_FUN_00506aa0
// Address: 00506aa0
void __cdecl staticInit(void);

// Original: core_litecone.cpp_factoryFunc_FUN_00506ad0
// Address: 00506ad0
CLightCone * __cdecl factoryFunc(void);

// Original: core_litecone.cpp_CLightCone_getActorType_FUN_00506b00
// Address: 00506b00
CDemonActorType * __cdecl CLightCone::getActorType(CLightCone *this_ptr);

// Original: core_litecone.cpp_CLightCone_ctor_FUN_00506b10
// Address: 00506b10
CLightCone * __cdecl CLightCone::ctor(CLightCone *this_ptr);

// Original: core_litecone.cpp_CLightCone_setup_FUN_00506bb0
// Address: 00506bb0
void __cdecl CLightCone::setup(CLightCone *this_ptr);

// Original: core_litecone.cpp_CLightCone_process_FUN_00506bc0
// Address: 00506bc0
void __cdecl CLightCone::process(CLightCone *this_ptr,float delta_time);

// Original: core_litecone.cpp_CLightCone_renderTransparent_FUN_00506c20
// Address: 00506c20
int __cdecl CLightCone::renderTransparent(CLightCone *this_ptr);

// Original: core_litecone.cpp_CLightCone_getBoundingBox_FUN_00506cb0
// Address: 00506cb0
CBoundingBox3D * __cdecl CLightCone::getBoundingBox(CLightCone *this_ptr,CBoundingBox3D *out_box);

// Original: core_litecone.cpp_CLightCone_archive_FUN_00506d00
// Address: 00506d00
void __cdecl CLightCone::archive(CLightCone *this_ptr);

// Original: core_litecone.cpp_CLightCone_hasCollision_FUN_00506d90
// Address: 00506d90
int __cdecl CLightCone::hasCollision(CLightCone *this_ptr,SCollisionInfo *collision_info);

// Original: core_litecone.cpp_CLightCone_getPropertyList_FUN_00506da0
// Address: 00506da0
void __cdecl CLightCone::getPropertyList(CLightCone *this_ptr,CActorPropertyList *property_list);

// Original: core_litecone.cpp_CLightCone_dtor_FUN_00506e30
// Address: 00506e30
CLightCone * __cdecl CLightCone::dtor(CLightCone *this_ptr,uint flags);
