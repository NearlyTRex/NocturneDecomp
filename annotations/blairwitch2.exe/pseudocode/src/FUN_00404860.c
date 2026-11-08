// Name: FUN_00404860
// Address: 00404860
// Address Range: [[00404860, 00404a59]]
// Convention: unknown
// Signature: int FUN_00404860(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00404860(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = FUN_00403970(param_1 + 8);
  if (iVar2 != 0) {
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
        _DAT_01c38b54 = 0xd1;
        _DAT_01c38b58 = 3;
        FUN_00403a20(param_1);
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
        _DAT_01c38b54 = 0xd0;
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
      _DAT_01c38b58 = 0;
      _DAT_01c38b54 = 0;
    }
    iVar2 = 0;
    iVar5 = 0;
    piVar3 = (int *)(param_1 + 0x18);
    for (iVar4 = 0; iVar4 < *(int *)(param_1 + 4) * 3; iVar4 = iVar4 + 3) {
      iVar1 = *piVar3;
      *(int *)((int)&DAT_0070ca98 + iVar2) = iVar1;
      (&DAT_0062202c)[iVar1 * 0xc] = piVar3[1];
      iVar2 = iVar2 + 4;
      iVar5 = iVar5 + 1;
      *(int *)(&DAT_00622030 + *piVar3 * 0x30) = piVar3[2];
      piVar3 = piVar3 + 3;
    }
    FUN_00431d90(iVar5,&DAT_0070ca98);
  }
  return param_1 + 0x18 + *(int *)(param_1 + 4) * 0xc;
}
