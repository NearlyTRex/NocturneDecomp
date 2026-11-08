// Name: FUN_00508960
// Address: 00508960
// Address Range: [[00508960, 005089df]]
// Convention: unknown
// Signature: undefined4 FUN_00508960(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00508960(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (_DAT_01dd4894 == 0) {
    return param_1;
  }
  iVar4 = _DAT_01dd4898 + -1;
  if (iVar4 < 0) {
    return param_1;
  }
  iVar1 = iVar4 / 2;
  iVar2 = FUN_005a3d00(param_1,*(uint *)(iVar1 * 4 + 0x1dd489c));
  if (iVar2 < 0) {
    uVar3 = FUN_005088e0(param_1,0,iVar1 + -1);
    return uVar3;
  }
  if (iVar2 < 1) {
    return *(uint *)(iVar1 * 4 + 0x1dd506c);
  }
  uVar3 = FUN_005088e0(param_1,iVar1 + 1,iVar4);
  return uVar3;
}
