// Name: FUN_00570510
// Address: 00570510
// Address Range: [[00570510, 00570c77]]
// Convention: unknown
// Signature: void FUN_00570510(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00570510(int param_1,float param_2)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  float afStackY_18ac [1521];
  uint *puVar7;
  uint uVar8;
  uint uStack_d0;
  uint uStack_c0;
  uint uStack_b0;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  uint uStack_98;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  uint uStack_80;
  float fStack_7c;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  uint uStack_5c;
  uint uStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  uint uStack_38;
  int iStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar6 = 0;
  if ((*(float *)(param_1 + 0x25a8) < (float)_DAT_005ec2fb) &&
     (fVar1 = *(float *)(param_1 + 0x25a8) + param_2, *(float *)(param_1 + 0x25a8) = fVar1,
     (float)_DAT_005ec2fb < fVar1)) {
    *(uint *)(param_1 + 0x25a8) = 0x42c80000;
  }
  iVar3 = FUN_004244b0(param_1,param_2);
  if ((iVar3 == 0) || (*(int *)(param_1 + 0x25638) == 4)) {
switchD_0057096f_caseD_9:
    return;
  }
  FUN_0042a7a0(param_1,param_2);
  FUN_0042b2a0(param_1,param_2);
  fVar1 = *(float *)(param_1 + 0x10a60) - param_2;
  *(float *)(param_1 + 0x10a60) = fVar1;
  if (fVar1 < 0.0) {
    *(uint *)(param_1 + 0x10a60) = 0;
  }
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
  FUN_00571460(param_1,param_2);
  *(uint *)(param_1 + 0x2594) = *(uint *)(param_1 + 0x2510);
  iVar3 = FUN_004287f0(param_1,param_2);
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0x10a64) == 2) {
      FUN_00570c80(param_1,param_2);
    }
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
            if (iVar4 != 0) goto LAB_00570a09;
            iVar4 = FUN_004cf030(param_1,0);
            if ((iVar4 != 0) && (iVar4 != 1)) {
              FUN_004cf230(param_1);
            }
            if ((iVar4 != 0) || (iVar4 = FUN_004cee90(param_1), iVar4 != 0)) goto LAB_00570a09;
            iVar4 = FUN_004cf2b0(param_1);
            if (iVar4 != 0) {
              FUN_004cf440(param_1);
              goto LAB_00570a09;
            }
          }
          else {
LAB_00570a09:
            if (!bVar2) goto LAB_00570a2a;
          }
          *(uint *)(param_1 + 0x10a74) = 0;
          if (*(int *)(param_1 + 0x25644) == 0) {
            iVar3 = 0xf;
          }
          else {
            iVar3 = 0xe;
          }
        }
LAB_00570a2a:
        *(float *)(param_1 + 0x2578) = *(float *)(param_1 + 0x10a90) * *(float *)(param_1 + 0x2598);
        iVar4 = FUN_005035c0(param_1 + 0x2b4);
        if (iVar3 != *(int *)(iVar4 + 0x24)) goto LAB_00570663;
      }
      break;
    case 9:
      goto switchD_0057096f_caseD_9;
    }
  }
  else {
    iVar3 = FUN_005035c0(param_1 + 0x2b4);
    if ((*(int *)(iVar3 + 0x24) != 0x1a) && (*(int *)(iVar3 + 0x24) != 0x1b)) {
      *(uint *)(param_1 + 0x2510) = 0;
      *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
      *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
    }
    uVar5 = *(uint *)(param_1 + 0x27ac);
    if (uVar5 < 2) {
      if (uVar5 == 1) {
        iVar3 = 1;
      }
      else {
LAB_0057092b:
        iVar3 = 0;
      }
    }
    else {
      if (2 < uVar5) {
        if (uVar5 == 3) {
          FUN_00503620(param_1 + 0x2b4,0,1);
          FUN_00436710(PTR_DAT_00609ed0,"%s confused while walking to scriptDest!\n",param_1);
          goto switchD_0057096f_caseD_4;
        }
        goto LAB_0057092b;
      }
      iVar3 = 2;
    }
LAB_00570663:
    FUN_00503620(param_1 + 0x2b4,iVar3,1);
  }
switchD_0057096f_caseD_4:
  if (*(int *)(param_1 + 0x276c) == 0) {
    fStack_8c = *(float *)(param_1 + 0x2508);
    fStack_88 = *(float *)(param_1 + 0x250c);
    fStack_84 = *(float *)(param_1 + 0x2510);
    iVar3 = FUN_005035c0(param_1 + 0x2b4);
    if (*(int *)(iVar3 + 0x24) != 0x1a) {
      FUN_00423a10(param_1,param_2);
    }
    fStack_74 = *(float *)(param_1 + 0x2588) * param_2;
    fStack_70 = *(float *)(param_1 + 0x258c) * param_2;
    fStack_6c = *(float *)(param_1 + 0x2590) * param_2;
    fStack_44 = fStack_74;
    *(uint *)((int)&stack0xffffffc0 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffff90 + (uint)bVar6 * -8);
    *(uint *)((int)&stack0xffffffc4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffff94 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    fStack_68 = fStack_44 + *(float *)(param_1 + 0x257c);
    fStack_64 = fStack_40 + *(float *)(param_1 + 0x2580);
    fStack_60 = fStack_3c + *(float *)(param_1 + 0x2584);
    fStack_a4 = fStack_68;
    *(uint *)((int)&stack0xffffff60 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffff9c + (uint)bVar6 * -8);
    *(uint *)((int)&stack0xffffff64 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffffa0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    fStack_8c = fStack_8c + fStack_a4;
    fStack_88 = fStack_88 + fStack_a0;
    fStack_84 = fStack_84 + fStack_9c;
    iVar3 = FUN_005035c0(param_1 + 0x2b4);
    iVar3 = *(int *)(iVar3 + 0x24);
    if ((((iVar3 != 0x17) && (iVar3 != 0x18)) && (iVar3 != 0x19)) &&
       (((iVar3 != 0x25 && (iVar3 != 0x26)) && ((iVar3 != 0x27 && (iVar3 != 0x28)))))) {
      FUN_00423a60(param_1,&stack0xffffff74);
    }
    iVar3 = FUN_005035c0(param_1 + 0x2b4);
    if (*(int *)(iVar3 + 0x24) == 0x1a) {
      *(float *)(param_1 + 0x24) = param_2 * (float)_DAT_005ec303 + *(float *)(param_1 + 0x24);
    }
    goto LAB_00570827;
  }
  if (*(int *)(param_1 + 0x2770) == 0) {
    FUN_00408de0(param_1,*(int *)(param_1 + 0x276c) + 0x20);
    uStack_98 = uStack_5c;
    *(uint *)((int)&stack0xffffff6c + (uint)bVar6 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffa8 + (uint)bVar6 * -8);
    *(uint *)(&stack0xffffff70 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xffffffac + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    FUN_005838f0(&stack0xffffff68);
    uStack_80 = uStack_50;
    (&stack0xffffff84)[(uint)bVar6 * 0xfffffffe] =
         (float)*(uint *)(&stack0xffffffb4 + (uint)bVar6 * -8);
    *(uint *)(&stack0xffffff88 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xffffffb8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    fStack_14 = (float)FUN_0040d0c0(fStack_7c);
    fStack_18 = fStack_14;
    if (fStack_14 < _DAT_005ec30b) {
      fStack_18 = fStack_14 + _DAT_005ec30f;
    }
    if (_DAT_005ec313 < fStack_18) {
      fStack_18 = fStack_18 + _DAT_005ec317;
    }
    fStack_1c = param_2 * _DAT_005ec30f;
    fStack_20 = -fStack_1c;
    if (fStack_18 < fStack_20) {
      fStack_18 = fStack_20;
    }
    if (fStack_1c < fStack_18) {
      fStack_18 = fStack_1c;
    }
    *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + fStack_18;
    FUN_00408ae0(param_1);
  }
  iStack_24 = *(int *)(param_1 + 0x276c);
  fStack_14 = *(float *)(iStack_24 + 0x2b0);
  FUN_00546a90(param_1 + 0x2b4,0);
  puVar7 = &stack0xffffff50;
  uStack_b0 = uStack_38;
  *(uint *)((int)&stack0xffffff54 + (uint)bVar6 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffcc + (uint)bVar6 * -8);
  *(uint *)(&stack0xffffff58 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffffd0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  iVar3 = (**(code **)((int)fStack_14 + 0x118))(iStack_24,param_1,puVar7);
  if (iVar3 == 0) {
    *(uint *)(param_1 + 0x276c) = 0;
LAB_00570814:
    uVar8 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x276c) == 0) goto LAB_00570814;
    if (*(int *)(param_1 + 0x10a74) == 0) goto LAB_00570827;
    uVar8 = 0x10;
  }
  FUN_00503620(param_1 + 0x2b4,uVar8,1);
LAB_00570827:
  FUN_00424470(param_1);
  iVar3 = param_1 + 0x2b4;
  FUN_00544f00(iVar3);
  iVar4 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x114))(param_1);
  if (iVar4 == 0) {
    FUN_00594380(param_1 + 0x9acac,*(uint *)(param_1 + 0x9acb8),_DAT_0264bf38,&LAB_00544cc0);
    puVar7 = &stack0xffffff30;
    uStack_d0 = uStack_c0;
    *(uint *)((int)&stack0xffffff34 + (uint)bVar6 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff44 + (uint)bVar6 * -8);
    *(uint *)(&stack0xffffff38 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xffffff48 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    *(uint *)
     ((int)(&stack0xffffff38 + (uint)bVar6 * -8 + (uint)bVar6 * -8) + ((uint)bVar6 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffff48 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
          ((uint)bVar6 * -2 + 1) * 4);
    FUN_005466c0(iVar3,puVar7);
  }
  FUN_00429e90(param_1,param_2);
  FUN_005afdf0(param_1 + 0x25648,param_1 + 0x20,param_1 + 0x30,param_2,
               *(uint *)(param_1 + 0x2574),param_1 + 0x2b4);
  FUN_005afdf0(param_1 + 0x60178,param_1 + 0x20,param_1 + 0x30,param_2,
               *(uint *)(param_1 + 0x2574),param_1 + 0x2b4);
  return;
}
