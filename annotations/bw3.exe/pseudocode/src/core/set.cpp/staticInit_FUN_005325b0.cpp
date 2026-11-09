// Name: core_set.cpp_staticInit_FUN_005325b0
// Address: 005325b0
// Address Range: [[005325b0, 0053262f]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_staticInit_FUN_005325b0(void)

#include "nocturne.h"

void __cdecl core_set_cpp_staticInit_FUN_005325b0(void)

{
  core_set_cpp_CDemonSet_ctor_FUN_005327c0(&g_CDemonSetInstance);
  _atexit();
  core_dcamera_cpp_CDemonCamera_ctor_FUN_00448be0(&g_CDemonCameraInstance);
  _atexit();
  core_dtrace_cpp_CDemonRaytrace_ctor_FUN_00473470(&g_CDemonRaytraceInstance);
  _atexit();
  core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00460490(&g_CKeyFramedModelInstance);
  _atexit();
  __arrinit(&DAT_02080010);
  return;
}
