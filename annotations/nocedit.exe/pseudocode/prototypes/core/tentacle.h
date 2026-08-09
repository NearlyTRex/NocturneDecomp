#pragma once

// Function prototypes for core/tentacle.cpp
// Generated from Ghidra function signatures

// Original: core_tentacle.cpp_staticInit_FUN_005daef0
// Address: 005daef0
void __cdecl staticInit(void);

// Original: core_tentacle.cpp_factoryFuncTentacle_FUN_005daf20
// Address: 005daf20
CTentacle * __cdecl factoryFuncTentacle(void);

// Original: core_tentacle.cpp_CTentacle_getActorType_FUN_005daf50
// Address: 005daf50
CDemonActorType * __cdecl CTentacle::getActorType(CTentacle *this_ptr);

// Original: core_tentacle.cpp_CTentacle_ctor_FUN_005daf60
// Address: 005daf60
CTentacle * __cdecl CTentacle::ctor(CTentacle *this_ptr);

// Original: core_tentacle.cpp_CTentacle_setup_FUN_005dafc0
// Address: 005dafc0
void __cdecl CTentacle::setup(CTentacle *this_ptr);

// Original: core_tentacle.cpp_CTentacle_process_FUN_005db050
// Address: 005db050
void __cdecl CTentacle::process(CTentacle *this_ptr,float delta_time);

// Original: core_tentacle.cpp_CTentacle_renderOpaque_FUN_005db840
// Address: 005db840
int __cdecl CTentacle::renderOpaque(CTentacle *this_ptr);

// Original: core_tentacle.cpp_CTentacle_archive_FUN_005db880
// Address: 005db880
void __cdecl CTentacle::archive(CTentacle *this_ptr);

// Original: core_tentacle.cpp_CTentacle_findNearbyTarget_FUN_005db900
// Address: 005db900
int __cdecl CTentacle::findNearbyTarget(CTentacle *this_ptr,char *class_name);

// Original: core_tentacle.cpp_CTentacle_updateGrabbedVictim_FUN_005db9d0
// Address: 005db9d0
int __cdecl CTentacle::updateGrabbedVictim(CTentacle *this_ptr,CCharacter *character);

// Original: core_tentacle.cpp_CTentacle_shouldIgnoreForTargeting_FUN_005dbb30
// Address: 005dbb30
int __cdecl CTentacle::shouldIgnoreForTargeting(CTentacle *this_ptr);

// Original: core_tentacle.cpp_CTentacle_computeGripBoneMatrix_FUN_005dbb70
// Address: 005dbb70
CMatrix3x4f * __stack_esi CTentacle::computeGripBoneMatrix(CTentacle *this_ptr,CMatrix3x4f *out_matrix);

// Original: core_tentacle.cpp_CTentacle_getPropertyList_FUN_005dbc60
// Address: 005dbc60
void __cdecl CTentacle::getPropertyList(CTentacle *this_ptr,CActorPropertyList *property_list);

// Original: core_tentacle.cpp_CTentacle_addFilesToExtract_FUN_005dbcc0
// Address: 005dbcc0
void __cdecl CTentacle::addFilesToExtract(CTentacle *this_ptr,_FILE *file_handle);

// Original: core_tentacle.cpp_CTentacle_dtor_FUN_005dbcf0
// Address: 005dbcf0
CTentacle * __cdecl CTentacle::dtor(CTentacle *this_ptr,uint flags);
