// Name: sound_sndmain.cpp_CSfxSlot_mix_FUN_00524d10
// Address: 00524d10
// Address Range: [[00524d10, 0052556b]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_CSfxSlot_mix_FUN_00524d10(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_CSfxSlot_mix_FUN_00524d10(int param_1)

{
  float *pfVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  float10 fVar11;
  double dVar12;
  byte auVar13 [8];
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  uint uVar14;
  uint uVar15;
  uint local_c0;
  uint uStack_bc;
  uint local_b8;
  uint uStack_b4;
  int local_b0;
  int iStack_ac;
  int aiStack_a4 [5];
  float afStack_90 [5];
  byte local_7c [8];
  ulonglong local_74;
  float local_6c;
  int local_68;
  int local_64;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_30;
  int local_2c;
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  int local_14;
  
  if (_DAT_02dc84bc < 1) {
    PTR_01cc4800 = "..\\sound\\sndmain.cpp";
    INT_01cc4804 = 0xa1a;
    core_main_c_FUN_004c8440("SfxSlot::mix - must be locked!");
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    local_58 = in_stack_00000028;
    local_64 = 1;
    if (*(int *)(param_1 + 0x74) != 0) {
      local_14 = 1 << ((char)*(uint *)(*(int *)(param_1 + 0x74) + 0x104) + 6U & 0x1f);
      local_6c = 1.0 / (float)local_14;
      iVar8 = 0;
      iVar9 = param_1;
      if (0 < in_stack_0000002c) {
        do {
          if (local_6c < *(float *)(iVar9 + 0x9c)) {
            local_64 = 0;
            break;
          }
          iVar8 = iVar8 + 1;
          iVar9 = iVar9 + 4;
        } while (iVar8 < in_stack_0000002c);
      }
    }
    iVar8 = 0;
    iVar9 = param_1;
    if (0 < in_stack_0000002c) {
      do {
        if ((local_64 != 0) || (*(int *)(iVar9 + 0xdc) < 0)) {
          *(uint *)(iVar9 + 0xdc) = *(uint *)(iVar9 + 0xbc);
        }
        iVar6 = iVar8 * 4;
        *(int *)(&stack0x00000008 + iVar6) =
             *(int *)(&stack0x00000008 + iVar6) + *(int *)(iVar9 + 0xdc) * 4;
        uVar5 = *(int *)(iVar9 + 0xdc) - *(int *)(iVar9 + 0xbc);
        uVar10 = (int)uVar5 >> 0x1f;
        if ((int)((uVar5 ^ uVar10) - uVar10) < 2) {
          aiStack_a4[iVar8] = 0;
        }
        else {
          aiStack_a4[iVar8] = *(int *)(&stack0x00000008 + iVar6);
          *(uint *)(&stack0x00000008 + iVar6) = *(uint *)(iVar6 + 0x2dc833c);
          memset
                    (*(uint *)(&stack0x00000008 + iVar6),0,in_stack_00000028 << 2);
        }
        iVar8 = iVar8 + 1;
        iVar9 = iVar9 + 4;
      } while (iVar8 < in_stack_0000002c);
    }
    local_68 = param_1 + 0x9c;
    while (((iVar9 = in_stack_00000028, *(int *)(param_1 + 0x70) != 0 &&
            (iVar8 = *(int *)(param_1 + 0x74), iVar8 != 0)) && (0.0 <= *(double *)(param_1 + 0x60)))
          ) {
      if (in_stack_00000028 < 1) goto LAB_00524e3c;
      dVar12 = (double)(((float)*(int *)(iVar8 + 0x10c) / (float)in_stack_00000030) *
                       *(float *)(param_1 + 0x78));
      local_b0 = SUB84(__BITCAST_UINT64(dVar12),0);
      iStack_ac = (int)((ulonglong)dVar12 >> 0x20);
      if (dVar12 <= 0.0) goto LAB_00524e3c;
      dVar3 = (double)*(int *)(iVar8 + 0x138);
      local_b8 = SUB84(__BITCAST_UINT64(dVar3),0);
      uStack_b4 = (uint)((ulonglong)dVar3 >> 0x20);
      local_50 = 0;
      if (0 < *(int *)(iVar8 + 0x110)) {
        dVar12 = (double)floor
                                   (((double)*(int *)(iVar8 + 0x110) - *(double *)(param_1 + 0x60))
                                    / dVar12);
        local_74 = dVar12;
        fVar11 = (float10)round((float10)dVar12);
        local_64 = (int)ROUND(fVar11);
        if (local_64 < iVar9) {
          local_54 = 1;
          iStack_ac = local_64;
        }
      }
      local_c0 = *(uint *)(param_1 + 0x118);
      uStack_bc = *(uint *)(param_1 + 0x11c);
      dVar12 = (dVar3 - *(double *)(param_1 + 0x118)) / __BITCAST_DOUBLE(CONCAT44(iStack_ac,local_b0));
      local_5c = 0;
      uVar14 = SUB84(__BITCAST_UINT64(dVar12),0);
      dVar12 = (double)floor(dVar12);
      uVar15 = 0x524fc6;
      local_74 = dVar12;
      fVar11 = (float10)round((float10)dVar12);
      local_4c = (int)ROUND(fVar11);
      dVar12 = local_74;
      auVar13 = local_7c;
      if (local_4c < 1) {
        dVar12 = __BITCAST_DOUBLE(CONCAT44(local_c0,uVar15)) - __BITCAST_DOUBLE(CONCAT44(local_b8,uStack_bc));
        if (dVar12 < 0.0) {
          dVar12 = 0.0;
        }
        local_c0 = (uint)((ulonglong)dVar12 >> 0x20);
        uVar15 = SUB84(__BITCAST_UINT64(dVar12),0);
        dVar12 = (double)floor
                                   ((__BITCAST_DOUBLE(CONCAT44(local_b8,uStack_bc)) - dVar12) /
                                    __BITCAST_DOUBLE(CONCAT44(local_b0,uStack_b4)));
        uVar14 = 0x52501a;
        unique0x100009fd = dVar12;
        fVar11 = (float10)round((float10)dVar12);
        auVar13 = (byte  [8])CONCAT44(local_7c._4_4_,local_7c._0_4_);
        dVar12 = __BITCAST_DOUBLE(CONCAT44(local_74._4_4_,(uint)local_74));
        local_50 = (int)ROUND(fVar11);
      }
      local_74._4_4_ = (uint)((ulonglong)dVar12 >> 0x20);
      dVar4 = __BITCAST_DOUBLE(CONCAT44(uVar15,uVar14));
      if (local_50 < local_b0) {
        local_b0 = local_50;
        local_58 = 0;
      }
      else if (local_50 == local_b0) {
        local_64 = 1;
      }
      local_74 = dVar12;
      if (local_6c == 0.0) {
        iVar8 = *(int *)(param_1 + 0x74);
        iVar6 = local_b0 << 2;
        local_7c = auVar13;
        if (*(int *)(iVar8 + 0x104) == 8) {
          if (*(int *)(iVar8 + 0x108) == 2) {
            if (0 < local_b0) {
              local_28 = 0.0;
              local_44 = iVar6;
              do {
                uVar15 = (uint)((ulonglong)dVar4 >> 0x20);
                iVar8 = *(int *)(param_1 + 0x74);
                uVar14 = 0x525154;
                fVar11 = (float10)round((float10)dVar4);
                afStack_90[2] =
                     (float)(int)(*(byte *)(*(int *)(iVar8 + 0x120) + (int)ROUND(fVar11) * 2) - 0x80
                                 );
                local_20 = *(byte *)(*(int *)(*(int *)(param_1 + 0x74) + 0x120) + 1 +
                                    (int)ROUND(fVar11) * 2) - 0x80;
                afStack_90[3] = (float)local_20;
                uVar5 = 0;
                iVar8 = param_1;
                if (0 < in_stack_0000002c) {
                  do {
                    uVar10 = uVar5 & 1;
                    iVar6 = uVar5 * 4;
                    uVar5 = uVar5 + 1;
                    *(float *)(*(int *)(&stack0x00000008 + iVar6) + local_2c) =
                         afStack_90[uVar10 + 2] * *(float *)(iVar8 + 0x9c) +
                         *(float *)(*(int *)(&stack0x00000008 + iVar6) + local_2c);
                    iVar8 = iVar8 + 4;
                  } while ((int)uVar5 < in_stack_0000002c);
                }
                dVar4 = __BITCAST_DOUBLE(CONCAT44(uVar15,uVar14)) + __BITCAST_DOUBLE(CONCAT44(local_b8,uStack_bc));
                local_2c = local_2c + 4;
                auVar13 = local_7c;
              } while (local_2c < local_48);
            }
          }
          else if (0 < local_b0) {
            iVar8 = 0;
            local_48 = iVar6;
            do {
              uVar15 = (uint)((ulonglong)dVar4 >> 0x20);
              uVar14 = 0x525233;
              fVar11 = (float10)round((float10)dVar4);
              local_20 = *(byte *)(*(int *)(*(int *)(param_1 + 0x74) + 0x120) + (int)ROUND(fVar11))
                         - 0x80;
              local_28 = (float)local_20;
              iVar7 = 0;
              iVar6 = param_1;
              if (0 < in_stack_0000002c) {
                do {
                  iVar2 = iVar7 * 4;
                  iVar7 = iVar7 + 1;
                  *(float *)(*(int *)(&stack0x00000008 + iVar2) + iVar8) =
                       local_28 * *(float *)(iVar6 + 0x9c) +
                       *(float *)(*(int *)(&stack0x00000008 + iVar2) + iVar8);
                  iVar6 = iVar6 + 4;
                } while (iVar7 < in_stack_0000002c);
              }
              dVar4 = __BITCAST_DOUBLE(CONCAT44(uVar15,uVar14)) + __BITCAST_DOUBLE(CONCAT44(local_b8,uStack_bc));
              iVar8 = iVar8 + 4;
              auVar13 = local_7c;
            } while (iVar8 < local_4c);
          }
        }
        else if (*(int *)(iVar8 + 0x108) == 2) {
          if (in_stack_0000002c == 2) {
            auVar13 = (byte  [8])
                      sound_sndmain_cpp_mixResampleStereoToStereo_FUN_00523750
                                (*(uint *)(iVar8 + 0x120),&stack0x00000008,local_74._4_4_,
                                 uVar14,uVar15,dVar3,local_b0);
            local_74 = dVar12;
          }
          else if (0 < local_b0) {
            local_2c = 0;
            local_40 = iVar6;
            do {
              uVar15 = (uint)((ulonglong)dVar4 >> 0x20);
              iVar8 = *(int *)(param_1 + 0x74);
              uVar14 = 0x5252fd;
              fVar11 = (float10)round((float10)dVar4);
              local_20 = (int)ROUND(fVar11);
              afStack_90[0] = (float)*(short *)(*(int *)(iVar8 + 0x120) + local_20 * 4);
              afStack_90[1] =
                   (float)*(short *)(*(int *)(*(int *)(param_1 + 0x74) + 0x120) + 2 + local_20 * 4);
              uVar5 = 0;
              iVar8 = param_1;
              if (0 < in_stack_0000002c) {
                do {
                  uVar10 = uVar5 & 1;
                  iVar6 = uVar5 * 4;
                  uVar5 = uVar5 + 1;
                  *(float *)(*(int *)(&stack0x00000008 + iVar6) + local_30) =
                       afStack_90[uVar10] * *(float *)(iVar8 + 0x9c) +
                       *(float *)(*(int *)(&stack0x00000008 + iVar6) + local_30);
                  iVar8 = iVar8 + 4;
                } while ((int)uVar5 < in_stack_0000002c);
              }
              dVar4 = __BITCAST_DOUBLE(CONCAT44(uVar15,uVar14)) + __BITCAST_DOUBLE(CONCAT44(local_b8,uStack_bc));
              local_30 = local_30 + 4;
              auVar13 = local_7c;
            } while (local_30 < local_44);
          }
        }
        else if (in_stack_0000002c == 2) {
          auVar13 = (byte  [8])
                    sound_sndmain_cpp_mixResampleMonoToStereo_FUN_00523610
                              (*(uint *)(iVar8 + 0x120),&stack0x00000008,local_74._4_4_,uVar14
                               ,uVar15,dVar3,local_b0);
          local_74 = dVar12;
        }
        else if (0 < local_b0) {
          iVar8 = 0;
          local_3c = iVar6;
          do {
            uVar15 = (uint)((ulonglong)dVar4 >> 0x20);
            iVar6 = *(int *)(param_1 + 0x74);
            uVar14 = 0x5253f9;
            fVar11 = (float10)round((float10)dVar4);
            local_20 = (int)ROUND(fVar11);
            local_24 = (float)*(short *)(*(int *)(iVar6 + 0x120) + (int)ROUND(fVar11) * 2);
            iVar7 = 0;
            iVar6 = param_1;
            if (0 < in_stack_0000002c) {
              do {
                iVar2 = iVar7 * 4;
                iVar7 = iVar7 + 1;
                *(float *)(*(int *)(&stack0x00000008 + iVar2) + iVar8) =
                     local_24 * *(float *)(iVar6 + 0x9c) +
                     *(float *)(*(int *)(&stack0x00000008 + iVar2) + iVar8);
                iVar6 = iVar6 + 4;
              } while (iVar7 < in_stack_0000002c);
            }
            dVar4 = __BITCAST_DOUBLE(CONCAT44(uVar15,uVar14)) + __BITCAST_DOUBLE(CONCAT44(local_b8,uStack_bc));
            iVar8 = iVar8 + 4;
            auVar13 = local_7c;
          } while (iVar8 < local_40);
        }
      }
      else {
        local_1c = local_b0;
      }
      if (local_5c != 0) {
        local_c0 = 0;
        uStack_bc = 0;
      }
      dVar12 = __BITCAST_DOUBLE(CONCAT44(uStack_bc,local_c0));
      if (dVar3 <= dVar12) {
        dVar12 = __BITCAST_DOUBLE(CONCAT44(uStack_bc,local_c0)) - dVar3;
      }
      local_7c = auVar13;
      sound_sndmain_cpp_CSfxSlot_updatePlaybackPos_FUN_00525870(param_1,dVar12);
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
      in_stack_00000028 = in_stack_00000028 - iVar9;
      iVar8 = 0;
      if (0 < in_stack_0000002c) {
        iVar6 = 0;
        do {
          *(int *)(&stack0x00000008 + iVar6) = *(int *)(&stack0x00000008 + iVar6) + iVar9 * 4;
          iVar8 = iVar8 + 1;
          iVar6 = iVar6 + 4;
        } while (iVar8 < in_stack_0000002c);
      }
    }
    sound_sndmain_cpp_CSfxSlot_kill_FUN_00525570(param_1);
LAB_00524e3c:
    local_54 = 0;
    if (0 < in_stack_0000002c) {
      local_4c = 0;
      do {
        if (*(int *)((int)aiStack_a4 + local_4c) != 0) {
          local_28 = (float)local_4c;
          local_44 = local_58;
          iVar9 = 0;
          local_30 = (local_58 + *(int *)(param_1 + 0xbc + local_4c)) -
                     *(int *)(param_1 + 0xdc + local_4c);
          local_2c = local_30 * 4;
          iVar8 = 0;
          if (0 < local_2c) {
            do {
              local_14 = (iVar9 / local_30) * 4;
              pfVar1 = (float *)(*(int *)((int)aiStack_a4 + local_4c) + iVar8);
              iVar8 = iVar8 + 4;
              *(float *)(*(int *)((int)aiStack_a4 + local_4c) + -4 + iVar8) =
                   *(float *)(*(int *)(local_4c + 0x2dc833c) + local_14) + *pfVar1;
              iVar9 = iVar9 + local_58;
            } while (iVar8 < local_2c);
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
