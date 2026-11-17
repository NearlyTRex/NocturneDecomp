// Name: engine_special.cpp_clearScreen_FUN_0055b1f0
// Address: 0055b1f0
// Address Range: [[0055b1f0, 0055b253]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_clearScreen_FUN_0055b1f0(void)

#include "nocturne.h"

void __cdecl engine_special_cpp_clearScreen_FUN_0055b1f0(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  double *pdVar5;
  
  if (g_INT_01c37788 != 0) {
    engine_special_cpp_clear_FUN_0055fd40();
    return;
  }
  iVar4 = 0;
  do {
    g_DOUBLE_0061c794 = g_DOUBLE_0061c78c;
    pdVar5 = (double *)g_ARRAY_PTR_01c2a38c[iVar4];
    uVar2 = (uint)(g_INT_006141b8 * g_INT_006141c0) >> 3;
    do {
      *pdVar5 = g_DOUBLE_0061c794;
      pdVar5[1] = g_DOUBLE_0061c794;
      pdVar5[2] = g_DOUBLE_0061c794;
      pdVar5[3] = g_DOUBLE_0061c794;
      pdVar5 = pdVar5 + 4;
      uVar3 = uVar2 - 0x20;
      bVar1 = 0x1f < (int)uVar2;
      uVar2 = uVar3;
    } while (uVar3 != 0 && bVar1);
    iVar4 = iVar4 + 1;
  } while (iVar4 < g_INT_006141bc);
  return;
}
