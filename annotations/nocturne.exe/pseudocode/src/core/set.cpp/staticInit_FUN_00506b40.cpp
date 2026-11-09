// Name: core_set.cpp_staticInit_FUN_00506b40
// Address: 00506b40
// Address Range: [[00506b40, 00506bbf]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_staticInit_FUN_00506b40(void)

#include "nocturne.h"

void __cdecl core_set_cpp_staticInit_FUN_00506b40(void)

{
  core_set_cpp_CDemonSet_ctor_FUN_00506bc0(&g_CDemonSetInstance);
  _atexit(&g_CDemonSetDestructorNode);
  core_dcamera_cpp_CDemonCamera_ctor_FUN_0043fee0(&g_CDemonCameraInstance);
  _atexit(&g_CDemonCameraDestructorNode);
  core_dtrace_cpp_CDemonRaytrace_ctor_FUN_004671e0(&g_CDemonRaytraceInstance);
  _atexit(&g_CDemonRaytraceDestructorNode);
  core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00452590(&g_CKeyFramedModelInstance);
  _atexit(&g_CKeyFramedModelDestructorNode);
  __arrinit(g_CVector3f_ARRAY_01fff5b0,4000,&g_CVectorTypeInfo_005993b0);
  return;
}
