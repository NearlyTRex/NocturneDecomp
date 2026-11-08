// Name: FUN_00597710
// Address: 00597710
// Address Range: [[00597710, 005977da]]
// Convention: unknown
// Signature: undefined4 FUN_00597710(int *param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00597710(int *param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_18;
  int local_14;
  
  iVar6 = 0;
  iVar7 = 0;
  iVar3 = 0;
  iVar5 = 0;
  local_14 = 0;
  local_18 = 0;
  if (*param_1 == 0) {
    iVar4 = 0;
    piVar1 = param_1;
    if (0 < param_1[0x6001]) {
      do {
        if (piVar1[1] == 0x20) {
          iVar6 = iVar6 + 1;
        }
        if (piVar1[1] == 0x40) {
          iVar7 = iVar7 + 1;
        }
        if (piVar1[1] == 0x80) {
          iVar3 = iVar3 + 1;
        }
        if (piVar1[1] == 0x100) {
          local_14 = local_14 + 1;
        }
        if (piVar1[1] == 0x200) {
          iVar5 = iVar5 + 1;
        }
        if (piVar1[1] == 0x400) {
          local_18 = local_18 + 1;
        }
        iVar4 = iVar4 + 1;
        piVar1 = piVar1 + 0x18;
      } while (iVar4 < param_1[0x6001]);
    }
    uVar2 = FUN_005bfb40(param_2,"Total: %d, 32: %d, 64: %d, 128: %d, 256: %d, 512: %d, 1024: %d",param_1[0x6001],iVar6,iVar7,
                         iVar3,local_14,iVar5,local_18);
    return uVar2;
  }
  uVar2 = FUN_005bfb40(param_2,"Texture cache has wrapped.  Make it bigger, please.");
  return uVar2;
}
