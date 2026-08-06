// Name: sound_sndmain.cpp_CSfxSlot_mix_FUN_00524d10
// Address: 00524d10
// Address Range: [[00524d10, 0052556b]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_mix_FUN_00524d10(CSfxSlot *this_ptr,SMixBuffer mix_buffer)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSlot_mix_FUN_00524d10(CSfxSlot *this_ptr,SMixBuffer mix_buffer)

{
  float *pfVar1;
  int *piVar2;
  float **ppfVar3;
  CSfxSample *pCVar4;
  double resample_delta;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  CSfxSlot *pCVar9;
  int iVar10;
  double dVar11;
  uint uVar12;
  uint uVar13;
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
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 2586;
    core_main_c_displayErrorAndQuit_FUN_004c8440("SfxSlot::mix - must be locked!");
  }
  if (this_ptr->playback_state != 0) {
    local_58 = mix_buffer.num_output_samples;
    local_64 = 1;
    if (this_ptr->sample != (CSfxSample *)0x0) {
      local_14 = 1 << ((char)(this_ptr->sample->sample_info).bit_depth + 6U & 0x1f);
      local_6c = 1.0 / (float)local_14;
      iVar7 = 0;
      pCVar9 = this_ptr;
      if (0 < mix_buffer.num_channels) {
        do {
          if (local_6c < pCVar9->channel_volumes[0]) {
            local_64 = 0;
            break;
          }
          iVar7 = iVar7 + 1;
          pCVar9 = (CSfxSlot *)&(pCVar9->options).position;
        } while (iVar7 < mix_buffer.num_channels);
      }
    }
    iVar7 = 0;
    pCVar9 = this_ptr;
    if (0 < mix_buffer.num_channels) {
      do {
        if ((local_64 != 0) || (pCVar9->channel_current_buffer_offsets[0] < 0)) {
          pCVar9->channel_current_buffer_offsets[0] = pCVar9->channel_target_buffer_offsets[0];
        }
        mix_buffer.channel_buffers[iVar7] =
             mix_buffer.channel_buffers[iVar7] + pCVar9->channel_current_buffer_offsets[0];
        uVar5 = pCVar9->channel_current_buffer_offsets[0] - pCVar9->channel_target_buffer_offsets[0]
        ;
        uVar8 = (int)uVar5 >> 0x1f;
        if ((int)((uVar5 ^ uVar8) - uVar8) < 2) {
          aiStack_a4[iVar7] = 0;
        }
        else {
          aiStack_a4[iVar7] = (int)mix_buffer.channel_buffers[iVar7];
          mix_buffer.channel_buffers[iVar7] = *(float **)(iVar7 * 4 + 0x2dc833c);
          memset
                    (mix_buffer.channel_buffers[iVar7],0,mix_buffer.num_output_samples << 2);
        }
        iVar7 = iVar7 + 1;
        pCVar9 = (CSfxSlot *)&(pCVar9->options).position;
      } while (iVar7 < mix_buffer.num_channels);
    }
    local_68 = this_ptr->channel_volumes;
    while (((iVar7 = mix_buffer.num_output_samples, this_ptr->playback_state != 0 &&
            (pCVar4 = this_ptr->sample, pCVar4 != (CSfxSample *)0x0)) &&
           (0.0 <= (this_ptr->options).trigger_time))) {
      if (mix_buffer.num_output_samples < 1) goto LAB_00524e3c;
      dVar11 = (double)(((float)(pCVar4->sample_info).sample_rate /
                        (float)mix_buffer.output_sample_rate) * this_ptr->effective_frequency);
      local_b0 = SUB84(__BITCAST_UINT64(dVar11),0);
      iStack_ac = (int)((ulonglong)dVar11 >> 0x20);
      if (dVar11 <= 0.0) goto LAB_00524e3c;
      resample_delta = (double)pCVar4->streaming_buffer_size;
      local_b8 = SUB84(resample_delta,0);
      uStack_b4 = (uint)((ulonglong)resample_delta >> 0x20);
      local_50 = 0;
      if (0 < (pCVar4->sample_info).sample_count) {
        dVar11 = floor
                           (((double)(pCVar4->sample_info).sample_count -
                            (this_ptr->options).trigger_time) / dVar11);
        local_74 = SUB84(__BITCAST_UINT64(dVar11),0);
        pSStack_70 = (SStereoGains *)((ulonglong)dVar11 >> 0x20);
        dVar11 = round(dVar11);
        local_64 = (int)ROUND(dVar11);
        if (local_64 < iVar7) {
          local_54 = 1;
          iStack_ac = local_64;
        }
      }
      local_c0 = *(uint *)&this_ptr->prev_hardware_playback_pos;
      uStack_bc = *(uint *)((int)&this_ptr->prev_hardware_playback_pos + 4);
      dVar11 = (resample_delta - this_ptr->prev_hardware_playback_pos) /
               __BITCAST_DOUBLE(CONCAT44(iStack_ac,local_b0));
      local_5c = 0;
      uVar12 = SUB84(__BITCAST_UINT64(dVar11),0);
      dVar11 = floor(dVar11);
      local_74 = SUB84(__BITCAST_UINT64(dVar11),0);
      pSStack_70 = (SStereoGains *)((ulonglong)dVar11 >> 0x20);
      uVar13 = 0x524fc6;
      dVar11 = round(dVar11);
      local_4c = (int)ROUND(dVar11);
      if (local_4c < 1) {
        dVar11 = __BITCAST_DOUBLE(CONCAT44(local_c0,uVar13)) - __BITCAST_DOUBLE(CONCAT44(local_b8,uStack_bc));
        if (dVar11 < 0.0) {
          dVar11 = 0.0;
        }
        local_c0 = (uint)((ulonglong)dVar11 >> 0x20);
        uVar13 = SUB84(__BITCAST_UINT64(dVar11),0);
        dVar11 = floor
                           ((__BITCAST_DOUBLE(CONCAT44(local_b8,uStack_bc)) - dVar11) /
                            __BITCAST_DOUBLE(CONCAT44(local_b0,uStack_b4)));
        local_78 = SUB84(__BITCAST_UINT64(dVar11),0);
        local_74 = (uint)((ulonglong)dVar11 >> 0x20);
        uVar12 = 0x52501a;
        dVar11 = round(dVar11);
        local_50 = (int)ROUND(dVar11);
      }
      dVar11 = __BITCAST_DOUBLE(CONCAT44(uVar13,uVar12));
      if (local_50 < local_b0) {
        local_b0 = local_50;
        local_58 = 0;
      }
      else if (local_50 == local_b0) {
        local_64 = 1;
      }
      if (local_6c == 0.0) {
        pCVar4 = this_ptr->sample;
        iVar10 = local_b0 << 2;
        if ((pCVar4->sample_info).bit_depth == 8) {
          if ((pCVar4->sample_info).num_channels == 2) {
            if (0 < local_b0) {
              local_28 = 0.0;
              local_44 = iVar10;
              do {
                uVar13 = (uint)((ulonglong)dVar11 >> 0x20);
                pCVar4 = this_ptr->sample;
                uVar12 = 0x525154;
                dVar11 = round(dVar11);
                afStack_90[2] =
                     (float)(int)(*(byte *)(pCVar4->sample_data + (int)ROUND(dVar11)) - 0x80);
                local_20 = *(byte *)((int)this_ptr->sample->sample_data + (int)ROUND(dVar11) * 2 + 1
                                    ) - 0x80;
                afStack_90[3] = (float)local_20;
                uVar5 = 0;
                pCVar9 = this_ptr;
                if (0 < mix_buffer.num_channels) {
                  do {
                    uVar8 = uVar5 & 1;
                    ppfVar3 = mix_buffer.channel_buffers + uVar5;
                    uVar5 = uVar5 + 1;
                    *(float *)((int)*ppfVar3 + local_2c) =
                         afStack_90[uVar8 + 2] * pCVar9->channel_volumes[0] +
                         *(float *)((int)*ppfVar3 + local_2c);
                    pCVar9 = (CSfxSlot *)&(pCVar9->options).position;
                  } while ((int)uVar5 < mix_buffer.num_channels);
                }
                dVar11 = __BITCAST_DOUBLE(CONCAT44(uVar13,uVar12)) + __BITCAST_DOUBLE(CONCAT44(local_b8,uStack_bc));
                local_2c = local_2c + 4;
              } while (local_2c < local_48);
            }
          }
          else if (0 < local_b0) {
            iVar6 = 0;
            local_48 = iVar10;
            do {
              uVar13 = (uint)((ulonglong)dVar11 >> 0x20);
              uVar12 = 0x525233;
              dVar11 = round(dVar11);
              local_20 = *(byte *)((int)this_ptr->sample->sample_data + (int)ROUND(dVar11)) - 0x80;
              local_28 = (float)local_20;
              iVar10 = 0;
              pCVar9 = this_ptr;
              if (0 < mix_buffer.num_channels) {
                do {
                  ppfVar3 = mix_buffer.channel_buffers + iVar10;
                  iVar10 = iVar10 + 1;
                  *(float *)((int)*ppfVar3 + iVar6) =
                       local_28 * pCVar9->channel_volumes[0] + *(float *)((int)*ppfVar3 + iVar6);
                  pCVar9 = (CSfxSlot *)&(pCVar9->options).position;
                } while (iVar10 < mix_buffer.num_channels);
              }
              dVar11 = __BITCAST_DOUBLE(CONCAT44(uVar13,uVar12)) + __BITCAST_DOUBLE(CONCAT44(local_b8,uStack_bc));
              iVar6 = iVar6 + 4;
            } while (iVar6 < local_4c);
          }
        }
        else if ((pCVar4->sample_info).num_channels == 2) {
          if (mix_buffer.num_channels == 2) {
            dVar11 = sound_sndmain_cpp_mixResampleStereoToStereo_FUN_00523750
                               (pCVar4->sample_data,(SStereoBuffers *)&mix_buffer,pSStack_70,
                                __BITCAST_DOUBLE(CONCAT44(uVar13,uVar12)),resample_delta,local_b0);
            local_7c = SUB84(__BITCAST_UINT64(dVar11),0);
            local_78 = (uint)((ulonglong)dVar11 >> 0x20);
          }
          else if (0 < local_b0) {
            local_2c = 0;
            local_40 = iVar10;
            do {
              uVar13 = (uint)((ulonglong)dVar11 >> 0x20);
              pCVar4 = this_ptr->sample;
              uVar12 = 0x5252fd;
              dVar11 = round(dVar11);
              local_20 = (int)ROUND(dVar11);
              afStack_90[0] = (float)pCVar4->sample_data[local_20 * 2];
              afStack_90[1] = (float)this_ptr->sample->sample_data[local_20 * 2 + 1];
              uVar5 = 0;
              pCVar9 = this_ptr;
              if (0 < mix_buffer.num_channels) {
                do {
                  uVar8 = uVar5 & 1;
                  ppfVar3 = mix_buffer.channel_buffers + uVar5;
                  uVar5 = uVar5 + 1;
                  *(float *)((int)*ppfVar3 + local_30) =
                       afStack_90[uVar8] * pCVar9->channel_volumes[0] +
                       *(float *)((int)*ppfVar3 + local_30);
                  pCVar9 = (CSfxSlot *)&(pCVar9->options).position;
                } while ((int)uVar5 < mix_buffer.num_channels);
              }
              dVar11 = __BITCAST_DOUBLE(CONCAT44(uVar13,uVar12)) + __BITCAST_DOUBLE(CONCAT44(local_b8,uStack_bc));
              local_30 = local_30 + 4;
            } while (local_30 < local_44);
          }
        }
        else if (mix_buffer.num_channels == 2) {
          dVar11 = sound_sndmain_cpp_mixResampleMonoToStereo_FUN_00523610
                             (pCVar4->sample_data,(SStereoBuffers *)&mix_buffer,pSStack_70,
                              __BITCAST_DOUBLE(CONCAT44(uVar13,uVar12)),resample_delta,local_b0);
          local_7c = SUB84(__BITCAST_UINT64(dVar11),0);
          local_78 = (uint)((ulonglong)dVar11 >> 0x20);
        }
        else if (0 < local_b0) {
          iVar6 = 0;
          local_3c = iVar10;
          do {
            uVar13 = (uint)((ulonglong)dVar11 >> 0x20);
            pCVar4 = this_ptr->sample;
            uVar12 = 0x5253f9;
            dVar11 = round(dVar11);
            local_20 = (int)ROUND(dVar11);
            local_24 = (float)pCVar4->sample_data[(int)ROUND(dVar11)];
            iVar10 = 0;
            pCVar9 = this_ptr;
            if (0 < mix_buffer.num_channels) {
              do {
                ppfVar3 = mix_buffer.channel_buffers + iVar10;
                iVar10 = iVar10 + 1;
                *(float *)((int)*ppfVar3 + iVar6) =
                     local_24 * pCVar9->channel_volumes[0] + *(float *)((int)*ppfVar3 + iVar6);
                pCVar9 = (CSfxSlot *)&(pCVar9->options).position;
              } while (iVar10 < mix_buffer.num_channels);
            }
            dVar11 = __BITCAST_DOUBLE(CONCAT44(uVar13,uVar12)) + __BITCAST_DOUBLE(CONCAT44(local_b8,uStack_bc));
            iVar6 = iVar6 + 4;
          } while (iVar6 < local_40);
        }
      }
      else {
        local_1c = local_b0;
      }
      if (local_5c != 0) {
        local_c0 = 0;
        uStack_bc = 0;
      }
      dVar11 = __BITCAST_DOUBLE(CONCAT44(uStack_bc,local_c0));
      if (resample_delta <= dVar11) {
        dVar11 = __BITCAST_DOUBLE(CONCAT44(uStack_bc,local_c0)) - resample_delta;
      }
      sound_sndmain_cpp_CSfxSlot_updatePlaybackPos_FUN_00525870(this_ptr,dVar11);
      if (local_50 != 0) {
        if (this_ptr->sample->loop_marker_count == 0) {
          *(uint *)((int)&(this_ptr->options).trigger_time + 4) = 0xbff00000;
          *(uint *)&(this_ptr->options).trigger_time = 0;
        }
        else {
          *(uint *)&(this_ptr->options).trigger_time = 0;
          *(uint *)((int)&(this_ptr->options).trigger_time + 4) = 0;
        }
      }
      mix_buffer.num_output_samples = mix_buffer.num_output_samples - iVar7;
      iVar10 = 0;
      if (0 < mix_buffer.num_channels) {
        iVar6 = 0;
        do {
          piVar2 = (int *)((int)mix_buffer.channel_buffers + iVar6);
          *piVar2 = *piVar2 + iVar7 * 4;
          iVar10 = iVar10 + 1;
          iVar6 = iVar6 + 4;
        } while (iVar10 < mix_buffer.num_channels);
      }
    }
    sound_sndmain_cpp_CSfxSlot_kill_FUN_00525570(this_ptr);
LAB_00524e3c:
    local_54 = 0;
    if (0 < mix_buffer.num_channels) {
      local_4c = 0;
      do {
        if (*(int *)((int)aiStack_a4 + local_4c) != 0) {
          local_28 = (float)local_4c;
          local_44 = local_58;
          iVar7 = 0;
          local_30 = (local_58 + *(int *)((int)this_ptr->channel_target_buffer_offsets + local_4c))
                     - *(int *)((int)this_ptr->channel_current_buffer_offsets + local_4c);
          local_2c = local_30 * 4;
          iVar10 = 0;
          if (0 < local_2c) {
            do {
              local_14 = (iVar7 / local_30) * 4;
              pfVar1 = (float *)(*(int *)((int)aiStack_a4 + local_4c) + iVar10);
              iVar10 = iVar10 + 4;
              *(float *)(*(int *)((int)aiStack_a4 + local_4c) + -4 + iVar10) =
                   *(float *)(*(int *)(local_4c + 0x2dc833c) + local_14) + *pfVar1;
              iVar7 = iVar7 + local_58;
            } while (iVar10 < local_2c);
          }
          *(uint *)((int)this_ptr->channel_current_buffer_offsets + local_4c) =
               *(uint *)((int)this_ptr->channel_target_buffer_offsets + local_4c);
        }
        local_54 = local_54 + 1;
        local_4c = local_4c + 4;
      } while (local_54 < mix_buffer.num_channels);
    }
  }
  return;
}
