// Name: core_set.cpp_staticInit_FUN_0052bbe0
// Address: 0052bbe0
// Address Range: [[0052bbe0, 0052bc5f]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_staticInit_FUN_0052bbe0(void)

#include "nocturne.h"

void __cdecl core_set_cpp_staticInit_FUN_0052bbe0(void)

{
  core_set_cpp_CDemonSet_ctor_FUN_0052bd20(&g_CDemonSetInstance);
  _atexit(&g_CDemonSetDestructorNode);
  core_dcamera_cpp_CDemonCamera_ctor_FUN_0043b400(&g_CDemonCameraInstance);
  _atexit(&g_CDemonCameraDestructorNode);
  core_dtrace_cpp_CDemonRaytrace_ctor_FUN_00472400(&g_CDemonRaytraceInstance);
  _atexit(&g_CDemonRaytraceDestructorNode);
  core_dmodel_cpp_CKeyFramedModel_ctor_FUN_0044dc10(&g_CKeyFramedModelInstance);
  _atexit(&g_CKeyFramedModelDestructorNode);
  __arrinit(&DAT_0200e8f4,4000,&g_CVectorTypeInfo);
  return;
}
