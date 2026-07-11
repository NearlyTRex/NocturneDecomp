// Name: FUN_00565724
// Address: 00565724
// Address Range: [[00565724, 005657b5]]
// Convention: unknown
// Signature: undefined4 FUN_00565724(undefined4 param_1,undefined1 *param_2,int param_3)

#include "nocturne.h"

uint FUN_00565724(uint param_1,byte *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uStack_14;
  
  iVar2 = FUN_005653e0(param_2,&uStack_14);
  uVar4 = 0;
  if (iVar2 != 0) {
    uVar1 = *(uint *)(param_3 + 0x10);
    (*(code *)PTR_FUN_005c1ac0)(uVar1);
    if (DAT_005c1d58 != (code *)0x0) {
      (*DAT_005c1d58)(uVar1);
    }
    iVar3 = FUN_005656a4(param_3);
    uVar4 = 0;
    if (iVar3 != 0) {
      *(uint *)(iVar3 + 0xc) = *(uint *)(iVar3 + 0xc) & 0x4000;
      uVar4 = FUN_0056551c(param_1,*param_2,iVar2,uStack_14,0,iVar3);
    }
    (*(code *)PTR_FUN_005c1ac4)(uVar1);
  }
  return uVar4;
}
