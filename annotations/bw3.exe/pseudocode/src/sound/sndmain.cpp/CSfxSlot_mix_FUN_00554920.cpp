// Name: sound_sndmain.cpp_CSfxSlot_mix_FUN_00554920
// Address: 00554920
// Address Range: [[00554920, 00555260]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_mix_FUN_00554920(CSfxSlot *this_ptr,SMixBuffer mix_buffer)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSlot_mix_FUN_00554920(CSfxSlot *this_ptr,SMixBuffer mix_buffer)

{
  float *pfVar1;
  int *piVar2;
  double resample_delta;
  CSfxSample *pCVar3;
  int iVar4;
  float fVar5;
  double dVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  CSfxSlot *pCVar10;
  uint uVar11;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar12;
  float10 fVar13;
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
  
  if (_DAT_02cf341c < 1) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0xb9f;
    core_main_c_FUN_004e4330("SfxSlot::mix - must be locked!");
  }
  if (this_ptr->playback_state != 0) {
    local_64 = mix_buffer.num_output_samples;
    local_68 = 1;
    if ((this_ptr->sample != (CSfxSample *)0x0) &&
       (iVar9 = 0, pCVar10 = this_ptr, 0 < mix_buffer.num_channels)) {
      do {
        if (0x3c000000 < (int)pCVar10->channel_volumes[0]) {
          local_68 = 0;
          break;
        }
        iVar9 = iVar9 + 1;
        pCVar10 = (CSfxSlot *)&(pCVar10->options).position;
      } while (iVar9 < mix_buffer.num_channels);
    }
    iVar9 = 0;
    pCVar10 = this_ptr;
    if (0 < mix_buffer.num_channels) {
      do {
        if ((local_68 != 0) || (pCVar10->channel_current_buffer_offsets[0] < 0)) {
          pCVar10->channel_current_buffer_offsets[0] = pCVar10->channel_target_buffer_offsets[0];
        }
        mix_buffer.channel_buffers[iVar9] =
             mix_buffer.channel_buffers[iVar9] + pCVar10->channel_current_buffer_offsets[0];
        uVar7 = pCVar10->channel_current_buffer_offsets[0] -
                pCVar10->channel_target_buffer_offsets[0];
        uVar11 = (int)uVar7 >> 0x1f;
        if ((int)((uVar7 ^ uVar11) - uVar11) < 2) {
          aiStack_c4[iVar9] = 0;
        }
        else {
          aiStack_c4[iVar9] = (int)mix_buffer.channel_buffers[iVar9];
          mix_buffer.channel_buffers[iVar9] = *(float **)(iVar9 * 4 + 0x2cf32a8);
          memset
                    (mix_buffer.channel_buffers[iVar9],0,mix_buffer.num_output_samples << 2);
        }
        iVar9 = iVar9 + 1;
        pCVar10 = (CSfxSlot *)&(pCVar10->options).position;
      } while (iVar9 < mix_buffer.num_channels);
    }
    local_18 = 1 << ((char)(this_ptr->sample->sample_info).bit_depth - 1U & 0x1f);
    fVar5 = 1.0 / (float)local_18;
    iVar9 = 0;
    local_6c = fVar5;
    pCVar10 = this_ptr;
    if (0 < mix_buffer.num_channels) {
      do {
        iVar9 = iVar9 + 1;
        (&fStack_a8)[iVar9] = pCVar10->channel_volumes[0] * fVar5;
        pCVar10 = (CSfxSlot *)&(pCVar10->options).position;
      } while (iVar9 < mix_buffer.num_channels);
    }
    while (((iVar9 = mix_buffer.num_output_samples, this_ptr->playback_state != 0 &&
            (pCVar3 = this_ptr->sample, pCVar3 != (CSfxSample *)0x0)) &&
           (0.0 <= (this_ptr->options).playback_position))) {
      if ((mix_buffer.num_output_samples < 1) ||
         (resample_delta =
               (double)(((float)(pCVar3->sample_info).sample_rate /
                        (float)mix_buffer.output_sample_rate) * this_ptr->effective_frequency),
         resample_delta <= 0.0)) goto LAB_00554a6d;
      dVar6 = (double)pCVar3->streaming_buffer_size;
      local_5c = 0;
      local_c8 = mix_buffer.num_output_samples;
      if (0 < (pCVar3->sample_info).sample_count) {
        local_74 = floor
                             (((double)pCVar3->loop_endpoints[this_ptr->loop_marker_index] -
                              (this_ptr->options).playback_position) / resample_delta);
        fVar13 = (float10)local_74;
        round();
        local_54 = (int)ROUND(fVar13);
        if (local_54 < 0) {
          local_54 = 0;
        }
        if (local_54 < iVar9) {
          local_c8 = local_54;
          local_5c = 1;
        }
      }
      if (local_c8 < 0) {
        local_c8 = 0;
      }
      local_d0 = this_ptr->prev_hardware_playback_pos;
      local_58 = 0;
      local_74 = floor((dVar6 - local_d0) / resample_delta);
      fVar13 = (float10)local_74;
      round();
      local_4c = (int)ROUND(fVar13);
      if (local_4c < 1) {
        local_d0 = local_d0 - dVar6;
        if (local_d0 < 0.0) {
          local_d0 = 0.0;
        }
        local_74 = floor((dVar6 - local_d0) / resample_delta);
        fVar13 = (float10)local_74;
        round();
        local_4c = (int)ROUND(fVar13);
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
        pCVar3 = this_ptr->sample;
        iVar9 = local_c8 << 2;
        if ((pCVar3->sample_info).bit_depth == 8) {
          if ((pCVar3->sample_info).num_channels == 2) {
            if (0 < local_c8) {
              local_28 = 0;
              local_40 = iVar9;
              do {
                fVar13 = (float10)local_d0;
                round();
                local_84[0] = (float)(int)(*(byte *)(*(int *)(extraout_EDX + 0x120) +
                                                    (int)ROUND(fVar13) * 2) - 0x80);
                local_18 = *(byte *)((int)this_ptr->sample->sample_data + (int)ROUND(fVar13) * 2 + 1
                                    ) - 0x80;
                local_84[1] = (float)local_18;
                uVar7 = 0;
                if (0 < mix_buffer.num_channels) {
                  iVar9 = 0;
                  do {
                    uVar11 = uVar7 & 1;
                    iVar12 = *(int *)((int)mix_buffer.channel_buffers + iVar9);
                    uVar7 = uVar7 + 1;
                    *(float *)(iVar12 + local_28) =
                         local_84[uVar11] * *(float *)((int)&local_a4[0].left_gain + iVar9) +
                         *(float *)(iVar12 + local_28);
                    iVar9 = iVar9 + 4;
                  } while ((int)uVar7 < mix_buffer.num_channels);
                }
                local_d0 = local_d0 + resample_delta;
                local_28 = local_28 + 4;
              } while (local_28 < local_40);
            }
          }
          else if (0 < local_c8) {
            iVar12 = 0;
            local_3c = iVar9;
            do {
              fVar13 = (float10)local_d0;
              round();
              local_18 = *(byte *)((int)this_ptr->sample->sample_data + (int)ROUND(fVar13)) - 0x80;
              iVar9 = 0;
              local_20 = (float)local_18;
              if (0 < mix_buffer.num_channels) {
                iVar8 = 0;
                do {
                  iVar4 = *(int *)((int)mix_buffer.channel_buffers + iVar8);
                  iVar9 = iVar9 + 1;
                  *(float *)(iVar4 + iVar12) =
                       local_20 * *(float *)((int)&local_a4[0].left_gain + iVar8) +
                       *(float *)(iVar4 + iVar12);
                  iVar8 = iVar8 + 4;
                } while (iVar9 < mix_buffer.num_channels);
              }
              local_d0 = local_d0 + resample_delta;
              iVar12 = iVar12 + 4;
            } while (iVar12 < local_3c);
          }
        }
        else if ((pCVar3->sample_info).num_channels == 2) {
          if (mix_buffer.num_channels == 2) {
            local_d0 = sound_sndmain_cpp_mixResampleStereoToStereo_FUN_005531d0
                                 (pCVar3->sample_data,(SStereoBuffers *)&mix_buffer,local_a4,
                                  local_d0,resample_delta,local_c8);
            local_74 = local_d0;
          }
          else if (0 < local_c8) {
            local_24 = 0;
            local_38 = iVar9;
            do {
              fVar13 = (float10)local_d0;
              round();
              local_18 = (int)ROUND(fVar13);
              local_84[2] = (float)*(short *)(*(int *)(extraout_EDX_00 + 0x120) + local_18 * 4);
              local_84[3] = (float)this_ptr->sample->sample_data[local_18 * 2 + 1];
              uVar7 = 0;
              if (0 < mix_buffer.num_channels) {
                iVar9 = 0;
                do {
                  uVar11 = uVar7 & 1;
                  iVar12 = *(int *)((int)mix_buffer.channel_buffers + iVar9);
                  uVar7 = uVar7 + 1;
                  *(float *)(iVar12 + local_24) =
                       local_84[uVar11 + 2] * *(float *)((int)&local_a4[0].left_gain + iVar9) +
                       *(float *)(iVar12 + local_24);
                  iVar9 = iVar9 + 4;
                } while ((int)uVar7 < mix_buffer.num_channels);
              }
              local_d0 = local_d0 + resample_delta;
              local_24 = local_24 + 4;
            } while (local_24 < local_38);
          }
        }
        else if (mix_buffer.num_channels == 2) {
          local_d0 = sound_sndmain_cpp_mixResampleMonoToStereo_FUN_00553090
                               (pCVar3->sample_data,(SStereoBuffers *)&mix_buffer,local_a4,local_d0,
                                resample_delta,local_c8);
          local_74 = local_d0;
        }
        else if (0 < local_c8) {
          iVar12 = 0;
          local_44 = iVar9;
          do {
            fVar13 = (float10)local_d0;
            round();
            local_18 = (int)ROUND(fVar13);
            local_1c = (float)this_ptr->sample->sample_data[(int)ROUND(fVar13)];
            iVar9 = 0;
            if (0 < mix_buffer.num_channels) {
              iVar8 = 0;
              do {
                iVar4 = *(int *)((int)mix_buffer.channel_buffers + iVar8);
                iVar9 = iVar9 + 1;
                *(float *)(iVar4 + iVar12) =
                     local_1c * *(float *)((int)&local_a4[0].left_gain + iVar8) +
                     *(float *)(iVar4 + iVar12);
                iVar8 = iVar8 + 4;
              } while (iVar9 < mix_buffer.num_channels);
            }
            local_d0 = local_d0 + resample_delta;
            iVar12 = iVar12 + 4;
          } while (iVar12 < local_44);
        }
      }
      else {
        local_18 = local_c8;
        local_d0 = (double)local_c8 * resample_delta + local_d0;
      }
      if (local_58 != 0) {
        local_d0 = 0.0;
      }
      if (dVar6 <= local_d0) {
        local_d0 = local_d0 - dVar6;
      }
      sound_sndmain_cpp_CSfxSlot_updatePlaybackPos_FUN_00555530(this_ptr,local_d0);
      if (local_5c != 0) {
        iVar12 = this_ptr->loop_marker_index + 1;
        iVar9 = this_ptr->sample->loop_destinations[this_ptr->loop_marker_index];
        this_ptr->loop_marker_index = iVar12;
        pCVar3 = this_ptr->sample;
        (this_ptr->options).playback_position = (double)iVar9;
        if (pCVar3->loop_marker_count <= iVar12) {
          this_ptr->loop_marker_index = 0;
        }
      }
      iVar9 = 0;
      mix_buffer.num_output_samples = mix_buffer.num_output_samples - local_c8;
      if (0 < mix_buffer.num_channels) {
        iVar12 = 0;
        do {
          piVar2 = (int *)((int)mix_buffer.channel_buffers + iVar12);
          *piVar2 = *piVar2 + local_c8 * 4;
          iVar9 = iVar9 + 1;
          iVar12 = iVar12 + 4;
        } while (iVar9 < mix_buffer.num_channels);
      }
    }
    sound_sndmain_cpp_CSfxSlot_kill_FUN_00555270(this_ptr);
LAB_00554a6d:
    local_60 = 0;
    if (0 < mix_buffer.num_channels) {
      local_50 = 0;
      do {
        if (*(int *)((int)aiStack_c4 + local_50) != 0) {
          local_2c = local_50;
          local_48 = local_64;
          iVar9 = 0;
          local_34 = (local_64 + *(int *)((int)this_ptr->channel_target_buffer_offsets + local_50))
                     - *(int *)((int)this_ptr->channel_current_buffer_offsets + local_50);
          local_30 = local_34 * 4;
          iVar12 = 0;
          if (0 < local_30) {
            do {
              local_18 = (iVar9 / local_34) * 4;
              pfVar1 = (float *)(*(int *)((int)aiStack_c4 + local_50) + iVar12);
              iVar12 = iVar12 + 4;
              *(float *)(*(int *)((int)aiStack_c4 + local_50) + -4 + iVar12) =
                   *(float *)(*(int *)(local_50 + 0x2cf32a8) + local_18) + *pfVar1;
              iVar9 = iVar9 + local_64;
            } while (iVar12 < local_30);
          }
          *(uint *)((int)this_ptr->channel_current_buffer_offsets + local_50) =
               *(uint *)((int)this_ptr->channel_target_buffer_offsets + local_50);
        }
        local_60 = local_60 + 1;
        local_50 = local_50 + 4;
      } while (local_60 < mix_buffer.num_channels);
    }
  }
  return;
}
