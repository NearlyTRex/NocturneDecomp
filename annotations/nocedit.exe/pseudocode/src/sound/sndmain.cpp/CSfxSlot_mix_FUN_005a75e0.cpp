// Name: sound_sndmain.cpp_CSfxSlot_mix_FUN_005a75e0
// Address: 005a75e0
// Address Range: [[005a75e0, 005a7e52]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_CSfxSlot_mix_FUN_005a75e0(CSfxSlot * this_ptr, SMixBuffer mix_buffer)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSlot_mix_FUN_005a75e0(CSfxSlot *this_ptr,SMixBuffer mix_buffer)

{
  float *pfVar1;
  int *piVar2;
  float **ppfVar3;
  CSfxSample *pCVar4;
  ulonglong uVar5;
  uint uVar6;
  int extraout_EAX;
  CSfxSlot *pCVar7;
  int iVar8;
  uint uVar9;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  uint in_stack_ffffff30;
  short *sample_data;
  uint uVar14;
  SStereoBuffers *channel_buffers;
  uint uVar15;
  SStereoGains *channel_gains;
  double local_c0;
  double local_b8;
  ulonglong local_b0;
  int aiStack_a4 [4];
  uint uStack_94;
  float afStack_90 [2];
  ulonglong uStack_88;
  int local_74;
  float local_6c;
  float *local_68;
  int local_64;
  uint local_60;
  int local_5c;
  uint local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_38;
  int local_34;
  float local_30;
  float local_2c;
  int local_28;
  int local_24;
  int local_14;
  
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0xa27;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::mix - must be locked!");
  }
  if (this_ptr->playback_state != 0) {
    local_5c = mix_buffer.num_output_samples;
    local_64 = 1;
    if (this_ptr->sample != (CSfxSample *)0x0) {
      local_14 = 1 << ((char)(this_ptr->sample->sample_info).bit_depth + 6U & 0x1f);
      local_6c = 1.0 / (float)local_14;
      iVar8 = 0;
      pCVar7 = this_ptr;
      if (0 < mix_buffer.num_channels) {
        do {
          if (local_6c < pCVar7->channel_volumes[0]) {
            local_64 = 0;
            break;
          }
          iVar8 = iVar8 + 1;
          pCVar7 = (CSfxSlot *)&(pCVar7->options).position;
        } while (iVar8 < mix_buffer.num_channels);
      }
    }
    iVar8 = 0;
    pCVar7 = this_ptr;
    if (0 < mix_buffer.num_channels) {
      do {
        if ((local_64 != 0) || (pCVar7->channel_current_buffer_offsets[0] < 0)) {
          pCVar7->channel_current_buffer_offsets[0] = pCVar7->channel_target_buffer_offsets[0];
        }
        mix_buffer.channel_buffers[iVar8] =
             mix_buffer.channel_buffers[iVar8] + pCVar7->channel_current_buffer_offsets[0];
        uVar6 = pCVar7->channel_current_buffer_offsets[0] - pCVar7->channel_target_buffer_offsets[0]
        ;
        uVar9 = (int)uVar6 >> 0x1f;
        if ((int)((uVar6 ^ uVar9) - uVar9) < 2) {
          aiStack_a4[iVar8] = 0;
        }
        else {
          aiStack_a4[iVar8] = (int)mix_buffer.channel_buffers[iVar8];
          mix_buffer.channel_buffers[iVar8] = g_ChannelTertiaryBuffers[iVar8];
          in_stack_ffffff30 = 0x5a76e1;
          crt_memory_c_memset_FUN_005fde40
                    (mix_buffer.channel_buffers[iVar8],0,mix_buffer.num_output_samples << 2);
        }
        iVar8 = iVar8 + 1;
        pCVar7 = (CSfxSlot *)&(pCVar7->options).position;
      } while (iVar8 < mix_buffer.num_channels);
    }
    local_68 = this_ptr->channel_volumes;
    while (((iVar8 = mix_buffer.num_output_samples, this_ptr->playback_state != 0 &&
            (pCVar4 = this_ptr->sample, pCVar4 != (CSfxSample *)0x0)) &&
           (0.0 <= (this_ptr->options).trigger_time))) {
      if ((mix_buffer.num_output_samples < 1) ||
         (local_b8 = (double)(((float)(pCVar4->sample_info).sample_rate /
                              (float)mix_buffer.output_sample_rate) * this_ptr->effective_frequency)
         , local_b8 <= 0.0)) goto LAB_005a770c;
      local_b0 = (double)pCVar4->streaming_buffer_size;
      local_50 = 0;
      if (0 < (pCVar4->sample_info).sample_count) {
        uStack_88 = crt_math_c_floor_FUN_005feb90
                              (((double)pCVar4->loop_markers[this_ptr->loop_marker_index + -5] -
                               (this_ptr->options).trigger_time) / local_b8);
        dVar12 = crt_math_c_round_FUN_005fe6b0(uStack_88);
        local_68 = (float *)(int)ROUND(dVar12);
        if ((int)local_68 < iVar8) {
          uVar5 = (ulonglong)local_b0 >> 0x20;
          local_b0 = (double)CONCAT44((int)uVar5,local_68);
          local_58 = 1;
        }
      }
      local_c0 = this_ptr->prev_hardware_playback_pos;
      dVar12 = (local_b0 - local_c0) / local_b8;
      local_54 = 0;
      uVar15 = (uint)((ulonglong)dVar12 >> 0x20);
      sample_data = (short *)0x5a7889;
      uStack_88 = crt_math_c_floor_FUN_005feb90(dVar12);
      uVar14 = 0x5a789d;
      dVar13 = crt_math_c_round_FUN_005fe6b0(uStack_88);
      dVar12 = (double)CONCAT44(uVar15,uVar14);
      local_50 = (int)ROUND(dVar13);
      if (local_50 < 1) {
        dVar12 = (double)CONCAT44(uVar15,uVar14) - local_b8;
        if (dVar12 < 0.0) {
          dVar12 = 0.0;
        }
        dVar13 = (local_b8 - dVar12) / local_c0;
        sample_data = (short *)((ulonglong)dVar13 >> 0x20);
        dVar13 = crt_math_c_floor_FUN_005feb90(dVar13);
        afStack_90[0] = SUB84(dVar13,0);
        afStack_90[1] = (float)((ulonglong)dVar13 >> 0x20);
        in_stack_ffffff30 = 0x5a78f1;
        dVar13 = crt_math_c_round_FUN_005fe6b0(dVar13);
        local_58 = (uint)ROUND(dVar13);
      }
      dVar13 = (double)CONCAT44(sample_data,in_stack_ffffff30);
      channel_gains = (SStereoGains *)((ulonglong)dVar12 >> 0x20);
      channel_buffers = SUB84(dVar12,0);
      if ((int)local_58 < (int)local_b8._0_4_) {
        local_b8 = (double)(ulonglong)local_58;
        local_60 = 0;
        local_64 = 1;
      }
      else if (local_58 == local_b8._0_4_) {
        local_64 = 1;
      }
      if (local_74 == 0) {
        pCVar4 = this_ptr->sample;
        iVar10 = local_b8._0_4_ << 2;
        if ((pCVar4->sample_info).bit_depth == 8) {
          if ((pCVar4->sample_info).num_channels == 2) {
            if (0 < (int)local_b8._0_4_) {
              local_30 = 0.0;
              local_50 = iVar10;
              do {
                uVar15 = (uint)((ulonglong)dVar13 >> 0x20);
                uVar14 = 0x5a7a4a;
                dVar13 = crt_math_c_round_FUN_005fe6b0(dVar13);
                local_28 = *(byte *)((int)this_ptr->sample->sample_data + (int)ROUND(dVar13) * 2 + 1
                                    ) - 0x80;
                uStack_88 = (double)CONCAT44((float)local_28,
                                             (float)(int)(*(byte *)(*(int *)(extraout_EDX + 0x120) +
                                                                   (int)ROUND(dVar13) * 2) - 0x80));
                uVar6 = 0;
                pCVar7 = this_ptr;
                if (0 < mix_buffer.num_channels) {
                  do {
                    uVar9 = uVar6 & 1;
                    ppfVar3 = mix_buffer.channel_buffers + uVar6;
                    uVar6 = uVar6 + 1;
                    *(float *)((int)*ppfVar3 + local_34) =
                         *(float *)((int)&uStack_88 + uVar9 * 4) * pCVar7->channel_volumes[0] +
                         *(float *)((int)*ppfVar3 + local_34);
                    pCVar7 = (CSfxSlot *)&(pCVar7->options).position;
                  } while ((int)uVar6 < mix_buffer.num_channels);
                }
                dVar13 = (double)CONCAT44(uVar15,uVar14) + (double)CONCAT44(SUB84(dVar12,0),uVar15);
                local_34 = local_34 + 4;
              } while (local_34 < local_54);
            }
          }
          else if (0 < (int)local_b8._0_4_) {
            iVar11 = 0;
            local_4c = iVar10;
            do {
              uVar15 = (uint)((ulonglong)dVar13 >> 0x20);
              uVar14 = 0x5a7b29;
              dVar13 = crt_math_c_round_FUN_005fe6b0(dVar13);
              local_28 = *(byte *)((int)this_ptr->sample->sample_data + (int)ROUND(dVar13)) - 0x80;
              local_2c = (float)local_28;
              iVar10 = 0;
              pCVar7 = this_ptr;
              if (0 < mix_buffer.num_channels) {
                do {
                  ppfVar3 = mix_buffer.channel_buffers + iVar10;
                  iVar10 = iVar10 + 1;
                  *(float *)((int)*ppfVar3 + iVar11) =
                       local_2c * pCVar7->channel_volumes[0] + *(float *)((int)*ppfVar3 + iVar11);
                  pCVar7 = (CSfxSlot *)&(pCVar7->options).position;
                } while (iVar10 < mix_buffer.num_channels);
              }
              dVar13 = (double)CONCAT44(uVar15,uVar14) + (double)CONCAT44(SUB84(dVar12,0),uVar15);
              iVar11 = iVar11 + 4;
            } while (iVar11 < local_50);
          }
        }
        else if ((pCVar4->sample_info).num_channels == 2) {
          if (mix_buffer.num_channels == 2) {
            dVar12 = sound_sndmain_cpp_mixResampleStereoToStereo_FUN_005a5fb0
                               (sample_data,channel_buffers,channel_gains,
                                (double)CONCAT44(in_stack_ffffff30,local_b8._0_4_),
                                (double)CONCAT44(channel_buffers,sample_data),(int)channel_gains);
            uStack_94 = SUB84(dVar12,0);
            afStack_90[0] = (float)((ulonglong)dVar12 >> 0x20);
          }
          else if (0 < (int)local_b8._0_4_) {
            local_34 = 0;
            local_48 = iVar10;
            do {
              uVar15 = (uint)((ulonglong)dVar13 >> 0x20);
              uVar14 = 0x5a7bf3;
              dVar13 = crt_math_c_round_FUN_005fe6b0(dVar13);
              local_28 = (int)ROUND(dVar13);
              afStack_90[0] = (float)*(short *)(*(int *)(extraout_EDX_00 + 0x120) + local_28 * 4);
              afStack_90[1] =
                   (float)*(short *)((int)this_ptr->sample->sample_data + local_28 * 4 + 2);
              uVar6 = 0;
              pCVar7 = this_ptr;
              if (0 < mix_buffer.num_channels) {
                do {
                  uVar9 = uVar6 & 1;
                  ppfVar3 = mix_buffer.channel_buffers + uVar6;
                  uVar6 = uVar6 + 1;
                  *(float *)((int)*ppfVar3 + local_38) =
                       afStack_90[uVar9] * pCVar7->channel_volumes[0] +
                       *(float *)((int)*ppfVar3 + local_38);
                  pCVar7 = (CSfxSlot *)&(pCVar7->options).position;
                } while ((int)uVar6 < mix_buffer.num_channels);
              }
              dVar13 = (double)CONCAT44(uVar15,uVar14) + (double)CONCAT44(SUB84(dVar12,0),uVar15);
              local_38 = local_38 + 4;
            } while (local_38 < local_4c);
          }
        }
        else if (mix_buffer.num_channels == 2) {
          dVar12 = sound_sndmain_cpp_mixResampleMonoToStereo_FUN_005a5e70
                             (sample_data,channel_buffers,channel_gains,
                              (double)CONCAT44(in_stack_ffffff30,local_b8._0_4_),
                              (double)CONCAT44(channel_buffers,sample_data),(int)channel_gains);
          uStack_94 = SUB84(dVar12,0);
          afStack_90[0] = (float)((ulonglong)dVar12 >> 0x20);
        }
        else if (0 < (int)local_b8._0_4_) {
          iVar11 = 0;
          local_44 = iVar10;
          do {
            uVar15 = (uint)((ulonglong)dVar13 >> 0x20);
            uVar14 = 0x5a7cef;
            dVar13 = crt_math_c_round_FUN_005fe6b0(dVar13);
            local_28 = (int)ROUND(dVar13);
            local_30 = (float)*(short *)(*(int *)(extraout_EAX + 0x120) + (int)ROUND(dVar13) * 2);
            iVar10 = 0;
            pCVar7 = this_ptr;
            if (0 < mix_buffer.num_channels) {
              do {
                ppfVar3 = mix_buffer.channel_buffers + iVar10;
                iVar10 = iVar10 + 1;
                *(float *)((int)*ppfVar3 + iVar11) =
                     local_30 * pCVar7->channel_volumes[0] + *(float *)((int)*ppfVar3 + iVar11);
                pCVar7 = (CSfxSlot *)&(pCVar7->options).position;
              } while (iVar10 < mix_buffer.num_channels);
            }
            dVar13 = (double)CONCAT44(uVar15,uVar14) + (double)CONCAT44(SUB84(dVar12,0),uVar15);
            iVar11 = iVar11 + 4;
          } while (iVar11 < local_48);
        }
      }
      else {
        local_24 = local_b8._0_4_;
      }
      if (local_54 != 0) {
        local_c0 = 0.0;
      }
      if (local_b0 <= local_c0) {
        local_c0 = local_c0 - local_b0;
      }
      in_stack_ffffff30 = 0x5a7975;
      sound_sndmain_cpp_CSfxSlot_updatePlaybackPos_FUN_005a8170(this_ptr,local_c0);
      if (local_50 != 0) {
        iVar11 = this_ptr->loop_marker_index + 1;
        iVar10 = this_ptr->sample->loop_markers[this_ptr->loop_marker_index];
        this_ptr->loop_marker_index = iVar11;
        pCVar4 = this_ptr->sample;
        (this_ptr->options).trigger_time = (double)iVar10;
        if (pCVar4->loop_marker_count <= iVar11) {
          this_ptr->loop_marker_index = 0;
        }
      }
      iVar10 = 0;
      mix_buffer.num_output_samples = mix_buffer.num_output_samples - iVar8;
      if (0 < mix_buffer.num_channels) {
        iVar11 = 0;
        do {
          piVar2 = (int *)((int)mix_buffer.channel_buffers + iVar11);
          *piVar2 = *piVar2 + iVar8 * 4;
          iVar10 = iVar10 + 1;
          iVar11 = iVar11 + 4;
        } while (iVar10 < mix_buffer.num_channels);
      }
    }
    sound_sndmain_cpp_CSfxSlot_kill_FUN_005a7e60(this_ptr);
LAB_005a770c:
    local_58 = 0;
    if (0 < mix_buffer.num_channels) {
      local_4c = 0;
      do {
        if (*(int *)((int)aiStack_a4 + local_4c) != 0) {
          local_28 = local_4c;
          local_44 = local_5c;
          iVar8 = 0;
          local_30 = (float)((local_5c +
                             *(int *)((int)this_ptr->channel_target_buffer_offsets + local_4c)) -
                            *(int *)((int)this_ptr->channel_current_buffer_offsets + local_4c));
          local_2c = (float)((int)local_30 * 4);
          iVar10 = 0;
          if (0 < (int)local_2c) {
            do {
              local_14 = (iVar8 / (int)local_30) * 4;
              pfVar1 = (float *)(*(int *)((int)aiStack_a4 + local_4c) + iVar10);
              iVar10 = iVar10 + 4;
              *(float *)(*(int *)((int)aiStack_a4 + local_4c) + -4 + iVar10) =
                   *(float *)(*(int *)((int)g_ChannelTertiaryBuffers + local_4c) + local_14) +
                   *pfVar1;
              iVar8 = iVar8 + local_5c;
            } while (iVar10 < (int)local_2c);
          }
          *(uint *)((int)this_ptr->channel_current_buffer_offsets + local_4c) =
               *(uint *)((int)this_ptr->channel_target_buffer_offsets + local_4c);
        }
        local_58 = local_58 + 1;
        local_4c = local_4c + 4;
      } while ((int)local_58 < mix_buffer.num_channels);
    }
  }
  return;
}
