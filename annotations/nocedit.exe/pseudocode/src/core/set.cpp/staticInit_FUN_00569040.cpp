// Name: core_set.cpp_staticInit_FUN_00569040
// Address: 00569040
// Address Range: [[00569040, 005690bf]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_staticInit_FUN_00569040(void)

#include "nocturne.h"

void __cdecl core_set_cpp_staticInit_FUN_00569040(void)

{
  core_set_cpp_CDemonSet_ctor_FUN_005690c0(&g_CDemonSetInstance);
  crt_stdlib_c_atexit_FUN_005ff060(&g_CDemonSetDestructorNode);
  core_dcamera_cpp_CDemonCamera_ctor_FUN_0044c030(&g_CDemonCameraInstance);
  crt_stdlib_c_atexit_FUN_005ff060(&g_CDemonCameraDestructorNode);
  core_dtrace_cpp_CDemonRaytrace_ctor_FUN_00494200(&g_CDemonRaytraceInstance);
  crt_stdlib_c_atexit_FUN_005ff060(&g_CDemonRaytraceDestructorNode);
  core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00476cf0(&g_CKeyFramedModelInstance);
  crt_stdlib_c_atexit_FUN_005ff060(&g_CKeyFramedModelDestructorNode);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_FaceNormalArray,4000,&g_CVectorTypeInfo);
  return;
}
