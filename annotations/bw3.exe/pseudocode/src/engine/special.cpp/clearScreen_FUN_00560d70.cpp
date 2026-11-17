// Name: engine_special.cpp_clearScreen_FUN_00560d70
// Address: 00560d70
// Address Range: [[00560d70, 00560dd3]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_clearScreen_FUN_00560d70(void)

#include "nocturne.h"

void __cdecl engine_special_cpp_clearScreen_FUN_00560d70(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  double *pdVar5;
  
  if (g_INT_01c6cee8 != 0) {
    engine_special_cpp_clear_FUN_00566060();
    return;
  }
  iVar4 = 0;
  do {
    g_BufferFillFpuPopST0 = g_BufferFillZeroQword;
    pdVar5 = (double *)g_ScreenBufferArray[iVar4];
    uVar2 = (uint)(g_INT_005fba18 * g_INT_005fba20) >> 3;
    do {
      *pdVar5 = g_BufferFillFpuPopST0;
      pdVar5[1] = g_BufferFillFpuPopST0;
      pdVar5[2] = g_BufferFillFpuPopST0;
      pdVar5[3] = g_BufferFillFpuPopST0;
      pdVar5 = pdVar5 + 4;
      uVar3 = uVar2 - 0x20;
      bVar1 = 0x1f < (int)uVar2;
      uVar2 = uVar3;
    } while (uVar3 != 0 && bVar1);
    iVar4 = iVar4 + 1;
  } while (iVar4 < g_INT_005fba1c);
  return;
}
