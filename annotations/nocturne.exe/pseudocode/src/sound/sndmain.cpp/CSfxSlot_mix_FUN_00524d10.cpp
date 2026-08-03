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
  CSfxSample *pCVar3;
  double resample_delta;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  CSfxSlot *pCVar8;
  int iVar9;
  double dVar10;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  uint uVar11;
  uint uVar12;
  uint local_c0;
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
    g_CHAR_PTR_01cc4800 = "..\\sound\\sndmain.cpp";
    g_INT_01cc4804 = 0xa1a;
    core_main_c_FUN_004c8440("SfxSlot::mix - must be locked!");
  }
  if (param_1->playback_state != 0) {
    local_58 = in_stack_00000028;
    local_64 = 1;
    if (param_1->sample != (CSfxSample *)0x0) {
      local_14 = 1 << ((char)(param_1->sample->sample_info).bit_depth + 6U & 0x1f);
      local_6c = 1.0 / (float)local_14;
      iVar6 = 0;
      pCVar8 = param_1;
      if (0 < in_stack_0000002c) {
        do {
          if (local_6c < pCVar8->channel_volumes[0]) {
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
        if ((local_64 != 0) || (pCVar8->channel_current_buffer_offsets[0] < 0)) {
          pCVar8->channel_current_buffer_offsets[0] = pCVar8->channel_target_buffer_offsets[0];
        }
        iVar9 = iVar6 * 4;
        *(int *)(&stack0x00000008 + iVar9) =
             *(int *)(&stack0x00000008 + iVar9) + pCVar8->channel_current_buffer_offsets[0] * 4;
        uVar4 = pCVar8->channel_current_buffer_offsets[0] - pCVar8->channel_target_buffer_offsets[0]
        ;
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
    local_68 = param_1->channel_volumes;
    while (((iVar6 = in_stack_00000028, param_1->playback_state != 0 &&
            (pCVar3 = param_1->sample, pCVar3 != (CSfxSample *)0x0)) &&
           (0.0 <= (param_1->options).trigger_time))) {
      if (in_stack_00000028 < 1) goto LAB_00524e3c;
      dVar10 = (double)(((float)(pCVar3->sample_info).sample_rate / (float)in_stack_00000030) *
                       param_1->effective_frequency);
      local_b0 = SUB84(__BITCAST_UINT64(dVar10),0);
      iStack_ac = (int)((ulonglong)dVar10 >> 0x20);
      if (dVar10 <= 0.0) goto LAB_00524e3c;
      resample_delta = (double)pCVar3->streaming_buffer_size;
      local_b8 = SUB84(resample_delta,0);
      uStack_b4 = (uint)((ulonglong)resample_delta >> 0x20);
      local_50 = 0;
      if (0 < (pCVar3->sample_info).sample_count) {
        dVar10 = floor
                           (((double)(pCVar3->sample_info).sample_count -
                            (param_1->options).trigger_time) / dVar10);
        local_74 = SUB84(__BITCAST_UINT64(dVar10),0);
        pSStack_70 = (SStereoGains *)((ulonglong)dVar10 >> 0x20);
        dVar10 = round(dVar10);
        local_64 = (int)ROUND(dVar10);
        if (local_64 < iVar6) {
          local_54 = 1;
          iStack_ac = local_64;
        }
      }
      local_c0 = *(uint *)&param_1->prev_hardware_playback_pos;
      uStack_bc = *(uint *)((int)&param_1->prev_hardware_playback_pos + 4);
      dVar10 = (resample_delta - param_1->prev_hardware_playback_pos) /
               __BITCAST_DOUBLE(CONCAT44(iStack_ac,local_b0));
      local_5c = 0;
      uVar11 = SUB84(__BITCAST_UINT64(dVar10),0);
      dVar10 = floor(dVar10);
      local_74 = SUB84(__BITCAST_UINT64(dVar10),0);
      pSStack_70 = (SStereoGains *)((ulonglong)dVar10 >> 0x20);
      uVar12 = 0x524fc6;
      dVar10 = round(dVar10);
      local_4c = (int)ROUND(dVar10);
      if (local_4c < 1) {
        dVar10 = __BITCAST_DOUBLE(CONCAT44(local_c0,uVar12)) - __BITCAST_DOUBLE(CONCAT44(local_b8,uStack_bc));
        if (dVar10 < 0.0) {
          dVar10 = 0.0;
        }
        local_c0 = (uint)((ulonglong)dVar10 >> 0x20);
        uVar12 = SUB84(__BITCAST_UINT64(dVar10),0);
        dVar10 = floor
                           ((__BITCAST_DOUBLE(CONCAT44(local_b8,uStack_bc)) - dVar10) /
                            __BITCAST_DOUBLE(CONCAT44(local_b0,uStack_b4)));
        local_78 = SUB84(__BITCAST_UINT64(dVar10),0);
        local_74 = (uint)((ulonglong)dVar10 >> 0x20);
        uVar11 = 0x52501a;
        dVar10 = round(dVar10);
        local_50 = (int)ROUND(dVar10);
      }
      dVar10 = __BITCAST_DOUBLE(CONCAT44(uVar12,uVar11));
      if (local_50 < local_b0) {
        local_b0 = local_50;
        local_58 = 0;
      }
      else if (local_50 == local_b0) {
        local_64 = 1;
      }
      if (local_6c == 0.0) {
        pCVar3 = param_1->sample;
        iVar9 = local_b0 << 2;
        if ((pCVar3->sample_info).bit_depth == 8) {
          if ((pCVar3->sample_info).num_channels == 2) {
            if (0 < local_b0) {
              local_28 = 0.0;
              local_44 = iVar9;
              do {
                uVar12 = (uint)((ulonglong)dVar10 >> 0x20);
                pCVar3 = param_1->sample;
                uVar11 = 0x525154;
                dVar10 = round(dVar10);
                afStack_90[2] =
                     (float)(int)(*(byte *)(pCVar3->sample_data + (int)ROUND(dVar10)) - 0x80);
                local_20 = *(byte *)((int)param_1->sample->sample_data + (int)ROUND(dVar10) * 2 + 1)
                           - 0x80;
                afStack_90[3] = (float)local_20;
                uVar4 = 0;
                pCVar8 = param_1;
                if (0 < in_stack_0000002c) {
                  do {
                    uVar7 = uVar4 & 1;
                    iVar9 = uVar4 * 4;
                    uVar4 = uVar4 + 1;
                    *(float *)(*(int *)(&stack0x00000008 + iVar9) + local_2c) =
                         afStack_90[uVar7 + 2] * pCVar8->channel_volumes[0] +
                         *(float *)(*(int *)(&stack0x00000008 + iVar9) + local_2c);
                    pCVar8 = (CSfxSlot *)&(pCVar8->options).position;
                  } while ((int)uVar4 < in_stack_0000002c);
                }
                dVar10 = __BITCAST_DOUBLE(CONCAT44(uVar12,uVar11)) + __BITCAST_DOUBLE(CONCAT44(local_b8,uStack_bc));
                local_2c = local_2c + 4;
              } while (local_2c < local_48);
            }
          }
          else if (0 < local_b0) {
            iVar5 = 0;
            local_48 = iVar9;
            do {
              uVar12 = (uint)((ulonglong)dVar10 >> 0x20);
              uVar11 = 0x525233;
              dVar10 = round(dVar10);
              local_20 = *(byte *)((int)param_1->sample->sample_data + (int)ROUND(dVar10)) - 0x80;
              local_28 = (float)local_20;
              iVar9 = 0;
              pCVar8 = param_1;
              if (0 < in_stack_0000002c) {
                do {
                  iVar2 = iVar9 * 4;
                  iVar9 = iVar9 + 1;
                  *(float *)(*(int *)(&stack0x00000008 + iVar2) + iVar5) =
                       local_28 * pCVar8->channel_volumes[0] +
                       *(float *)(*(int *)(&stack0x00000008 + iVar2) + iVar5);
                  pCVar8 = (CSfxSlot *)&(pCVar8->options).position;
                } while (iVar9 < in_stack_0000002c);
              }
              dVar10 = __BITCAST_DOUBLE(CONCAT44(uVar12,uVar11)) + __BITCAST_DOUBLE(CONCAT44(local_b8,uStack_bc));
              iVar5 = iVar5 + 4;
            } while (iVar5 < local_4c);
          }
        }
        else if ((pCVar3->sample_info).num_channels == 2) {
          if (in_stack_0000002c == 2) {
            dVar10 = sound_sndmain_cpp_mixResampleStereoToStereo_FUN_00523750
                               (pCVar3->sample_data,(SStereoBuffers *)&stack0x00000008,pSStack_70,
                                __BITCAST_DOUBLE(CONCAT44(uVar12,uVar11)),resample_delta,local_b0);
            local_7c = SUB84(__BITCAST_UINT64(dVar10),0);
            local_78 = (uint)((ulonglong)dVar10 >> 0x20);
          }
          else if (0 < local_b0) {
            local_2c = 0;
            local_40 = iVar9;
            do {
              uVar12 = (uint)((ulonglong)dVar10 >> 0x20);
              pCVar3 = param_1->sample;
              uVar11 = 0x5252fd;
              dVar10 = round(dVar10);
              local_20 = (int)ROUND(dVar10);
              afStack_90[0] = (float)pCVar3->sample_data[local_20 * 2];
              afStack_90[1] = (float)param_1->sample->sample_data[local_20 * 2 + 1];
              uVar4 = 0;
              pCVar8 = param_1;
              if (0 < in_stack_0000002c) {
                do {
                  uVar7 = uVar4 & 1;
                  iVar9 = uVar4 * 4;
                  uVar4 = uVar4 + 1;
                  *(float *)(*(int *)(&stack0x00000008 + iVar9) + local_30) =
                       afStack_90[uVar7] * pCVar8->channel_volumes[0] +
                       *(float *)(*(int *)(&stack0x00000008 + iVar9) + local_30);
                  pCVar8 = (CSfxSlot *)&(pCVar8->options).position;
                } while ((int)uVar4 < in_stack_0000002c);
              }
              dVar10 = __BITCAST_DOUBLE(CONCAT44(uVar12,uVar11)) + __BITCAST_DOUBLE(CONCAT44(local_b8,uStack_bc));
              local_30 = local_30 + 4;
            } while (local_30 < local_44);
          }
        }
        else if (in_stack_0000002c == 2) {
          dVar10 = sound_sndmain_cpp_mixResampleMonoToStereo_FUN_00523610
                             (pCVar3->sample_data,(SStereoBuffers *)&stack0x00000008,pSStack_70,
                              __BITCAST_DOUBLE(CONCAT44(uVar12,uVar11)),resample_delta,local_b0);
          local_7c = SUB84(__BITCAST_UINT64(dVar10),0);
          local_78 = (uint)((ulonglong)dVar10 >> 0x20);
        }
        else if (0 < local_b0) {
          iVar5 = 0;
          local_3c = iVar9;
          do {
            uVar12 = (uint)((ulonglong)dVar10 >> 0x20);
            pCVar3 = param_1->sample;
            uVar11 = 0x5253f9;
            dVar10 = round(dVar10);
            local_20 = (int)ROUND(dVar10);
            local_24 = (float)pCVar3->sample_data[(int)ROUND(dVar10)];
            iVar9 = 0;
            pCVar8 = param_1;
            if (0 < in_stack_0000002c) {
              do {
                iVar2 = iVar9 * 4;
                iVar9 = iVar9 + 1;
                *(float *)(*(int *)(&stack0x00000008 + iVar2) + iVar5) =
                     local_24 * pCVar8->channel_volumes[0] +
                     *(float *)(*(int *)(&stack0x00000008 + iVar2) + iVar5);
                pCVar8 = (CSfxSlot *)&(pCVar8->options).position;
              } while (iVar9 < in_stack_0000002c);
            }
            dVar10 = __BITCAST_DOUBLE(CONCAT44(uVar12,uVar11)) + __BITCAST_DOUBLE(CONCAT44(local_b8,uStack_bc));
            iVar5 = iVar5 + 4;
          } while (iVar5 < local_40);
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
      if (resample_delta <= dVar10) {
        dVar10 = __BITCAST_DOUBLE(CONCAT44(uStack_bc,local_c0)) - resample_delta;
      }
      sound_sndmain_cpp_CSfxSlot_updatePlaybackPos_FUN_00525870(param_1,dVar10);
      if (local_50 != 0) {
        if (param_1->sample->loop_marker_count == 0) {
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
          local_30 = (local_58 + *(int *)((int)param_1->channel_target_buffer_offsets + local_4c)) -
                     *(int *)((int)param_1->channel_current_buffer_offsets + local_4c);
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
          *(uint *)((int)param_1->channel_current_buffer_offsets + local_4c) =
               *(uint *)((int)param_1->channel_target_buffer_offsets + local_4c);
        }
        local_54 = local_54 + 1;
        local_4c = local_4c + 4;
      } while (local_54 < in_stack_0000002c);
    }
  }
  return;
}
