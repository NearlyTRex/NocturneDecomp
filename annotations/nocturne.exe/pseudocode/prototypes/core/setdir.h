#pragma once

// Function prototypes for core/setdir.cpp
// Generated from Ghidra function signatures

// Original: core_setdir.cpp_CDemonSet_setPendingCamera_FUN_005135d0
// Address: 005135d0
void __cdecl CDemonSet::setPendingCamera(int param_1,undefined4 param_2,undefined4 param_3);

// Original: core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_005135f0
// Address: 005135f0
void __cdecl CDemonSet::clearCameraSwitchCooldown(int param_1);

// Original: core_setdir.cpp_CDemonSet_refreshThumbs_FUN_00513610
// Address: 00513610
void __cdecl CDemonSet::refreshThumbs(undefined4 *param_1,undefined4 param_2);

// Original: core_setdir.cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00513ce0
// Address: 00513ce0
void __cdecl CDemonSet::skipDeprecatedVirtualDirectorData(undefined4 param_1,undefined4 param_2);

// Original: core_setdir.cpp_CDemonSet_isPointInVdirBox_FUN_00513d80
// Address: 00513d80
undefined4 __cdecl CDemonSet::isPointInVdirBox(int param_1,int param_2,float *param_3);

// Original: core_setdir.cpp_testOBBIntersection_FUN_00513e80
// Address: 00513e80
undefined4 __cdecl testOBBIntersection(float *param_1,float *param_2);

// Original: core_setdir.cpp_CDemonSet_buildVdirBoxGroups_FUN_005141f0
// Address: 005141f0
undefined8 CDemonSet::buildVdirBoxGroups(int param_1);

// Original: core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_00514300
// Address: 00514300
void __cdecl CDemonSet::findVdirBoxRoot(int param_1,int param_2);

// Original: core_setdir.cpp_CDemonSet_findVdirBoxAtPosition_FUN_00514340
// Address: 00514340
undefined4 CDemonSet::findVdirBoxAtPosition(int param_1,undefined4 param_2);
