// Name: core_set.cpp_staticInit_FUN_00506b40
// Address: 00506b40
// Address Range: [[00506b40, 00506bbf]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_staticInit_FUN_00506b40(void)

#include "nocturne.h"

void __cdecl core_set_cpp_staticInit_FUN_00506b40(void)

{
  core_set_cpp_CDemonSet_ctor_FUN_00506bc0((CDemonSet *)&DAT_01e57284);
  _atexit(&g_WatcomStaticDestructorNode_005be328);
  core_dcamera_cpp_CDemonCamera_ctor_FUN_0043fee0((CDemonCamera *)&DAT_01fb8508);
  _atexit(&g_WatcomStaticDestructorNode_005be338);
  core_dtrace_cpp_CDemonRaytrace_ctor_FUN_004671e0((CDemonRaytrace *)&DAT_01fba938);
  _atexit(&g_WatcomStaticDestructorNode_005be348);
  core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00452590((CKeyFramedModel *)&DAT_01fbacc8);
  _atexit(&g_WatcomStaticDestructorNode_005be358);
  __arrinit(&DAT_01fff5b0,4000,&g_CVectorTypeInfo_005993b0);
  return;
}
