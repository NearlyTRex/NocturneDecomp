#pragma once

// Function prototypes for core/drone.cpp
// Generated from Ghidra function signatures

// Original: core_drone.cpp_staticInit_FUN_0048eae0
// Address: 0048eae0
void __cdecl staticInit(void);

// Original: core_drone.cpp_factoryFunc_FUN_0048eb10
// Address: 0048eb10
CDrone * __cdecl factoryFunc(void);

// Original: core_drone.cpp_CDrone_getActorType_FUN_0048eb40
// Address: 0048eb40
CDemonActorType * __cdecl CDrone::getActorType(CDrone *this_ptr);

// Original: core_drone.cpp_CDrone_ctor_FUN_0048eb50
// Address: 0048eb50
CDrone * __cdecl CDrone::ctor(CDrone *this_ptr);

// Original: core_drone.cpp_CDrone_setup_FUN_0048ebc0
// Address: 0048ebc0
void __cdecl CDrone::setup(CDrone *this_ptr);

// Original: core_drone.cpp_CDrone_process_FUN_0048ec70
// Address: 0048ec70
void __cdecl CDrone::process(CDrone *this_ptr,float delta_time);

// Original: core_drone.cpp_CDrone_archive_FUN_0048f2f0
// Address: 0048f2f0
void __cdecl CDrone::archive(CDrone *this_ptr);

// Original: core_drone.cpp_CDrone_processDamage_FUN_0048f360
// Address: 0048f360
void __cdecl CDrone::processDamage(CDrone *this_ptr,SDamageInfo *damage_info);

// Original: core_drone.cpp_CDrone_getTargetPoints_FUN_0048f4d0
// Address: 0048f4d0
int __cdecl CDrone::getTargetPoints(CDrone *this_ptr,CVector3f *out_points_array);

// Original: core_drone.cpp_CDrone_getPropertyList_FUN_0048f520
// Address: 0048f520
void __cdecl CDrone::getPropertyList(CDrone *this_ptr,CActorPropertyList *property_list);

// Original: core_drone.cpp_CDrone_FUN_0048f560
// Address: 0048f560
void __cdecl CDrone(CDrone *this_ptr);

// Original: core_drone.cpp_CDrone_writeDependencies_FUN_0048f570
// Address: 0048f570
void __cdecl CDrone::writeDependencies(CDrone *this_ptr,_FILE *file_handle);

// Original: core_drone.cpp_CDrone_dtor_FUN_0048f5a0
// Address: 0048f5a0
CDrone * __cdecl CDrone::dtor(CDrone *this_ptr,uint flags);
