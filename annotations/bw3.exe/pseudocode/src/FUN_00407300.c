// Name: FUN_00407300
// Address: 00407300
// Address Range: [[00407300, 004074a8]]
// Convention: unknown
// Signature: int FUN_00407300(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00407300(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  
  bVar10 = 0;
  piVar7 = (int *)(param_1 + 0x18);
  iVar2 = FUN_00403920(param_1 + 8);
  if (iVar2 != 0) {
    if (_DAT_01c6e2a0 == 0) {
      if (DAT_005fba20 == 0x20) {
        _DAT_01c6b5cc = FUN_00562c33;
      }
      else {
        _DAT_01c6b5cc = FUN_00562e69;
      }
    }
    else if (DAT_005fba20 == 0x20) {
      _DAT_01c6b5cc = (code *)&LAB_00560f31;
    }
    else {
      _DAT_01c6b5cc = (code *)&LAB_00561713;
    }
    _DAT_01c6e2b8 = 1;
    _DAT_01c6e2b4 = 0x1e7;
    if (((DAT_00730478 == 0) || (0x9c3 < DAT_0073047c)) || (4 < *(int *)(param_1 + 4))) {
      FUN_0043a840(*(uint *)(param_1 + 4),piVar7);
    }
    else {
      iVar3 = DAT_0073047c * 0x118;
      puVar5 = (uint *)(&DAT_00730480 + iVar3);
      DAT_0073047c = DAT_0073047c + 1;
      *puVar5 = *(uint *)(param_1 + 4);
      iVar2 = 0x7fffffff;
      iVar6 = 0;
      if (0 < *(int *)(param_1 + 4)) {
        do {
          puVar8 = &DAT_0060b014 + *piVar7 * 0xc;
          puVar9 = puVar5 + 1;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
            puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
          }
          if ((int)puVar5[3] < iVar2) {
            iVar2 = puVar5[3];
          }
          puVar5 = puVar5 + 0xc;
          iVar6 = iVar6 + 1;
          piVar7 = piVar7 + 1;
        } while (iVar6 < *(int *)(param_1 + 4));
      }
      puVar5 = (uint *)FUN_0056acf0();
      uVar1 = DAT_005fba38;
      puVar8 = (uint *)(&DAT_00730544 + iVar3);
      for (iVar6 = 0x12; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = *puVar5;
        puVar5 = puVar5 + (uint)bVar10 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      }
      *(uint *)(&DAT_0073058c + iVar3) = uVar1;
      *(int *)(&DAT_00730594 + iVar3) = iVar2;
      *(uint *)(&DAT_00730590 + iVar3) = _DAT_01c6e2ac;
    }
  }
  return param_1 + 0x18 + *(int *)(param_1 + 4) * 0xc;
}
