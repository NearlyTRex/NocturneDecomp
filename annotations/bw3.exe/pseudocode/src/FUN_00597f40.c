// Name: FUN_00597f40
// Address: 00597f40
// Address Range: [[00597f40, 00598477]]
// Convention: unknown
// Signature: void FUN_00597f40(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00597f40(int param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  float afStackY_1080 [1012];
  uint uVar6;
  uint *puVar7;
  float fStack_98;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  uint uStack_38;
  double dStack_20;
  float fStack_18;
  float fStack_14;
  
  bVar5 = 0;
  iVar2 = (**(code **)(*(int *)(param_1 + 0x154) + 0x148))(param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = FUN_004fc070(param_1 + 0x158);
  uVar6 = *(uint *)(iVar2 + 0x24);
  FUN_004fc070(param_1 + 0x158);
  FUN_00433c60(param_1,param_2);
  FUN_00432330(param_1,param_2,*(int *)(param_1 + 0xcdd0) == 1);
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  fStack_18 = param_2 * *(float *)(param_1 + 0xcdcc) * *(float *)(param_1 + 0xd068);
  while (0.0 < fStack_18) {
    uVar3 = FUN_004fbb70(param_1 + 0x158,&fStack_18);
    FUN_00433fb0(param_1,uVar3);
  }
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00434850(param_1,param_2 * *(float *)(param_1 + 0xcdcc));
  iVar2 = FUN_00431660(param_1,param_2);
  if (iVar2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x273c);
    iVar2 = param_1 + 0x158;
    if (uVar1 < 2) {
      if (uVar1 == 1) {
        fStack_14 = (float)FUN_004fc930(iVar2);
        if ((float)_DAT_005d97af < fStack_14) {
          uVar6 = 2;
LAB_0059809b:
          FUN_004fc0d0(param_1 + 0x158,uVar6,1);
        }
      }
      else {
LAB_00598246:
        fStack_14 = (float)FUN_004fc930(param_1 + 0x158);
        if ((float)_DAT_005d97af < fStack_14) {
          uVar6 = 1;
          goto LAB_0059809b;
        }
      }
    }
    else if (uVar1 < 3) {
      fStack_14 = (float)FUN_004fc930(iVar2);
      if ((float)_DAT_005d97af < fStack_14) {
        uVar6 = 2;
        goto LAB_0059809b;
      }
    }
    else {
      if (uVar1 != 3) goto LAB_00598246;
      FUN_004fc0d0(iVar2,1,1);
      FUN_00441ff0(PTR_DAT_005f1690,"%s confused while walking to scriptDest!\n",param_1);
    }
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
    goto switchD_00598471_caseD_1;
  }
  switch(uVar6) {
  default:
    goto switchD_00598471_caseD_1;
  case 2:
    (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
    iVar2 = param_1 + 0x158;
    if (*(int *)(param_1 + 0xcde4) != 0) {
      *(uint *)(param_1 + 0x24a4) = 0;
      *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
      *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
      uStack_80 = 0;
      uStack_78 = 0x41400000;
      uStack_7c = 0;
      uVar6 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xc4))
                        (*(int *)(param_1 + 0xcde4),&stack0xffffff80,0x3e4ccccd,0x3e32b8c2);
      iVar4 = FUN_0042b9e0(param_1,*(int *)(param_1 + 0xcde4) + 0x20,uVar6);
      if (iVar4 < 0) {
        FUN_00441ff0(PTR_DAT_005f1690,"%s gave up chase - I'm confused\n",param_1);
        FUN_004fc0d0(iVar2,1,1);
      }
      else if ((0 < iVar4) && (*(float *)(param_1 + 0xcde0) <= 0.0)) {
        iVar4 = FUN_0040cea0(0,100);
        if (iVar4 < 0x4b) {
          uVar6 = 3;
        }
        else {
          uVar6 = 5;
        }
        FUN_004fc0d0(iVar2,uVar6,1);
        *(uint *)(param_1 + 0xcde0) = 0x40200000;
      }
      goto switchD_00598471_caseD_1;
    }
    iVar4 = FUN_00489ff0(param_1,param_2);
    if (iVar4 != 0) {
      fStack_14 = (float)FUN_004fc930(iVar2);
      if ((float)_DAT_005d97af < fStack_14) {
        FUN_004fc0d0(iVar2,2,1);
      }
      goto switchD_00598471_caseD_1;
    }
    break;
  case 3:
  case 4:
  case 5:
    fStack_14 = (float)FUN_004fc930(param_1 + 0x158);
    dStack_20 = (double)fStack_14;
    FUN_00441ff0(PTR_DAT_005f1690,"Zone: %f\n",dStack_20);
    if (dStack_20 <= _DAT_005d97a7) goto switchD_00598471_caseD_1;
    break;
  case 7:
    if ((*(int *)(param_1 + 0xcdd0) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
      FUN_0054dbd0(param_1 + 0x158,0);
      puVar7 = &stack0xffffff8c;
      uStack_74 = uStack_38;
      *(uint *)((int)&stack0xffffff90 + (uint)bVar5 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffffcc + (uint)bVar5 * -8);
      *(uint *)(&stack0xffffff94 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffffd0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      FUN_00408b80(param_1,puVar7);
      *(uint *)(param_1 + 0xcdd0) = 1;
    }
    goto switchD_00598471_caseD_1;
  }
  FUN_004fc0d0(param_1 + 0x158,1,1);
switchD_00598471_caseD_1:
  if (0.0 < *(float *)(param_1 + 0xcde0)) {
    *(float *)(param_1 + 0xcde0) = *(float *)(param_1 + 0xcde0) - param_2;
  }
  iVar2 = FUN_0042ccf0(param_1);
  if (iVar2 != 0) {
    FUN_0042c1e0(param_1,param_2);
    fStack_50 = *(float *)(param_1 + 0x2518) * param_2;
    fStack_4c = *(float *)(param_1 + 0x251c) * param_2;
    fStack_48 = *(float *)(param_1 + 0x2520) * param_2;
    fStack_44 = fStack_50;
    *(uint *)((int)&stack0xffffffc0 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffffb4 + (uint)bVar5 * -8);
    *(uint *)((int)&stack0xffffffc4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffffb8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    fStack_8c = fStack_44 + *(float *)(param_1 + 0x250c);
    fStack_88 = fStack_40 + *(float *)(param_1 + 0x2510);
    fStack_84 = fStack_3c + *(float *)(param_1 + 0x2514);
    fStack_5c = fStack_8c;
    *(uint *)((int)&stack0xffffffa8 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffff78 + (uint)bVar5 * -8);
    *(uint *)((int)&stack0xffffffac + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffff7c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    fStack_68 = fStack_5c + *(float *)(param_1 + 0x249c);
    fStack_64 = fStack_58 + *(float *)(param_1 + 0x24a0);
    fStack_60 = fStack_54 + *(float *)(param_1 + 0x24a4);
    fStack_98 = fStack_68;
    *(uint *)((int)&stack0xffffff6c + (uint)bVar5 * 0xfffffffe * 4) =
         *(uint *)((int)&stack0xffffff9c + (uint)bVar5 * -8);
    *(uint *)(&stack0xffffff70 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffffa0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    *(uint *)(param_1 + 0x2514) = 0;
    *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x24a4) = 0;
    *(float *)(param_1 + 0x24a0) = *(float *)(param_1 + 0x24a4);
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a4);
    FUN_0042c230(param_1,&stack0xffffff68);
  }
  FUN_0042cd30(param_1);
  FUN_0054c130(param_1 + 0x158);
  FUN_00433350(param_1,param_2);
  return;
}
