// Name: core_moon.cpp_staticInit_FUN_005299f0
// Address: 005299f0
// Address Range: [[005299f0, 00529a7a]]
// Convention: __cdecl
// Signature: void __cdecl core_moon_cpp_staticInit_FUN_005299f0(void)

#include "nocturne.h"

void __cdecl core_moon_cpp_staticInit_FUN_005299f0(void)

{
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&g_MoonCloudTexture);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_0067d718);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_MoonAnimTextures,0x1e,&g_CAlphaBitmapTypeInfo);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_0067d728);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(g_MoonBatCourses,3,&g_CCourseTypeInfo);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_0067d738);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(g_MoonBats,0x1e,&g_SBatTypeInfo);
  core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00476cf0(&g_MoonBatModel);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_0067d748);
  return;
}
