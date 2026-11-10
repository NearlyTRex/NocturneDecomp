// Name: core_level.cpp_staticInit_FUN_004fe800
// Address: 004fe800
// Address Range: [[004fe800, 004fe827]]
// Convention: unknown
// Signature: void core_level_cpp_staticInit_FUN_004fe800(void)

#include "nocturne.h"

void core_level_cpp_staticInit_FUN_004fe800(void)

{
  core_level_cpp_CLevelLoader_reset_FUN_004fe830((CLevelLoader *)0x1d1bd1c);
  core_dmodel_cpp_CKeyFramedModel_ctor_FUN_004667e0(&g_LoadingMoonModel);
  _atexit();
  return;
}
