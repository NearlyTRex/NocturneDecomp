// Name: sound_sndmain.cpp_allocMixBuffers_FUN_00552970
// Address: 00552970
// Address Range: [[00552970, 00552b20]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_allocMixBuffers_FUN_00552970(int requested_size,int num_buffers)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_allocMixBuffers_FUN_00552970(int requested_size,int num_buffers)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  g_INT_02cf329c = 1;
  g_INT_02cf32a0 = num_buffers;
  if (1 < requested_size) {
    do {
      g_INT_02cf329c = g_INT_02cf329c * 2;
    } while (g_INT_02cf329c < requested_size);
  }
  iVar4 = g_INT_02cf329c * 4;
  g_INT_02cf3294 = 0;
  g_INT_02cf3298 = 0;
  g_FLOAT_PTR_02cf32c8 =
       realloc(g_FLOAT_PTR_02cf32c8,num_buffers * iVar4 * g_INT_0060422c);
  g_FLOAT_PTR_02cf32ec =
       realloc(g_FLOAT_PTR_02cf32ec,g_INT_0060422c * iVar4 * 2);
  g_FLOAT_PTR_02cf32a4 =
       realloc(g_FLOAT_PTR_02cf32a4,iVar4 * g_INT_0060422c);
  if (((g_FLOAT_PTR_02cf32c8 == (float *)0x0) || (g_FLOAT_PTR_02cf32ec == (float *)0x0)) ||
     (g_FLOAT_PTR_02cf32a4 == (float *)0x0)) {
    g_CHAR_PTR_01d71de0 = "..\\sound\\sndmain.cpp";
    g_INT_01d71de4 = 0x561;
    core_main_c_displayErrorAndQuit_FUN_004e4330("allocMixBuffers - out of memory");
  }
  iVar4 = 0;
  if (0 < g_INT_0060422c) {
    iVar3 = 0;
    iVar5 = g_INT_02cf329c * 4;
    iVar2 = 0;
    iVar6 = iVar3;
    do {
      *(float **)((int)g_FLOAT_PTR_ARRAY_02cf32cc + iVar2) =
           g_FLOAT_PTR_02cf32c8 + g_INT_02cf329c * iVar4 * g_INT_02cf32a0;
      *(int *)((int)g_FLOAT_PTR_ARRAY_02cf32a8 + iVar2) = (int)g_FLOAT_PTR_02cf32a4 + iVar3;
      pfVar1 = g_FLOAT_PTR_02cf32ec;
      *(int *)((int)g_FLOAT_PTR_ARRAY_02cf32f0 + iVar2) = (int)g_FLOAT_PTR_02cf32ec + iVar6;
      *(int *)((int)g_FLOAT_PTR_ARRAY_02cf3310 + iVar2) = (int)pfVar1 + iVar5;
      iVar5 = iVar5 + g_INT_02cf329c * 8;
      iVar6 = iVar6 + g_INT_02cf329c * 8;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + g_INT_02cf329c * 4;
      iVar2 = iVar2 + 4;
    } while (iVar4 < g_INT_0060422c);
  }
  return;
}
