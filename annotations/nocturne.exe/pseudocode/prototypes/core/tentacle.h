#pragma once

// Function prototypes for core/tentacle.cpp
// Generated from Ghidra function signatures

// Original: core_tentacle.cpp_staticInit_FUN_00543b00
// Address: 00543b00
void __cdecl staticInit(void);

// Original: core_tentacle.cpp_factoryFuncTentacle_FUN_00543b30
// Address: 00543b30
CTentacle * __cdecl factoryFuncTentacle(void);

// Original: core_tentacle.cpp_CTentacle_getActorType_FUN_00543b50
// Address: 00543b50
CDemonActorType * __cdecl CTentacle::getActorType(CTentacle *this_ptr);

// Original: core_tentacle.cpp_CTentacle_ctor_FUN_00543b60
// Address: 00543b60
CTentacle * __cdecl CTentacle::ctor(CTentacle *this_ptr);

// Original: core_tentacle.cpp_CTentacle_setup_FUN_00543bc0
// Address: 00543bc0
void __cdecl CTentacle::setup(CTentacle *this_ptr);

// Original: core_tentacle.cpp_CTentacle_process_FUN_00543c50
// Address: 00543c50
void __cdecl CTentacle::process(CTentacle *this_ptr,float delta_time);

// Original: core_tentacle.cpp_CTentacle_renderOpaque_FUN_00544440
// Address: 00544440
int __cdecl CTentacle::renderOpaque(CTentacle *this_ptr);

// Original: core_tentacle.cpp_CTentacle_archive_FUN_00544470
// Address: 00544470
void __cdecl CTentacle::archive(CTentacle *this_ptr);

// Original: core_tentacle.cpp_CTentacle_findNearbyTarget_FUN_005444f0
// Address: 005444f0
int __cdecl CTentacle::findNearbyTarget(CTentacle *this_ptr,char *class_name);

// Original: core_tentacle.cpp_CTentacle_attractActorToward_FUN_005445c0
// Address: 005445c0
undefined4 CTentacle::attractActorToward(CTentacle *param_1,CCharacter *param_2);

// Original: core_tentacle.cpp_CTentacle_shouldIgnoreForTargeting_FUN_00544720
// Address: 00544720
int __cdecl CTentacle::shouldIgnoreForTargeting(CTentacle *this_ptr);

// Original: core_tentacle.cpp_CTentacle_computeGripBoneMatrix_FUN_00544760
// Address: 00544760
CMatrix3x4f * __stack_esi CTentacle::computeGripBoneMatrix(CTentacle *this_ptr,CMatrix3x4f *out_matrix);

// Original: core_tentacle.cpp_CTentacle_dtor_FUN_00544850
// Address: 00544850
CTentacle * __cdecl CTentacle::dtor(CTentacle *this_ptr,uint flags);
