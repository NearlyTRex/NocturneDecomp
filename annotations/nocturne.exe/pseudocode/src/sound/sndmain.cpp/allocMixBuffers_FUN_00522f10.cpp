// Name: sound_sndmain.cpp_allocMixBuffers_FUN_00522f10
// Address: 00522f10
// Address Range: [[00522f10, 005230c0]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_allocMixBuffers_FUN_00522f10(int requested_size,int num_buffers)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_allocMixBuffers_FUN_00522f10(int requested_size,int num_buffers)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  g_INT_02dc8330 = 1;
  g_INT_02dc8334 = num_buffers;
  if (1 < requested_size) {
    do {
      g_INT_02dc8330 = g_INT_02dc8330 * 2;
    } while (g_INT_02dc8330 < requested_size);
  }
  iVar4 = g_INT_02dc8330 * 4;
  g_INT_02dc8328 = 0;
  g_INT_02dc832c = 0;
  g_FLOAT_PTR_02dc835c =
       realloc(g_FLOAT_PTR_02dc835c,num_buffers * iVar4 * g_INT_005bea68);
  g_FLOAT_PTR_02dc8380 =
       realloc(g_FLOAT_PTR_02dc8380,g_INT_005bea68 * iVar4 * 2);
  g_FLOAT_PTR_02dc8338 =
       realloc(g_FLOAT_PTR_02dc8338,iVar4 * g_INT_005bea68);
  if (((g_FLOAT_PTR_02dc835c == (float *)0x0) || (g_FLOAT_PTR_02dc8380 == (float *)0x0)) ||
     (g_FLOAT_PTR_02dc8338 == (float *)0x0)) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 1196;
    core_main_c_displayErrorAndQuit_FUN_004c8440("allocMixBuffers - out of memory");
  }
  iVar4 = 0;
  if (0 < g_INT_005bea68) {
    iVar3 = 0;
    iVar5 = g_INT_02dc8330 * 4;
    iVar2 = 0;
    iVar6 = iVar3;
    do {
      *(float **)((int)g_FLOAT_PTR_ARRAY_02dc8360 + iVar2) =
           g_FLOAT_PTR_02dc835c + g_INT_02dc8330 * iVar4 * g_INT_02dc8334;
      *(int *)((int)g_FLOAT_PTR_ARRAY_02dc833c + iVar2) = (int)g_FLOAT_PTR_02dc8338 + iVar3;
      pfVar1 = g_FLOAT_PTR_02dc8380;
      *(int *)((int)g_FLOAT_PTR_ARRAY_02dc8384 + iVar2) = (int)g_FLOAT_PTR_02dc8380 + iVar6;
      *(int *)((int)g_FLOAT_PTR_ARRAY_02dc83a4 + iVar2) = (int)pfVar1 + iVar5;
      iVar5 = iVar5 + g_INT_02dc8330 * 8;
      iVar6 = iVar6 + g_INT_02dc8330 * 8;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + g_INT_02dc8330 * 4;
      iVar2 = iVar2 + 4;
    } while (iVar4 < g_INT_005bea68);
  }
  return;
}
