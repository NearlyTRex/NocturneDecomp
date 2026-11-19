// Name: sound_sndmain.cpp_CSfxSlot_mix_FUN_00554920
// Address: 00554920
// Address Range: [[00554920, 00555260]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_mix_FUN_00554920(CSfxSlot *this_ptr,SMixBuffer mix_buffer)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSlot_mix_FUN_00554920(CSfxSlot *this_ptr,SMixBuffer mix_buffer)

{
  float *pfVar1;
  int *piVar2;
  CSfxSample *pCVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  double resample_delta;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  CSfxSlot *pCVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  uint uVar15;
  uint local_e0;
  uint uStack_dc;
  uint local_d8;
  uint uStack_d4;
  int local_d0;
  int iStack_cc;
  int local_c8;
  int aiStack_c4 [5];
  float fStack_b0;
  SStereoGains SStack_ac;
  float local_a4 [5];
  float afStack_90 [5];
  uint local_7c;
  uint local_78;
  uint local_74;
  int iStack_70;
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
  int local_34;
  int local_30;
  float local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_18;
  
  if (g_SoundLockCount < 1) {
    g_CHAR_PTR_01d71de0 = "..\\sound\\sndmain.cpp";
    g_INT_01d71de4 = 0xb9f;
    core_main_c_displayErrorAndQuit_FUN_004e4330("SfxSlot::mix - must be locked!");
  }
  if (this_ptr->playback_state != 0) {
    local_64 = mix_buffer.num_output_samples;
    local_68 = 1;
    if ((this_ptr->sample != (CSfxSample *)0x0) &&
       (iVar10 = 0, pCVar11 = this_ptr, 0 < mix_buffer.num_channels)) {
      do {
        if (0x3c000000 < (int)pCVar11->channel_volumes[0]) {
          local_68 = 0;
          break;
        }
        iVar10 = iVar10 + 1;
        pCVar11 = (CSfxSlot *)&(pCVar11->options).position;
      } while (iVar10 < mix_buffer.num_channels);
    }
    iVar10 = 0;
    pCVar11 = this_ptr;
    if (0 < mix_buffer.num_channels) {
      do {
        if ((local_68 != 0) || (pCVar11->channel_current_buffer_offsets[0] < 0)) {
          pCVar11->channel_current_buffer_offsets[0] = pCVar11->channel_target_buffer_offsets[0];
        }
        mix_buffer.channel_buffers[iVar10] =
             mix_buffer.channel_buffers[iVar10] + pCVar11->channel_current_buffer_offsets[0];
        uVar7 = pCVar11->channel_current_buffer_offsets[0] -
                pCVar11->channel_target_buffer_offsets[0];
        uVar12 = (int)uVar7 >> 0x1f;
        if ((int)((uVar7 ^ uVar12) - uVar12) < 2) {
          aiStack_c4[iVar10] = 0;
        }
        else {
          aiStack_c4[iVar10] = (int)mix_buffer.channel_buffers[iVar10];
          mix_buffer.channel_buffers[iVar10] = g_ChannelTertiaryBuffers[iVar10];
          memset
                    (mix_buffer.channel_buffers[iVar10],0,mix_buffer.num_output_samples << 2);
        }
        iVar10 = iVar10 + 1;
        pCVar11 = (CSfxSlot *)&(pCVar11->options).position;
      } while (iVar10 < mix_buffer.num_channels);
    }
    local_18 = 1 << ((char)(this_ptr->sample->sample_info).bit_depth - 1U & 0x1f);
    fVar6 = 1.0 / (float)local_18;
    iVar10 = 0;
    local_6c = fVar6;
    pCVar11 = this_ptr;
    if (0 < mix_buffer.num_channels) {
      do {
        iVar8 = iVar10 + 1;
        local_a4[iVar10] = pCVar11->channel_volumes[0] * fVar6;
        iVar10 = iVar8;
        pCVar11 = (CSfxSlot *)&(pCVar11->options).position;
      } while (iVar8 < mix_buffer.num_channels);
    }
    while (((iVar10 = mix_buffer.num_output_samples, this_ptr->playback_state != 0 &&
            (pCVar3 = this_ptr->sample, pCVar3 != (CSfxSample *)0x0)) &&
           (0.0 <= (this_ptr->options).playback_position))) {
      if (mix_buffer.num_output_samples < 1) goto LAB_00554a6d;
      dVar14 = (double)(((float)(pCVar3->sample_info).sample_rate /
                        (float)mix_buffer.output_sample_rate) * this_ptr->effective_frequency);
      local_d8 = SUB84(__BITCAST_UINT64(dVar14),0);
      uStack_d4 = (uint)((ulonglong)dVar14 >> 0x20);
      if (dVar14 <= 0.0) goto LAB_00554a6d;
      resample_delta = (double)pCVar3->streaming_buffer_size;
      local_e0 = SUB84(__BITCAST_UINT64(resample_delta),0);
      uStack_dc = (uint)((ulonglong)resample_delta >> 0x20);
      local_5c = 0;
      local_c8 = mix_buffer.num_output_samples;
      if (0 < (pCVar3->sample_info).sample_count) {
        dVar13 = floor
                           (((double)pCVar3->loop_endpoints[this_ptr->loop_marker_index] -
                            (this_ptr->options).playback_position) / dVar14);
        local_74 = SUB84(__BITCAST_UINT64(dVar13),0);
        iStack_70 = (int)((ulonglong)dVar13 >> 0x20);
        dVar13 = round(dVar13);
        local_58 = (int)ROUND(dVar13);
        if (local_58 < 0) {
          local_58 = 0;
        }
        if (local_58 < iStack_cc) {
          local_60 = 1;
        }
      }
      if (iVar10 < 0) {
        local_c8 = 0;
      }
      uVar4 = *(uint *)&this_ptr->prev_hardware_playback_pos;
      dVar13 = __BITCAST_DOUBLE(CONCAT44(uVar4,uStack_d4));
      iStack_cc = *(uint *)((int)&this_ptr->prev_hardware_playback_pos + 4);
      local_58 = 0;
      dVar14 = floor
                         ((resample_delta - this_ptr->prev_hardware_playback_pos) / dVar14);
      local_74 = SUB84(__BITCAST_UINT64(dVar14),0);
      iStack_70 = (int)((ulonglong)dVar14 >> 0x20);
      uVar15 = 0x554c3e;
      dVar14 = round(dVar14);
      local_50 = (int)ROUND(dVar14);
      if (local_50 < 1) {
        dVar13 = __BITCAST_DOUBLE(CONCAT44(uVar4,uStack_d4)) - __BITCAST_DOUBLE(CONCAT44(local_e0,uVar15));
        if (dVar13 < 0.0) {
          dVar13 = 0.0;
        }
        dVar14 = floor
                           ((__BITCAST_DOUBLE(CONCAT44(local_e0,uVar15)) - dVar13) /
                            __BITCAST_DOUBLE(CONCAT44(local_d8,uStack_dc)));
        local_78 = SUB84(__BITCAST_UINT64(dVar14),0);
        local_74 = (uint)((ulonglong)dVar14 >> 0x20);
        dVar14 = round(dVar14);
        local_54 = (int)ROUND(dVar14);
      }
      local_d0 = (int)((ulonglong)dVar13 >> 0x20);
      uStack_d4 = SUB84(__BITCAST_UINT64(dVar13),0);
      if (local_54 < local_d0) {
        local_d0 = local_54;
        local_64 = 0;
        local_60 = 1;
      }
      else if (local_54 == local_d0) {
        local_60 = 1;
      }
      if (local_d0 < 0) {
        local_d0 = 0;
      }
      if (iStack_70 == 0) {
        pCVar3 = this_ptr->sample;
        iVar10 = local_d0 << 2;
        if ((pCVar3->sample_info).bit_depth == 8) {
          if ((pCVar3->sample_info).num_channels == 2) {
            if (0 < local_d0) {
              local_30 = 0;
              local_48 = iVar10;
              do {
                pCVar3 = this_ptr->sample;
                dVar14 = round(__BITCAST_DOUBLE(CONCAT44(uStack_d4,local_d8)));
                afStack_90[0] =
                     (float)(int)(*(byte *)(pCVar3->sample_data + (int)ROUND(dVar14)) - 0x80);
                local_24 = *(byte *)((int)this_ptr->sample->sample_data + (int)ROUND(dVar14) * 2 + 1
                                    ) - 0x80;
                afStack_90[1] = (float)local_24;
                uVar7 = 0;
                if (0 < mix_buffer.num_channels) {
                  iVar10 = 0;
                  do {
                    uVar12 = uVar7 & 1;
                    iVar8 = *(int *)((int)mix_buffer.channel_buffers + iVar10);
                    uVar7 = uVar7 + 1;
                    *(float *)(iVar8 + local_34) =
                         afStack_90[uVar12] * *(float *)((int)&fStack_b0 + iVar10) +
                         *(float *)(iVar8 + local_34);
                    iVar10 = iVar10 + 4;
                  } while ((int)uVar7 < mix_buffer.num_channels);
                }
                dVar14 = __BITCAST_DOUBLE(CONCAT44(local_d8,uStack_dc)) + __BITCAST_DOUBLE(CONCAT44(local_e0,uVar15));
                local_34 = local_34 + 4;
                uStack_dc = SUB84(__BITCAST_UINT64(dVar14),0);
                resample_delta = __BITCAST_DOUBLE(CONCAT44(uStack_dc,local_e0));
                local_d8 = (uint)((ulonglong)dVar14 >> 0x20);
              } while (local_34 < local_4c);
            }
          }
          else if (0 < local_d0) {
            iVar8 = 0;
            local_44 = iVar10;
            do {
              dVar14 = round(__BITCAST_DOUBLE(CONCAT44(uStack_d4,local_d8)));
              local_24 = *(byte *)((int)this_ptr->sample->sample_data + (int)ROUND(dVar14)) - 0x80;
              iVar10 = 0;
              local_2c = (float)local_24;
              if (0 < mix_buffer.num_channels) {
                iVar9 = 0;
                do {
                  iVar5 = *(int *)((int)mix_buffer.channel_buffers + iVar9);
                  iVar10 = iVar10 + 1;
                  *(float *)(iVar5 + iVar8) =
                       local_2c * *(float *)((int)&fStack_b0 + iVar9) + *(float *)(iVar5 + iVar8);
                  iVar9 = iVar9 + 4;
                } while (iVar10 < mix_buffer.num_channels);
              }
              dVar14 = __BITCAST_DOUBLE(CONCAT44(local_d8,uStack_dc)) + __BITCAST_DOUBLE(CONCAT44(local_e0,uVar15));
              iVar8 = iVar8 + 4;
              uStack_dc = SUB84(__BITCAST_UINT64(dVar14),0);
              resample_delta = __BITCAST_DOUBLE(CONCAT44(uStack_dc,local_e0));
              local_d8 = (uint)((ulonglong)dVar14 >> 0x20);
            } while (iVar8 < local_48);
          }
        }
        else if ((pCVar3->sample_info).num_channels == 2) {
          if (mix_buffer.num_channels == 2) {
            dVar14 = sound_sndmain_cpp_mixResampleStereoToStereo_FUN_005531d0
                               (pCVar3->sample_data,(SStereoBuffers *)&mix_buffer,&SStack_ac,
                                __BITCAST_DOUBLE(CONCAT44(uStack_d4,local_d8)),resample_delta,local_d0);
            local_7c = SUB84(__BITCAST_UINT64(dVar14),0);
            local_78 = (uint)((ulonglong)dVar14 >> 0x20);
          }
          else if (0 < local_d0) {
            local_2c = 0.0;
            local_40 = iVar10;
            do {
              pCVar3 = this_ptr->sample;
              dVar14 = round(__BITCAST_DOUBLE(CONCAT44(uStack_d4,local_d8)));
              local_24 = (int)ROUND(dVar14);
              afStack_90[2] = (float)pCVar3->sample_data[local_24 * 2];
              afStack_90[3] = (float)this_ptr->sample->sample_data[local_24 * 2 + 1];
              uVar7 = 0;
              if (0 < mix_buffer.num_channels) {
                iVar10 = 0;
                do {
                  uVar12 = uVar7 & 1;
                  iVar8 = *(int *)((int)mix_buffer.channel_buffers + iVar10);
                  uVar7 = uVar7 + 1;
                  *(float *)(iVar8 + local_30) =
                       afStack_90[uVar12 + 2] * *(float *)((int)&fStack_b0 + iVar10) +
                       *(float *)(iVar8 + local_30);
                  iVar10 = iVar10 + 4;
                } while ((int)uVar7 < mix_buffer.num_channels);
              }
              dVar14 = __BITCAST_DOUBLE(CONCAT44(local_d8,uStack_dc)) + __BITCAST_DOUBLE(CONCAT44(local_e0,uVar15));
              local_30 = local_30 + 4;
              uStack_dc = SUB84(__BITCAST_UINT64(dVar14),0);
              resample_delta = __BITCAST_DOUBLE(CONCAT44(uStack_dc,local_e0));
              local_d8 = (uint)((ulonglong)dVar14 >> 0x20);
            } while (local_30 < local_44);
          }
        }
        else if (mix_buffer.num_channels == 2) {
          dVar14 = sound_sndmain_cpp_mixResampleMonoToStereo_FUN_00553090
                             (pCVar3->sample_data,(SStereoBuffers *)&mix_buffer,&SStack_ac,
                              __BITCAST_DOUBLE(CONCAT44(uStack_d4,local_d8)),resample_delta,local_d0);
          local_7c = SUB84(__BITCAST_UINT64(dVar14),0);
          local_78 = (uint)((ulonglong)dVar14 >> 0x20);
        }
        else if (0 < local_d0) {
          iVar8 = 0;
          local_4c = iVar10;
          do {
            dVar14 = round(__BITCAST_DOUBLE(CONCAT44(uStack_d4,local_d8)));
            local_24 = (int)ROUND(dVar14);
            local_28 = (float)this_ptr->sample->sample_data[(int)ROUND(dVar14)];
            iVar10 = 0;
            if (0 < mix_buffer.num_channels) {
              iVar9 = 0;
              do {
                iVar5 = *(int *)((int)mix_buffer.channel_buffers + iVar9);
                iVar10 = iVar10 + 1;
                *(float *)(iVar5 + iVar8) =
                     local_28 * *(float *)((int)&fStack_b0 + iVar9) + *(float *)(iVar5 + iVar8);
                iVar9 = iVar9 + 4;
              } while (iVar10 < mix_buffer.num_channels);
            }
            dVar14 = __BITCAST_DOUBLE(CONCAT44(local_d8,uStack_dc)) + __BITCAST_DOUBLE(CONCAT44(local_e0,uVar15));
            iVar8 = iVar8 + 4;
            uStack_dc = SUB84(__BITCAST_UINT64(dVar14),0);
            resample_delta = __BITCAST_DOUBLE(CONCAT44(uStack_dc,local_e0));
            local_d8 = (uint)((ulonglong)dVar14 >> 0x20);
          } while (iVar8 < local_50);
        }
      }
      else {
        local_20 = local_d0;
      }
      if (local_58 != 0) {
        local_d0 = 0;
        iStack_cc = 0;
      }
      dVar14 = __BITCAST_DOUBLE(CONCAT44(iStack_cc,local_d0));
      if (resample_delta <= dVar14) {
        dVar14 = __BITCAST_DOUBLE(CONCAT44(iStack_cc,local_d0)) - resample_delta;
      }
      iStack_cc = (int)((ulonglong)dVar14 >> 0x20);
      sound_sndmain_cpp_CSfxSlot_updatePlaybackPos_FUN_00555530(this_ptr,dVar14);
      if (local_5c != 0) {
        iVar8 = this_ptr->loop_marker_index + 1;
        iVar10 = this_ptr->sample->loop_destinations[this_ptr->loop_marker_index];
        this_ptr->loop_marker_index = iVar8;
        pCVar3 = this_ptr->sample;
        (this_ptr->options).playback_position = (double)iVar10;
        if (pCVar3->loop_marker_count <= iVar8) {
          this_ptr->loop_marker_index = 0;
        }
      }
      iVar10 = 0;
      mix_buffer.num_output_samples = mix_buffer.num_output_samples - local_c8;
      if (0 < mix_buffer.num_channels) {
        iVar8 = 0;
        do {
          piVar2 = (int *)((int)mix_buffer.channel_buffers + iVar8);
          *piVar2 = *piVar2 + local_c8 * 4;
          iVar10 = iVar10 + 1;
          iVar8 = iVar8 + 4;
        } while (iVar10 < mix_buffer.num_channels);
      }
    }
    sound_sndmain_cpp_CSfxSlot_kill_FUN_00555270(this_ptr);
LAB_00554a6d:
    local_60 = 0;
    if (0 < mix_buffer.num_channels) {
      local_50 = 0;
      do {
        if (*(int *)((int)aiStack_c4 + local_50) != 0) {
          local_2c = (float)local_50;
          local_48 = local_64;
          iVar10 = 0;
          local_34 = (local_64 + *(int *)((int)this_ptr->channel_target_buffer_offsets + local_50))
                     - *(int *)((int)this_ptr->channel_current_buffer_offsets + local_50);
          local_30 = local_34 * 4;
          iVar8 = 0;
          if (0 < local_30) {
            do {
              local_18 = (iVar10 / local_34) * 4;
              pfVar1 = (float *)(*(int *)((int)aiStack_c4 + local_50) + iVar8);
              iVar8 = iVar8 + 4;
              *(float *)(*(int *)((int)aiStack_c4 + local_50) + -4 + iVar8) =
                   *(float *)(*(int *)((int)g_ChannelTertiaryBuffers + local_50) + local_18) +
                   *pfVar1;
              iVar10 = iVar10 + local_64;
            } while (iVar8 < local_30);
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
