// Name: sound_sndmain.cpp_CSfxSlot_mix_FUN_005a75e0
// Address: 005a75e0
// MANUAL RECONSTRUCTION
// Address Range: [[005a75e0, 005a7e52]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_mix_FUN_005a75e0(CSfxSlot *this_ptr,SMixBuffer mix_buffer)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSlot_mix_FUN_005a75e0(CSfxSlot *this_ptr,SMixBuffer mix_buffer)

{
  float **ppfVar1;
  short sVar2;
  byte bVar3;
  CSfxSample *pCVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar10;
  uint uVar6;
  uint uVar11;
  int iVar7;
  int iVar12;
  int iVar9;
  int iVar14;
  uint uVar15;
  int iVar11;
  int iVar16;
  double dVar17;
  double local_c0;
  int local_a8;
  float *saved_channel_buffers [8];
  float local_7c [4];
  int local_58;
  int local_48;
  int local_24;
  int local_20;
  CSfxSample *pCVar4;
  float *pfVar1;
  float **ppfVar3;
  double resample_delta;
  double dVar5;
  
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0xa27;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::mix - must be locked!");
  }
  iVar10 = mix_buffer.num_output_samples;
  if (this_ptr->playback_state != 0) {
    bVar6 = true;
    if (this_ptr->sample != (CSfxSample *)0x0) {
      iVar9 = 0;
      if (0 < mix_buffer.num_channels) {
        do {
          if (1.0 / (float)(1 << ((char)(this_ptr->sample->sample_info).bit_depth + 6U & 0x1f)) <
              this_ptr->channel_volumes[iVar9]) {
            bVar6 = false;
            break;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < mix_buffer.num_channels);
      }
    }
    iVar16 = 0;
    if (0 < mix_buffer.num_channels) {
      do {
        if ((bVar6) || (this_ptr->channel_current_buffer_offsets[iVar16] < 0)) {
          this_ptr->channel_current_buffer_offsets[iVar16] =
               this_ptr->channel_target_buffer_offsets[iVar16];
        }
        mix_buffer.channel_buffers[iVar16] =
             mix_buffer.channel_buffers[iVar16] + this_ptr->channel_current_buffer_offsets[iVar16];
        uVar6 = this_ptr->channel_current_buffer_offsets[iVar16] -
                this_ptr->channel_target_buffer_offsets[iVar16];
        if (ABS((int)uVar6) < 2) {
          saved_channel_buffers[iVar16] = 0;
        }
        else {
          saved_channel_buffers[iVar16] = mix_buffer.channel_buffers[iVar16];
          mix_buffer.channel_buffers[iVar16] = g_ChannelTertiaryBuffers[iVar16];
          memset
                    (mix_buffer.channel_buffers[iVar16],0,mix_buffer.num_output_samples << 2);
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 < mix_buffer.num_channels);
    }
    while (((iVar16 = mix_buffer.num_output_samples, this_ptr->playback_state != 0 &&
            (pCVar4 = this_ptr->sample, pCVar4 != (CSfxSample *)0x0)) &&
           (0.0 <= (this_ptr->options).trigger_time))) {
      if ((mix_buffer.num_output_samples < 1) ||
         (resample_delta =
               (double)(((float)(pCVar4->sample_info).sample_rate /
                        (float)mix_buffer.output_sample_rate) * this_ptr->effective_frequency),
         resample_delta <= 0.0)) goto LAB_005a770c;
      dVar5 = (double)pCVar4->streaming_buffer_size;
      local_a8 = mix_buffer.num_output_samples;
      bVar8 = false;
      if (0 < (pCVar4->sample_info).sample_count) {
        dVar17 = floor
                           (((double)pCVar4->loop_endpoints[this_ptr->loop_marker_index] -
                            (this_ptr->options).trigger_time) / resample_delta);
        if ((int)ROUND(ROUND(dVar17)) < iVar16) {
          bVar8 = true;
          local_a8 = (int)ROUND(ROUND(dVar17));
        }
      }
      local_c0 = this_ptr->prev_hardware_playback_pos;
      bVar7 = false;
      dVar17 = floor((dVar5 - local_c0) / resample_delta);
      local_48 = (int)ROUND(ROUND(dVar17));
      if (local_48 < 1) {
        local_c0 = local_c0 - dVar5;
        if (local_c0 < 0.0) {
          local_c0 = 0.0;
        }
        dVar17 = floor((dVar5 - local_c0) / resample_delta);
        local_48 = (int)ROUND(ROUND(dVar17));
      }
      if (local_48 < local_a8) {
        local_a8 = local_48;
        bVar8 = false;
        bVar7 = true;
      }
      else if (local_48 == local_a8) {
        bVar7 = true;
      }
      if (bVar6) {
        local_c0 = (double)local_a8 * resample_delta + local_c0;
      }
      else {
        pCVar5 = this_ptr->sample;
        iVar16 = local_a8 << 2;
        if ((pCVar5->sample_info).bit_depth == 8) {
          if ((pCVar5->sample_info).num_channels == 2) {
            if (0 < local_a8) {
              local_20 = 0;
              do {
                local_7c[2] = (float)(int)(((byte *)this_ptr->sample->sample_data)
                                           [(int)ROUND(ROUND(local_c0)) * 2] - 0x80);
                local_7c[3] = (float)(int)(((byte *)this_ptr->sample->sample_data)
                                           [(int)ROUND(ROUND(local_c0)) * 2 + 1] - 0x80);
                uVar11 = 0;
                if (0 < mix_buffer.num_channels) {
                  do {
                    uVar15 = uVar11 & 1;
                    ppfVar3 = mix_buffer.channel_buffers + uVar11;
                    *(float *)((int)*ppfVar3 + local_20) =
                         local_7c[uVar15 + 2] * this_ptr->channel_volumes[uVar11] +
                         *(float *)((int)*ppfVar3 + local_20);
                    uVar11 = uVar11 + 1;
                  } while ((int)uVar11 < mix_buffer.num_channels);
                }
                local_c0 = local_c0 + resample_delta;
                local_20 = local_20 + 4;
              } while (local_20 < iVar16);
            }
          }
          else if (0 < local_a8) {
            iVar12 = 0;
            do {
              bVar3 = ((byte *)this_ptr->sample->sample_data)[(int)ROUND(ROUND(local_c0))];
              iVar7 = 0;
              if (0 < mix_buffer.num_channels) {
                do {
                  ppfVar1 = mix_buffer.channel_buffers + iVar7;
                  *(float *)((int)*ppfVar1 + iVar12) =
                       (float)(int)(bVar3 - 0x80) * this_ptr->channel_volumes[iVar7] +
                       *(float *)((int)*ppfVar1 + iVar12);
                  iVar7 = iVar7 + 1;
                } while (iVar7 < mix_buffer.num_channels);
              }
              local_c0 = local_c0 + resample_delta;
              iVar12 = iVar12 + 4;
            } while (iVar12 < iVar16);
          }
        }
        else if ((pCVar5->sample_info).num_channels == 2) {
          if (mix_buffer.num_channels == 2) {
            local_c0 = sound_sndmain_cpp_mixResampleStereoToStereo_FUN_005a5fb0
                                 (pCVar5->sample_data,(SStereoBuffers *)&mix_buffer,
                                  (SStereoGains *)this_ptr->channel_volumes,local_c0,resample_delta,
                                  local_a8);
          }
          else if (0 < local_a8) {
            local_24 = 0;
            do {
              local_7c[0] = (float)this_ptr->sample->sample_data[(int)ROUND(ROUND(local_c0)) * 2];
              local_7c[1] = (float)this_ptr->sample->sample_data
                                   [(int)ROUND(ROUND(local_c0)) * 2 + 1];
              uVar11 = 0;
              if (0 < mix_buffer.num_channels) {
                do {
                  uVar15 = uVar11 & 1;
                  ppfVar1 = mix_buffer.channel_buffers + uVar11;
                  *(float *)((int)*ppfVar1 + local_24) =
                       local_7c[uVar15] * this_ptr->channel_volumes[uVar11] +
                       *(float *)((int)*ppfVar1 + local_24);
                  uVar11 = uVar11 + 1;
                } while ((int)uVar11 < mix_buffer.num_channels);
              }
              local_c0 = local_c0 + resample_delta;
              local_24 = local_24 + 4;
            } while (local_24 < iVar16);
          }
        }
        else if (mix_buffer.num_channels == 2) {
          local_c0 = sound_sndmain_cpp_mixResampleMonoToStereo_FUN_005a5e70
                               (pCVar5->sample_data,(SStereoBuffers *)&mix_buffer,
                                (SStereoGains *)this_ptr->channel_volumes,local_c0,resample_delta,
                                local_a8);
        }
        else if (0 < local_a8) {
          iVar12 = 0;
          do {
            sVar2 = this_ptr->sample->sample_data[(int)ROUND(ROUND(local_c0))];
            iVar14 = 0;
            if (0 < mix_buffer.num_channels) {
              do {
                ppfVar1 = mix_buffer.channel_buffers + iVar14;
                *(float *)((int)*ppfVar1 + iVar12) =
                     (float)sVar2 * this_ptr->channel_volumes[iVar14] +
                     *(float *)((int)*ppfVar1 + iVar12);
                iVar14 = iVar14 + 1;
              } while (iVar14 < mix_buffer.num_channels);
            }
            local_c0 = local_c0 + resample_delta;
            iVar12 = iVar12 + 4;
          } while (iVar12 < iVar16);
        }
      }
      if (bVar7) {
        local_c0 = 0.0;
      }
      if (dVar5 <= local_c0) {
        local_c0 = local_c0 - dVar5;
      }
      sound_sndmain_cpp_CSfxSlot_updatePlaybackPos_FUN_005a8170(this_ptr,local_c0);
      if (bVar8) {
        iVar12 = this_ptr->loop_marker_index + 1;
        iVar16 = this_ptr->sample->loop_destinations[this_ptr->loop_marker_index];
        this_ptr->loop_marker_index = iVar12;
        pCVar5 = this_ptr->sample;
        (this_ptr->options).trigger_time = (double)iVar16;
        if (pCVar5->loop_marker_count <= iVar12) {
          this_ptr->loop_marker_index = 0;
        }
      }
      iVar16 = 0;
      mix_buffer.num_output_samples = mix_buffer.num_output_samples - local_a8;
      if (0 < mix_buffer.num_channels) {
        do {
          mix_buffer.channel_buffers[iVar16] = mix_buffer.channel_buffers[iVar16] + local_a8;
          iVar16 = iVar16 + 1;
        } while (iVar16 < mix_buffer.num_channels);
      }
    }
    sound_sndmain_cpp_CSfxSlot_kill_FUN_005a7e60(this_ptr);
LAB_005a770c:
    local_58 = 0;
    if (0 < mix_buffer.num_channels) {
      do {
        if (saved_channel_buffers[local_58] != 0) {
          iVar12 = 0;
          iVar14 = (iVar10 + this_ptr->channel_target_buffer_offsets[local_58]) -
                   this_ptr->channel_current_buffer_offsets[local_58];
          iVar11 = 0;
          if (0 < iVar14) {
            do {
              pfVar1 = saved_channel_buffers[local_58] + iVar11;
              saved_channel_buffers[local_58][iVar11] =
                   ((float *)g_ChannelTertiaryBuffers[local_58])[iVar12 / iVar14] + *pfVar1;
              iVar11 = iVar11 + 1;
              iVar12 = iVar12 + iVar10;
            } while (iVar11 < iVar14);
          }
          this_ptr->channel_current_buffer_offsets[local_58] =
               this_ptr->channel_target_buffer_offsets[local_58];
        }
        local_58 = local_58 + 1;
      } while (local_58 < mix_buffer.num_channels);
    }
  }
  return;
}
