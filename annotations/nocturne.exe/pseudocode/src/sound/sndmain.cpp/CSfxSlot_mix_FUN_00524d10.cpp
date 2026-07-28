// Name: sound_sndmain.cpp_CSfxSlot_mix_FUN_00524d10
// Address: 00524d10
// Address Range: [[00524d10, 0052556b]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_CSfxSlot_mix_FUN_00524d10(CSfxSlot *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_CSfxSlot_mix_FUN_00524d10(CSfxSlot *param_1)

{
  float *pfVar1;
  int iVar2;
  double dVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  CSfxSlot *pCVar8;
  int iVar9;
  double dVar10;
  byte auVar11 [8];
  double dVar12;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  uint uVar13;
  uint uVar14;
  int local_c0;
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
  float *local_68;
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
  if (param_1->hardware_buffer_handle != 0) {
    local_58 = in_stack_00000028;
    local_64 = 1;
    if (param_1->playback_state != 0) {
      local_14 = 1 << ((char)*(uint *)(param_1->playback_state + 0x104) + 6U & 0x1f);
      local_6c = 1.0 / (float)local_14;
      iVar6 = 0;
      pCVar8 = param_1;
      if (0 < in_stack_0000002c) {
        do {
          if (local_6c < pCVar8->distance_to_speakers[7]) {
            local_64 = 0;
            break;
          }
          iVar6 = iVar6 + 1;
          pCVar8 = (CSfxSlot *)&(pCVar8->options).position;
        } while (iVar6 < in_stack_0000002c);
      }
    }
    iVar6 = 0;
    pCVar8 = param_1;
    if (0 < in_stack_0000002c) {
      do {
        if ((local_64 != 0) || (pCVar8->channel_target_buffer_offsets[7] < 0)) {
          pCVar8->channel_target_buffer_offsets[7] = (int)pCVar8->channel_volumes[7];
        }
        iVar9 = iVar6 * 4;
        *(int *)(&stack0x00000008 + iVar9) =
             *(int *)(&stack0x00000008 + iVar9) + pCVar8->channel_target_buffer_offsets[7] * 4;
        uVar4 = pCVar8->channel_target_buffer_offsets[7] - (int)pCVar8->channel_volumes[7];
        uVar7 = (int)uVar4 >> 0x1f;
        if ((int)((uVar4 ^ uVar7) - uVar7) < 2) {
          aiStack_a4[iVar6] = 0;
        }
        else {
          aiStack_a4[iVar6] = *(int *)(&stack0x00000008 + iVar9);
          *(uint *)(&stack0x00000008 + iVar9) = *(uint *)(iVar9 + 0x2dc833c);
          memset
                    (*(void **)(&stack0x00000008 + iVar9),0,in_stack_00000028 << 2);
        }
        iVar6 = iVar6 + 1;
        pCVar8 = (CSfxSlot *)&(pCVar8->options).position;
      } while (iVar6 < in_stack_0000002c);
    }
    local_68 = param_1->distance_to_speakers + 7;
    while (((iVar6 = in_stack_00000028, param_1->hardware_buffer_handle != 0 &&
            (iVar9 = param_1->playback_state, iVar9 != 0)) &&
           (0.0 <= (param_1->options).trigger_time))) {
      if (in_stack_00000028 < 1) goto LAB_00524e3c;
      dVar10 = (double)(((float)*(int *)(iVar9 + 0x10c) / (float)in_stack_00000030) *
                       (float)param_1->sample);
      local_b0 = SUB84(__BITCAST_UINT64(dVar10),0);
      iStack_ac = (int)((ulonglong)dVar10 >> 0x20);
      if (dVar10 <= 0.0) goto LAB_00524e3c;
      dVar3 = (double)*(int *)(iVar9 + 0x138);
      local_b8 = SUB84(__BITCAST_UINT64(dVar3),0);
      uStack_b4 = (uint)((ulonglong)dVar3 >> 0x20);
      local_50 = 0;
      if (0 < *(int *)(iVar9 + 0x110)) {
        dVar10 = (double)floor
                                   (((double)*(int *)(iVar9 + 0x110) -
                                    (param_1->options).trigger_time) / dVar10);
        local_74 = dVar10;
        dVar10 = round(dVar10);
        local_64 = (int)ROUND(dVar10);
        if (local_64 < iVar6) {
          local_54 = 1;
          iStack_ac = local_64;
        }
      }
      local_c0 = param_1->is_active;
      uStack_bc = *(uint *)&param_1->prev_hardware_playback_pos;
      dVar10 = (dVar3 - *(double *)&param_1->is_active) / __BITCAST_DOUBLE(CONCAT44(iStack_ac,local_b0));
      local_5c = 0;
      uVar13 = SUB84(__BITCAST_UINT64(dVar10),0);
      dVar10 = (double)floor(dVar10);
      uVar14 = 0x524fc6;
      local_74 = dVar10;
      dVar10 = round(dVar10);
      local_4c = (int)ROUND(dVar10);
      dVar10 = local_74;
      auVar11 = local_7c;
      if (local_4c < 1) {
        dVar10 = __BITCAST_DOUBLE(CONCAT44(local_c0,uVar14)) - __BITCAST_DOUBLE(CONCAT44(local_b8,uStack_bc));
        if (dVar10 < 0.0) {
          dVar10 = 0.0;
        }
        local_c0 = (int)((ulonglong)dVar10 >> 0x20);
        uVar14 = SUB84(__BITCAST_UINT64(dVar10),0);
        dVar10 = (double)floor
                                   ((__BITCAST_DOUBLE(CONCAT44(local_b8,uStack_bc)) - dVar10) /
                                    __BITCAST_DOUBLE(CONCAT44(local_b0,uStack_b4)));
        uVar13 = 0x52501a;
        unique0x10000c5f = dVar10;
        dVar12 = round(dVar10);
        auVar11 = (byte  [8])CONCAT44(local_7c._4_4_,local_7c._0_4_);
        dVar10 = __BITCAST_DOUBLE(CONCAT44(local_74._4_4_,(uint)local_74));
        local_50 = (int)ROUND(dVar12);
      }
      local_74._4_4_ = (uint)((ulonglong)dVar10 >> 0x20);
      dVar12 = __BITCAST_DOUBLE(CONCAT44(uVar14,uVar13));
      if (local_50 < local_b0) {
        local_b0 = local_50;
        local_58 = 0;
      }
      else if (local_50 == local_b0) {
        local_64 = 1;
      }
      local_74 = dVar10;
      if (local_6c == 0.0) {
        iVar9 = param_1->playback_state;
        iVar5 = local_b0 << 2;
        local_7c = auVar11;
        if (*(int *)(iVar9 + 0x104) == 8) {
          if (*(int *)(iVar9 + 0x108) == 2) {
            if (0 < local_b0) {
              local_28 = 0.0;
              local_44 = iVar5;
              do {
                uVar14 = (uint)((ulonglong)dVar12 >> 0x20);
                iVar9 = param_1->playback_state;
                uVar13 = 0x525154;
                dVar10 = round(dVar12);
                afStack_90[2] =
                     (float)(int)(*(byte *)(*(int *)(iVar9 + 0x120) + (int)ROUND(dVar10) * 2) - 0x80
                                 );
                local_20 = *(byte *)(*(int *)(param_1->playback_state + 0x120) + 1 +
                                    (int)ROUND(dVar10) * 2) - 0x80;
                afStack_90[3] = (float)local_20;
                uVar4 = 0;
                pCVar8 = param_1;
                if (0 < in_stack_0000002c) {
                  do {
                    uVar7 = uVar4 & 1;
                    iVar9 = uVar4 * 4;
                    uVar4 = uVar4 + 1;
                    *(float *)(*(int *)(&stack0x00000008 + iVar9) + local_2c) =
                         afStack_90[uVar7 + 2] * pCVar8->distance_to_speakers[7] +
                         *(float *)(*(int *)(&stack0x00000008 + iVar9) + local_2c);
                    pCVar8 = (CSfxSlot *)&(pCVar8->options).position;
                  } while ((int)uVar4 < in_stack_0000002c);
                }
                dVar12 = __BITCAST_DOUBLE(CONCAT44(uVar14,uVar13)) + __BITCAST_DOUBLE(CONCAT44(local_b8,uStack_bc));
                local_2c = local_2c + 4;
                auVar11 = local_7c;
              } while (local_2c < local_48);
            }
          }
          else if (0 < local_b0) {
            iVar9 = 0;
            local_48 = iVar5;
            do {
              uVar14 = (uint)((ulonglong)dVar12 >> 0x20);
              uVar13 = 0x525233;
              dVar10 = round(dVar12);
              local_20 = *(byte *)(*(int *)(param_1->playback_state + 0x120) + (int)ROUND(dVar10)) -
                         0x80;
              local_28 = (float)local_20;
              iVar5 = 0;
              pCVar8 = param_1;
              if (0 < in_stack_0000002c) {
                do {
                  iVar2 = iVar5 * 4;
                  iVar5 = iVar5 + 1;
                  *(float *)(*(int *)(&stack0x00000008 + iVar2) + iVar9) =
                       local_28 * pCVar8->distance_to_speakers[7] +
                       *(float *)(*(int *)(&stack0x00000008 + iVar2) + iVar9);
                  pCVar8 = (CSfxSlot *)&(pCVar8->options).position;
                } while (iVar5 < in_stack_0000002c);
              }
              dVar12 = __BITCAST_DOUBLE(CONCAT44(uVar14,uVar13)) + __BITCAST_DOUBLE(CONCAT44(local_b8,uStack_bc));
              iVar9 = iVar9 + 4;
              auVar11 = local_7c;
            } while (iVar9 < local_4c);
          }
        }
        else if (*(int *)(iVar9 + 0x108) == 2) {
          if (in_stack_0000002c == 2) {
            auVar11 = (byte  [8])
                      sound_sndmain_cpp_mixResampleStereoToStereo_FUN_00523750
                                (*(uint *)(iVar9 + 0x120),&stack0x00000008,local_74._4_4_,
                                 uVar13,uVar14,dVar3,local_b0);
            local_74 = dVar10;
          }
          else if (0 < local_b0) {
            local_2c = 0;
            local_40 = iVar5;
            do {
              uVar14 = (uint)((ulonglong)dVar12 >> 0x20);
              iVar9 = param_1->playback_state;
              uVar13 = 0x5252fd;
              dVar10 = round(dVar12);
              local_20 = (int)ROUND(dVar10);
              afStack_90[0] = (float)*(short *)(*(int *)(iVar9 + 0x120) + local_20 * 4);
              afStack_90[1] =
                   (float)*(short *)(*(int *)(param_1->playback_state + 0x120) + 2 + local_20 * 4);
              uVar4 = 0;
              pCVar8 = param_1;
              if (0 < in_stack_0000002c) {
                do {
                  uVar7 = uVar4 & 1;
                  iVar9 = uVar4 * 4;
                  uVar4 = uVar4 + 1;
                  *(float *)(*(int *)(&stack0x00000008 + iVar9) + local_30) =
                       afStack_90[uVar7] * pCVar8->distance_to_speakers[7] +
                       *(float *)(*(int *)(&stack0x00000008 + iVar9) + local_30);
                  pCVar8 = (CSfxSlot *)&(pCVar8->options).position;
                } while ((int)uVar4 < in_stack_0000002c);
              }
              dVar12 = __BITCAST_DOUBLE(CONCAT44(uVar14,uVar13)) + __BITCAST_DOUBLE(CONCAT44(local_b8,uStack_bc));
              local_30 = local_30 + 4;
              auVar11 = local_7c;
            } while (local_30 < local_44);
          }
        }
        else if (in_stack_0000002c == 2) {
          auVar11 = (byte  [8])
                    sound_sndmain_cpp_mixResampleMonoToStereo_FUN_00523610
                              (*(uint *)(iVar9 + 0x120),&stack0x00000008,local_74._4_4_,uVar13
                               ,uVar14,dVar3,local_b0);
          local_74 = dVar10;
        }
        else if (0 < local_b0) {
          iVar9 = 0;
          local_3c = iVar5;
          do {
            uVar14 = (uint)((ulonglong)dVar12 >> 0x20);
            iVar5 = param_1->playback_state;
            uVar13 = 0x5253f9;
            dVar10 = round(dVar12);
            local_20 = (int)ROUND(dVar10);
            local_24 = (float)*(short *)(*(int *)(iVar5 + 0x120) + (int)ROUND(dVar10) * 2);
            iVar5 = 0;
            pCVar8 = param_1;
            if (0 < in_stack_0000002c) {
              do {
                iVar2 = iVar5 * 4;
                iVar5 = iVar5 + 1;
                *(float *)(*(int *)(&stack0x00000008 + iVar2) + iVar9) =
                     local_24 * pCVar8->distance_to_speakers[7] +
                     *(float *)(*(int *)(&stack0x00000008 + iVar2) + iVar9);
                pCVar8 = (CSfxSlot *)&(pCVar8->options).position;
              } while (iVar5 < in_stack_0000002c);
            }
            dVar12 = __BITCAST_DOUBLE(CONCAT44(uVar14,uVar13)) + __BITCAST_DOUBLE(CONCAT44(local_b8,uStack_bc));
            iVar9 = iVar9 + 4;
            auVar11 = local_7c;
          } while (iVar9 < local_40);
        }
      }
      else {
        local_1c = local_b0;
      }
      if (local_5c != 0) {
        local_c0 = 0;
        uStack_bc = 0;
      }
      dVar10 = __BITCAST_DOUBLE(CONCAT44(uStack_bc,local_c0));
      if (dVar3 <= dVar10) {
        dVar10 = __BITCAST_DOUBLE(CONCAT44(uStack_bc,local_c0)) - dVar3;
      }
      local_7c = auVar11;
      sound_sndmain_cpp_CSfxSlot_updatePlaybackPos_FUN_00525870(param_1,dVar10);
      if (local_50 != 0) {
        if (*(int *)(param_1->playback_state + 0x124) == 0) {
          *(uint *)((int)&(param_1->options).trigger_time + 4) = 0xbff00000;
          *(uint *)&(param_1->options).trigger_time = 0;
        }
        else {
          *(uint *)&(param_1->options).trigger_time = 0;
          *(uint *)((int)&(param_1->options).trigger_time + 4) = 0;
        }
      }
      in_stack_00000028 = in_stack_00000028 - iVar6;
      iVar9 = 0;
      if (0 < in_stack_0000002c) {
        iVar5 = 0;
        do {
          *(int *)(&stack0x00000008 + iVar5) = *(int *)(&stack0x00000008 + iVar5) + iVar6 * 4;
          iVar9 = iVar9 + 1;
          iVar5 = iVar5 + 4;
        } while (iVar9 < in_stack_0000002c);
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
          iVar6 = 0;
          local_30 = (local_58 + *(int *)((int)param_1->channel_volumes + local_4c + 0x1c)) -
                     *(int *)((int)param_1->channel_target_buffer_offsets + local_4c + 0x1c);
          local_2c = local_30 * 4;
          iVar9 = 0;
          if (0 < local_2c) {
            do {
              local_14 = (iVar6 / local_30) * 4;
              pfVar1 = (float *)(*(int *)((int)aiStack_a4 + local_4c) + iVar9);
              iVar9 = iVar9 + 4;
              *(float *)(*(int *)((int)aiStack_a4 + local_4c) + -4 + iVar9) =
                   *(float *)(*(int *)(local_4c + 0x2dc833c) + local_14) + *pfVar1;
              iVar6 = iVar6 + local_58;
            } while (iVar9 < local_2c);
          }
          *(uint *)((int)param_1->channel_target_buffer_offsets + local_4c + 0x1c) =
               *(uint *)((int)param_1->channel_volumes + local_4c + 0x1c);
        }
        local_54 = local_54 + 1;
        local_4c = local_4c + 4;
      } while (local_54 < in_stack_0000002c);
    }
  }
  return;
}
