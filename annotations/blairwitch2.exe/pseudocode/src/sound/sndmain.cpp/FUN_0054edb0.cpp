// Name: sound_sndmain.cpp_FUN_0054edb0
// Address: 0054edb0
// Address Range: [[0054edb0, 0054f6f0]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_0054edb0(CSfxSlot *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_FUN_0054edb0(CSfxSlot *param_1)

{
  float *pfVar1;
  double resample_delta;
  CSfxSample *pCVar2;
  float fVar3;
  double dVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  CSfxSlot *pCVar8;
  uint uVar9;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar10;
  float10 fVar11;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  double local_d0;
  int local_c8;
  int aiStack_c4 [7];
  float fStack_a8;
  SStereoGains local_a4 [4];
  float local_84 [4];
  double local_74;
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
  float local_20;
  float local_1c;
  int local_18;
  
  if (_DAT_0264901c < 1) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0xb9d;
    core_main_c_FUN_004e4500("SfxSlot::mix - must be locked!");
  }
  if (param_1->playback_state != 0) {
    local_64 = in_stack_00000028;
    local_68 = 1;
    if ((param_1->sample != (CSfxSample *)0x0) &&
       (iVar7 = 0, pCVar8 = param_1, 0 < in_stack_0000002c)) {
      do {
        if (0x3c000000 < (int)pCVar8->channel_volumes[0]) {
          local_68 = 0;
          break;
        }
        iVar7 = iVar7 + 1;
        pCVar8 = (CSfxSlot *)&(pCVar8->options).position;
      } while (iVar7 < in_stack_0000002c);
    }
    iVar7 = 0;
    pCVar8 = param_1;
    if (0 < in_stack_0000002c) {
      do {
        if ((local_68 != 0) || (pCVar8->channel_current_buffer_offsets[0] < 0)) {
          pCVar8->channel_current_buffer_offsets[0] = pCVar8->channel_target_buffer_offsets[0];
        }
        iVar10 = iVar7 * 4;
        *(int *)(&stack0x00000008 + iVar10) =
             *(int *)(&stack0x00000008 + iVar10) + pCVar8->channel_current_buffer_offsets[0] * 4;
        uVar5 = pCVar8->channel_current_buffer_offsets[0] - pCVar8->channel_target_buffer_offsets[0]
        ;
        uVar9 = (int)uVar5 >> 0x1f;
        if ((int)((uVar5 ^ uVar9) - uVar9) < 2) {
          aiStack_c4[iVar7] = 0;
        }
        else {
          aiStack_c4[iVar7] = *(int *)(&stack0x00000008 + iVar10);
          *(uint *)(&stack0x00000008 + iVar10) = *(uint *)(iVar10 + 0x2648ea4);
          memset
                    (*(void **)(&stack0x00000008 + iVar10),0,in_stack_00000028 << 2);
        }
        iVar7 = iVar7 + 1;
        pCVar8 = (CSfxSlot *)&(pCVar8->options).position;
      } while (iVar7 < in_stack_0000002c);
    }
    local_18 = 1 << ((char)(param_1->sample->sample_info).bit_depth - 1U & 0x1f);
    fVar3 = 1.0 / (float)local_18;
    iVar7 = 0;
    local_6c = fVar3;
    pCVar8 = param_1;
    if (0 < in_stack_0000002c) {
      do {
        iVar7 = iVar7 + 1;
        (&fStack_a8)[iVar7] = pCVar8->channel_volumes[0] * fVar3;
        pCVar8 = (CSfxSlot *)&(pCVar8->options).position;
      } while (iVar7 < in_stack_0000002c);
    }
    while (((iVar7 = in_stack_00000028, param_1->playback_state != 0 &&
            (pCVar2 = param_1->sample, pCVar2 != (CSfxSample *)0x0)) &&
           (0.0 <= (param_1->options).playback_position))) {
      if ((in_stack_00000028 < 1) ||
         (resample_delta =
               (double)(((float)(pCVar2->sample_info).sample_rate / (float)in_stack_00000030) *
                       param_1->effective_frequency), resample_delta <= 0.0)) goto LAB_0054eefd;
      dVar4 = (double)pCVar2->streaming_buffer_size;
      local_5c = 0;
      local_c8 = in_stack_00000028;
      if (0 < (pCVar2->sample_info).sample_count) {
        local_74 = floor
                             (((double)pCVar2->loop_endpoints[param_1->loop_marker_index] -
                              (param_1->options).playback_position) / resample_delta);
        fVar11 = (float10)local_74;
        round();
        local_54 = (int)ROUND(fVar11);
        if (local_54 < 0) {
          local_54 = 0;
        }
        if (local_54 < iVar7) {
          local_c8 = local_54;
          local_5c = 1;
        }
      }
      if (local_c8 < 0) {
        local_c8 = 0;
      }
      local_d0 = param_1->prev_hardware_playback_pos;
      local_58 = 0;
      local_74 = floor((dVar4 - local_d0) / resample_delta);
      fVar11 = (float10)local_74;
      round();
      local_4c = (int)ROUND(fVar11);
      if (local_4c < 1) {
        local_d0 = local_d0 - dVar4;
        if (local_d0 < 0.0) {
          local_d0 = 0.0;
        }
        local_74 = floor((dVar4 - local_d0) / resample_delta);
        fVar11 = (float10)local_74;
        round();
        local_4c = (int)ROUND(fVar11);
      }
      if (local_4c < local_c8) {
        local_c8 = local_4c;
        local_5c = 0;
        local_58 = 1;
      }
      else if (local_4c == local_c8) {
        local_58 = 1;
      }
      if (local_c8 < 0) {
        local_c8 = 0;
      }
      if (local_68 == 0) {
        pCVar2 = param_1->sample;
        iVar7 = local_c8 << 2;
        if ((pCVar2->sample_info).bit_depth == 8) {
          if ((pCVar2->sample_info).num_channels == 2) {
            if (0 < local_c8) {
              local_28 = 0;
              local_40 = iVar7;
              do {
                fVar11 = (float10)local_d0;
                round();
                local_84[0] = (float)(int)(*(byte *)(*(int *)(extraout_EDX + 0x120) +
                                                    (int)ROUND(fVar11) * 2) - 0x80);
                local_18 = *(byte *)((int)param_1->sample->sample_data + (int)ROUND(fVar11) * 2 + 1)
                           - 0x80;
                local_84[1] = (float)local_18;
                uVar5 = 0;
                if (0 < in_stack_0000002c) {
                  iVar7 = 0;
                  do {
                    uVar9 = uVar5 & 1;
                    uVar5 = uVar5 + 1;
                    *(float *)(*(int *)(&stack0x00000008 + iVar7) + local_28) =
                         local_84[uVar9] * *(float *)((int)&local_a4[0].left_gain + iVar7) +
                         *(float *)(*(int *)(&stack0x00000008 + iVar7) + local_28);
                    iVar7 = iVar7 + 4;
                  } while ((int)uVar5 < in_stack_0000002c);
                }
                local_d0 = local_d0 + resample_delta;
                local_28 = local_28 + 4;
              } while (local_28 < local_40);
            }
          }
          else if (0 < local_c8) {
            iVar10 = 0;
            local_3c = iVar7;
            do {
              fVar11 = (float10)local_d0;
              round();
              local_18 = *(byte *)((int)param_1->sample->sample_data + (int)ROUND(fVar11)) - 0x80;
              iVar7 = 0;
              local_20 = (float)local_18;
              if (0 < in_stack_0000002c) {
                iVar6 = 0;
                do {
                  iVar7 = iVar7 + 1;
                  *(float *)(*(int *)(&stack0x00000008 + iVar6) + iVar10) =
                       local_20 * *(float *)((int)&local_a4[0].left_gain + iVar6) +
                       *(float *)(*(int *)(&stack0x00000008 + iVar6) + iVar10);
                  iVar6 = iVar6 + 4;
                } while (iVar7 < in_stack_0000002c);
              }
              local_d0 = local_d0 + resample_delta;
              iVar10 = iVar10 + 4;
            } while (iVar10 < local_3c);
          }
        }
        else if ((pCVar2->sample_info).num_channels == 2) {
          if (in_stack_0000002c == 2) {
            local_d0 = sound_sndmain_cpp_mixResampleStereoToStereo_FUN_0054d660
                                 (pCVar2->sample_data,(SStereoBuffers *)&stack0x00000008,local_a4,
                                  local_d0,resample_delta,local_c8);
            local_74 = local_d0;
          }
          else if (0 < local_c8) {
            local_24 = 0;
            local_38 = iVar7;
            do {
              fVar11 = (float10)local_d0;
              round();
              local_18 = (int)ROUND(fVar11);
              local_84[2] = (float)*(short *)(*(int *)(extraout_EDX_00 + 0x120) + local_18 * 4);
              local_84[3] = (float)param_1->sample->sample_data[local_18 * 2 + 1];
              uVar5 = 0;
              if (0 < in_stack_0000002c) {
                iVar7 = 0;
                do {
                  uVar9 = uVar5 & 1;
                  uVar5 = uVar5 + 1;
                  *(float *)(*(int *)(&stack0x00000008 + iVar7) + local_24) =
                       local_84[uVar9 + 2] * *(float *)((int)&local_a4[0].left_gain + iVar7) +
                       *(float *)(*(int *)(&stack0x00000008 + iVar7) + local_24);
                  iVar7 = iVar7 + 4;
                } while ((int)uVar5 < in_stack_0000002c);
              }
              local_d0 = local_d0 + resample_delta;
              local_24 = local_24 + 4;
            } while (local_24 < local_38);
          }
        }
        else if (in_stack_0000002c == 2) {
          local_d0 = sound_sndmain_cpp_mixResampleMonoToStereo_FUN_0054d520
                               (pCVar2->sample_data,(SStereoBuffers *)&stack0x00000008,local_a4,
                                local_d0,resample_delta,local_c8);
          local_74 = local_d0;
        }
        else if (0 < local_c8) {
          iVar10 = 0;
          local_44 = iVar7;
          do {
            fVar11 = (float10)local_d0;
            round();
            local_18 = (int)ROUND(fVar11);
            local_1c = (float)param_1->sample->sample_data[(int)ROUND(fVar11)];
            iVar7 = 0;
            if (0 < in_stack_0000002c) {
              iVar6 = 0;
              do {
                iVar7 = iVar7 + 1;
                *(float *)(*(int *)(&stack0x00000008 + iVar6) + iVar10) =
                     local_1c * *(float *)((int)&local_a4[0].left_gain + iVar6) +
                     *(float *)(*(int *)(&stack0x00000008 + iVar6) + iVar10);
                iVar6 = iVar6 + 4;
              } while (iVar7 < in_stack_0000002c);
            }
            local_d0 = local_d0 + resample_delta;
            iVar10 = iVar10 + 4;
          } while (iVar10 < local_44);
        }
      }
      else {
        local_18 = local_c8;
        local_d0 = (double)local_c8 * resample_delta + local_d0;
      }
      if (local_58 != 0) {
        local_d0 = 0.0;
      }
      if (dVar4 <= local_d0) {
        local_d0 = local_d0 - dVar4;
      }
      sound_sndmain_cpp_CSfxSlot_updatePlaybackPos_FUN_0054f9c0(param_1,local_d0);
      if (local_5c != 0) {
        iVar10 = param_1->loop_marker_index + 1;
        iVar7 = param_1->sample->loop_destinations[param_1->loop_marker_index];
        param_1->loop_marker_index = iVar10;
        pCVar2 = param_1->sample;
        (param_1->options).playback_position = (double)iVar7;
        if (pCVar2->loop_marker_count <= iVar10) {
          param_1->loop_marker_index = 0;
        }
      }
      iVar7 = 0;
      in_stack_00000028 = in_stack_00000028 - local_c8;
      if (0 < in_stack_0000002c) {
        iVar10 = 0;
        do {
          *(int *)(&stack0x00000008 + iVar10) = *(int *)(&stack0x00000008 + iVar10) + local_c8 * 4;
          iVar7 = iVar7 + 1;
          iVar10 = iVar10 + 4;
        } while (iVar7 < in_stack_0000002c);
      }
    }
    sound_sndmain_cpp_CSfxSlot_kill_FUN_0054f700(param_1);
LAB_0054eefd:
    local_60 = 0;
    if (0 < in_stack_0000002c) {
      local_50 = 0;
      do {
        if (*(int *)((int)aiStack_c4 + local_50) != 0) {
          local_2c = local_50;
          local_48 = local_64;
          iVar7 = 0;
          local_34 = (local_64 + *(int *)((int)param_1->channel_target_buffer_offsets + local_50)) -
                     *(int *)((int)param_1->channel_current_buffer_offsets + local_50);
          local_30 = local_34 * 4;
          iVar10 = 0;
          if (0 < local_30) {
            do {
              local_18 = (iVar7 / local_34) * 4;
              pfVar1 = (float *)(*(int *)((int)aiStack_c4 + local_50) + iVar10);
              iVar10 = iVar10 + 4;
              *(float *)(*(int *)((int)aiStack_c4 + local_50) + -4 + iVar10) =
                   *(float *)(*(int *)(local_50 + 0x2648ea4) + local_18) + *pfVar1;
              iVar7 = iVar7 + local_64;
            } while (iVar10 < local_30);
          }
          *(uint *)((int)param_1->channel_current_buffer_offsets + local_50) =
               *(uint *)((int)param_1->channel_target_buffer_offsets + local_50);
        }
        local_60 = local_60 + 1;
        local_50 = local_50 + 4;
      } while (local_60 < in_stack_0000002c);
    }
  }
  return;
}
