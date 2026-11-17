// Name: sound_sndmain.cpp_freeMixBuffers_FUN_0056f630
// Address: 0056f630
// Address Range: [[0056f630, 0056f6c8]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_freeMixBuffers_FUN_0056f630(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_freeMixBuffers_FUN_0056f630(void)

{
  int iVar1;
  int iVar2;
  
  if (g_FLOAT_PTR_02c80694 != (float *)0x0) {
    debugFree(g_FLOAT_PTR_02c80694);
    g_FLOAT_PTR_02c80694 = (float *)0x0;
  }
  if (g_FLOAT_PTR_02c806b8 != (float *)0x0) {
    debugFree(g_FLOAT_PTR_02c806b8);
    g_FLOAT_PTR_02c806b8 = (float *)0x0;
  }
  if (g_FLOAT_PTR_02c80670 != (float *)0x0) {
    debugFree(g_FLOAT_PTR_02c80670);
    g_FLOAT_PTR_02c80670 = (float *)0x0;
  }
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 4;
    *(uint *)((int)g_FLOAT_PTR_ARRAY_02c80674 + iVar2) = 0;
    *(uint *)((int)g_FLOAT_PTR_ARRAY_02c806bc + iVar2) = 0;
    *(uint *)((int)g_FLOAT_PTR_ARRAY_02c806dc + iVar2) = 0;
    *(uint *)((int)g_FLOAT_PTR_ARRAY_02c80698 + iVar2) = 0;
    iVar2 = iVar1;
  } while (iVar1 != 0x20);
  g_INT_02c8066c = 0;
  g_INT_02c80660 = 0;
  g_INT_02c80664 = 0;
  g_INT_02c80668 = 0;
  return;
}
