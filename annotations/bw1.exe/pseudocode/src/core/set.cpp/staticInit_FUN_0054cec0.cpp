// Name: core_set.cpp_staticInit_FUN_0054cec0
// Address: 0054cec0
// Address Range: [[0054cec0, 0054cf3f]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_staticInit_FUN_0054cec0(void)

#include "nocturne.h"

void __cdecl core_set_cpp_staticInit_FUN_0054cec0(void)

{
  core_set_cpp_CDemonSet_ctor_FUN_0054d000(&g_CDemonSetInstance);
  _atexit();
  core_dcamera_cpp_CDemonCamera_ctor_FUN_0044caa0(&g_CDemonCameraInstance);
  _atexit();
  core_dtrace_cpp_CDemonRaytrace_ctor_FUN_0048a8f0(&g_CDemonRaytraceInstance);
  _atexit();
  core_dmodel_cpp_CKeyFramedModel_ctor_FUN_004667e0(&g_CKeyFramedModelInstance);
  _atexit();
  __arrinit(&DAT_0202a8a8);
  return;
}
