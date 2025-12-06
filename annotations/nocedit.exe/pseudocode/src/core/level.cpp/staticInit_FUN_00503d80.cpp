// Name: core_level.cpp_staticInit_FUN_00503d80
// Address: 00503d80
// Address Range: [[00503d80, 00503da7]]
// Convention: __cdecl
// Signature: void core_level.cpp_staticInit_FUN_00503d80(void)

#include "nocturne.h"

void __cdecl core_level_cpp_staticInit_FUN_00503d80(void)

{
  core_level_cpp_CLevelLoader_reset_FUN_00503db0(&g_CLevelLoaderInstance);
  core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00476cf0(&g_LoadingMoonModel);
  crt_stdlib_c_atexit_FUN_005ff060(&g_LoadingMoonModelDestructorNode);
  return;
}
