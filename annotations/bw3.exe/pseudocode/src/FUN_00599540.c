// Name: FUN_00599540
// Address: 00599540
// Address Range: [[00599540, 00599a30]]
// Convention: unknown
// Signature: void FUN_00599540(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00599540(int param_1,float param_2)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  float afStackY_106c [1012];
  char *pcVar9;
  uint *puVar10;
  uint uVar11;
  uint uStack_84;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  float fStack_6c;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  uint uStack_54;
  uint uStack_48;
  uint uStack_3c;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  float fStack_1c;
  uint uStack_18;
  int iStack_14;
  
  bVar8 = 0;
  FUN_00433c60(param_1,param_2);
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  uStack_18 = 1;
  fStack_1c = param_2;
  while (0.0 < fStack_1c) {
    uVar11 = FUN_004fbb70(param_1 + 0x158,&fStack_1c);
    FUN_00433fb0(param_1,uVar11);
  }
  iVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))(param_1);
  if ((((1 < iVar4) && (*(int *)(param_1 + 0x70) == 1)) && (*(int *)(param_1 + 0x20868) == 0)) &&
     (*(int *)(param_1 + 0xdc) == 0)) {
    FUN_0054dbd0(param_1 + 0x158,0);
    puVar10 = &stack0xffffffb8;
    uStack_48 = uStack_3c;
    *(uint *)((int)&stack0xffffffbc + (uint)bVar8 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffc8 + (uint)bVar8 * -8);
    *(uint *)(&stack0xffffffc0 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         *(uint *)(&stack0xffffffcc + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    FUN_00408b80(param_1,puVar10);
    uVar11 = 0;
    uStack_54 = uStack_84;
    *(uint *)((int)&stack0xffffffb0 + (uint)bVar8 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff80 + (uint)bVar8 * -8);
    *(uint *)(&stack0xffffffb4 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         *(uint *)(&stack0xffffff84 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    FUN_004cec40(0x01D22E44,&stack0xffffffac,uVar11);
    uStack_18 = 1;
    *(uint *)(param_1 + 0x20868) = 1;
  }
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00434850(param_1,param_2);
  iVar4 = FUN_00431660(param_1,param_2);
  if (iVar4 == 0) {
    if (1.0 <= *(float *)(param_1 + 0x214a0)) {
      return;
    }
    iVar4 = FUN_004fc070(param_1 + 0x158);
    iStack_14 = *(int *)(iVar4 + 0x24);
    if ((iStack_14 == 6) || (iStack_14 == 7)) {
      *(uint *)(param_1 + 0xf8) = 1;
      *(uint *)(param_1 + 0xfc) = 0;
    }
    if (((iStack_14 == 7) &&
        (fVar3 = param_2 * (float)_DAT_005d99bd + *(float *)(param_1 + 0x214a0),
        *(float *)(param_1 + 0x214a0) = fVar3, 1.0 <= fVar3)) && (*(int *)(param_1 + 0x20870) != 0))
    {
      FUN_004f6930(0x01D81080,*(int *)(param_1 + 0x20870));
      uVar11 = 0x01D81080;
      *(uint *)(param_1 + 0x20870) = 0;
      FUN_004f6f10(uVar11,param_1,1);
    }
    if (iStack_14 != 0) {
      FUN_00408b00(param_1,param_1 + 0x249c);
      pfVar1 = (float *)(param_1 + 0x20);
      fStack_60 = fStack_6c;
      *(uint *)((int)&stack0xffffffa4 + (uint)bVar8 * -8) =
           *(uint *)((int)&stack0xffffff98 + (uint)bVar8 * 0xfffffffe * 4);
      *(uint *)((int)&stack0xffffffa8 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
           *(uint *)(&stack0xffffff9c + (uint)bVar8 * -8 + (uint)bVar8 * -8);
      *pfVar1 = *pfVar1 + fStack_60;
      *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + fStack_5c;
      *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fStack_58;
      iVar4 = *(int *)(param_1 + 0x20870);
      if (iVar4 != 0) {
        *(float *)(iVar4 + 0x20) = *pfVar1;
        *(uint *)(iVar4 + 0x24) = *(uint *)(param_1 + 0x24);
        *(uint *)(iVar4 + 0x28) = *(uint *)(param_1 + 0x28);
        *(uint *)(iVar4 + 0x2c) = *(uint *)(param_1 + 0x2c);
      }
    }
    if (iStack_14 == 2) {
      iVar4 = 0;
      for (iVar7 = 0; iVar7 < *(int *)(0x01ED78C8 + 0x14d164); iVar7 = iVar7 + 1) {
        iVar5 = FUN_0040c840(*(uint *)(iVar4 + 0x14d168 + 0x01ED78C8),_DAT_02d0bcd8);
        if (((iVar5 != 0) && (iVar6 = FUN_005a3d00(iVar5,"AcrossBridge"), iVar6 == 0)) &&
           (&stack0xffffffd0 != (uint *)(iVar5 + 0x20))) {
          uStack_30 = *(uint *)(iVar5 + 0x20);
          uStack_2c = *(uint *)(iVar5 + 0x24);
          uStack_28 = *(uint *)(iVar5 + 0x28);
        }
        iVar4 = iVar4 + 4;
      }
      uStack_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      iVar4 = FUN_0042b9e0(param_1,&stack0xffffffd0,0,&stack0xffffff88,0x3f800000,0x3db2b8c2);
      if (iVar4 < 0) {
        FUN_00441ff0(PTR_DAT_005f1690,"%s gave up chase - I'm confused\n",param_1);
      }
      else if (iVar4 < 1) goto LAB_005999f5;
      FUN_004fc0d0(param_1 + 0x158,0,1);
    }
LAB_005999f5:
    FUN_0054c130(param_1 + 0x158);
    FUN_00433350(param_1,param_2);
    goto LAB_005996b8;
  }
  uVar2 = *(uint *)(param_1 + 0x273c);
  if (uVar2 < 2) {
    if (uVar2 == 1) {
      pcVar9 = &DAT_005d995c;
    }
    else {
LAB_005997ec:
      if (*(int *)(param_1 + 0x2704) == 0) {
        pcVar9 = "STAND";
      }
      else {
        iVar4 = FUN_005a3d00(*(int *)(param_1 + 0x2704),"WPPerch*");
        if (iVar4 == 1) {
          pcVar9 = "PERCH";
        }
        else {
          FUN_00441ff0(PTR_DAT_005f1690,"Landing...");
          pcVar9 = "LAND_GROUND";
        }
      }
    }
LAB_0059968b:
    FUN_004fc160(param_1 + 0x158,pcVar9,1);
  }
  else {
    if (uVar2 < 3) {
      pcVar9 = &DAT_005d9958;
      goto LAB_0059968b;
    }
    if (uVar2 != 3) goto LAB_005997ec;
    FUN_004fc160(param_1 + 0x158,"STAND",1);
    FUN_00441ff0(PTR_DAT_005f1690,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
LAB_005996b8:
  if (((iStack_14 != 2) && (iStack_14 != 3)) && ((iStack_14 != 1 && (iStack_14 != 4)))) {
    FUN_0042c1e0(param_1,param_2);
  }
  *(uint *)(param_1 + 0x2514) = 0;
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  FUN_0042cd30(param_1);
  FUN_0054c130(param_1 + 0x158);
  FUN_00432330(param_1,param_2,uStack_18);
  FUN_00433350(param_1,param_2);
  return;
}
