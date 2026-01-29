// Name: core_moon.cpp_staticInit_FUN_005299f0
// Address: 005299f0
// Address Range: [[005299f0, 00529a7a]]
// Convention: __cdecl
// Signature: void __cdecl core_moon_cpp_staticInit_FUN_005299f0(void)

#include "nocturne.h"

void __cdecl core_moon_cpp_staticInit_FUN_005299f0(void)

{
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&g_MoonCloudTexture);
  _atexit(&DAT_0067d718);
  __arrinit(g_MoonAnimTextures,0x1e,&g_CAlphaBitmapTypeInfo);
  _atexit(&DAT_0067d728);
  __arrinit(g_MoonBatCourses,3,&g_CCourseTypeInfo);
  _atexit(&DAT_0067d738);
  __arrinit(g_MoonBats,0x1e,&g_SBatTypeInfo);
  core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00476cf0(&g_MoonBatModel);
  _atexit(&DAT_0067d748);
  return;
}
