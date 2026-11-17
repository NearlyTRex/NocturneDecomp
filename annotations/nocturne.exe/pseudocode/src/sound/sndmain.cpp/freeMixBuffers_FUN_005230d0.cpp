// Name: sound_sndmain.cpp_freeMixBuffers_FUN_005230d0
// Address: 005230d0
// Address Range: [[005230d0, 00523168]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_freeMixBuffers_FUN_005230d0(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_freeMixBuffers_FUN_005230d0(void)

{
  int iVar1;
  int iVar2;
  
  if (g_FLOAT_PTR_02dc835c != (float *)0x0) {
    free(g_FLOAT_PTR_02dc835c);
    g_FLOAT_PTR_02dc835c = (float *)0x0;
  }
  if (g_FLOAT_PTR_02dc8380 != (float *)0x0) {
    free(g_FLOAT_PTR_02dc8380);
    g_FLOAT_PTR_02dc8380 = (float *)0x0;
  }
  if (g_FLOAT_PTR_02dc8338 != (float *)0x0) {
    free(g_FLOAT_PTR_02dc8338);
    g_FLOAT_PTR_02dc8338 = (float *)0x0;
  }
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 4;
    *(uint *)((int)g_FLOAT_PTR_ARRAY_02dc833c + iVar2) = 0;
    *(uint *)((int)g_FLOAT_PTR_ARRAY_02dc8384 + iVar2) = 0;
    *(uint *)((int)g_FLOAT_PTR_ARRAY_02dc83a4 + iVar2) = 0;
    *(uint *)((int)g_FLOAT_PTR_ARRAY_02dc8360 + iVar2) = 0;
    iVar2 = iVar1;
  } while (iVar1 != 0x20);
  g_INT_02dc8334 = 0;
  g_INT_02dc8328 = 0;
  g_INT_02dc832c = 0;
  g_INT_02dc8330 = 0;
  return;
}
