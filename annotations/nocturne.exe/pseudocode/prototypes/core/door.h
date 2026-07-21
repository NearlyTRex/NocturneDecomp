#pragma once

// Function prototypes for core/door.cpp
// Generated from Ghidra function signatures

// Original: core_door.cpp_CDoor_ctor_FUN_00455050
// Address: 00455050
int CDoor::ctor(undefined4 param_1);

// Original: core_door.cpp_CDoor_setup_FUN_004551f0
// Address: 004551f0
void CDoor::setup(int param_1);

// Original: core_door.cpp_CDoor_onOpened_FUN_00455270
// Address: 00455270
void __cdecl CDoor::onOpened(int param_1);

// Original: core_door.cpp_CDoor_reposition_FUN_004552a0
// Address: 004552a0
void __cdecl CDoor::reposition(int param_1);

// Original: core_door.cpp_CDoor_process_FUN_00455640
// Address: 00455640
void CDoor::process(int param_1,float param_2);

// Original: core_door.cpp_CDoor_archive_FUN_00455ee0
// Address: 00455ee0
void CDoor::archive(int param_1);

// Original: core_door.cpp_CDoor_getCollisionType_FUN_004561d0
// Address: 004561d0
undefined4 CDoor::getCollisionType(int param_1,int param_2);

// Original: core_door.cpp_CDoor_setSwingRange_FUN_00456220
// Address: 00456220
void __cdecl CDoor::setSwingRange(int param_1,undefined4 param_2);

// Original: core_door.cpp_CDoor_getOpenStandPos_FUN_00456260
// Address: 00456260
float * __cdecl CDoor::getOpenStandPos(int param_1,float *param_2,float *param_3,undefined4 param_4);

// Original: core_door.cpp_CDoor_updateCollisionData_FUN_00456460
// Address: 00456460
void CDoor::updateCollisionData(int param_1);

// Original: core_door.cpp_CDoor_getMoveType_FUN_004564b0
// Address: 004564b0
undefined4 __cdecl CDoor::getMoveType(int param_1,int param_2);

// Original: core_door.cpp_CDoor_onLocked_FUN_00456650
// Address: 00456650
void __cdecl CDoor::onLocked(int param_1);
