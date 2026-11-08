// Name: FUN_00500d20
// Address: 00500d20
// Address Range: [[00500d20, 00500f13]]
// Convention: unknown
// Signature: void FUN_00500d20(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00500d20(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  
  FUN_005ad770(param_1,param_2);
  fVar2 = (float)FUN_004fa470(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8,_DAT_00603010);
  fVar2 = (_DAT_00603010 / fVar2) * param_2 + *(float *)(param_1 + 0x580);
  *(float *)(param_1 + 0x580) = fVar2;
  if (_DAT_00603010 < fVar2) {
    *(float *)(param_1 + 0x580) = _DAT_00603010;
  }
  *(float *)(param_1 + 0x584) = *(float *)(param_1 + 0x580) / _DAT_00603010;
  if (*(int *)(param_1 + 0x2d4) == 2) {
    fVar2 = (_DAT_0060301c - 0x40000000) * *(float *)(param_1 + 0x584) + 0x40000000;
    fVar1 = _DAT_00603020 + (_DAT_00603024 - _DAT_00603020) * *(float *)(param_1 + 0x584);
    iVar3 = FUN_005735a0(*(uint *)(param_1 + 0x57c));
    if (iVar3 == 0) {
      FUN_00572ac0();
      FUN_005727e0(param_1 + 0x20);
      FUN_005728e0(fVar2);
      FUN_00572900(fVar1);
      uVar4 = FUN_00572d20("cre-charge.wav");
      *(uint *)(param_1 + 0x57c) = uVar4;
      FUN_00572b40();
    }
    else {
      FUN_00573950(*(uint *)(param_1 + 0x57c),fVar2);
      FUN_00573980(*(uint *)(param_1 + 0x57c),fVar1);
    }
    FUN_00500090(param_1);
    if (*(int *)(param_1 + 0x578) != 0) {
      _DAT_01cce0b4 = 1;
      uVar4 = FUN_0045d7c0(0x0152C72C,"spark2.raw",0);
      FUN_00463e30(0x1ccc3e4,uVar4,0,0,0);
      FUN_005ae580(0x02C997C0,0x3dcccccd,0);
    }
    FUN_005518e0(0x01E82168,0x1ccc3e4);
    *(uint *)(param_1 + 0x578) = 0;
    return;
  }
  FUN_00573a80(*(uint *)(param_1 + 0x57c));
  *(uint *)(param_1 + 0x578) = 0;
  return;
}
