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
  double dVar4;
  CSfxSample *pCVar5;
  uint uVar6;
  int extraout_EAX;
  CSfxSlot *pCVar7;
  int iVar8;
  uint uVar9;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar10;
  BADSPACEBASE *in_ESP;
  double dVar11;
  double dVar12;
  uint uVar13;
  short *sample_data;
  SStereoBuffers *channel_buffers;
  SStereoGains *channel_gains;
  ulonglong local_b0;
  int aiStack_a4 [7];
  ulonglong uStack_88;
  ulonglong uStack_80;
  float local_78;
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
  int local_30;
  int local_2c;
  int local_28;
  float local_24;
  float local_20;
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
          crt_memory_c_memset_FUN_005fde40
                    (mix_buffer.channel_buffers[iVar8],0,mix_buffer.num_output_samples << 2);
        }
        iVar8 = iVar8 + 1;
        pCVar7 = (CSfxSlot *)&(pCVar7->options).position;
      } while (iVar8 < mix_buffer.num_channels);
    }
    local_68 = this_ptr->channel_volumes;
    while (((iVar8 = mix_buffer.num_output_samples, this_ptr->playback_state != 0 &&
            (pCVar5 = this_ptr->sample, pCVar5 != (CSfxSample *)0x0)) &&
           (0.0 <= (this_ptr->options).trigger_time))) {
      if ((mix_buffer.num_output_samples < 1) ||
         (dVar4 = (double)(((float)(pCVar5->sample_info).sample_rate /
                           (float)mix_buffer.output_sample_rate) * this_ptr->effective_frequency),
         dVar4 <= 0.0)) goto LAB_005a770c;
      local_b0 = (double)pCVar5->streaming_buffer_size;
      local_50 = 0;
      if (0 < (pCVar5->sample_info).sample_count) {
        uStack_80 = crt_math_c_floor_FUN_005feb90
                              (((double)pCVar5->loop_markers[this_ptr->loop_marker_index + -5] -
                               (this_ptr->options).trigger_time) / dVar4);
        dVar11 = crt_math_c_round_FUN_005fe6b0(uStack_80);
        local_60 = (int)ROUND(dVar11);
        if (local_60 < iVar8) {
          local_50 = 1;
        }
      }
      channel_buffers = *(SStereoBuffers **)&this_ptr->prev_hardware_playback_pos;
      channel_gains = *(SStereoGains **)((int)&this_ptr->prev_hardware_playback_pos + 4);
      dVar11 = (local_b0 - this_ptr->prev_hardware_playback_pos) / dVar4;
      local_54 = 0;
      sample_data = (short *)((ulonglong)dVar11 >> 0x20);
      uStack_88 = crt_math_c_floor_FUN_005feb90(dVar11);
      uVar13 = 0x5a789d;
      dVar11 = crt_math_c_round_FUN_005fe6b0(uStack_88);
      local_50 = (int)ROUND(dVar11);
      if (local_50 < 1) {
        dVar11 = (double)CONCAT44 /* combine 2-byte values */(sample_data,uVar13) - dVar4;
        if (dVar11 < 0.0) {
          dVar11 = 0.0;
        }
        sample_data = (short *)((ulonglong)dVar11 >> 0x20);
        uStack_88 = crt_math_c_floor_FUN_005feb90
                              ((dVar4 - dVar11) / (double)CONCAT44 /* combine 2-byte values */(channel_gains,channel_buffers));
        uVar13 = 0x5a78f1;
        dVar11 = crt_math_c_round_FUN_005fe6b0(uStack_88);
        local_50 = (int)ROUND(dVar11);
      }
      dVar11 = (double)CONCAT44 /* combine 2-byte values */(sample_data,uVar13);
      if (local_50 < (int)local_b0) {
        local_b0._4_4_ = (int)((ulonglong)local_b0 >> 0x20);
        local_b0 = (double)CONCAT44 /* combine 2-byte values */(local_b0._4_4_,local_50);
        local_58 = 0;
        local_5c = 1;
      }
      else if (local_50 == (int)local_b0) {
        local_5c = 1;
      }
      if (local_6c == 0.0) {
        pCVar5 = this_ptr->sample;
        iVar8 = (int)local_b0 << 2;
        if ((pCVar5->sample_info).bit_depth == 8) {
          if ((pCVar5->sample_info).num_channels == 2) {
            dVar12 = (double)CONCAT44 /* combine 2-byte values */(sample_data,uVar13);
            if (0 < (int)local_b0) {
              local_28 = 0;
              local_48 = iVar8;
              do {
                dVar12 = crt_math_c_round_FUN_005fe6b0(dVar11);
                uStack_80 = (double)CONCAT44 /* combine 2-byte values */((float)(int)(*(byte *)(*(int *)(extraout_EDX + 0x120) +
                                                                   (int)ROUND(dVar12) * 2) - 0x80),
                                             (uint)uStack_80);
                local_1c = *(byte *)((int)this_ptr->sample->sample_data + (int)ROUND(dVar12) * 2 + 1
                                    ) - 0x80;
                local_78 = (float)local_1c;
                uVar6 = 0;
                pCVar7 = this_ptr;
                if (0 < mix_buffer.num_channels) {
                  do {
                    uVar9 = uVar6 & 1;
                    ppfVar3 = mix_buffer.channel_buffers + uVar6;
                    uVar6 = uVar6 + 1;
                    *(float *)((int)*ppfVar3 + local_28) =
                         *(float *)((int)&uStack_80 + uVar9 * 4 + 4) * pCVar7->channel_volumes[0] +
                         *(float *)((int)*ppfVar3 + local_28);
                    pCVar7 = (CSfxSlot *)&(pCVar7->options).position;
                  } while ((int)uVar6 < mix_buffer.num_channels);
                }
                dVar11 = dVar11 + (double)CONCAT44 /* combine 2-byte values */(channel_gains,channel_buffers);
                local_28 = local_28 + 4;
                dVar12 = dVar11;
              } while (local_28 < local_48);
            }
          }
          else {
            dVar12 = (double)CONCAT44 /* combine 2-byte values */(sample_data,uVar13);
            if (0 < (int)local_b0) {
              iVar10 = 0;
              local_44 = iVar8;
              do {
                dVar12 = crt_math_c_round_FUN_005fe6b0(dVar11);
                local_1c = *(byte *)((int)this_ptr->sample->sample_data + (int)ROUND(dVar12)) - 0x80
                ;
                local_20 = (float)local_1c;
                iVar8 = 0;
                pCVar7 = this_ptr;
                if (0 < mix_buffer.num_channels) {
                  do {
                    ppfVar3 = mix_buffer.channel_buffers + iVar8;
                    iVar8 = iVar8 + 1;
                    *(float *)((int)*ppfVar3 + iVar10) =
                         local_20 * pCVar7->channel_volumes[0] + *(float *)((int)*ppfVar3 + iVar10);
                    pCVar7 = (CSfxSlot *)&(pCVar7->options).position;
                  } while (iVar8 < mix_buffer.num_channels);
                }
                dVar11 = dVar11 + (double)CONCAT44 /* combine 2-byte values */(channel_gains,channel_buffers);
                iVar10 = iVar10 + 4;
                dVar12 = dVar11;
              } while (iVar10 < local_44);
            }
          }
        }
        else if ((pCVar5->sample_info).num_channels == 2) {
          if (mix_buffer.num_channels == 2) {
            uStack_88 = sound_sndmain_cpp_mixResampleStereoToStereo_FUN_005a5fb0
                                  (sample_data,channel_buffers,channel_gains,
                                   (double)CONCAT44 /* combine 2-byte values */(uVar13,(int)local_b0),
                                   (double)CONCAT44 /* combine 2-byte values */(channel_buffers,sample_data),(int)channel_gains)
            ;
            dVar12 = uStack_88;
          }
          else {
            dVar12 = (double)CONCAT44 /* combine 2-byte values */(sample_data,uVar13);
            if (0 < (int)local_b0) {
              local_2c = 0;
              local_40 = iVar8;
              do {
                dVar12 = crt_math_c_round_FUN_005fe6b0(dVar11);
                local_1c = (int)ROUND(dVar12);
                uStack_88 = (double)CONCAT44 /* combine 2-byte values */((float)*(short *)(*(int *)(extraout_EDX_00 + 0x120) +
                                                              local_1c * 4),(uint)uStack_88);
                uStack_80 = (double)CONCAT44 /* combine 2-byte values */(uStack_80._4_4_,
                                             (float)*(short *)((int)this_ptr->sample->sample_data +
                                                              local_1c * 4 + 2));
                uVar6 = 0;
                pCVar7 = this_ptr;
                if (0 < mix_buffer.num_channels) {
                  do {
                    uVar9 = uVar6 & 1;
                    ppfVar3 = mix_buffer.channel_buffers + uVar6;
                    uVar6 = uVar6 + 1;
                    *(float *)((int)*ppfVar3 + local_2c) =
                         *(float *)((int)&uStack_88 + uVar9 * 4 + 4) * pCVar7->channel_volumes[0] +
                         *(float *)((int)*ppfVar3 + local_2c);
                    pCVar7 = (CSfxSlot *)&(pCVar7->options).position;
                  } while ((int)uVar6 < mix_buffer.num_channels);
                }
                dVar11 = dVar11 + (double)CONCAT44 /* combine 2-byte values */(channel_gains,channel_buffers);
                local_2c = local_2c + 4;
                dVar12 = dVar11;
              } while (local_2c < local_40);
            }
          }
        }
        else if (mix_buffer.num_channels == 2) {
          uStack_88 = sound_sndmain_cpp_mixResampleMonoToStereo_FUN_005a5e70
                                (sample_data,channel_buffers,channel_gains,
                                 (double)CONCAT44 /* combine 2-byte values */(uVar13,(int)local_b0),
                                 (double)CONCAT44 /* combine 2-byte values */(channel_buffers,sample_data),(int)channel_gains);
          dVar12 = uStack_88;
        }
        else {
          dVar12 = dVar11;
          if (0 < (int)local_b0) {
            iVar10 = 0;
            local_3c = iVar8;
            do {
              dVar12 = crt_math_c_round_FUN_005fe6b0(dVar11);
              local_1c = (int)ROUND(dVar12);
              local_24 = (float)*(short *)(*(int *)(extraout_EAX + 0x120) + (int)ROUND(dVar12) * 2);
              iVar8 = 0;
              pCVar7 = this_ptr;
              if (0 < mix_buffer.num_channels) {
                do {
                  ppfVar3 = mix_buffer.channel_buffers + iVar8;
                  iVar8 = iVar8 + 1;
                  *(float *)((int)*ppfVar3 + iVar10) =
                       local_24 * pCVar7->channel_volumes[0] + *(float *)((int)*ppfVar3 + iVar10);
                  pCVar7 = (CSfxSlot *)&(pCVar7->options).position;
                } while (iVar8 < mix_buffer.num_channels);
              }
              dVar11 = dVar11 + (double)CONCAT44 /* combine 2-byte values */(channel_gains,channel_buffers);
              iVar10 = iVar10 + 4;
              dVar12 = dVar11;
            } while (iVar10 < local_3c);
          }
        }
      }
      else {
        local_1c = (int)local_b0;
        dVar12 = (double)(int)local_b0 * (double)CONCAT44 /* combine 2-byte values */(channel_gains,channel_buffers) +
                 (double)CONCAT44 /* combine 2-byte values */(sample_data,uVar13);
      }
      if (local_5c != 0) {
        dVar12 = 0.0;
      }
      if (dVar4 <= dVar12) {
        dVar12 = dVar12 - dVar4;
      }
      sound_sndmain_cpp_CSfxSlot_updatePlaybackPos_FUN_005a8170(this_ptr,dVar12);
      if (local_54 != 0) {
        iVar10 = this_ptr->loop_marker_index + 1;
        iVar8 = this_ptr->sample->loop_markers[this_ptr->loop_marker_index];
        this_ptr->loop_marker_index = iVar10;
        pCVar5 = this_ptr->sample;
        (this_ptr->options).trigger_time = (double)iVar8;
        if (pCVar5->loop_marker_count <= iVar10) {
          this_ptr->loop_marker_index = 0;
        }
      }
      iVar8 = 0;
      mix_buffer.num_output_samples = mix_buffer.num_output_samples - local_b0._4_4_;
      if (0 < mix_buffer.num_channels) {
        iVar10 = 0;
        do {
          piVar2 = (int *)((int)mix_buffer.channel_buffers + iVar10);
          *piVar2 = *piVar2 + local_b0._4_4_ * 4;
          iVar8 = iVar8 + 1;
          iVar10 = iVar10 + 4;
        } while (iVar8 < mix_buffer.num_channels);
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
