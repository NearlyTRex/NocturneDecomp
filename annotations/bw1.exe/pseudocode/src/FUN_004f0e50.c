// Name: FUN_004f0e50
// Address: 004f0e50
// Address Range: [[004f0e50, 004f1660]]
// Convention: unknown
// Signature: void FUN_004f0e50(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004f14e5) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f0e50(int param_1,float param_2)

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
  iVar3 = FUN_0042e1a0(param_1,param_2);
  if (iVar3 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1ffa8) == 4) {
    return;
  }
  if (*(int *)(param_1 + 0xc1d4) == 2) {
    FUN_004f1b50(param_1,param_2);
  }
  *(uint *)(param_1 + 0x1ffcc) = (uint)(*(int *)(param_1 + 0x2628) != 0);
  FUN_00435320(param_1,param_2);
  fVar1 = *(float *)(param_1 + 0xc1d0) - param_2;
  *(float *)(param_1 + 0xc1d0) = fVar1;
  if (fVar1 < 0.0) {
    *(uint *)(param_1 + 0xc1d0) = 0;
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  FUN_004f2340(param_1,param_2);
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  iVar3 = FUN_00432240(param_1,param_2);
  if (iVar3 == 0) {
    iVar3 = FUN_00524770(param_1 + 0x158);
    uVar5 = *(uint *)(iVar3 + 0x24);
    if (uVar5 < 9) {
      if ((((uVar5 == 0) || (uVar5 < 2)) || (uVar5 < 3)) || (uVar5 == 3)) goto LAB_004f1252;
    }
    else {
      if (uVar5 < 10) {
        return;
      }
      if (uVar5 < 0xf) {
        if (uVar5 < 0xb) {
LAB_004f1252:
          if (*(int *)(param_1 + 0x2500) != 0) {
            iVar3 = 0;
            if ((*(int *)(param_1 + 0x1ffac) != 0) && (*(int *)(param_1 + 0x1ffcc) == 0)) {
              iVar3 = 10;
            }
            if (*(int *)(param_1 + 0xc1d8) != 0) {
              if (*(int *)(param_1 + 0xc1e0) == 0) {
                iVar3 = 1;
              }
              else {
                iVar3 = 2;
              }
            }
            if (*(int *)(param_1 + 0xc1dc) != 0) {
              iVar3 = 3;
            }
            if (*(int *)(param_1 + 0xc1f0) != 0) {
              *(uint *)(param_1 + 0xc1f0) = 0;
              uVar5 = (uint)(*(int *)(param_1 + 0x1ffac) == 0);
              *(uint *)(param_1 + 0x1ffac) = uVar5;
              if ((uVar5 == 0) || (*(int *)(param_1 + 0x1ffcc) != 0)) {
                iVar3 = 0;
              }
              else {
                iVar3 = 10;
              }
            }
            if (*(int *)(param_1 + 0xc1e4) != 0) {
              bVar2 = true;
              if ((*(int *)(param_1 + 0x1ffac) == 0) && (*(int *)(param_1 + 0xc1d4) != 2)) {
                iVar4 = FUN_004eb090(param_1);
                bVar2 = false;
                if (iVar4 != 0) goto LAB_004f12f7;
                iVar4 = FUN_004eb3e0(param_1,0);
                if ((iVar4 != 0) && (iVar4 != 1)) {
                  FUN_004eb5e0(param_1);
                }
                if ((iVar4 != 0) || (iVar4 = FUN_004eb240(param_1), iVar4 != 0)) goto LAB_004f12f7;
                iVar4 = FUN_004eb660(param_1);
                if (iVar4 != 0) {
                  FUN_004eb7f0(param_1);
                  goto LAB_004f12f7;
                }
              }
              else {
LAB_004f12f7:
                if (!bVar2) goto switchD_004f148c_default;
              }
              if (*(int *)(param_1 + 0x1ffac) != 0) {
                if (*(int *)(param_1 + 0x1ffcc) == 0) {
                  *(uint *)(param_1 + 0xc1e4) = 0;
                  switch(*(uint *)(param_1 + 0x1ffb0)) {
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
                  iVar4 = FUN_0040c600(*(uint *)(param_1 + 0x2628),_DAT_02c99770);
                  if (iVar4 != 0) {
                    (**(code **)(*(int *)(iVar4 + 0x154) + 0xe4))(iVar4);
                  }
                }
              }
            }
switchD_004f148c_default:
            *(float *)(param_1 + 0x2508) =
                 *(float *)(param_1 + 0xc200) * *(float *)(param_1 + 0x2528);
            iVar4 = FUN_00524770(param_1 + 0x158);
            if (iVar3 != *(int *)(iVar4 + 0x24)) {
              if ((((iVar3 == 0xe) || (iVar3 == 0xf)) || (iVar3 == 0x10)) &&
                 (iVar4 = FUN_005735a0(*(uint *)(param_1 + 0x1ffb4)), iVar4 == 0)) {
                uVar9 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                                  (param_1,"icepick-miss?.wav");
                *(uint *)(param_1 + 0x1ffb4) = uVar9;
              }
              FUN_005247c0(param_1 + 0x158,iVar3,1);
            }
            if ((*(int *)(param_1 + 0xc1e8) != 0) && (iVar3 = FUN_004f17e0(param_1), iVar3 == 0)) {
              FUN_004f1980(param_1);
            }
          }
        }
      }
      else if (((0xf < uVar5) && (0x10 < uVar5)) && (uVar5 == 0x15)) goto LAB_004f1252;
    }
  }
  else {
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
    uVar5 = *(uint *)(param_1 + 0x273c);
    if (uVar5 < 2) {
      if (uVar5 == 1) {
        uVar9 = 1;
      }
      else {
LAB_004f1242:
        uVar9 = 0;
      }
    }
    else {
      if (2 < uVar5) {
        if (uVar5 == 3) {
          FUN_005247c0(param_1 + 0x158,0,1);
          FUN_00445430(PTR_DAT_00611100,"%s confused while walking to scriptDest!\n",param_1);
          goto LAB_004f0f65;
        }
        goto LAB_004f1242;
      }
      uVar9 = 2;
    }
    FUN_005247c0(param_1 + 0x158,uVar9,1);
  }
LAB_004f0f65:
  if (*(int *)(param_1 + 0x26fc) == 0) {
    fStack_6c = *(float *)(param_1 + 0x249c);
    fStack_68 = *(float *)(param_1 + 0x24a0);
    fStack_64 = *(float *)(param_1 + 0x24a4);
    FUN_0042d700(param_1,param_2);
    fStack_a8 = *(float *)(param_1 + 0x2518) * param_2;
    pfVar10 = &stack0xffffff94;
    fStack_a4 = *(float *)(param_1 + 0x251c) * param_2;
    fStack_a0 = *(float *)(param_1 + 0x2520) * param_2;
    fStack_84 = fStack_a8;
    *(uint *)((int)&stack0xffffff80 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffff5c + (uint)bVar6 * -8);
    *(uint *)((int)&stack0xffffff84 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffff60 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    fStack_3c = fStack_84 + *(float *)(param_1 + 0x250c);
    fStack_38 = fStack_80 + *(float *)(param_1 + 0x2510);
    fStack_34 = fStack_7c + *(float *)(param_1 + 0x2514);
    fStack_9c = fStack_3c;
    *(uint *)((int)&stack0xffffff68 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffffc8 + (uint)bVar6 * -8);
    *(uint *)((int)&stack0xffffff6c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffffcc + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    fStack_6c = fStack_6c + fStack_9c;
    fStack_68 = fStack_68 + fStack_98;
    fStack_64 = fStack_64 + fStack_94;
    FUN_0042d750(param_1,pfVar10);
    goto LAB_004f111a;
  }
  if (*(int *)(param_1 + 0x2700) == 0) {
    FUN_00408bb0(param_1,*(int *)(param_1 + 0x26fc) + 0x20);
    uStack_60 = uStack_48;
    *(uint *)((int)&stack0xffffffa4 + (uint)bVar6 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffbc + (uint)bVar6 * -8);
    *(uint *)(&stack0xffffffa8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xffffffc0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    FUN_005a7520(&stack0xffffffa0);
    uStack_54 = uStack_90;
    *(uint *)((int)&stack0xffffffb0 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xffffff74 + (uint)bVar6 * -8);
    *(uint *)(&stack0xffffffb4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xffffff78 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    fStack_24 = (float)FUN_0040cd60(uStack_50);
    fStack_14 = fStack_24;
    if (fStack_24 < _DAT_005e539f) {
      fStack_14 = fStack_24 + _DAT_005e53a3;
    }
    if (_DAT_005e53a7 < fStack_14) {
      fStack_14 = fStack_14 + _DAT_005e53ab;
    }
    fStack_18 = param_2 * _DAT_005e53a3;
    fStack_20 = -fStack_18;
    if (fStack_14 < fStack_20) {
      fStack_14 = fStack_20;
    }
    if (fStack_18 < fStack_14) {
      fStack_14 = fStack_18;
    }
    *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + fStack_14;
    FUN_004088b0(param_1);
  }
  iVar3 = *(int *)(param_1 + 0x26fc);
  fStack_24 = *(float *)(iVar3 + 0x154);
  iStack_1c = param_1 + 0x158;
  FUN_00569130(iStack_1c,0);
  iVar4 = (int)fStack_24;
  puVar7 = &stack0xffffff88;
  uStack_78 = uStack_30;
  *(uint *)((int)&stack0xffffff8c + (uint)bVar6 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffd4 + (uint)bVar6 * -8);
  iVar8 = param_1;
  *(uint *)(&stack0xffffff90 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffffd8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  iVar3 = (**(code **)(iVar4 + 0x110))(iVar3,iVar8,puVar7);
  if (iVar3 == 0) {
    *(uint *)(param_1 + 0x26fc) = 0;
LAB_004f1107:
    uVar9 = 0;
    iVar3 = param_1 + 0x158;
  }
  else {
    if (*(int *)(param_1 + 0x26fc) == 0) goto LAB_004f1107;
    if (*(int *)(param_1 + 0xc1e4) == 0) goto LAB_004f111a;
    uVar9 = 0x11;
    iVar3 = iStack_1c;
  }
  FUN_005247c0(iVar3,uVar9,1);
LAB_004f111a:
  FUN_004f9f10(param_1 + 0x1fae8);
  iVar3 = FUN_0040c600(*(uint *)(param_1 + 0x2628),_DAT_02c99770);
  if (iVar3 != 0) {
    (**(code **)(*(int *)(iVar3 + 0x154) + 0xc))(iVar3,param_2);
    *(uint *)(iVar3 + 0x568) = 100;
  }
  FUN_0042e160(param_1);
  iVar3 = param_1 + 0x158;
  FUN_005675a0(iVar3);
  iVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))(param_1);
  if (iVar4 == 0) {
    FUN_005b7ed0(param_1 + 0x1ffbc,*(uint *)(param_1 + 0x1ffc8),_DAT_01d06c74,&LAB_00567360);
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
    FUN_00568d60(iVar3,puVar7);
  }
  FUN_004f1670(param_1,param_2);
  FUN_00433e80(param_1,param_2);
  return;
}
