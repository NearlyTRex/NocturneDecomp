// Name: FUN_00405e10
// Address: 00405e10
// Address Range: [[00405e10, 00406009]]
// Convention: unknown
// Signature: int FUN_00405e10(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00405e10(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = FUN_00404610(param_1 + 8);
  if (iVar2 != 0) {
    if (DAT_006b0278 == 0) {
      if (DAT_006b0274 == 0) {
        if (_DAT_01c03948 == 0) {
          if (DAT_005b7624 == 0x20) {
            _DAT_01c00c7c = &LAB_005300ec;
          }
          else {
            _DAT_01c00c7c = &LAB_00530322;
          }
        }
        else if (DAT_005b7624 == 0x20) {
          _DAT_01c00c7c = &LAB_0052f031;
        }
        else {
          _DAT_01c00c7c = &LAB_0052f823;
        }
        _DAT_01c039a0 = 0xd1;
        _DAT_01c039a4 = 3;
        FUN_00404710(param_1);
      }
      else {
        if (_DAT_01c03948 == 0) {
          if (DAT_005b7624 == 0x20) {
            _DAT_01c00c7c = &LAB_005300ec;
          }
          else {
            _DAT_01c00c7c = &LAB_00530322;
          }
        }
        else if (DAT_005b7624 == 0x20) {
          _DAT_01c00c7c = &LAB_0052f031;
        }
        else {
          _DAT_01c00c7c = &LAB_0052f823;
        }
        _DAT_01c039a0 = 0xd0;
        _DAT_01c039a4 = 1;
        FUN_004c6cc0(*(uint *)(param_1 + 8),*(uint *)(param_1 + 0xc),
                     *(uint *)(param_1 + 0x10));
        _DAT_01c00c70 = FUN_00404680(DAT_006b0260,_DAT_01c00c74);
      }
    }
    else {
      if (_DAT_01c03948 == 0) {
        if (DAT_005b7624 == 0x20) {
          _DAT_01c00c7c = &LAB_005300ec;
        }
        else {
          _DAT_01c00c7c = &LAB_00530322;
        }
      }
      else if (DAT_005b7624 == 0x20) {
        _DAT_01c00c7c = &LAB_0052f031;
      }
      else {
        _DAT_01c00c7c = &LAB_0052f823;
      }
      _DAT_01c039a4 = 0;
      _DAT_01c039a0 = 0;
    }
    iVar2 = 0;
    iVar5 = 0;
    piVar3 = (int *)(param_1 + 0x18);
    for (iVar4 = 0; iVar4 < *(int *)(param_1 + 4) * 3; iVar4 = iVar4 + 3) {
      iVar1 = *piVar3;
      *(int *)((int)&DAT_006b029c + iVar2) = iVar1;
      (&DAT_005c502c)[iVar1 * 0xc] = piVar3[1];
      iVar2 = iVar2 + 4;
      iVar5 = iVar5 + 1;
      *(int *)(&DAT_005c5030 + *piVar3 * 0x30) = piVar3[2];
      piVar3 = piVar3 + 3;
    }
    FUN_00432cd0(iVar5,&DAT_006b029c);
  }
  return param_1 + 0x18 + *(int *)(param_1 + 4) * 0xc;
}
