// Name: sound_sndmain.cpp_allocMixBuffers_FUN_0056f470
// Address: 0056f470
// Address Range: [[0056f470, 0056f620]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_allocMixBuffers_FUN_0056f470(int requested_size,int num_buffers)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_allocMixBuffers_FUN_0056f470(int requested_size,int num_buffers)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  g_INT_02c80668 = 1;
  g_INT_02c8066c = num_buffers;
  if (1 < requested_size) {
    do {
      g_INT_02c80668 = g_INT_02c80668 * 2;
    } while (g_INT_02c80668 < requested_size);
  }
  iVar4 = g_INT_02c80668 * 4;
  g_INT_02c80660 = 0;
  g_INT_02c80664 = 0;
  g_FLOAT_PTR_02c80694 =
       realloc(g_FLOAT_PTR_02c80694,num_buffers * iVar4 * g_INT_006232ec);
  g_FLOAT_PTR_02c806b8 =
       realloc(g_FLOAT_PTR_02c806b8,g_INT_006232ec * iVar4 * 2);
  g_FLOAT_PTR_02c80670 =
       realloc(g_FLOAT_PTR_02c80670,iVar4 * g_INT_006232ec);
  if (((g_FLOAT_PTR_02c80694 == (float *)0x0) || (g_FLOAT_PTR_02c806b8 == (float *)0x0)) ||
     (g_FLOAT_PTR_02c80670 == (float *)0x0)) {
    g_CHAR_PTR_01d1d400 = "..\\sound\\sndmain.cpp";
    g_INT_01d1d404 = 0x55f;
    core_main_c_displayErrorAndQuit_FUN_005030e0("allocMixBuffers - out of memory");
  }
  iVar4 = 0;
  if (0 < g_INT_006232ec) {
    iVar3 = 0;
    iVar5 = g_INT_02c80668 * 4;
    iVar2 = 0;
    iVar6 = iVar3;
    do {
      *(float **)((int)g_FLOAT_PTR_ARRAY_02c80698 + iVar2) =
           g_FLOAT_PTR_02c80694 + g_INT_02c80668 * iVar4 * g_INT_02c8066c;
      *(int *)((int)g_FLOAT_PTR_ARRAY_02c80674 + iVar2) = (int)g_FLOAT_PTR_02c80670 + iVar3;
      pfVar1 = g_FLOAT_PTR_02c806b8;
      *(int *)((int)g_FLOAT_PTR_ARRAY_02c806bc + iVar2) = (int)g_FLOAT_PTR_02c806b8 + iVar6;
      *(int *)((int)g_FLOAT_PTR_ARRAY_02c806dc + iVar2) = (int)pfVar1 + iVar5;
      iVar5 = iVar5 + g_INT_02c80668 * 8;
      iVar6 = iVar6 + g_INT_02c80668 * 8;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + g_INT_02c80668 * 4;
      iVar2 = iVar2 + 4;
    } while (iVar4 < g_INT_006232ec);
  }
  return;
}
