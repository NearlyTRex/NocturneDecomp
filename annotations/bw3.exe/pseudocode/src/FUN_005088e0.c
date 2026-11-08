// Name: FUN_005088e0
// Address: 005088e0
// Address Range: [[005088e0, 00508955]]
// Convention: unknown
// Signature: undefined4 FUN_005088e0(undefined4 param_1,int param_2,int param_3)

#include "nocturne.h"

uint FUN_005088e0(uint param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_3 < param_2) {
    return param_1;
  }
  iVar1 = (param_3 + param_2) / 2;
  iVar2 = FUN_005a3d00(param_1,*(uint *)(iVar1 * 4 + 0x1dd489c));
  if (-1 < iVar2) {
    if (iVar2 < 1) {
      return *(uint *)(iVar1 * 4 + 0x1dd506c);
    }
    uVar3 = FUN_005088e0(param_1,iVar1 + 1,param_3);
    return uVar3;
  }
  uVar3 = FUN_005088e0(param_1,param_2,iVar1 + -1);
  return uVar3;
}
