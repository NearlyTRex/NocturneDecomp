// Name: sound_sndmain.cpp_freeMixBuffers_FUN_00552b30
// Address: 00552b30
// Address Range: [[00552b30, 00552bc8]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_freeMixBuffers_FUN_00552b30(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_freeMixBuffers_FUN_00552b30(void)

{
  int iVar1;
  int iVar2;
  
  if (g_FLOAT_PTR_02cf32c8 != (float *)0x0) {
    debugFree(g_FLOAT_PTR_02cf32c8);
    g_FLOAT_PTR_02cf32c8 = (float *)0x0;
  }
  if (g_FLOAT_PTR_02cf32ec != (float *)0x0) {
    debugFree(g_FLOAT_PTR_02cf32ec);
    g_FLOAT_PTR_02cf32ec = (float *)0x0;
  }
  if (g_FLOAT_PTR_02cf32a4 != (float *)0x0) {
    debugFree(g_FLOAT_PTR_02cf32a4);
    g_FLOAT_PTR_02cf32a4 = (float *)0x0;
  }
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 4;
    *(uint *)((int)g_FLOAT_PTR_ARRAY_02cf32a8 + iVar2) = 0;
    *(uint *)((int)g_FLOAT_PTR_ARRAY_02cf32f0 + iVar2) = 0;
    *(uint *)((int)g_FLOAT_PTR_ARRAY_02cf3310 + iVar2) = 0;
    *(uint *)((int)g_FLOAT_PTR_ARRAY_02cf32cc + iVar2) = 0;
    iVar2 = iVar1;
  } while (iVar1 != 0x20);
  g_INT_02cf32a0 = 0;
  g_INT_02cf3294 = 0;
  g_INT_02cf3298 = 0;
  g_INT_02cf329c = 0;
  return;
}
