// Name: sound_sndmain.cpp_CSfxSlot_mix_FUN_005a75e0
// Address: 005a75e0
// Address Range: [[005a75e0, 005a7e52]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_mix_FUN_005a75e0(CSfxSlot *this_ptr,SMixBuffer mix_buffer)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSlot_mix_FUN_005a75e0(CSfxSlot *this_ptr,SMixBuffer mix_buffer)

{
  float *pfVar1;
  int *piVar2;
  float **ppfVar3;
  CSfxSample *pCVar4;
  double dVar5;
  uint uVar6;
  CSfxSlot *pCVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  uint uVar14;
  uint uVar15;
  short *sample_data;
  uint uVar16;
  SStereoBuffers *channel_buffers;
  SStereoGains *channel_gains;
  uint local_b8;
  uint uStack_b4;
  int local_b0;
  int iStack_ac;
  int aiStack_a4 [6];
  uint uStack_8c;
  float afStack_88 [7];
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
          memset
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
      if (mix_buffer.num_output_samples < 1) goto LAB_005a770c;
      dVar13 = (double)(((float)(pCVar4->sample_info).sample_rate /
                        (float)mix_buffer.output_sample_rate) * this_ptr->effective_frequency);
      local_b8 = SUB84(dVar13,0);
      uStack_b4 = (uint)((ulonglong)dVar13 >> 0x20);
      if (dVar13 <= 0.0) goto LAB_005a770c;
      local_b0 = SUB84((double)pCVar4->streaming_buffer_size,0);
      iStack_ac = (int)((ulonglong)(double)pCVar4->streaming_buffer_size >> 0x20);
      local_50 = 0;
      if (0 < (pCVar4->sample_info).sample_count) {
        dVar12 = floor
                           (((double)pCVar4->loop_markers[this_ptr->loop_marker_index + -5] -
                            (this_ptr->options).trigger_time) / dVar13);
        afStack_88[1] = SUB84(dVar12,0);
        afStack_88[2] = (float)((ulonglong)dVar12 >> 0x20);
        dVar12 = round(dVar12);
        local_64 = (int)ROUND(dVar12);
        if (local_64 < iVar8) {
          iStack_ac = local_64;
        }
      }
      uVar16 = *(uint *)&this_ptr->prev_hardware_playback_pos;
      channel_gains = *(SStereoGains **)((int)&this_ptr->prev_hardware_playback_pos + 4);
      dVar13 = ((double)CONCAT44(iStack_ac,local_b0) - this_ptr->prev_hardware_playback_pos) /
               dVar13;
      local_54 = 0;
      uVar14 = SUB84(dVar13,0);
      dVar13 = floor(dVar13);
      afStack_88[1] = SUB84(dVar13,0);
      afStack_88[2] = (float)((ulonglong)dVar13 >> 0x20);
      uVar15 = 0x5a789d;
      dVar12 = round(dVar13);
      dVar13 = (double)CONCAT44(uVar16,uVar15);
      local_4c = (int)ROUND(dVar12);
      if (local_4c < 1) {
        dVar13 = (double)CONCAT44(uVar16,uVar15) - (double)CONCAT44(local_b0,uStack_b4);
        if (dVar13 < 0.0) {
          dVar13 = 0.0;
        }
        dVar12 = floor
                           (((double)CONCAT44(local_b0,uStack_b4) - dVar13) /
                            (double)CONCAT44(local_b8,channel_gains));
        afStack_88[0] = SUB84(dVar12,0);
        afStack_88[1] = (float)((ulonglong)dVar12 >> 0x20);
        uVar14 = 0x5a78f1;
        dVar12 = round(dVar12);
        local_50 = (int)ROUND(dVar12);
      }
      channel_buffers = (SStereoBuffers *)((ulonglong)dVar13 >> 0x20);
      dVar5 = (double)(ZEXT48(channel_buffers) << 0x20);
      sample_data = SUB84(dVar13,0);
      dVar12 = (double)CONCAT44(sample_data,uVar14);
      if (local_50 < local_b0) {
        local_b0 = local_50;
        local_58 = 0;
        local_5c = 1;
      }
      else if (local_50 == local_b0) {
        local_5c = 1;
      }
      if (local_6c == 0.0) {
        pCVar4 = this_ptr->sample;
        iVar10 = local_b0 << 2;
        if ((pCVar4->sample_info).bit_depth == 8) {
          if ((pCVar4->sample_info).num_channels == 2) {
            dVar13 = dVar5;
            if (0 < local_b0) {
              local_28 = 0.0;
              local_48 = iVar10;
              do {
                uVar14 = (uint)((ulonglong)dVar12 >> 0x20);
                pCVar4 = this_ptr->sample;
                uVar16 = 0x5a7a4a;
                dVar13 = round(dVar12);
                afStack_88[2] =
                     (float)(int)(*(byte *)((int)pCVar4->sample_data + (int)ROUND(dVar13) * 2) -
                                 0x80);
                local_20 = *(byte *)((int)this_ptr->sample->sample_data + (int)ROUND(dVar13) * 2 + 1
                                    ) - 0x80;
                afStack_88[3] = (float)local_20;
                uVar6 = 0;
                pCVar7 = this_ptr;
                if (0 < mix_buffer.num_channels) {
                  do {
                    uVar9 = uVar6 & 1;
                    ppfVar3 = mix_buffer.channel_buffers + uVar6;
                    uVar6 = uVar6 + 1;
                    *(float *)((int)*ppfVar3 + local_2c) =
                         afStack_88[uVar9 + 2] * pCVar7->channel_volumes[0] +
                         *(float *)((int)*ppfVar3 + local_2c);
                    pCVar7 = (CSfxSlot *)&(pCVar7->options).position;
                  } while ((int)uVar6 < mix_buffer.num_channels);
                }
                dVar12 = (double)CONCAT44(uVar14,uVar16) + (double)CONCAT44(channel_buffers,uVar14);
                local_2c = local_2c + 4;
                dVar13 = (double)(ZEXT48(channel_buffers) << 0x20);
              } while (local_2c < local_4c);
            }
          }
          else {
            dVar13 = dVar5;
            if (0 < local_b0) {
              iVar11 = 0;
              local_44 = iVar10;
              do {
                uVar14 = (uint)((ulonglong)dVar12 >> 0x20);
                uVar16 = 0x5a7b29;
                dVar13 = round(dVar12);
                local_20 = *(byte *)((int)this_ptr->sample->sample_data + (int)ROUND(dVar13)) - 0x80
                ;
                local_24 = (float)local_20;
                iVar10 = 0;
                pCVar7 = this_ptr;
                if (0 < mix_buffer.num_channels) {
                  do {
                    ppfVar3 = mix_buffer.channel_buffers + iVar10;
                    iVar10 = iVar10 + 1;
                    *(float *)((int)*ppfVar3 + iVar11) =
                         local_24 * pCVar7->channel_volumes[0] + *(float *)((int)*ppfVar3 + iVar11);
                    pCVar7 = (CSfxSlot *)&(pCVar7->options).position;
                  } while (iVar10 < mix_buffer.num_channels);
                }
                dVar12 = (double)CONCAT44(uVar14,uVar16) + (double)CONCAT44(channel_buffers,uVar14);
                iVar11 = iVar11 + 4;
                dVar13 = (double)(ZEXT48(channel_buffers) << 0x20);
              } while (iVar11 < local_48);
            }
          }
        }
        else if ((pCVar4->sample_info).num_channels == 2) {
          if (mix_buffer.num_channels == 2) {
            dVar12 = sound_sndmain_cpp_mixResampleStereoToStereo_FUN_005a5fb0
                               (sample_data,channel_buffers,channel_gains,
                                (double)CONCAT44(uVar14,local_b0),dVar13,(int)channel_gains);
            dVar13 = (double)(ZEXT48(channel_buffers) << 0x20);
            uStack_8c = SUB84(dVar12,0);
            afStack_88[0] = (float)((ulonglong)dVar12 >> 0x20);
          }
          else {
            dVar13 = dVar5;
            if (0 < local_b0) {
              local_2c = 0;
              local_40 = iVar10;
              do {
                uVar14 = (uint)((ulonglong)dVar12 >> 0x20);
                pCVar4 = this_ptr->sample;
                uVar16 = 0x5a7bf3;
                dVar13 = round(dVar12);
                local_20 = (int)ROUND(dVar13);
                afStack_88[0] = (float)*(short *)((int)pCVar4->sample_data + local_20 * 4);
                afStack_88[1] =
                     (float)*(short *)((int)this_ptr->sample->sample_data + local_20 * 4 + 2);
                uVar6 = 0;
                pCVar7 = this_ptr;
                if (0 < mix_buffer.num_channels) {
                  do {
                    uVar9 = uVar6 & 1;
                    ppfVar3 = mix_buffer.channel_buffers + uVar6;
                    uVar6 = uVar6 + 1;
                    *(float *)((int)*ppfVar3 + local_30) =
                         afStack_88[uVar9] * pCVar7->channel_volumes[0] +
                         *(float *)((int)*ppfVar3 + local_30);
                    pCVar7 = (CSfxSlot *)&(pCVar7->options).position;
                  } while ((int)uVar6 < mix_buffer.num_channels);
                }
                dVar12 = (double)CONCAT44(uVar14,uVar16) + (double)CONCAT44(channel_buffers,uVar14);
                local_30 = local_30 + 4;
                dVar13 = (double)(ZEXT48(channel_buffers) << 0x20);
              } while (local_30 < local_44);
            }
          }
        }
        else if (mix_buffer.num_channels == 2) {
          dVar12 = sound_sndmain_cpp_mixResampleMonoToStereo_FUN_005a5e70
                             (sample_data,channel_buffers,channel_gains,
                              (double)CONCAT44(uVar14,local_b0),dVar13,(int)channel_gains);
          uStack_8c = SUB84(dVar12,0);
          afStack_88[0] = (float)((ulonglong)dVar12 >> 0x20);
        }
        else {
          dVar13 = dVar5;
          if (0 < local_b0) {
            iVar11 = 0;
            local_3c = iVar10;
            do {
              uVar14 = (uint)((ulonglong)dVar12 >> 0x20);
              pCVar4 = this_ptr->sample;
              uVar16 = 0x5a7cef;
              dVar13 = round(dVar12);
              local_20 = (int)ROUND(dVar13);
              local_28 = (float)*(short *)((int)pCVar4->sample_data + (int)ROUND(dVar13) * 2);
              iVar10 = 0;
              pCVar7 = this_ptr;
              if (0 < mix_buffer.num_channels) {
                do {
                  ppfVar3 = mix_buffer.channel_buffers + iVar10;
                  iVar10 = iVar10 + 1;
                  *(float *)((int)*ppfVar3 + iVar11) =
                       local_28 * pCVar7->channel_volumes[0] + *(float *)((int)*ppfVar3 + iVar11);
                  pCVar7 = (CSfxSlot *)&(pCVar7->options).position;
                } while (iVar10 < mix_buffer.num_channels);
              }
              dVar12 = (double)CONCAT44(uVar14,uVar16) + (double)CONCAT44(channel_buffers,uVar14);
              iVar11 = iVar11 + 4;
              dVar13 = (double)(ZEXT48(channel_buffers) << 0x20);
            } while (iVar11 < local_40);
          }
        }
      }
      else {
        local_1c = local_b0;
        dVar13 = dVar5;
      }
      uVar16 = (uint)((ulonglong)dVar13 >> 0x20);
      if (local_54 != 0) {
        uVar16 = 0;
        channel_gains = (SStereoGains *)0x0;
      }
      dVar13 = (double)CONCAT44(channel_gains,uVar16);
      if ((double)CONCAT44(iStack_ac,local_b0) <= dVar13) {
        dVar13 = (double)CONCAT44(channel_gains,uVar16) - (double)CONCAT44(iStack_ac,local_b0);
      }
      sound_sndmain_cpp_CSfxSlot_updatePlaybackPos_FUN_005a8170(this_ptr,dVar13);
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
          local_28 = (float)local_4c;
          local_44 = local_5c;
          iVar8 = 0;
          local_30 = (local_5c + *(int *)((int)this_ptr->channel_target_buffer_offsets + local_4c))
                     - *(int *)((int)this_ptr->channel_current_buffer_offsets + local_4c);
          local_2c = local_30 * 4;
          iVar10 = 0;
          if (0 < local_2c) {
            do {
              local_14 = (iVar8 / local_30) * 4;
              pfVar1 = (float *)(*(int *)((int)aiStack_a4 + local_4c) + iVar10);
              iVar10 = iVar10 + 4;
              *(float *)(*(int *)((int)aiStack_a4 + local_4c) + -4 + iVar10) =
                   *(float *)(*(int *)((int)g_ChannelTertiaryBuffers + local_4c) + local_14) +
                   *pfVar1;
              iVar8 = iVar8 + local_5c;
            } while (iVar10 < local_2c);
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
