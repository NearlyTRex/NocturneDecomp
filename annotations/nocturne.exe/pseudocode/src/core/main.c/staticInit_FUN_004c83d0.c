// Name: core_main.c_staticInit_FUN_004c83d0
// Address: 004c83d0
// Address Range: [[004c83d0, 004c8438]]
// Convention: __cdecl
// Signature: void __cdecl core_main_c_staticInit_FUN_004c83d0(void)

#include "nocturne.h"

void __cdecl core_main_c_staticInit_FUN_004c83d0(void)

{
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040e320(&g_LoadingScreenBitmap1);
  _atexit(&g_LoadingScreenBitmap1DestructorNode);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040e320(&g_LoadingScreenBitmap2);
  _atexit(&g_LoadingScreenBitmap2DestructorNode);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040e320(&g_LoadingScreenBitmap3);
  _atexit(&g_LoadingScreenBitmap3DestructorNode);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040e320(&g_LoadingScreenBitmap4);
  _atexit(&g_LoadingScreenBitmap4DestructorNode);
  return;
}
