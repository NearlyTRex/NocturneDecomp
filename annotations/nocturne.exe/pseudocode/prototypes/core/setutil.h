#pragma once

// Function prototypes for core/setutil.cpp
// Generated from Ghidra function signatures

// Original: core_setutil.cpp_C3DSCamera_load_FUN_005144e0
// Address: 005144e0
void __cdecl C3DSCamera::load(int param_1,undefined4 param_2);

// Original: core_setutil.cpp_C3DSCamera_loadPVS_FUN_00514800
// Address: 00514800
void __cdecl C3DSCamera::loadPVS(int param_1,undefined4 param_2);

// Original: core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_00514980
// Address: 00514980
undefined4 __cdecl C3DSCamera::testSphereInFrustum(int param_1,float *param_2,float param_3);

// Original: core_setutil.cpp_C3DSLight_load_FUN_00514a70
// Address: 00514a70
void __cdecl C3DSLight::load(int param_1,undefined4 param_2);

// Original: core_setutil.cpp_C3DSLight_create_FUN_005151f0
// Address: 005151f0
char * __cdecl C3DSLight::create(int param_1);

// Original: core_setutil.cpp_C3DSLight_apply_FUN_00515350
// Address: 00515350
undefined1 C3DSLight::apply(int param_1,char *param_2);

// Original: core_setutil.cpp_C3DSLight_process_FUN_00515420
// Address: 00515420
void __cdecl C3DSLight::process(int param_1,int param_2,int param_3);

// Original: core_setutil.cpp_C3DSLight_advanceFilter_FUN_005155e0
// Address: 005155e0
void __cdecl C3DSLight::advanceFilter(int param_1,int param_2);

// Original: core_setutil.cpp_C3DSLight_setFilterFrame_FUN_00515670
// Address: 00515670
void __cdecl C3DSLight::setFilterFrame(int param_1,int param_2,int param_3);

// Original: core_setutil.cpp_C3DSLight_addFilter_FUN_00515710
// Address: 00515710
void __cdecl C3DSLight::addFilter(int param_1,char *param_2,undefined4 param_3,undefined4 param_4);

// Original: core_setutil.cpp_C3DSLight_reset_FUN_00515800
// Address: 00515800
void __cdecl C3DSLight::reset(int param_1);
