// Name: FUN_00428c00
// Address: 00428c00
// Address Range: [[00428c00, 00428ed5]]
// Convention: unknown
// Signature: undefined4 FUN_00428c00(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00428c00(int param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  byte auStack_48 [12];
  byte local_3c [12];
  byte auStack_30 [20];
  float fStack_1c;
  uint uStack_18;
  
  if ((*(int *)(param_1 + 0x2598) == 0) && (*(int *)(param_1 + 0x25ac) == 0)) {
    return 0;
  }
  if ((0.0 <= *(float *)(param_1 + 0x25a4)) &&
     (param_2 = *(float *)(param_1 + 0x25a4) - param_2, *(float *)(param_1 + 0x25a4) = param_2,
     param_2 <= 0.0)) {
    *(uint *)(param_1 + 0x25a4) = 0;
    iVar2 = *(int *)(param_1 + 0x2598);
    *(uint *)(param_1 + 0x25a8) = 0;
    *(uint *)(param_1 + 0x20) = *(uint *)(iVar2 + 0x20);
    *(uint *)(param_1 + 0x24) = *(uint *)(iVar2 + 0x24);
    *(uint *)(param_1 + 0x28) = *(uint *)(iVar2 + 0x28);
    *(uint *)(param_1 + 0x2c) = *(uint *)(iVar2 + 0x2c);
    iVar2 = *(int *)(param_1 + 0x2598);
    if ((uint *)(param_1 + 0x30) != (uint *)(iVar2 + 0x30)) {
      *(uint *)(param_1 + 0x30) = *(uint *)(iVar2 + 0x30);
      *(uint *)(param_1 + 0x34) = *(uint *)(iVar2 + 0x34);
      *(uint *)(param_1 + 0x38) = *(uint *)(iVar2 + 0x38);
    }
    if (*(int *)(param_1 + 0x25ac) != 0) {
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x118))(param_1);
    }
    return 1;
  }
  if (*(int *)(param_1 + 0x25ac) == 0) {
    iVar2 = *(int *)(param_1 + 0x2598);
    if (((0.0 <= *(float *)(param_1 + 0x259c)) &&
        (iVar5 = FUN_0040d890(iVar2,_DAT_02ddf54c), iVar5 != 0)) &&
       (iVar2 = FUN_00552680(param_1 + 0x20,iVar5), iVar2 == 0)) {
      FUN_0043ac60(PTR_DAT_005ad350,"%s can't figure out next waypoint trying to reach %s\n",param_1,
                   *(uint *)(param_1 + 0x2598));
      return 1;
    }
    FUN_00428780(param_1,iVar2,*(uint *)(param_1 + 0x259c),*(uint *)(param_1 + 0x25a0),
                 param_1 + 0x25a8);
    return 1;
  }
  FUN_00456260(*(int *)(param_1 + 0x25ac),local_3c,param_1 + 0x25b0,param_1 + 0x20);
  uVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x25ac) + 0x14c) + 0xbc))
                    (*(int *)(param_1 + 0x25ac),&DAT_02dd1184,0,0);
  iVar2 = FUN_004247f0(param_1,local_3c,uVar1);
  if (iVar2 < 0) {
    *(uint *)(param_1 + 0x25a8) = 3;
    return 1;
  }
  if (iVar2 < 1) {
    *(uint *)(param_1 + 0x25a8) = 1;
    return 1;
  }
  uVar1 = FUN_0040a290(param_1,auStack_30,*(int *)(param_1 + 0x25ac) + 0x9b4);
  iVar2 = FUN_0054e4a0(auStack_48,uVar1);
  fVar4 = *(float *)(iVar2 + 4);
  *(float *)(param_1 + 0x2410) = fVar4;
  if ((float)_DAT_0057a142 <= fVar4) {
    *(uint *)(param_1 + 0x25a8) = 1;
  }
  else {
    *(uint *)(param_1 + 0x25a8) = 0;
    (**(code **)(*(int *)(param_1 + 0x14c) + 0x118))(param_1);
  }
  uStack_18 = *(uint *)(param_1 + 0x2410);
  fStack_1c = *(float *)(param_1 + 0x2430);
  fVar3 = (float)FUN_0040df00(uStack_18);
  fVar4 = -fStack_1c;
  if ((fVar4 <= fVar3) && (fVar4 = fVar3, fStack_1c < fVar3)) {
    fVar4 = fStack_1c;
  }
  *(float *)(param_1 + 0x2410) = fVar4;
  return 1;
}
