// Name: core_level.cpp_staticInit_FUN_004e1440
// Address: 004e1440
// Address Range: [[004e1440, 004e1467]]
// Convention: unknown
// Signature: void core_level_cpp_staticInit_FUN_004e1440(void)

#include "nocturne.h"

void core_level_cpp_staticInit_FUN_004e1440(void)

{
  core_level_cpp_CLevelLoader_reset_FUN_004e1470((CLevelLoader *)0x1d03000);
  core_dmodel_cpp_CKeyFramedModel_ctor_FUN_0044dc10(&g_LoadingMoonModel);
  _atexit(&g_LoadingMoonModelDestructorNode);
  return;
}
