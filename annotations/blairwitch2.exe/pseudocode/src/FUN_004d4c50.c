// Name: FUN_004d4c50
// Address: 004d4c50
// Address Range: [[004d4c50, 004d5460]]
// Convention: unknown
// Signature: void FUN_004d4c50(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004d52e5) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d4c50(int param_1,float param_2)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  float afStackY_18a4 [1522];
  uint *puVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  uint uStack_c8;
  uint uStack_b8;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  uint uStack_90;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  uint uStack_78;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  uint uStack_60;
  uint uStack_54;
  uint uStack_50;
  uint uStack_48;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  uint uStack_30;
  float fStack_24;
  float fStack_20;
  int iStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar3 = FUN_004244b0(param_1,param_2);
  if (iVar3 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x25638) == 4) {
    return;
  }
  if (*(int *)(param_1 + 0x10a64) == 2) {
    FUN_004d5950(param_1,param_2);
  }
  *(uint *)(param_1 + 0x25660) = (uint)(*(int *)(param_1 + 0x2698) != 0);
  FUN_0042b2a0(param_1,param_2);
  fVar1 = *(float *)(param_1 + 0x10a60) - param_2;
  *(float *)(param_1 + 0x10a60) = fVar1;
  if (fVar1 < 0.0) {
    *(uint *)(param_1 + 0x10a60) = 0;
  }
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
  FUN_004d6140(param_1,param_2);
  *(uint *)(param_1 + 0x2594) = *(uint *)(param_1 + 0x2510);
  iVar3 = FUN_004287f0(param_1,param_2);
  if (iVar3 == 0) {
    iVar3 = FUN_005035c0(param_1 + 0x2b4);
    uVar5 = *(uint *)(iVar3 + 0x24);
    if (uVar5 < 9) {
      if ((((uVar5 == 0) || (uVar5 < 2)) || (uVar5 < 3)) || (uVar5 == 3)) goto LAB_004d5052;
    }
    else {
      if (uVar5 < 10) {
        return;
      }
      if (uVar5 < 0xf) {
        if (uVar5 < 0xb) {
LAB_004d5052:
          if (*(int *)(param_1 + 0x2570) != 0) {
            iVar3 = 0;
            if ((*(int *)(param_1 + 0x25640) != 0) && (*(int *)(param_1 + 0x25660) == 0)) {
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
              if ((uVar5 == 0) || (*(int *)(param_1 + 0x25660) != 0)) {
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
                if (iVar4 != 0) goto LAB_004d50f7;
                iVar4 = FUN_004cf030(param_1,0);
                if ((iVar4 != 0) && (iVar4 != 1)) {
                  FUN_004cf230(param_1);
                }
                if ((iVar4 != 0) || (iVar4 = FUN_004cee90(param_1), iVar4 != 0)) goto LAB_004d50f7;
                iVar4 = FUN_004cf2b0(param_1);
                if (iVar4 != 0) {
                  FUN_004cf440(param_1);
                  goto LAB_004d50f7;
                }
              }
              else {
LAB_004d50f7:
                if (!bVar2) goto switchD_004d528c_default;
              }
              if (*(int *)(param_1 + 0x25640) != 0) {
                if (*(int *)(param_1 + 0x25660) == 0) {
                  *(uint *)(param_1 + 0x10a74) = 0;
                  switch(*(uint *)(param_1 + 0x25644)) {
                  case 0:
                  case 2:
                    iVar3 = 0xe;
                    break;
                  case 1:
                  case 3:
                    iVar3 = 0xf;
                    break;
                  case 4:
                    iVar3 = 0x10;
                  }
                }
                else {
                  iVar4 = FUN_0040c8f0(*(uint *)(param_1 + 0x2698),_DAT_02661f38);
                  if (iVar4 != 0) {
                    (**(code **)(*(int *)(iVar4 + 0x2b0) + 0xec))(iVar4);
                  }
                }
              }
            }
switchD_004d528c_default:
            *(float *)(param_1 + 0x2578) =
                 *(float *)(param_1 + 0x10a90) * *(float *)(param_1 + 0x2598);
            iVar4 = FUN_005035c0(param_1 + 0x2b4);
            if (iVar3 != *(int *)(iVar4 + 0x24)) {
              if ((((iVar3 == 0xe) || (iVar3 == 0xf)) || (iVar3 == 0x10)) &&
                 (iVar4 = FUN_00550b70(*(uint *)(param_1 + 0x25648)), iVar4 == 0)) {
                uVar9 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))
                                  (param_1,"icepick-miss?.wav");
                *(uint *)(param_1 + 0x25648) = uVar9;
              }
              FUN_00503620(param_1 + 0x2b4,iVar3,1);
            }
            if ((*(int *)(param_1 + 0x10a78) != 0) && (iVar3 = FUN_004d55e0(param_1), iVar3 == 0)) {
              FUN_004d5780(param_1);
            }
          }
        }
      }
      else if (((0xf < uVar5) && (0x10 < uVar5)) && (uVar5 == 0x15)) goto LAB_004d5052;
    }
  }
  else {
    *(uint *)(param_1 + 0x2510) = 0;
    *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
    uVar5 = *(uint *)(param_1 + 0x27ac);
    if (uVar5 < 2) {
      if (uVar5 == 1) {
        uVar9 = 1;
      }
      else {
LAB_004d5042:
        uVar9 = 0;
      }
    }
    else {
      if (2 < uVar5) {
        if (uVar5 == 3) {
          FUN_00503620(param_1 + 0x2b4,0,1);
          FUN_00436710(PTR_DAT_00609ed0,"%s confused while walking to scriptDest!\n",param_1);
          goto LAB_004d4d65;
        }
        goto LAB_004d5042;
      }
      uVar9 = 2;
    }
    FUN_00503620(param_1 + 0x2b4,uVar9,1);
  }
LAB_004d4d65:
  if (*(int *)(param_1 + 0x276c) == 0) {
    fStack_6c = *(float *)(param_1 + 0x2508);
    fStack_68 = *(float *)(param_1 + 0x250c);
    fStack_64 = *(float *)(param_1 + 0x2510);
    FUN_00423a10(param_1,param_2);
    fStack_a8 = *(float *)(param_1 + 0x2588) * param_2;
    pfVar10 = &stack0xffffff94;
    fStack_a4 = *(float *)(param_1 + 0x258c) * param_2;
    fStack_a0 = *(float *)(param_1 + 0x2590) * param_2;
    fStack_84 = fStack_a8;
    *(uint *)((int)&stack0xffffff80 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffff5c + (uint)bVar6 * -8);
    *(uint *)((int)&stack0xffffff84 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffff60 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    fStack_3c = fStack_84 + *(float *)(param_1 + 0x257c);
    fStack_38 = fStack_80 + *(float *)(param_1 + 0x2580);
    fStack_34 = fStack_7c + *(float *)(param_1 + 0x2584);
    fStack_9c = fStack_3c;
    *(uint *)((int)&stack0xffffff68 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffffc8 + (uint)bVar6 * -8);
    *(uint *)((int)&stack0xffffff6c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffffcc + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    fStack_6c = fStack_6c + fStack_9c;
    fStack_68 = fStack_68 + fStack_98;
    fStack_64 = fStack_64 + fStack_94;
    FUN_00423a60(param_1,pfVar10);
    goto LAB_004d4f1a;
  }
  if (*(int *)(param_1 + 0x2770) == 0) {
    FUN_00408de0(param_1,*(int *)(param_1 + 0x276c) + 0x20);
    uStack_60 = uStack_48;
    *(uint *)((int)&stack0xffffffa4 + (uint)bVar6 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffbc + (uint)bVar6 * -8);
    *(uint *)(&stack0xffffffa8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xffffffc0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    FUN_005838f0(&stack0xffffffa0);
    uStack_54 = uStack_90;
    *(uint *)((int)&stack0xffffffb0 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xffffff74 + (uint)bVar6 * -8);
    *(uint *)(&stack0xffffffb4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xffffff78 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    fStack_24 = (float)FUN_0040d0c0(uStack_50);
    fStack_14 = fStack_24;
    if (fStack_24 < _DAT_005da83e) {
      fStack_14 = fStack_24 + _DAT_005da842;
    }
    if (_DAT_005da846 < fStack_14) {
      fStack_14 = fStack_14 + _DAT_005da84a;
    }
    fStack_18 = param_2 * _DAT_005da842;
    fStack_20 = -fStack_18;
    if (fStack_14 < fStack_20) {
      fStack_14 = fStack_20;
    }
    if (fStack_18 < fStack_14) {
      fStack_14 = fStack_18;
    }
    *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + fStack_14;
    FUN_00408ae0(param_1);
  }
  iVar3 = *(int *)(param_1 + 0x276c);
  fStack_24 = *(float *)(iVar3 + 0x2b0);
  iStack_1c = param_1 + 0x2b4;
  FUN_00546a90(iStack_1c,0);
  iVar4 = (int)fStack_24;
  puVar7 = &stack0xffffff88;
  uStack_78 = uStack_30;
  *(uint *)((int)&stack0xffffff8c + (uint)bVar6 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffd4 + (uint)bVar6 * -8);
  iVar8 = param_1;
  *(uint *)(&stack0xffffff90 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffffd8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  iVar3 = (**(code **)(iVar4 + 0x118))(iVar3,iVar8,puVar7);
  if (iVar3 == 0) {
    *(uint *)(param_1 + 0x276c) = 0;
LAB_004d4f07:
    uVar9 = 0;
    iVar3 = param_1 + 0x2b4;
  }
  else {
    if (*(int *)(param_1 + 0x276c) == 0) goto LAB_004d4f07;
    if (*(int *)(param_1 + 0x10a74) == 0) goto LAB_004d4f1a;
    uVar9 = 0x11;
    iVar3 = iStack_1c;
  }
  FUN_00503620(iVar3,uVar9,1);
LAB_004d4f1a:
  FUN_004dccd0(param_1 + 0x2437c);
  iVar3 = FUN_0040c8f0(*(uint *)(param_1 + 0x2698),_DAT_02661f38);
  if (iVar3 != 0) {
    (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x14))(iVar3,param_2);
    *(uint *)(iVar3 + 0x6c4) = 100;
  }
  FUN_00424470(param_1);
  iVar3 = param_1 + 0x2b4;
  FUN_00544f00(iVar3);
  iVar4 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x114))(param_1);
  if (iVar4 == 0) {
    FUN_00594380(param_1 + 0x25650,*(uint *)(param_1 + 0x2565c),_DAT_01cee0b4,&LAB_00544cc0);
    puVar7 = &stack0xffffff48;
    uStack_b8 = uStack_c8;
    *(uint *)((int)&stack0xffffff4c + (uint)bVar6 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff3c + (uint)bVar6 * -8);
    *(uint *)(&stack0xffffff50 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xffffff40 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    *(uint *)
     ((int)(&stack0xffffff50 + (uint)bVar6 * -8 + (uint)bVar6 * -8) + ((uint)bVar6 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffff40 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
          ((uint)bVar6 * -2 + 1) * 4);
    FUN_005466c0(iVar3,puVar7);
  }
  FUN_004d5470(param_1,param_2);
  FUN_00429e90(param_1,param_2);
  return;
}
