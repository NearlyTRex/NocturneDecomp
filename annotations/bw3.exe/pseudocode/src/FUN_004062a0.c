// Name: FUN_004062a0
// Address: 004062a0
// Address Range: [[004062a0, 00406533]]
// Convention: unknown
// Signature: int FUN_004062a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004062a0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = FUN_00403920(param_1 + 8);
  if (iVar1 != 0) {
    if (DAT_007303f4 == 0) {
      if (DAT_007303f0 == 0) {
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
        if (0x00000001 == 0) {
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
          _DAT_01c6e2b8 = 0;
          _DAT_01c6e2b4 = 0xc1;
        }
        else {
          _DAT_01c6e2b8 = 1;
          _DAT_01c6e2b4 = 0xc1;
        }
      }
      else {
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
        _DAT_01c6e2b4 = 0xc0;
        _DAT_01c6e2b8 = 1;
        FUN_004e0e00(*(uint *)(param_1 + 8),*(uint *)(param_1 + 0xc),
                     *(uint *)(param_1 + 0x10));
        _DAT_01c6b5c0 = FUN_00403990(DAT_007303dc,_DAT_01c6b5c4);
      }
    }
    else {
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
      _DAT_01c6e2b4 = 0;
      _DAT_01c6e2b8 = 0;
    }
    piVar3 = &DAT_00730418;
    piVar2 = (int *)(param_1 + 0x18);
    for (iVar1 = 0; iVar1 < *(int *)(param_1 + 4) * 3; iVar1 = iVar1 + 3) {
      *piVar3 = *piVar2 + DAT_007303e0;
      (&DAT_0060b02c)[(*piVar2 + DAT_007303e0) * 0xc] = piVar2[1];
      piVar3 = piVar3 + 1;
      *(int *)(&DAT_0060b030 + (*piVar2 + DAT_007303e0) * 0x30) = piVar2[2];
      piVar2 = piVar2 + 3;
    }
    FUN_0043a840(*(uint *)(param_1 + 4),&DAT_00730418);
  }
  return *(int *)(param_1 + 4) * 0xc + param_1 + 0x18;
}
