#pragma once

// Function prototypes for core/dog.cpp
// Generated from Ghidra function signatures

// Original: core_dog.cpp_staticInit_FUN_0047efe0
// Address: 0047efe0
void staticInit(void);

// Original: core_dog.cpp_factoryFunc_FUN_0047f010
// Address: 0047f010
CZombieDog * factoryFunc(void);

// Original: core_dog.cpp_CZombieDog_getActorType_FUN_0047f040
// Address: 0047f040
CDemonActorType * CZombieDog::getActorType(CZombieDog * this_ptr);

// Original: core_dog.cpp_CZombieDog_ctor_FUN_0047f050
// Address: 0047f050
CZombieDog * CZombieDog::ctor(CZombieDog * this_ptr);

// Original: core_dog.cpp_CZombieDog_setup_FUN_0047f0c0
// Address: 0047f0c0
void CZombieDog::setup(CZombieDog * this_ptr);

// Original: core_dog.cpp_CZombieDog_process_FUN_0047f140
// Address: 0047f140
void CZombieDog::process(CZombieDog * this_ptr);

// Original: core_dog.cpp_CZombieDog_serialize_FUN_0047f7b0
// Address: 0047f7b0
void CZombieDog::serialize(CZombieDog * this_ptr);

// Original: core_dog.cpp_CZombieDog_FUN_0047f820
// Address: 0047f820
void CZombieDog(CZombieDog * this_ptr);

// Original: core_dog.cpp_CZombieDog_getTargetPoints_FUN_0047f8d0
// Address: 0047f8d0
int CZombieDog::getTargetPoints(CZombieDog * this_ptr, CVector3f * out_points_array);

// Original: core_dog.cpp_CZombieDog_getPropertyList_FUN_0047f920
// Address: 0047f920
void CZombieDog::getPropertyList(CZombieDog * this_ptr, CActorPropertyList * property_list);

// Original: core_dog.cpp_CZombieDog_FUN_0047f960
// Address: 0047f960
void CZombieDog(CZombieDog * this_ptr);

// Original: core_dog.cpp_CZombieDog_writeDependencies_FUN_0047f970
// Address: 0047f970
void CZombieDog::writeDependencies(CZombieDog * this_ptr, FILE * file_handle);

// Original: core_dog.cpp_CZombieDog_dtor_FUN_0047f9a0
// Address: 0047f9a0
CZombieDog * CZombieDog::dtor(CZombieDog * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8);
