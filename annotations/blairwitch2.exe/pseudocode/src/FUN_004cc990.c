// Name: FUN_004cc990
// Address: 004cc990
// Address Range: [[004cc990, 004ccfe3]]
// Convention: unknown
// Signature: void FUN_004cc990(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cc990(int param_1,float param_2)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  float afStackY_1898 [1522];
  uint *puVar7;
  uint uVar8;
  float *pfVar9;
  uint uStack_bc;
  uint uStack_ac;
  uint uStack_9c;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  uint uStack_78;
  uint uStack_74;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  uint uStack_60;
  uint uStack_54;
  uint uStack_48;
  uint uStack_3c;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar3 = FUN_004244b0(param_1,param_2);
  if (iVar3 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x10a64) == 2) {
    FUN_004ccff0(param_1,param_2);
  }
  FUN_0042b2a0(param_1,param_2);
  fVar1 = *(float *)(param_1 + 0x10a60) - param_2;
  *(float *)(param_1 + 0x10a60) = fVar1;
  if (fVar1 < 0.0) {
    *(uint *)(param_1 + 0x10a60) = 0;
  }
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
  FUN_004cd660(param_1,param_2);
  iVar3 = FUN_004287f0(param_1,param_2);
  if (iVar3 == 0) {
    iVar3 = FUN_005035c0(param_1 + 0x2b4);
    switch(*(uint *)(iVar3 + 0x24)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 10:
      if (*(int *)(param_1 + 0x2570) != 0) {
        iVar3 = 0;
        if (*(int *)(param_1 + 0x25640) != 0) {
          iVar3 = 10;
        }
        if (*(int *)(param_1 + 0x10a68) != 0) {
          if (*(int *)(param_1 + 0x10a70) == 0) {
            iVar3 = 1;
          }
          else {
            iVar3 = 2;
          }
        }
        if (*(int *)(param_1 + 0x10a6c) != 0) {
          iVar3 = 3;
        }
        if (*(int *)(param_1 + 0x10a80) != 0) {
          *(uint *)(param_1 + 0x10a80) = 0;
          uVar5 = (uint)(*(int *)(param_1 + 0x25640) == 0);
          *(uint *)(param_1 + 0x25640) = uVar5;
          if (uVar5 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = 10;
          }
        }
        if (*(int *)(param_1 + 0x10a74) != 0) {
          bVar2 = true;
          if ((*(int *)(param_1 + 0x25640) == 0) && (*(int *)(param_1 + 0x10a64) != 2)) {
            iVar4 = FUN_004cec50(param_1);
            bVar2 = false;
            if (iVar4 != 0) goto LAB_004ccd9f;
            iVar4 = FUN_004cf030(param_1,0);
            if ((iVar4 != 0) && (iVar4 != 1)) {
              FUN_004cf230(param_1);
            }
            if ((iVar4 != 0) || (iVar4 = FUN_004cee90(param_1), iVar4 != 0)) goto LAB_004ccd9f;
            iVar4 = FUN_004cf2b0(param_1);
            if (iVar4 != 0) {
              FUN_004cf440(param_1);
              goto LAB_004ccd9f;
            }
          }
          else {
LAB_004ccd9f:
            if (!bVar2) goto LAB_004ccdc0;
          }
          *(uint *)(param_1 + 0x10a74) = 0;
          if (*(int *)(param_1 + 0x25644) == 0) {
            iVar3 = 0xf;
          }
          else {
            iVar3 = 0xe;
          }
        }
LAB_004ccdc0:
        *(float *)(param_1 + 0x2578) = *(float *)(param_1 + 0x10a90) * *(float *)(param_1 + 0x2598);
        iVar4 = FUN_005035c0(param_1 + 0x2b4);
        if (iVar3 != *(int *)(iVar4 + 0x24)) goto LAB_004cca5f;
      }
      break;
    case 9:
      goto switchD_004cce93_caseD_9;
    }
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x27ac);
    if (uVar5 < 2) {
      if (uVar5 == 1) {
        iVar3 = 1;
      }
      else {
LAB_004cccfd:
        iVar3 = 0;
      }
    }
    else {
      if (2 < uVar5) {
        if (uVar5 == 3) {
          FUN_00503620(param_1 + 0x2b4,0,1);
          FUN_00436710(PTR_DAT_00609ed0,"%s confused while walking to scriptDest!\n",param_1);
          goto switchD_004cce93_caseD_4;
        }
        goto LAB_004cccfd;
      }
      iVar3 = 2;
    }
LAB_004cca5f:
    FUN_00503620(param_1 + 0x2b4,iVar3,1);
  }
switchD_004cce93_caseD_4:
  if (*(int *)(param_1 + 0x276c) == 0) {
    FUN_00423a10(param_1,param_2);
    fStack_90 = *(float *)(param_1 + 0x2508) + *(float *)(param_1 + 0x257c);
    fStack_8c = *(float *)(param_1 + 0x250c) + *(float *)(param_1 + 0x2580);
    fStack_88 = *(float *)(param_1 + 0x2510) + *(float *)(param_1 + 0x2584);
    fStack_84 = fStack_90;
    (&stack0xffffff80)[(uint)bVar6 * 0xfffffffe] =
         (float)*(uint *)((int)&stack0xffffff74 + (uint)bVar6 * -8);
    *(uint *)((int)&stack0xffffff84 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffff78 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    *(uint *)(param_1 + 0x2510) = 0;
    *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
    *(float *)(param_1 + 0x2508) = *(float *)(param_1 + 0x250c);
    *(uint *)(param_1 + 0x2584) = 0;
    *(float *)(param_1 + 0x2580) = *(float *)(param_1 + 0x2584);
    *(float *)(param_1 + 0x257c) = *(float *)(param_1 + 0x2584);
    iVar3 = FUN_005035c0(param_1 + 0x2b4);
    if ((*(int *)(iVar3 + 0x24) == 0xe) || (*(int *)(iVar3 + 0x24) == 0xf)) {
      fStack_80 = 0.0;
      fStack_84 = 0.0;
      fStack_7c = 0.0;
    }
    fStack_6c = *(float *)(param_1 + 0x2588) * param_2;
    pfVar9 = &stack0xffffff7c;
    fStack_68 = *(float *)(param_1 + 0x258c) * param_2;
    fStack_64 = *(float *)(param_1 + 0x2590) * param_2;
    fStack_30 = fStack_6c;
    *(uint *)((int)&stack0xffffffd4 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffff98 + (uint)bVar6 * -8);
    *(uint *)((int)&stack0xffffffd8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffff9c + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    fStack_84 = fStack_84 + fStack_30;
    fStack_80 = fStack_80 + fStack_2c;
    fStack_7c = fStack_7c + fStack_28;
    FUN_00423a60(param_1,pfVar9);
  }
  else {
    if (*(int *)(param_1 + 0x2770) == 0) {
      FUN_00408de0(param_1,*(int *)(param_1 + 0x276c) + 0x20);
      uStack_60 = uStack_54;
      *(uint *)((int)&stack0xffffffa4 + (uint)bVar6 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffffb0 + (uint)bVar6 * -8);
      *(uint *)(&stack0xffffffa8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffffb4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      FUN_005838f0(&stack0xffffffa0);
      uStack_78 = uStack_48;
      *(uint *)((int)&stack0xffffff8c + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffffbc + (uint)bVar6 * -8);
      *(uint *)(&stack0xffffff90 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffffc0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      fStack_14 = (float)FUN_0040d0c0(uStack_74);
      fStack_1c = fStack_14;
      if (fStack_14 < _DAT_005d9932) {
        fStack_1c = fStack_14 + _DAT_005d9936;
      }
      if (_DAT_005d993a < fStack_1c) {
        fStack_1c = fStack_1c + _DAT_005d993e;
      }
      fStack_24 = param_2 * _DAT_005d9936;
      fStack_18 = -fStack_24;
      if (fStack_1c < fStack_18) {
        fStack_1c = fStack_18;
      }
      if (fStack_24 < fStack_1c) {
        fStack_1c = fStack_24;
      }
      *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + fStack_1c;
      FUN_00408ae0(param_1);
    }
    iStack_20 = *(int *)(param_1 + 0x276c);
    fStack_14 = *(float *)(iStack_20 + 0x2b0);
    FUN_00546a90(param_1 + 0x2b4,0);
    puVar7 = &stack0xffffff64;
    uStack_9c = uStack_3c;
    *(uint *)((int)&stack0xffffff68 + (uint)bVar6 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffc8 + (uint)bVar6 * -8);
    *(uint *)(&stack0xffffff6c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xffffffcc + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    iVar3 = (**(code **)((int)fStack_14 + 0x118))(iStack_20,param_1,puVar7);
    if (iVar3 == 0) {
      *(uint *)(param_1 + 0x276c) = 0;
LAB_004ccc0a:
      uVar8 = 0;
    }
    else {
      if (*(int *)(param_1 + 0x276c) == 0) goto LAB_004ccc0a;
      if (*(int *)(param_1 + 0x10a74) == 0) goto LAB_004ccc1d;
      uVar8 = 0x11;
    }
    FUN_00503620(param_1 + 0x2b4,uVar8,1);
  }
LAB_004ccc1d:
  FUN_00424470(param_1);
  iVar3 = param_1 + 0x2b4;
  FUN_00544f00(iVar3);
  iVar4 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x114))(param_1);
  if ((iVar4 == 0) && (iVar4 = FUN_005035c0(iVar3), *(int *)(iVar4 + 0x24) != 0x13)) {
    FUN_00594380(param_1 + 0x25648,*(uint *)(param_1 + 0x25654),_DAT_01cede20,&LAB_00544cc0);
    puVar7 = &stack0xffffff54;
    uStack_ac = uStack_bc;
    *(uint *)((int)&stack0xffffff58 + (uint)bVar6 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff48 + (uint)bVar6 * -8);
    *(uint *)(&stack0xffffff5c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xffffff4c + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    *(uint *)
     ((int)(&stack0xffffff5c + (uint)bVar6 * -8 + (uint)bVar6 * -8) + ((uint)bVar6 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffff4c + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
          ((uint)bVar6 * -2 + 1) * 4);
    FUN_005466c0(iVar3,puVar7);
  }
  FUN_00429e90(param_1,param_2);
switchD_004cce93_caseD_9:
  return;
}
