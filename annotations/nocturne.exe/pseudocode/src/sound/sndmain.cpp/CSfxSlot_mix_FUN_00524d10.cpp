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
  double resample_delta;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  CSfxSlot *pCVar7;
  int iVar8;
  double dVar9;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  uint uVar10;
  uint uVar11;
  int local_c0;
  uint uStack_bc;
  uint local_b8;
  uint uStack_b4;
  int local_b0;
  int iStack_ac;
  int aiStack_a4 [5];
  float afStack_90 [5];
  uint local_7c;
  uint local_78;
  uint local_74;
  SStereoGains *pSStack_70;
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
      iVar5 = 0;
      pCVar7 = param_1;
      if (0 < in_stack_0000002c) {
        do {
          if (local_6c < pCVar7->distance_to_speakers[7]) {
            local_64 = 0;
            break;
          }
          iVar5 = iVar5 + 1;
          pCVar7 = (CSfxSlot *)&(pCVar7->options).position;
        } while (iVar5 < in_stack_0000002c);
      }
    }
    iVar5 = 0;
    pCVar7 = param_1;
    if (0 < in_stack_0000002c) {
      do {
        if ((local_64 != 0) || (pCVar7->channel_target_buffer_offsets[7] < 0)) {
          pCVar7->channel_target_buffer_offsets[7] = (int)pCVar7->channel_volumes[7];
        }
        iVar8 = iVar5 * 4;
        *(int *)(&stack0x00000008 + iVar8) =
             *(int *)(&stack0x00000008 + iVar8) + pCVar7->channel_target_buffer_offsets[7] * 4;
        uVar3 = pCVar7->channel_target_buffer_offsets[7] - (int)pCVar7->channel_volumes[7];
        uVar6 = (int)uVar3 >> 0x1f;
        if ((int)((uVar3 ^ uVar6) - uVar6) < 2) {
          aiStack_a4[iVar5] = 0;
        }
        else {
          aiStack_a4[iVar5] = *(int *)(&stack0x00000008 + iVar8);
          *(uint *)(&stack0x00000008 + iVar8) = *(uint *)(iVar8 + 0x2dc833c);
          memset
                    (*(void **)(&stack0x00000008 + iVar8),0,in_stack_00000028 << 2);
        }
        iVar5 = iVar5 + 1;
        pCVar7 = (CSfxSlot *)&(pCVar7->options).position;
      } while (iVar5 < in_stack_0000002c);
    }
    local_68 = param_1->distance_to_speakers + 7;
    while (((iVar5 = in_stack_00000028, param_1->hardware_buffer_handle != 0 &&
            (iVar8 = param_1->playback_state, iVar8 != 0)) &&
           (0.0 <= (param_1->options).trigger_time))) {
      if (in_stack_00000028 < 1) goto LAB_00524e3c;
      dVar9 = (double)(((float)*(int *)(iVar8 + 0x10c) / (float)in_stack_00000030) *
                      (float)param_1->sample);
      local_b0 = SUB84(__BITCAST_UINT64(dVar9),0);
      iStack_ac = (int)((ulonglong)dVar9 >> 0x20);
      if (dVar9 <= 0.0) goto LAB_00524e3c;
      resample_delta = (double)*(int *)(iVar8 + 0x138);
      local_b8 = SUB84(resample_delta,0);
      uStack_b4 = (uint)((ulonglong)resample_delta >> 0x20);
      local_50 = 0;
      if (0 < *(int *)(iVar8 + 0x110)) {
        dVar9 = floor
                          (((double)*(int *)(iVar8 + 0x110) - (param_1->options).trigger_time) /
                           dVar9);
        local_74 = SUB84(__BITCAST_UINT64(dVar9),0);
        pSStack_70 = (SStereoGains *)((ulonglong)dVar9 >> 0x20);
        dVar9 = round(dVar9);
        local_64 = (int)ROUND(dVar9);
        if (local_64 < iVar5) {
          local_54 = 1;
          iStack_ac = local_64;
        }
      }
      local_c0 = param_1->is_active;
      uStack_bc = *(uint *)&param_1->prev_hardware_playback_pos;
      dVar9 = (resample_delta - *(double *)&param_1->is_active) /
              __BITCAST_DOUBLE(CONCAT44(iStack_ac,local_b0));
      local_5c = 0;
      uVar10 = SUB84(__BITCAST_UINT64(dVar9),0);
      dVar9 = floor(dVar9);
      local_74 = SUB84(__BITCAST_UINT64(dVar9),0);
      pSStack_70 = (SStereoGains *)((ulonglong)dVar9 >> 0x20);
      uVar11 = 0x524fc6;
      dVar9 = round(dVar9);
      local_4c = (int)ROUND(dVar9);
      if (local_4c < 1) {
        dVar9 = __BITCAST_DOUBLE(CONCAT44(local_c0,uVar11)) - __BITCAST_DOUBLE(CONCAT44(local_b8,uStack_bc));
        if (dVar9 < 0.0) {
          dVar9 = 0.0;
        }
        local_c0 = (int)((ulonglong)dVar9 >> 0x20);
        uVar11 = SUB84(__BITCAST_UINT64(dVar9),0);
        dVar9 = floor
                          ((__BITCAST_DOUBLE(CONCAT44(local_b8,uStack_bc)) - dVar9) /
                           __BITCAST_DOUBLE(CONCAT44(local_b0,uStack_b4)));
        local_78 = SUB84(__BITCAST_UINT64(dVar9),0);
        local_74 = (uint)((ulonglong)dVar9 >> 0x20);
        uVar10 = 0x52501a;
        dVar9 = round(dVar9);
        local_50 = (int)ROUND(dVar9);
      }
      dVar9 = __BITCAST_DOUBLE(CONCAT44(uVar11,uVar10));
      if (local_50 < local_b0) {
        local_b0 = local_50;
        local_58 = 0;
      }
      else if (local_50 == local_b0) {
        local_64 = 1;
      }
      if (local_6c == 0.0) {
        iVar8 = param_1->playback_state;
        iVar4 = local_b0 << 2;
        if (*(int *)(iVar8 + 0x104) == 8) {
          if (*(int *)(iVar8 + 0x108) == 2) {
            if (0 < local_b0) {
              local_28 = 0.0;
              local_44 = iVar4;
              do {
                uVar11 = (uint)((ulonglong)dVar9 >> 0x20);
                iVar8 = param_1->playback_state;
                uVar10 = 0x525154;
                dVar9 = round(dVar9);
                afStack_90[2] =
                     (float)(int)(*(byte *)(*(int *)(iVar8 + 0x120) + (int)ROUND(dVar9) * 2) - 0x80)
                ;
                local_20 = *(byte *)(*(int *)(param_1->playback_state + 0x120) + 1 +
                                    (int)ROUND(dVar9) * 2) - 0x80;
                afStack_90[3] = (float)local_20;
                uVar3 = 0;
                pCVar7 = param_1;
                if (0 < in_stack_0000002c) {
                  do {
                    uVar6 = uVar3 & 1;
                    iVar8 = uVar3 * 4;
                    uVar3 = uVar3 + 1;
                    *(float *)(*(int *)(&stack0x00000008 + iVar8) + local_2c) =
                         afStack_90[uVar6 + 2] * pCVar7->distance_to_speakers[7] +
                         *(float *)(*(int *)(&stack0x00000008 + iVar8) + local_2c);
                    pCVar7 = (CSfxSlot *)&(pCVar7->options).position;
                  } while ((int)uVar3 < in_stack_0000002c);
                }
                dVar9 = __BITCAST_DOUBLE(CONCAT44(uVar11,uVar10)) + __BITCAST_DOUBLE(CONCAT44(local_b8,uStack_bc));
                local_2c = local_2c + 4;
              } while (local_2c < local_48);
            }
          }
          else if (0 < local_b0) {
            iVar8 = 0;
            local_48 = iVar4;
            do {
              uVar11 = (uint)((ulonglong)dVar9 >> 0x20);
              uVar10 = 0x525233;
              dVar9 = round(dVar9);
              local_20 = *(byte *)(*(int *)(param_1->playback_state + 0x120) + (int)ROUND(dVar9)) -
                         0x80;
              local_28 = (float)local_20;
              iVar4 = 0;
              pCVar7 = param_1;
              if (0 < in_stack_0000002c) {
                do {
                  iVar2 = iVar4 * 4;
                  iVar4 = iVar4 + 1;
                  *(float *)(*(int *)(&stack0x00000008 + iVar2) + iVar8) =
                       local_28 * pCVar7->distance_to_speakers[7] +
                       *(float *)(*(int *)(&stack0x00000008 + iVar2) + iVar8);
                  pCVar7 = (CSfxSlot *)&(pCVar7->options).position;
                } while (iVar4 < in_stack_0000002c);
              }
              dVar9 = __BITCAST_DOUBLE(CONCAT44(uVar11,uVar10)) + __BITCAST_DOUBLE(CONCAT44(local_b8,uStack_bc));
              iVar8 = iVar8 + 4;
            } while (iVar8 < local_4c);
          }
        }
        else if (*(int *)(iVar8 + 0x108) == 2) {
          if (in_stack_0000002c == 2) {
            dVar9 = sound_sndmain_cpp_mixResampleStereoToStereo_FUN_00523750
                              (*(short **)(iVar8 + 0x120),(SStereoBuffers *)&stack0x00000008,
                               pSStack_70,__BITCAST_DOUBLE(CONCAT44(uVar11,uVar10)),resample_delta,local_b0);
            local_7c = SUB84(__BITCAST_UINT64(dVar9),0);
            local_78 = (uint)((ulonglong)dVar9 >> 0x20);
          }
          else if (0 < local_b0) {
            local_2c = 0;
            local_40 = iVar4;
            do {
              uVar11 = (uint)((ulonglong)dVar9 >> 0x20);
              iVar8 = param_1->playback_state;
              uVar10 = 0x5252fd;
              dVar9 = round(dVar9);
              local_20 = (int)ROUND(dVar9);
              afStack_90[0] = (float)*(short *)(*(int *)(iVar8 + 0x120) + local_20 * 4);
              afStack_90[1] =
                   (float)*(short *)(*(int *)(param_1->playback_state + 0x120) + 2 + local_20 * 4);
              uVar3 = 0;
              pCVar7 = param_1;
              if (0 < in_stack_0000002c) {
                do {
                  uVar6 = uVar3 & 1;
                  iVar8 = uVar3 * 4;
                  uVar3 = uVar3 + 1;
                  *(float *)(*(int *)(&stack0x00000008 + iVar8) + local_30) =
                       afStack_90[uVar6] * pCVar7->distance_to_speakers[7] +
                       *(float *)(*(int *)(&stack0x00000008 + iVar8) + local_30);
                  pCVar7 = (CSfxSlot *)&(pCVar7->options).position;
                } while ((int)uVar3 < in_stack_0000002c);
              }
              dVar9 = __BITCAST_DOUBLE(CONCAT44(uVar11,uVar10)) + __BITCAST_DOUBLE(CONCAT44(local_b8,uStack_bc));
              local_30 = local_30 + 4;
            } while (local_30 < local_44);
          }
        }
        else if (in_stack_0000002c == 2) {
          dVar9 = sound_sndmain_cpp_mixResampleMonoToStereo_FUN_00523610
                            (*(short **)(iVar8 + 0x120),(SStereoBuffers *)&stack0x00000008,
                             pSStack_70,__BITCAST_DOUBLE(CONCAT44(uVar11,uVar10)),resample_delta,local_b0);
          local_7c = SUB84(__BITCAST_UINT64(dVar9),0);
          local_78 = (uint)((ulonglong)dVar9 >> 0x20);
        }
        else if (0 < local_b0) {
          iVar8 = 0;
          local_3c = iVar4;
          do {
            uVar11 = (uint)((ulonglong)dVar9 >> 0x20);
            iVar4 = param_1->playback_state;
            uVar10 = 0x5253f9;
            dVar9 = round(dVar9);
            local_20 = (int)ROUND(dVar9);
            local_24 = (float)*(short *)(*(int *)(iVar4 + 0x120) + (int)ROUND(dVar9) * 2);
            iVar4 = 0;
            pCVar7 = param_1;
            if (0 < in_stack_0000002c) {
              do {
                iVar2 = iVar4 * 4;
                iVar4 = iVar4 + 1;
                *(float *)(*(int *)(&stack0x00000008 + iVar2) + iVar8) =
                     local_24 * pCVar7->distance_to_speakers[7] +
                     *(float *)(*(int *)(&stack0x00000008 + iVar2) + iVar8);
                pCVar7 = (CSfxSlot *)&(pCVar7->options).position;
              } while (iVar4 < in_stack_0000002c);
            }
            dVar9 = __BITCAST_DOUBLE(CONCAT44(uVar11,uVar10)) + __BITCAST_DOUBLE(CONCAT44(local_b8,uStack_bc));
            iVar8 = iVar8 + 4;
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
      dVar9 = __BITCAST_DOUBLE(CONCAT44(uStack_bc,local_c0));
      if (resample_delta <= dVar9) {
        dVar9 = __BITCAST_DOUBLE(CONCAT44(uStack_bc,local_c0)) - resample_delta;
      }
      sound_sndmain_cpp_CSfxSlot_updatePlaybackPos_FUN_00525870(param_1,dVar9);
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
      in_stack_00000028 = in_stack_00000028 - iVar5;
      iVar8 = 0;
      if (0 < in_stack_0000002c) {
        iVar4 = 0;
        do {
          *(int *)(&stack0x00000008 + iVar4) = *(int *)(&stack0x00000008 + iVar4) + iVar5 * 4;
          iVar8 = iVar8 + 1;
          iVar4 = iVar4 + 4;
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
          iVar5 = 0;
          local_30 = (local_58 + *(int *)((int)param_1->channel_volumes + local_4c + 0x1c)) -
                     *(int *)((int)param_1->channel_target_buffer_offsets + local_4c + 0x1c);
          local_2c = local_30 * 4;
          iVar8 = 0;
          if (0 < local_2c) {
            do {
              local_14 = (iVar5 / local_30) * 4;
              pfVar1 = (float *)(*(int *)((int)aiStack_a4 + local_4c) + iVar8);
              iVar8 = iVar8 + 4;
              *(float *)(*(int *)((int)aiStack_a4 + local_4c) + -4 + iVar8) =
                   *(float *)(*(int *)(local_4c + 0x2dc833c) + local_14) + *pfVar1;
              iVar5 = iVar5 + local_58;
            } while (iVar8 < local_2c);
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
