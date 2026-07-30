#pragma once

// Function prototypes for core/anvil.cpp
// Generated from Ghidra function signatures

// Original: core_anvil.cpp_staticInit_FUN_0040f500
// Address: 0040f500
void __cdecl staticInit(void);

// Original: core_anvil.cpp_factoryFunc_FUN_0040f530
// Address: 0040f530
CAnvil * __cdecl factoryFunc(void);

// Original: core_anvil.cpp_CAnvil_getActorType_FUN_0040f550
// Address: 0040f550
CDemonActorType * CAnvil::getActorType(void);

// Original: core_anvil.cpp_FUN_0040f560
// Address: 0040f560
CAnvil * __cdecl FUN_0040f560(CAnvil *this_ptr);

// Original: core_anvil.cpp_CAnvil_setup_FUN_0040f5f0
// Address: 0040f5f0
void CAnvil::setup(CDemonActor *param_1);

// Original: core_anvil.cpp_CAnvil_process_FUN_0040f610
// Address: 0040f610
void CAnvil::process(CDemonActor *param_1,float param_2);

// Original: core_anvil.cpp_CAnvil_renderOpaque_FUN_0040f740
// Address: 0040f740
int CAnvil::renderOpaque(int param_1);

// Original: core_anvil.cpp_CAnvil_archive_FUN_0040f7d0
// Address: 0040f7d0
void __cdecl CAnvil::archive(CAnvil *this_ptr);

// Original: core_anvil.cpp_CAnvil_getCollisionType_FUN_0040f850
// Address: 0040f850
undefined4 CAnvil::getCollisionType(void);

// Original: core_anvil.cpp_CAnvil_getBoundingBox_FUN_0040f860
// Address: 0040f860
CBoundingBox3D * __cdecl CAnvil::getBoundingBox(CAnvil *this_ptr,CBoundingBox3D *out_box);

// Original: core_anvil.cpp_CAnvil_dtor_FUN_0040f8b0
// Address: 0040f8b0
CDemonActor * CAnvil::dtor(CDemonActor *param_1,byte param_2);
