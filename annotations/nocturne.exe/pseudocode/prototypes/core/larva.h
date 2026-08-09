#pragma once

// Function prototypes for core/larva.cpp
// Generated from Ghidra function signatures

// Original: core_larva.cpp_staticInit_FUN_004c4820
// Address: 004c4820
void __cdecl staticInit(void);

// Original: core_larva.cpp_factoryFuncLarva_FUN_004c4850
// Address: 004c4850
CLarva * __cdecl factoryFuncLarva(void);

// Original: core_larva.cpp_CLarva_getActorType_FUN_004c4870
// Address: 004c4870
CDemonActorType * __cdecl CLarva::getActorType(CLarva *this_ptr);

// Original: core_larva.cpp_CLarva_ctor_FUN_004c4880
// Address: 004c4880
CLarva * __cdecl CLarva::ctor(CLarva *this_ptr);

// Original: core_larva.cpp_CLarva_setup_FUN_004c4910
// Address: 004c4910
void __cdecl CLarva::setup(CLarva *this_ptr);

// Original: core_larva.cpp_CLarva_process_FUN_004c4970
// Address: 004c4970
void __cdecl CLarva::process(CLarva *this_ptr,float delta_time);

// Original: core_larva.cpp_CLarva_archive_FUN_004c5250
// Address: 004c5250
void __cdecl CLarva::archive(CLarva *this_ptr);

// Original: core_larva.cpp_CLarva_processDamage_FUN_004c5310
// Address: 004c5310
void __cdecl CLarva::processDamage(CLarva *this_ptr,SDamageInfo *damage_info);

// Original: core_larva.cpp_CLarva_getTargetPoints_FUN_004c54f0
// Address: 004c54f0
int __cdecl CLarva::getTargetPoints(CLarva *this_ptr,CVector3f *out_points_array);

// Original: core_larva.cpp_CLarva_dtor_FUN_004c5540
// Address: 004c5540
CDemonActor * __cdecl CLarva::dtor(CLarva *this_ptr,uint flags);
