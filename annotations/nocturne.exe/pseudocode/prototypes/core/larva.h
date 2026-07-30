#pragma once

// Function prototypes for core/larva.cpp
// Generated from Ghidra function signatures

// Original: core_larva.cpp_staticInit_FUN_004c4820
// Address: 004c4820
void __cdecl staticInit(void);

// Original: core_larva.cpp_factoryFunc_FUN_004c4850
// Address: 004c4850
CLarva * __cdecl factoryFunc(void);

// Original: core_larva.cpp_CLarva_getActorType_FUN_004c4870
// Address: 004c4870
CDemonActorType * CLarva::getActorType(void);

// Original: core_larva.cpp_CLarva_ctor_FUN_004c4880
// Address: 004c4880
CLarva * __cdecl CLarva::ctor(CLarva *this_ptr);

// Original: core_larva.cpp_CLarva_setup_FUN_004c4910
// Address: 004c4910
void CLarva::setup(CEnemy *param_1);

// Original: core_larva.cpp_CLarva_process_FUN_004c4970
// Address: 004c4970
void CLarva::process(CEnemy *param_1,float param_2);

// Original: core_larva.cpp_CLarva_archive_FUN_004c5250
// Address: 004c5250
void __cdecl CLarva::archive(CLarva *this_ptr);

// Original: core_larva.cpp_CLarva_processDamage_FUN_004c5310
// Address: 004c5310
void CLarva::processDamage(CEnemy *param_1,SDamageInfo *param_2);

// Original: core_larva.cpp_CLarva_getTargetPoints_FUN_004c54f0
// Address: 004c54f0
int __cdecl CLarva::getTargetPoints(CLarva *this_ptr,CVector3f *out_points_array);

// Original: core_larva.cpp_CLarva_dtor_FUN_004c5540
// Address: 004c5540
CDemonActor * __cdecl CLarva::dtor(CLarva *this_ptr,uint flags);
