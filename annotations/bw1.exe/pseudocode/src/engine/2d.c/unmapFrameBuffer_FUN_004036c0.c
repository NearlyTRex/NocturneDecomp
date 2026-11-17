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
  
  if (g_INT_00713a38 == 0) {
    g_CHAR_PTR_01d1d400 = "..\\engine\\2d.c";
    g_INT_01d1d404 = 0x9e5;
    core_main_c_displayErrorAndQuit_FUN_005030e0("unmapFrameBuffer - frame buffer was not mapped!");
  }
  g_INT_0061b498 = g_INT_00713a38;
  g_INT_0061b49c = g_INT_00713a3c;
  g_INT_01c4f008 = g_INT_00713a40;
  g_INT_01c4f00c = g_INT_00713a44;
  g_INT_01c4f010 = g_INT_00713a48;
  g_INT_01c4f014 = g_INT_00713a4c;
  g_INT_0061b4a0 = g_INT_00713a50;
  if (0 < g_INT_00713a3c) {
    iVar1 = g_INT_00713a3c * 4;
    iVar2 = 0;
    puVar3 = g_PTR_00713a54;
    do {
      *(byte **)((int)g_ARRAY_PTR_01c4354c + iVar2) = puVar3;
      iVar2 = iVar2 + 4;
      puVar3 = puVar3 + g_INT_00713a58;
    } while (iVar2 < iVar1);
  }
  g_INT_00713a38 = 0;
  return;
}
