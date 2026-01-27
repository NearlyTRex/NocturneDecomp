// Name: core_main.c_staticInit_FUN_00506e80
// Address: 00506e80
// Address Range: [[00506e80, 00506f0d]]
// Convention: __cdecl
// Signature: void core_main.c_staticInit_FUN_00506e80(void)

#include "nocturne.h"

void __cdecl core_main_c_staticInit_FUN_00506e80(void)

{
  engine_fileio_cpp_CFileManager_ctor_FUN_004b53a0(&g_CDemonFileManagerInstance.base);
  g_CDemonFileManagerInstance.base.vtable = &g_CDemonFileManagerVTable;
  crt_stdlib_c_atexit_FUN_005ff060(&g_CDemonFileManagerDestructorNode);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&g_LoadingScreenBitmap1);
  crt_stdlib_c_atexit_FUN_005ff060(&g_LoadingScreenBitmap1DestructorNode);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&g_LoadingScreenBitmap2);
  crt_stdlib_c_atexit_FUN_005ff060(&g_LoadingScreenBitmap2DestructorNode);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&g_LoadingScreenBitmap3);
  crt_stdlib_c_atexit_FUN_005ff060(&g_LoadingScreenBitmap3DestructorNode);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&g_LoadingScreenBitmap4);
  crt_stdlib_c_atexit_FUN_005ff060(&g_LoadingScreenBitmap4DestructorNode);
  return;
}
