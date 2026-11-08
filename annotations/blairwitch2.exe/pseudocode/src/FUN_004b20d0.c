// Name: FUN_004b20d0
// Address: 004b20d0
// Address Range: [[004b20d0, 004b22b6]]
// Convention: unknown
// Signature: void FUN_004b20d0(int param_1,float param_2,float *param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b20d0(int param_1,float param_2,float *param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  byte bVar5;
  float local_1b78;
  byte local_1b74 [2836];
  float afStack_1060 [1043];
  int local_14;
  
  bVar5 = 0;
  FUN_00548620(param_1 + 0x2b4,local_1b74);
  FUN_005469a0(param_1 + 0x2b4,param_5);
  afStack_1060[0x40f] = afStack_1060[0x409];
  afStack_1060[(uint)bVar5 * -2 + 0x410] = afStack_1060[(uint)bVar5 * -2 + 0x40a];
  afStack_1060[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x411] =
       afStack_1060[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x40b];
  afStack_1060[0x410] = afStack_1060[0x410] + _DAT_005d71b7;
  FUN_00408d70(param_1,afStack_1060 + 0x40f);
  afStack_1060[0x40c] = afStack_1060[0x406];
  afStack_1060[(uint)bVar5 * -2 + 0x40d] = afStack_1060[(uint)bVar5 * -2 + 0x407];
  afStack_1060[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x40e] =
       afStack_1060[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x408];
  afStack_1060[0x412] = *param_3;
  local_1b78 = param_2 / _DAT_005f7348 + afStack_1060[0x412];
  if (1.0 < local_1b78) {
    local_1b78 = 1.0;
  }
  local_14 = param_1 + 0x2b4;
  iVar2 = 0;
  do {
    iVar1 = local_14;
    FUN_005486f0(local_14,local_1b74);
    FUN_00545a60(iVar1,0,0,*param_3,param_5,&LAB_00544cc0);
    FUN_00546790(iVar1,param_4);
    pfVar3 = afStack_1060 + 0x3ee;
    pfVar4 = afStack_1060 + 0x3e2;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar4 = *pfVar3;
      pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
      pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
    }
    FUN_00591530(param_6,afStack_1060 + 0x3e2);
    afStack_1060[0x3fd] = afStack_1060[0x400];
    afStack_1060[(uint)bVar5 * -2 + 0x3fe] = afStack_1060[(uint)bVar5 * -2 + 0x401];
    afStack_1060[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x3ff] =
         afStack_1060[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x402];
    FUN_00408d70(param_1,afStack_1060 + 0x3fd);
    afStack_1060[0x3fa] = afStack_1060[0x403];
    afStack_1060[(uint)bVar5 * -2 + 0x3fb] = afStack_1060[(uint)bVar5 * -2 + 0x404];
    afStack_1060[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x3fc] =
         afStack_1060[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x405];
    iVar1 = FUN_00535e10(0x01E661B8,afStack_1060 + 0x40c,afStack_1060 + 0x3fa);
    if (iVar1 == 0) {
      local_1b78 = *param_3;
    }
    else if (iVar2 != 0) {
      afStack_1060[0x412] = *param_3;
    }
    iVar2 = iVar2 + 1;
    *param_3 = (afStack_1060[0x412] + local_1b78) * (float)_DAT_005d71bb;
  } while (iVar2 < 7);
  return;
}
