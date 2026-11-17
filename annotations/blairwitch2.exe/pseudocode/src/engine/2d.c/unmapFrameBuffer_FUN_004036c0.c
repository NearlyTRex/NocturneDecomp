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
  
  if (g_INT_0070ca38 == 0) {
    g_CHAR_PTR_01d046a0 = "..\\engine\\2d.c";
    g_INT_01d046a4 = 0x9cb;
    core_main_c_displayErrorAndQuit_FUN_004e4500("unmapFrameBuffer - frame buffer was not mapped!");
  }
  g_INT_006141b8 = g_INT_0070ca38;
  g_INT_006141bc = g_INT_0070ca3c;
  g_INT_01c35e48 = g_INT_0070ca40;
  g_INT_01c35e4c = g_INT_0070ca44;
  g_INT_01c35e50 = g_INT_0070ca48;
  g_INT_01c35e54 = g_INT_0070ca4c;
  g_INT_006141c0 = g_INT_0070ca50;
  if (0 < g_INT_0070ca3c) {
    iVar1 = g_INT_0070ca3c * 4;
    iVar2 = 0;
    puVar3 = g_PTR_0070ca54;
    do {
      *(byte **)((int)g_ARRAY_PTR_01c2a38c + iVar2) = puVar3;
      iVar2 = iVar2 + 4;
      puVar3 = puVar3 + g_INT_0070ca58;
    } while (iVar2 < iVar1);
  }
  g_INT_0070ca38 = 0;
  return;
}
