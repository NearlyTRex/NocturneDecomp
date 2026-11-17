// Name: engine_2d.c_unmapFrameBuffer_FUN_004036c0
// Address: 004036c0
// Address Range: [[004036c0, 0040378b]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_unmapFrameBuffer_FUN_004036c0(void)

#include "nocturne.h"

void __cdecl engine_2d_c_unmapFrameBuffer_FUN_004036c0(void)

{
  int iVar1;
  int iVar2;
  byte *puVar3;
  
  if (g_INT_007303b8 == 0) {
    g_CHAR_PTR_01d71de0 = "..\\engine\\2d.c";
    g_INT_01d71de4 = 0x9e5;
    core_main_c_displayErrorAndQuit_FUN_004e4330("unmapFrameBuffer - frame buffer was not mapped!");
  }
  g_INT_005fba18 = g_INT_007303b8;
  g_INT_005fba1c = g_INT_007303bc;
  g_INT_01c6b5a8 = g_INT_007303c0;
  g_INT_01c6b5ac = g_INT_007303c4;
  g_INT_01c6b5b0 = g_INT_007303c8;
  g_INT_01c6b5b4 = g_INT_007303cc;
  g_INT_005fba20 = g_INT_007303d0;
  if (0 < g_INT_007303bc) {
    iVar1 = g_INT_007303bc * 4;
    iVar2 = 0;
    puVar3 = g_PTR_007303d4;
    do {
      *(byte **)((int)g_ARRAY_PTR_01c5faec + iVar2) = puVar3;
      iVar2 = iVar2 + 4;
      puVar3 = puVar3 + g_INT_007303d8;
    } while (iVar2 < iVar1);
  }
  g_INT_007303b8 = 0;
  return;
}
