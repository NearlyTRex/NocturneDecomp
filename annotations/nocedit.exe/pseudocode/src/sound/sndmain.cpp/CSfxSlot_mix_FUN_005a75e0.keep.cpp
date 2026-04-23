// Name: sound_sndmain.cpp_CSfxSlot_mix_FUN_005a75e0
// Address: 005a75e0
// MANUAL RECONSTRUCTION
// Address Range: [[005a75e0, 005a7e52]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_mix_FUN_005a75e0(CSfxSlot *this_ptr,SMixBuffer mix_buffer)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

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
  CSfxSlot *pCVar8;
  int iVar12;
  int iVar9;
  uint uVar10;
  CSfxSlot *pCVar13;
  int iVar14;
  uint uVar15;
  int iVar11;
  int iVar16;
  double dVar17;
  double local_c0;
  int local_a8;
  int aiStack_a4 [8];
  double local_84;
  float local_7c [4];
  float local_6c;
  SStereoGains *local_68;
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
  CSfxSample *pCVar4;
  float *pfVar1;
  float **ppfVar3;
  double resample_delta;
  int *piVar2;
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
      pCVar8 = this_ptr;
      if (0 < mix_buffer.num_channels) {
        do {
          if (1.0 / (float)(1 << ((char)(this_ptr->sample->sample_info).bit_depth + 6U & 0x1f)) <
              pCVar8->channel_volumes[0]) {
            bVar6 = false;
            break;
          }
          iVar9 = iVar9 + 1;
          pCVar8 = (CSfxSlot *)&(pCVar8->options).position;
        } while (iVar9 < mix_buffer.num_channels);
      }
    }
    iVar16 = 0;
    pCVar13 = this_ptr;
    if (0 < mix_buffer.num_channels) {
      do {
        if ((bVar6) || (pCVar13->channel_current_buffer_offsets[0] < 0)) {
          pCVar13->channel_current_buffer_offsets[0] = pCVar13->channel_target_buffer_offsets[0];
        }
        mix_buffer.channel_buffers[iVar16] =
             mix_buffer.channel_buffers[iVar16] + pCVar13->channel_current_buffer_offsets[0];
        uVar6 = pCVar13->channel_current_buffer_offsets[0] -
                pCVar13->channel_target_buffer_offsets[0];
        uVar10 = (int)uVar6 >> 0x1f;
        if ((int)((uVar6 ^ uVar10) - uVar10) < 2) {
          aiStack_a4[iVar16] = 0;
        }
        else {
          aiStack_a4[iVar16] = (int)mix_buffer.channel_buffers[iVar16];
          mix_buffer.channel_buffers[iVar16] = g_ChannelTertiaryBuffers[iVar16];
          memset
                    (mix_buffer.channel_buffers[iVar16],0,mix_buffer.num_output_samples << 2);
        }
        iVar16 = iVar16 + 1;
        pCVar13 = (CSfxSlot *)&(pCVar13->options).position;
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
                local_7c[2] = (float)(int)(*(byte *)(this_ptr->sample->sample_data +
                                                    (int)ROUND(ROUND(local_c0))) - 0x80);
                local_7c[3] = (float)(int)(*(byte *)((int)this_ptr->sample->sample_data +
                                                    (int)ROUND(ROUND(local_c0)) * 2 + 1) - 0x80);
                uVar11 = 0;
                pCVar13 = this_ptr;
                if (0 < mix_buffer.num_channels) {
                  do {
                    uVar15 = uVar11 & 1;
                    ppfVar3 = mix_buffer.channel_buffers + uVar11;
                    uVar11 = uVar11 + 1;
                    *(float *)((int)*ppfVar3 + local_20) =
                         local_7c[uVar15 + 2] * pCVar13->channel_volumes[0] +
                         *(float *)((int)*ppfVar3 + local_20);
                    pCVar13 = (CSfxSlot *)&(pCVar13->options).position;
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
              bVar3 = *(byte *)((int)this_ptr->sample->sample_data + (int)ROUND(ROUND(local_c0)));
              iVar7 = 0;
              pCVar13 = this_ptr;
              if (0 < mix_buffer.num_channels) {
                do {
                  ppfVar1 = mix_buffer.channel_buffers + iVar7;
                  iVar7 = iVar7 + 1;
                  *(float *)((int)*ppfVar1 + iVar12) =
                       (float)(int)(bVar3 - 0x80) * pCVar13->channel_volumes[0] +
                       *(float *)((int)*ppfVar1 + iVar12);
                  pCVar13 = (CSfxSlot *)&(pCVar13->options).position;
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
              pCVar13 = this_ptr;
              if (0 < mix_buffer.num_channels) {
                do {
                  uVar15 = uVar11 & 1;
                  ppfVar1 = mix_buffer.channel_buffers + uVar11;
                  uVar11 = uVar11 + 1;
                  *(float *)((int)*ppfVar1 + local_24) =
                       local_7c[uVar15] * pCVar13->channel_volumes[0] +
                       *(float *)((int)*ppfVar1 + local_24);
                  pCVar13 = (CSfxSlot *)&(pCVar13->options).position;
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
            pCVar13 = this_ptr;
            if (0 < mix_buffer.num_channels) {
              do {
                ppfVar1 = mix_buffer.channel_buffers + iVar14;
                iVar14 = iVar14 + 1;
                *(float *)((int)*ppfVar1 + iVar12) =
                     (float)sVar2 * pCVar13->channel_volumes[0] + *(float *)((int)*ppfVar1 + iVar12)
                ;
                pCVar13 = (CSfxSlot *)&(pCVar13->options).position;
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
        iVar12 = 0;
        do {
          piVar2 = (int *)((int)mix_buffer.channel_buffers + iVar12);
          *piVar2 = *piVar2 + local_a8 * 4;
          iVar16 = iVar16 + 1;
          iVar12 = iVar12 + 4;
        } while (iVar16 < mix_buffer.num_channels);
      }
    }
    sound_sndmain_cpp_CSfxSlot_kill_FUN_005a7e60(this_ptr);
LAB_005a770c:
    local_58 = 0;
    if (0 < mix_buffer.num_channels) {
      local_4c = 0;
      do {
        if (*(int *)((int)aiStack_a4 + local_4c) != 0) {
          iVar12 = 0;
          iVar14 = (iVar10 + *(int *)((int)this_ptr->channel_target_buffer_offsets + local_4c)) -
                   *(int *)((int)this_ptr->channel_current_buffer_offsets + local_4c);
          iVar16 = iVar14 * 4;
          iVar11 = 0;
          if (0 < iVar16) {
            do {
              pfVar1 = (float *)(*(int *)((int)aiStack_a4 + local_4c) + iVar11);
              iVar11 = iVar11 + 4;
              *(float *)(*(int *)((int)aiStack_a4 + local_4c) + -4 + iVar11) =
                   *(float *)(*(int *)((int)g_ChannelTertiaryBuffers + local_4c) +
                             (iVar12 / iVar14) * 4) + *pfVar1;
              iVar12 = iVar12 + iVar10;
            } while (iVar11 < iVar16);
          }
          *(uint *)((int)this_ptr->channel_current_buffer_offsets + local_4c) =
               *(uint *)((int)this_ptr->channel_target_buffer_offsets + local_4c);
        }
        local_4c = local_4c + 4;
        local_58 = local_58 + 1;
      } while (local_58 < mix_buffer.num_channels);
    }
  }
  return;
}
