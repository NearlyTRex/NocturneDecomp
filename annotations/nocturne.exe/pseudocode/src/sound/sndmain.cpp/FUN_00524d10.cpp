// Name: FUN_00524d10
// Address: 00524d10
// Address Range: [[00524d10, 0052556b]]
// Convention: unknown
// Signature: void FUN_00524d10(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00524d10(int param_1)

{
  float *pfVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int extraout_EDX;
  int extraout_EDX_00;
  float10 fVar10;
  double dVar11;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  ulonglong local_c0;
  int local_a8;
  int aiStack_a4 [8];
  float local_84 [4];
  ulonglong local_74;
  float local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  float local_1c;
  float local_18;
  int local_14;
  
  if (_DAT_02dc84bc < 1) {
    _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
    _DAT_01cc4804 = 0xa1a;
    FUN_004c8440();
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    local_58 = in_stack_00000028;
    local_64 = 1;
    if (*(int *)(param_1 + 0x74) != 0) {
      local_14 = 1 << ((char)*(uint *)(*(int *)(param_1 + 0x74) + 0x104) + 6U & 0x1f);
      local_6c = 1.0 / (float)local_14;
      iVar7 = 0;
      iVar8 = param_1;
      if (0 < in_stack_0000002c) {
        do {
          if (local_6c < *(float *)(iVar8 + 0x9c)) {
            local_64 = 0;
            break;
          }
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + 4;
        } while (iVar7 < in_stack_0000002c);
      }
    }
    iVar7 = 0;
    iVar8 = param_1;
    if (0 < in_stack_0000002c) {
      do {
        if ((local_64 != 0) || (*(int *)(iVar8 + 0xdc) < 0)) {
          *(uint *)(iVar8 + 0xdc) = *(uint *)(iVar8 + 0xbc);
        }
        iVar6 = iVar7 * 4;
        *(int *)(&stack0x00000008 + iVar6) =
             *(int *)(&stack0x00000008 + iVar6) + *(int *)(iVar8 + 0xdc) * 4;
        uVar5 = *(int *)(iVar8 + 0xdc) - *(int *)(iVar8 + 0xbc);
        uVar9 = (int)uVar5 >> 0x1f;
        if ((int)((uVar5 ^ uVar9) - uVar9) < 2) {
          aiStack_a4[iVar7] = 0;
        }
        else {
          aiStack_a4[iVar7] = *(int *)(&stack0x00000008 + iVar6);
          *(uint *)(&stack0x00000008 + iVar6) = *(uint *)(iVar6 + 0x2dc833c);
          FUN_00563cc0(*(uint *)(&stack0x00000008 + iVar6),0,in_stack_00000028 << 2);
        }
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + 4;
      } while (iVar7 < in_stack_0000002c);
    }
    local_68 = param_1 + 0x9c;
    while (((iVar8 = in_stack_00000028, *(int *)(param_1 + 0x70) != 0 &&
            (iVar7 = *(int *)(param_1 + 0x74), iVar7 != 0)) && (0.0 <= *(double *)(param_1 + 0x60)))
          ) {
      if ((in_stack_00000028 < 1) ||
         (dVar3 = (double)(((float)*(int *)(iVar7 + 0x10c) / (float)in_stack_00000030) *
                          *(float *)(param_1 + 0x78)), dVar3 <= 0.0)) goto LAB_00524e3c;
      dVar4 = (double)*(int *)(iVar7 + 0x138);
      local_a8 = in_stack_00000028;
      local_50 = 0;
      if (0 < *(int *)(iVar7 + 0x110)) {
        dVar11 = (double)FUN_005648c0(((double)*(int *)(iVar7 + 0x110) - *(double *)(param_1 + 0x60)
                                      ) / dVar3);
        fVar10 = (float10)dVar11;
        local_74 = dVar11;
        FUN_00563a30();
        local_60 = (int)ROUND(fVar10);
        if (local_60 < iVar8) {
          local_50 = 1;
          local_a8 = local_60;
        }
      }
      local_c0 = *(double *)(param_1 + 0x118);
      local_5c = 0;
      dVar11 = (double)FUN_005648c0((dVar4 - local_c0) / dVar3);
      fVar10 = (float10)dVar11;
      local_74 = dVar11;
      FUN_00563a30();
      local_48 = (int)ROUND(fVar10);
      if (local_48 < 1) {
        local_c0 = local_c0 - dVar4;
        if (local_c0 < 0.0) {
          local_c0 = 0.0;
        }
        dVar11 = (double)FUN_005648c0((dVar4 - local_c0) / dVar3);
        fVar10 = (float10)dVar11;
        local_74 = dVar11;
        FUN_00563a30();
        local_48 = (int)ROUND(fVar10);
      }
      if (local_48 < local_a8) {
        local_a8 = local_48;
        local_50 = 0;
      }
      else if (local_48 == local_a8) {
        local_5c = 1;
      }
      if (local_64 == 0) {
        iVar8 = *(int *)(param_1 + 0x74);
        iVar7 = local_a8 << 2;
        if (*(int *)(iVar8 + 0x104) == 8) {
          if (*(int *)(iVar8 + 0x108) == 2) {
            if (0 < local_a8) {
              local_20 = 0;
              local_3c = iVar7;
              do {
                fVar10 = (float10)local_c0;
                FUN_00563a30();
                local_84[2] = (float)(int)(*(byte *)(*(int *)(extraout_EDX + 0x120) +
                                                    (int)ROUND(fVar10) * 2) - 0x80);
                local_14 = *(byte *)(*(int *)(*(int *)(param_1 + 0x74) + 0x120) + 1 +
                                    (int)ROUND(fVar10) * 2) - 0x80;
                local_84[3] = (float)local_14;
                uVar5 = 0;
                iVar8 = param_1;
                if (0 < in_stack_0000002c) {
                  do {
                    uVar9 = uVar5 & 1;
                    iVar7 = uVar5 * 4;
                    uVar5 = uVar5 + 1;
                    *(float *)(*(int *)(&stack0x00000008 + iVar7) + local_20) =
                         local_84[uVar9 + 2] * *(float *)(iVar8 + 0x9c) +
                         *(float *)(*(int *)(&stack0x00000008 + iVar7) + local_20);
                    iVar8 = iVar8 + 4;
                  } while ((int)uVar5 < in_stack_0000002c);
                }
                local_c0 = local_c0 + dVar3;
                local_20 = local_20 + 4;
              } while (local_20 < local_3c);
            }
          }
          else if (0 < local_a8) {
            iVar8 = 0;
            local_40 = iVar7;
            do {
              fVar10 = (float10)local_c0;
              FUN_00563a30();
              local_14 = *(byte *)(*(int *)(*(int *)(param_1 + 0x74) + 0x120) + (int)ROUND(fVar10))
                         - 0x80;
              local_1c = (float)local_14;
              iVar6 = 0;
              iVar7 = param_1;
              if (0 < in_stack_0000002c) {
                do {
                  iVar2 = iVar6 * 4;
                  iVar6 = iVar6 + 1;
                  *(float *)(*(int *)(&stack0x00000008 + iVar2) + iVar8) =
                       local_1c * *(float *)(iVar7 + 0x9c) +
                       *(float *)(*(int *)(&stack0x00000008 + iVar2) + iVar8);
                  iVar7 = iVar7 + 4;
                } while (iVar6 < in_stack_0000002c);
              }
              local_c0 = local_c0 + dVar3;
              iVar8 = iVar8 + 4;
            } while (iVar8 < local_40);
          }
        }
        else if (*(int *)(iVar8 + 0x108) == 2) {
          if (in_stack_0000002c == 2) {
            local_c0 = (double)FUN_00523750(*(uint *)(iVar8 + 0x120),&stack0x00000008,local_68
                                            ,(uint)local_c0,local_c0._4_4_,dVar3,local_a8);
            local_74 = local_c0;
          }
          else if (0 < local_a8) {
            local_24 = 0;
            local_38 = iVar7;
            do {
              fVar10 = (float10)local_c0;
              FUN_00563a30();
              local_14 = (int)ROUND(fVar10);
              local_84[0] = (float)*(short *)(*(int *)(extraout_EDX_00 + 0x120) + local_14 * 4);
              local_84[1] = (float)*(short *)(*(int *)(*(int *)(param_1 + 0x74) + 0x120) + 2 +
                                             local_14 * 4);
              uVar5 = 0;
              iVar8 = param_1;
              if (0 < in_stack_0000002c) {
                do {
                  uVar9 = uVar5 & 1;
                  iVar7 = uVar5 * 4;
                  uVar5 = uVar5 + 1;
                  *(float *)(*(int *)(&stack0x00000008 + iVar7) + local_24) =
                       local_84[uVar9] * *(float *)(iVar8 + 0x9c) +
                       *(float *)(*(int *)(&stack0x00000008 + iVar7) + local_24);
                  iVar8 = iVar8 + 4;
                } while ((int)uVar5 < in_stack_0000002c);
              }
              local_c0 = local_c0 + dVar3;
              local_24 = local_24 + 4;
            } while (local_24 < local_38);
          }
        }
        else if (in_stack_0000002c == 2) {
          local_c0 = (double)FUN_00523610(*(uint *)(iVar8 + 0x120),&stack0x00000008,local_68,
                                          (uint)local_c0,local_c0._4_4_,dVar3,local_a8);
          local_74 = local_c0;
        }
        else if (0 < local_a8) {
          iVar8 = 0;
          local_34 = iVar7;
          do {
            fVar10 = (float10)local_c0;
            iVar7 = FUN_00563a30();
            local_14 = (int)ROUND(fVar10);
            local_18 = (float)*(short *)(*(int *)(iVar7 + 0x120) + (int)ROUND(fVar10) * 2);
            iVar6 = 0;
            iVar7 = param_1;
            if (0 < in_stack_0000002c) {
              do {
                iVar2 = iVar6 * 4;
                iVar6 = iVar6 + 1;
                *(float *)(*(int *)(&stack0x00000008 + iVar2) + iVar8) =
                     local_18 * *(float *)(iVar7 + 0x9c) +
                     *(float *)(*(int *)(&stack0x00000008 + iVar2) + iVar8);
                iVar7 = iVar7 + 4;
              } while (iVar6 < in_stack_0000002c);
            }
            local_c0 = local_c0 + dVar3;
            iVar8 = iVar8 + 4;
          } while (iVar8 < local_34);
        }
      }
      else {
        local_14 = local_a8;
        local_c0 = (double)local_a8 * dVar3 + local_c0;
      }
      if (local_5c != 0) {
        local_c0 = 0.0;
      }
      if (dVar4 <= local_c0) {
        local_c0 = local_c0 - dVar4;
      }
      FUN_00525870(param_1,(uint)local_c0,(int)((ulonglong)local_c0 >> 0x20));
      if (local_50 != 0) {
        if (*(int *)(*(int *)(param_1 + 0x74) + 0x124) == 0) {
          *(uint *)(param_1 + 100) = 0xbff00000;
          *(uint *)(param_1 + 0x60) = 0;
        }
        else {
          *(uint *)(param_1 + 0x60) = 0;
          *(uint *)(param_1 + 100) = 0;
        }
      }
      in_stack_00000028 = in_stack_00000028 - local_a8;
      iVar8 = 0;
      if (0 < in_stack_0000002c) {
        iVar7 = 0;
        do {
          *(int *)(&stack0x00000008 + iVar7) = *(int *)(&stack0x00000008 + iVar7) + local_a8 * 4;
          iVar8 = iVar8 + 1;
          iVar7 = iVar7 + 4;
        } while (iVar8 < in_stack_0000002c);
      }
    }
    FUN_00525570();
LAB_00524e3c:
    local_54 = 0;
    if (0 < in_stack_0000002c) {
      local_4c = 0;
      do {
        if (*(int *)((int)aiStack_a4 + local_4c) != 0) {
          local_28 = local_4c;
          local_44 = local_58;
          iVar8 = 0;
          local_30 = (local_58 + *(int *)(param_1 + 0xbc + local_4c)) -
                     *(int *)(param_1 + 0xdc + local_4c);
          local_2c = local_30 * 4;
          iVar7 = 0;
          if (0 < local_2c) {
            do {
              local_14 = (iVar8 / local_30) * 4;
              pfVar1 = (float *)(*(int *)((int)aiStack_a4 + local_4c) + iVar7);
              iVar7 = iVar7 + 4;
              *(float *)(*(int *)((int)aiStack_a4 + local_4c) + -4 + iVar7) =
                   *(float *)(*(int *)(local_4c + 0x2dc833c) + local_14) + *pfVar1;
              iVar8 = iVar8 + local_58;
            } while (iVar7 < local_2c);
          }
          *(uint *)(param_1 + 0xdc + local_4c) = *(uint *)(param_1 + 0xbc + local_4c);
        }
        local_54 = local_54 + 1;
        local_4c = local_4c + 4;
      } while (local_54 < in_stack_0000002c);
    }
  }
  return;
}
