// Name: engine_special.cpp_clearScreen_FUN_0057dc40
// Address: 0057dc40
// Address Range: [[0057dc40, 0057dca3]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_clearScreen_FUN_0057dc40(void)

#include "nocturne.h"

void __cdecl engine_special_cpp_clearScreen_FUN_0057dc40(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  double *pdVar5;
  
  if (g_INT_01c50948 != 0) {
    engine_special_cpp_clear_FUN_00582790();
    return;
  }
  iVar4 = 0;
  do {
    g_DOUBLE_00623de4 = g_DOUBLE_00623ddc;
    pdVar5 = (double *)g_ARRAY_PTR_01c4354c[iVar4];
    uVar2 = (uint)(g_INT_0061b498 * g_INT_0061b4a0) >> 3;
    do {
      *pdVar5 = g_DOUBLE_00623de4;
      pdVar5[1] = g_DOUBLE_00623de4;
      pdVar5[2] = g_DOUBLE_00623de4;
      pdVar5[3] = g_DOUBLE_00623de4;
      pdVar5 = pdVar5 + 4;
      uVar3 = uVar2 - 0x20;
      bVar1 = 0x1f < (int)uVar2;
      uVar2 = uVar3;
    } while (uVar3 != 0 && bVar1);
    iVar4 = iVar4 + 1;
  } while (iVar4 < g_INT_0061b49c);
  return;
}
