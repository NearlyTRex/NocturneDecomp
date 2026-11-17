// Name: sound_sndmain.cpp_allocMixBuffers_FUN_0054ce00
// Address: 0054ce00
// Address Range: [[0054ce00, 0054cfb0]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_allocMixBuffers_FUN_0054ce00(int requested_size,int num_buffers)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_allocMixBuffers_FUN_0054ce00(int requested_size,int num_buffers)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  g_INT_02648e98 = 1;
  g_INT_02648e9c = num_buffers;
  if (1 < requested_size) {
    do {
      g_INT_02648e98 = g_INT_02648e98 * 2;
    } while (g_INT_02648e98 < requested_size);
  }
  iVar4 = g_INT_02648e98 * 4;
  g_INT_02648e90 = 0;
  g_INT_02648e94 = 0;
  g_FLOAT_PTR_02648ec4 =
       realloc(g_FLOAT_PTR_02648ec4,num_buffers * iVar4 * g_INT_0061bc9c);
  g_FLOAT_PTR_02648ee8 =
       realloc(g_FLOAT_PTR_02648ee8,g_INT_0061bc9c * iVar4 * 2);
  g_FLOAT_PTR_02648ea0 =
       realloc(g_FLOAT_PTR_02648ea0,iVar4 * g_INT_0061bc9c);
  if (((g_FLOAT_PTR_02648ec4 == (float *)0x0) || (g_FLOAT_PTR_02648ee8 == (float *)0x0)) ||
     (g_FLOAT_PTR_02648ea0 == (float *)0x0)) {
    g_CHAR_PTR_01d046a0 = "..\\sound\\sndmain.cpp";
    g_INT_01d046a4 = 0x55f;
    core_main_c_displayErrorAndQuit_FUN_004e4500("allocMixBuffers - out of memory");
  }
  iVar4 = 0;
  if (0 < g_INT_0061bc9c) {
    iVar3 = 0;
    iVar5 = g_INT_02648e98 * 4;
    iVar2 = 0;
    iVar6 = iVar3;
    do {
      *(float **)((int)g_FLOAT_PTR_ARRAY_02648ec8 + iVar2) =
           g_FLOAT_PTR_02648ec4 + g_INT_02648e98 * iVar4 * g_INT_02648e9c;
      *(int *)((int)g_FLOAT_PTR_ARRAY_02648ea4 + iVar2) = (int)g_FLOAT_PTR_02648ea0 + iVar3;
      pfVar1 = g_FLOAT_PTR_02648ee8;
      *(int *)((int)g_FLOAT_PTR_ARRAY_02648eec + iVar2) = (int)g_FLOAT_PTR_02648ee8 + iVar6;
      *(int *)((int)g_FLOAT_PTR_ARRAY_02648f0c + iVar2) = (int)pfVar1 + iVar5;
      iVar5 = iVar5 + g_INT_02648e98 * 8;
      iVar6 = iVar6 + g_INT_02648e98 * 8;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + g_INT_02648e98 * 4;
      iVar2 = iVar2 + 4;
    } while (iVar4 < g_INT_0061bc9c);
  }
  return;
}
