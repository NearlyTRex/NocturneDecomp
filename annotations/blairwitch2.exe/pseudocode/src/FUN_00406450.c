// Name: FUN_00406450
// Address: 00406450
// Address Range: [[00406450, 004066e3]]
// Convention: unknown
// Signature: int FUN_00406450(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00406450(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = FUN_00403970(param_1 + 8);
  if (iVar1 != 0) {
    if (DAT_0070ca74 == 0) {
      if (DAT_0070ca70 == 0) {
        if (_DAT_01c38b40 == 0) {
          if (DAT_006141c0 == 0x20) {
            _DAT_01c35e6c = FUN_0055d0b3;
          }
          else {
            _DAT_01c35e6c = FUN_0055d2e9;
          }
        }
        else if (DAT_006141c0 == 0x20) {
          _DAT_01c35e6c = (code *)&LAB_0055b3b1;
        }
        else {
          _DAT_01c35e6c = (code *)&LAB_0055bb93;
        }
        if (0x00000001 == 0) {
          if (_DAT_01c38b40 == 0) {
            if (DAT_006141c0 == 0x20) {
              _DAT_01c35e6c = FUN_0055d0b3;
            }
            else {
              _DAT_01c35e6c = FUN_0055d2e9;
            }
          }
          else if (DAT_006141c0 == 0x20) {
            _DAT_01c35e6c = (code *)&LAB_0055b3b1;
          }
          else {
            _DAT_01c35e6c = (code *)&LAB_0055bb93;
          }
          _DAT_01c38b58 = 0;
          _DAT_01c38b54 = 0xc1;
        }
        else {
          _DAT_01c38b58 = 1;
          _DAT_01c38b54 = 0xc1;
        }
      }
      else {
        if (_DAT_01c38b40 == 0) {
          if (DAT_006141c0 == 0x20) {
            _DAT_01c35e6c = FUN_0055d0b3;
          }
          else {
            _DAT_01c35e6c = FUN_0055d2e9;
          }
        }
        else if (DAT_006141c0 == 0x20) {
          _DAT_01c35e6c = (code *)&LAB_0055b3b1;
        }
        else {
          _DAT_01c35e6c = (code *)&LAB_0055bb93;
        }
        _DAT_01c38b54 = 0xc0;
        _DAT_01c38b58 = 1;
        FUN_004e28b0(*(uint *)(param_1 + 8),*(uint *)(param_1 + 0xc),
                     *(uint *)(param_1 + 0x10));
        _DAT_01c35e60 = FUN_004039e0(DAT_0070ca5c,_DAT_01c35e64);
      }
    }
    else {
      if (_DAT_01c38b40 == 0) {
        if (DAT_006141c0 == 0x20) {
          _DAT_01c35e6c = FUN_0055d0b3;
        }
        else {
          _DAT_01c35e6c = FUN_0055d2e9;
        }
      }
      else if (DAT_006141c0 == 0x20) {
        _DAT_01c35e6c = (code *)&LAB_0055b3b1;
      }
      else {
        _DAT_01c35e6c = (code *)&LAB_0055bb93;
      }
      _DAT_01c38b54 = 0;
      _DAT_01c38b58 = 0;
    }
    piVar3 = &DAT_0070ca98;
    piVar2 = (int *)(param_1 + 0x18);
    for (iVar1 = 0; iVar1 < *(int *)(param_1 + 4) * 3; iVar1 = iVar1 + 3) {
      *piVar3 = *piVar2 + DAT_0070ca60;
      (&DAT_0062202c)[(*piVar2 + DAT_0070ca60) * 0xc] = piVar2[1];
      piVar3 = piVar3 + 1;
      *(int *)(&DAT_00622030 + (*piVar2 + DAT_0070ca60) * 0x30) = piVar2[2];
      piVar2 = piVar2 + 3;
    }
    FUN_00431d90(*(uint *)(param_1 + 4),&DAT_0070ca98);
  }
  return *(int *)(param_1 + 4) * 0xc + param_1 + 0x18;
}
