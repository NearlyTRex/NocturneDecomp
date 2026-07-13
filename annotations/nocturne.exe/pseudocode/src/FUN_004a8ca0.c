// Name: FUN_004a8ca0
// Address: 004a8ca0
// Address Range: [[004a8ca0, 004a8dc3]]
// Convention: unknown
// Signature: int FUN_004a8ca0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004a8ca0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  float10 fVar6;
  
  iVar3 = FUN_00479560(param_1);
  *(byte ***)(iVar3 + 0x14c) = &PTR_FUN_0059e224;
  FUN_0051e0c0(iVar3 + 0x150,"guul.dfm");
  fVar4 = (float)FUN_0040dda0(0x41a00000,0x420c0000);
  fVar6 = (float10)fVar4 * (float10)_DAT_00584acd;
  FUN_00563a30(0x40800000,0x41200000);
  *(int *)(iVar3 + 0xbd28) = (int)ROUND(fVar6);
  fVar4 = (float)FUN_0040dda0();
  *(uint *)(iVar3 + 0xbd30) = 0xa0000;
  *(uint *)(iVar3 + 0xbd34) = 0xffffffff;
  fVar6 = (float10)fVar4 * (float10)_DAT_00584acd;
  *(uint *)(iVar3 + 0xbd38) = 0;
  *(uint *)(iVar3 + 0xbd44) = 2;
  FUN_00563a30(3);
  *(int *)(iVar3 + 0xbd2c) = (int)ROUND(fVar6);
  uVar5 = FUN_0040de00(1);
  *(uint *)(iVar3 + 0x2dd4) = 0x3f400000;
  *(uint *)(iVar3 + 0x2dd8) = 0x3fc00000;
  *(uint *)(iVar3 + 0xbd80) = 0;
  *(uint *)(iVar3 + 0xbd84) = 0;
  *(uint *)(iVar3 + 0xbd88) = 0;
  *(uint *)(iVar3 + 0xbd8c) = 0;
  uVar1 = _DAT_0059e210;
  *(uint *)(iVar3 + 0xbd90) = 0;
  uVar2 = _DAT_0059e214;
  *(uint *)(iVar3 + 0xbd40) = uVar5;
  *(uint *)(iVar3 + 0x2ddc) = uVar1;
  *(uint *)(iVar3 + 0x2de0) = uVar2;
  return iVar3;
}
