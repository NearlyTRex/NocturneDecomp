// Name: sound_sndmain.cpp_CSfxSlot_mix_FUN_005a75e0
// Address: 005a75e0
// Address Range: [[005a75e0, 005a7e52]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_mix_FUN_005a75e0(CSfxSlot *this_ptr,SMixBuffer mix_buffer)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl sound_sndmain_cpp_CSfxSlot_mix_FUN_005a75e0(CSfxSlot *this_ptr,SMixBuffer mix_buffer)

{
  float *pfVar1;
  int *piVar2;
  float **ppfVar3;
  CSfxSample *pCVar4;
  double dVar5;
  uint uVar6;
  int iVar7;
  CSfxSlot *pCVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  double hardware_playback_pos;
  short *sample_data;
  SStereoBuffers *channel_buffers;
  double dVar14;
  SStereoGains *channel_gains;
  int local_a8;
  int aiStack_a4 [8];
  double local_84;
  float local_7c [4];
  float local_6c;
  float *local_68;
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
      iVar9 = 0;
      pCVar8 = this_ptr;
      if (0 < mix_buffer.num_channels) {
        do {
          if (local_6c < pCVar8->channel_volumes[0]) {
            local_64 = 0;
            break;
          }
          iVar9 = iVar9 + 1;
          pCVar8 = (CSfxSlot *)&(pCVar8->options).position;
        } while (iVar9 < mix_buffer.num_channels);
      }
    }
    iVar9 = 0;
    pCVar8 = this_ptr;
    if (0 < mix_buffer.num_channels) {
      do {
        if ((local_64 != 0) || (pCVar8->channel_current_buffer_offsets[0] < 0)) {
          pCVar8->channel_current_buffer_offsets[0] = pCVar8->channel_target_buffer_offsets[0];
        }
        mix_buffer.channel_buffers[iVar9] =
             mix_buffer.channel_buffers[iVar9] + pCVar8->channel_current_buffer_offsets[0];
        uVar6 = pCVar8->channel_current_buffer_offsets[0] - pCVar8->channel_target_buffer_offsets[0]
        ;
        uVar10 = (int)uVar6 >> 0x1f;
        if ((int)((uVar6 ^ uVar10) - uVar10) < 2) {
          aiStack_a4[iVar9] = 0;
        }
        else {
          aiStack_a4[iVar9] = (int)mix_buffer.channel_buffers[iVar9];
          mix_buffer.channel_buffers[iVar9] = g_ChannelTertiaryBuffers[iVar9];
          memset
                    (mix_buffer.channel_buffers[iVar9],0,mix_buffer.num_output_samples << 2);
        }
        iVar9 = iVar9 + 1;
        pCVar8 = (CSfxSlot *)&(pCVar8->options).position;
      } while (iVar9 < mix_buffer.num_channels);
    }
    local_68 = this_ptr->channel_volumes;
    while (((iVar9 = mix_buffer.num_output_samples, this_ptr->playback_state != 0 &&
            (pCVar4 = this_ptr->sample, pCVar4 != (CSfxSample *)0x0)) &&
           (0.0 <= (this_ptr->options).trigger_time))) {
      if ((mix_buffer.num_output_samples < 1) ||
         (dVar14 = (double)(((float)(pCVar4->sample_info).sample_rate /
                            (float)mix_buffer.output_sample_rate) * this_ptr->effective_frequency),
         dVar14 <= 0.0)) goto LAB_005a770c;
      dVar5 = (double)pCVar4->streaming_buffer_size;
      local_a8 = mix_buffer.num_output_samples;
      local_50 = 0;
      if (0 < (pCVar4->sample_info).sample_count) {
        local_84 = floor
                             (((double)pCVar4->loop_markers[this_ptr->loop_marker_index + -5] -
                              (this_ptr->options).trigger_time) / dVar14);
        local_60 = (int)ROUND(ROUND(local_84));
        if (local_60 < iVar9) {
          local_50 = 1;
          local_a8 = local_60;
        }
      }
      uVar12 = *(uint *)&this_ptr->prev_hardware_playback_pos;
      uVar13 = *(uint *)((int)&this_ptr->prev_hardware_playback_pos + 4);
      local_54 = 0;
      local_84 = floor
                           ((dVar5 - this_ptr->prev_hardware_playback_pos) / dVar14);
      hardware_playback_pos = (double)CONCAT44(uVar13,uVar12);
      local_48 = (int)ROUND(ROUND(local_84));
      if ((int)ROUND(ROUND(local_84)) < 1) {
        hardware_playback_pos = (double)CONCAT44(uVar13,uVar12) - dVar5;
        if (hardware_playback_pos < 0.0) {
          hardware_playback_pos = 0.0;
        }
        local_84 = floor((dVar5 - hardware_playback_pos) / dVar14);
        local_48 = (int)ROUND(ROUND(local_84));
      }
      sample_data = (short *)((ulonglong)hardware_playback_pos >> 0x20);
      channel_gains = (SStereoGains *)((ulonglong)dVar14 >> 0x20);
      channel_buffers = SUB84(dVar14,0);
      if (local_48 < local_a8) {
        local_a8 = local_48;
        local_50 = 0;
        local_54 = 1;
      }
      else if (local_48 == local_a8) {
        local_54 = 1;
      }
      if (local_64 == 0) {
        pCVar4 = this_ptr->sample;
        iVar9 = local_a8 << 2;
        if ((pCVar4->sample_info).bit_depth == 8) {
          if ((pCVar4->sample_info).num_channels == 2) {
            if (0 < local_a8) {
              local_40 = iVar9;
              local_20 = 0;
              do {
                local_7c[2] = (float)(int)(*(byte *)((int)this_ptr->sample->sample_data +
                                                    (int)ROUND(ROUND(hardware_playback_pos)) * 2) -
                                          0x80);
                local_14 = *(byte *)((int)this_ptr->sample->sample_data +
                                    (int)ROUND(ROUND(hardware_playback_pos)) * 2 + 1) - 0x80;
                local_7c[3] = (float)local_14;
                uVar6 = 0;
                pCVar8 = this_ptr;
                if (0 < mix_buffer.num_channels) {
                  do {
                    uVar10 = uVar6 & 1;
                    ppfVar3 = mix_buffer.channel_buffers + uVar6;
                    uVar6 = uVar6 + 1;
                    *(float *)((int)*ppfVar3 + local_20) =
                         local_7c[uVar10 + 2] * pCVar8->channel_volumes[0] +
                         *(float *)((int)*ppfVar3 + local_20);
                    pCVar8 = (CSfxSlot *)&(pCVar8->options).position;
                  } while ((int)uVar6 < mix_buffer.num_channels);
                }
                hardware_playback_pos = hardware_playback_pos + dVar14;
                local_20 = local_20 + 4;
              } while (local_20 < iVar9);
            }
          }
          else if (0 < local_a8) {
            local_3c = iVar9;
            iVar11 = 0;
            do {
              local_14 = *(byte *)((int)this_ptr->sample->sample_data +
                                  (int)ROUND(ROUND(hardware_playback_pos))) - 0x80;
              local_18 = (float)local_14;
              iVar7 = 0;
              pCVar8 = this_ptr;
              if (0 < mix_buffer.num_channels) {
                do {
                  ppfVar3 = mix_buffer.channel_buffers + iVar7;
                  iVar7 = iVar7 + 1;
                  *(float *)((int)*ppfVar3 + iVar11) =
                       local_18 * pCVar8->channel_volumes[0] + *(float *)((int)*ppfVar3 + iVar11);
                  pCVar8 = (CSfxSlot *)&(pCVar8->options).position;
                } while (iVar7 < mix_buffer.num_channels);
              }
              hardware_playback_pos = hardware_playback_pos + dVar14;
              iVar11 = iVar11 + 4;
            } while (iVar11 < iVar9);
          }
        }
        else if ((pCVar4->sample_info).num_channels == 2) {
          if (mix_buffer.num_channels == 2) {
            local_84 = sound_sndmain_cpp_mixResampleStereoToStereo_FUN_005a5fb0
                                 (sample_data,channel_buffers,channel_gains,
                                  (double)CONCAT44(SUB84(hardware_playback_pos,0),local_a8),
                                  (double)CONCAT44(channel_buffers,sample_data),(int)channel_gains);
            hardware_playback_pos = local_84;
          }
          else if (0 < local_a8) {
            local_38 = iVar9;
            local_24 = 0;
            do {
              local_14 = (int)ROUND(ROUND(hardware_playback_pos));
              local_7c[0] = (float)*(short *)((int)this_ptr->sample->sample_data + local_14 * 4);
              local_7c[1] = (float)*(short *)((int)this_ptr->sample->sample_data + local_14 * 4 + 2)
              ;
              uVar6 = 0;
              pCVar8 = this_ptr;
              if (0 < mix_buffer.num_channels) {
                do {
                  uVar10 = uVar6 & 1;
                  ppfVar3 = mix_buffer.channel_buffers + uVar6;
                  uVar6 = uVar6 + 1;
                  *(float *)((int)*ppfVar3 + local_24) =
                       local_7c[uVar10] * pCVar8->channel_volumes[0] +
                       *(float *)((int)*ppfVar3 + local_24);
                  pCVar8 = (CSfxSlot *)&(pCVar8->options).position;
                } while ((int)uVar6 < mix_buffer.num_channels);
              }
              hardware_playback_pos = hardware_playback_pos + dVar14;
              local_24 = local_24 + 4;
            } while (local_24 < iVar9);
          }
        }
        else if (mix_buffer.num_channels == 2) {
          local_84 = sound_sndmain_cpp_mixResampleMonoToStereo_FUN_005a5e70
                               (sample_data,channel_buffers,channel_gains,
                                (double)CONCAT44(SUB84(hardware_playback_pos,0),local_a8),
                                (double)CONCAT44(channel_buffers,sample_data),(int)channel_gains);
          hardware_playback_pos = local_84;
        }
        else if (0 < local_a8) {
          local_34 = iVar9;
          iVar11 = 0;
          do {
            local_14 = (int)ROUND(ROUND(hardware_playback_pos));
            local_1c = (float)*(short *)((int)this_ptr->sample->sample_data +
                                        (int)ROUND(ROUND(hardware_playback_pos)) * 2);
            iVar7 = 0;
            pCVar8 = this_ptr;
            if (0 < mix_buffer.num_channels) {
              do {
                ppfVar3 = mix_buffer.channel_buffers + iVar7;
                iVar7 = iVar7 + 1;
                *(float *)((int)*ppfVar3 + iVar11) =
                     local_1c * pCVar8->channel_volumes[0] + *(float *)((int)*ppfVar3 + iVar11);
                pCVar8 = (CSfxSlot *)&(pCVar8->options).position;
              } while (iVar7 < mix_buffer.num_channels);
            }
            hardware_playback_pos = hardware_playback_pos + dVar14;
            iVar11 = iVar11 + 4;
          } while (iVar11 < iVar9);
        }
      }
      else {
        local_14 = local_a8;
        hardware_playback_pos = (double)local_a8 * dVar14 + hardware_playback_pos;
      }
      if (local_54 != 0) {
        hardware_playback_pos = 0.0;
      }
      if (dVar5 <= hardware_playback_pos) {
        hardware_playback_pos = hardware_playback_pos - dVar5;
      }
      sound_sndmain_cpp_CSfxSlot_updatePlaybackPos_FUN_005a8170(this_ptr,hardware_playback_pos);
      if (local_50 != 0) {
        iVar11 = this_ptr->loop_marker_index + 1;
        iVar9 = this_ptr->sample->loop_markers[this_ptr->loop_marker_index];
        this_ptr->loop_marker_index = iVar11;
        pCVar4 = this_ptr->sample;
        (this_ptr->options).trigger_time = (double)iVar9;
        if (pCVar4->loop_marker_count <= iVar11) {
          this_ptr->loop_marker_index = 0;
        }
      }
      iVar9 = 0;
      mix_buffer.num_output_samples = mix_buffer.num_output_samples - local_a8;
      if (0 < mix_buffer.num_channels) {
        iVar11 = 0;
        do {
          piVar2 = (int *)((int)mix_buffer.channel_buffers + iVar11);
          *piVar2 = *piVar2 + local_a8 * 4;
          iVar9 = iVar9 + 1;
          iVar11 = iVar11 + 4;
        } while (iVar9 < mix_buffer.num_channels);
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
          iVar9 = 0;
          local_30 = (local_5c + *(int *)((int)this_ptr->channel_target_buffer_offsets + local_4c))
                     - *(int *)((int)this_ptr->channel_current_buffer_offsets + local_4c);
          local_2c = local_30 * 4;
          iVar11 = 0;
          if (0 < local_2c) {
            do {
              local_14 = (iVar9 / local_30) * 4;
              pfVar1 = (float *)(*(int *)((int)aiStack_a4 + local_4c) + iVar11);
              iVar11 = iVar11 + 4;
              *(float *)(*(int *)((int)aiStack_a4 + local_4c) + -4 + iVar11) =
                   *(float *)(*(int *)((int)g_ChannelTertiaryBuffers + local_4c) + local_14) +
                   *pfVar1;
              iVar9 = iVar9 + local_5c;
            } while (iVar11 < local_2c);
          }
          *(uint *)((int)this_ptr->channel_current_buffer_offsets + local_4c) =
               *(uint *)((int)this_ptr->channel_target_buffer_offsets + local_4c);
        }
        local_58 = local_58 + 1;
        local_4c = local_4c + 4;
      } while (local_58 < mix_buffer.num_channels);
    }
  }
  return;
}
