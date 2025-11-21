// Name: core_moon.cpp_staticInit_FUN_005299f0
// Address: 005299f0
// Address Range: [[005299f0, 00529a7a]]
// Convention: __cdecl
// Signature: void core_moon.cpp_staticInit_FUN_005299f0(void)
// Globals:
//   WatcomTypeInfo g_CCourseTypeInfo
//   WatcomTypeInfo g_CAlphaBitmapTypeInfo
//   WatcomTypeInfo g_SBatTypeInfo
//   WatcomStaticDestructorNode DAT_0067d718
//   WatcomStaticDestructorNode DAT_0067d728
//   WatcomStaticDestructorNode DAT_0067d738
//   WatcomStaticDestructorNode DAT_0067d748
//   CAlphaBitmap g_MoonCloudTexture
//   CAlphaBitmap[30] g_MoonAnimTextures
//   CCourse[3] g_MoonBatCourses
//   SBat[30] g_MoonBats
//   CKeyFramedModel g_MoonBatModel
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   crt_stdlib.c_atexit_FUN_005ff060
//   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520

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


// Assembly code:
// 005299f0: PUSH 0x2f37f70
//   Label: core_moon.cpp_staticInit_FUN_005299f0
//   XREF to: 02f37f70 (DATA)
// 005299f5: CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
//   XREF to: 00410520 (UNCONDITIONAL_CALL)
// 005299fa: ADD ESP,0x4
// 005299fd: PUSH 0x67d718
//   XREF to: 0067d718 (DATA)
// 00529a02: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 00529a07: ADD ESP,0x4
// 00529a0a: PUSH 0x65e9f0
//   XREF to: 0065e9f0 (DATA)
// 00529a0f: PUSH 0x1e
// 00529a11: PUSH 0x2f37f84
//   XREF to: 02f37f84 (DATA)
// 00529a16: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 00529a1b: ADD ESP,0xc
// 00529a1e: PUSH 0x67d728
//   XREF to: 0067d728 (DATA)
// 00529a23: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 00529a28: ADD ESP,0x4
// 00529a2b: PUSH 0x65c9d0
//   XREF to: 0065c9d0 (DATA)
// 00529a30: PUSH 0x3
// 00529a32: PUSH 0x2f381e8
//   XREF to: 02f381e8 (DATA)
// 00529a37: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 00529a3c: ADD ESP,0xc
// 00529a3f: PUSH 0x67d738
//   XREF to: 0067d738 (DATA)
// 00529a44: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 00529a49: ADD ESP,0x4
// 00529a4c: PUSH 0x661b20
//   XREF to: 00661b20 (DATA)
// 00529a51: PUSH 0x1e
// 00529a53: PUSH 0x2f3820c
//   XREF to: 02f3820c (DATA)
// 00529a58: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 00529a5d: ADD ESP,0xc
// 00529a60: PUSH 0x2f384dc
//   XREF to: 02f384dc (DATA)
// 00529a65: CALL core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0
//   XREF to: 00476cf0 (UNCONDITIONAL_CALL)
// 00529a6a: ADD ESP,0x4
// 00529a6d: PUSH 0x67d748
//   XREF to: 0067d748 (DATA)
// 00529a72: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 00529a77: ADD ESP,0x4
// 00529a7a: RET
