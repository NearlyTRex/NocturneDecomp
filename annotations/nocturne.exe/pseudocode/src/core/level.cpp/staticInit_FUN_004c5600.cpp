// Name: core_level.cpp_staticInit_FUN_004c5600
// Address: 004c5600
// Address Range: [[004c5600, 004c5627]]
// Convention: __cdecl
// Signature: void __cdecl core_level_cpp_staticInit_FUN_004c5600(void)

#include "nocturne.h"

void __cdecl core_level_cpp_staticInit_FUN_004c5600(void)

{
  core_level_cpp_CLevelLoader_reset_FUN_004c5630(&g_CLevelLoader_01cc3160);
  core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00452590(&g_CKeyFramedModel_01cc3290);
  _atexit(&g_WatcomStaticDestructorNode_005bac90);
  return;
}
