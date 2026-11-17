// Name: sound_sndmain.cpp_freeMixBuffers_FUN_0054cfc0
// Address: 0054cfc0
// Address Range: [[0054cfc0, 0054d058]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_freeMixBuffers_FUN_0054cfc0(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_freeMixBuffers_FUN_0054cfc0(void)

{
  int iVar1;
  int iVar2;
  
  if (g_FLOAT_PTR_02648ec4 != (float *)0x0) {
    debugFree(g_FLOAT_PTR_02648ec4);
    g_FLOAT_PTR_02648ec4 = (float *)0x0;
  }
  if (g_FLOAT_PTR_02648ee8 != (float *)0x0) {
    debugFree(g_FLOAT_PTR_02648ee8);
    g_FLOAT_PTR_02648ee8 = (float *)0x0;
  }
  if (g_FLOAT_PTR_02648ea0 != (float *)0x0) {
    debugFree(g_FLOAT_PTR_02648ea0);
    g_FLOAT_PTR_02648ea0 = (float *)0x0;
  }
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 4;
    *(uint *)((int)g_FLOAT_PTR_ARRAY_02648ea4 + iVar2) = 0;
    *(uint *)((int)g_FLOAT_PTR_ARRAY_02648eec + iVar2) = 0;
    *(uint *)((int)g_FLOAT_PTR_ARRAY_02648f0c + iVar2) = 0;
    *(uint *)((int)g_FLOAT_PTR_ARRAY_02648ec8 + iVar2) = 0;
    iVar2 = iVar1;
  } while (iVar1 != 0x20);
  g_INT_02648e9c = 0;
  g_INT_02648e90 = 0;
  g_INT_02648e94 = 0;
  g_INT_02648e98 = 0;
  return;
}
