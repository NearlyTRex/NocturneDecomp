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
  uint uVar5;
  int extraout_EAX;
  CSfxSlot *pCVar6;
  int iVar7;
  uint uVar8;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar9;
  int iVar10;
  double dVar11;
  uint uVar12;
  short *sample_data;
  uint in_stack_ffffff44;
  SStereoBuffers *channel_buffers;
  double value;
  SStereoGains *channel_gains;
  uint uStack_b4;
  uint local_b0;
  float fStack_ac;
  int aiStack_a4 [6];
  uint uStack_8c;
  uint uStack_88;
  uint local_84;
  float local_7c [4];
  float local_6c;
  float *local_68;
  float local_64;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  float local_4c;
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
    local_64 = 1.4013e-45;
    if (this_ptr->sample != (CSfxSample *)0x0) {
      local_14 = 1 << ((char)(this_ptr->sample->sample_info).bit_depth + 6U & 0x1f);
      local_6c = 1.0 / (float)local_14;
      iVar7 = 0;
      pCVar6 = this_ptr;
      if (0 < mix_buffer.num_channels) {
        do {
          if (local_6c < pCVar6->channel_volumes[0]) {
            local_64 = 0.0;
            break;
          }
          iVar7 = iVar7 + 1;
          pCVar6 = (CSfxSlot *)&(pCVar6->options).position;
        } while (iVar7 < mix_buffer.num_channels);
      }
    }
    iVar7 = 0;
    pCVar6 = this_ptr;
    if (0 < mix_buffer.num_channels) {
      do {
        if ((local_64 != 0.0) || (pCVar6->channel_current_buffer_offsets[0] < 0)) {
          pCVar6->channel_current_buffer_offsets[0] = pCVar6->channel_target_buffer_offsets[0];
        }
        mix_buffer.channel_buffers[iVar7] =
             mix_buffer.channel_buffers[iVar7] + pCVar6->channel_current_buffer_offsets[0];
        uVar5 = pCVar6->channel_current_buffer_offsets[0] - pCVar6->channel_target_buffer_offsets[0]
        ;
        uVar8 = (int)uVar5 >> 0x1f;
        if ((int)((uVar5 ^ uVar8) - uVar8) < 2) {
          aiStack_a4[iVar7] = 0;
        }
        else {
          aiStack_a4[iVar7] = (int)mix_buffer.channel_buffers[iVar7];
          mix_buffer.channel_buffers[iVar7] = g_ChannelTertiaryBuffers[iVar7];
          crt_memory_c_memset_FUN_005fde40
                    (mix_buffer.channel_buffers[iVar7],0,mix_buffer.num_output_samples << 2);
        }
        iVar7 = iVar7 + 1;
        pCVar6 = (CSfxSlot *)&(pCVar6->options).position;
      } while (iVar7 < mix_buffer.num_channels);
    }
    dVar11 = (double)((ulonglong)in_stack_ffffff44 << 0x20);
    local_68 = this_ptr->channel_volumes;
    while (((iVar7 = mix_buffer.num_output_samples,
            channel_buffers = (SStereoBuffers *)((ulonglong)dVar11 >> 0x20),
            this_ptr->playback_state != 0 &&
            (pCVar4 = this_ptr->sample, pCVar4 != (CSfxSample *)0x0)) &&
           (0.0 <= (this_ptr->options).trigger_time))) {
      if (mix_buffer.num_output_samples < 1) goto LAB_005a770c;
      dVar11 = (double)(((float)(pCVar4->sample_info).sample_rate /
                        (float)mix_buffer.output_sample_rate) * this_ptr->effective_frequency);
      channel_gains = SUB84 /* extract 2-byte value */(dVar11,0);
      uStack_b4 = (uint)((ulonglong)dVar11 >> 0x20);
      if (dVar11 <= 0.0) goto LAB_005a770c;
      local_b0 = SUB84 /* extract 2-byte value */((double)pCVar4->streaming_buffer_size,0);
      fStack_ac = (float)((ulonglong)(double)pCVar4->streaming_buffer_size >> 0x20);
      local_50 = 0;
      if (0 < (pCVar4->sample_info).sample_count) {
        dVar11 = crt_math_c_floor_FUN_005feb90
                           (((double)pCVar4->loop_markers[this_ptr->loop_marker_index + -5] -
                            (this_ptr->options).trigger_time) / dVar11);
        uStack_88 = SUB84 /* extract 2-byte value */(dVar11,0);
        local_84 = (uint)((ulonglong)dVar11 >> 0x20);
        dVar11 = crt_math_c_round_FUN_005fe6b0(dVar11);
        local_64 = (float)(int)ROUND(dVar11);
        if ((int)local_64 < iVar7) {
          local_54 = 1;
          fStack_ac = local_64;
        }
      }
      sample_data = *(short **)((int)&this_ptr->prev_hardware_playback_pos + 4);
      local_58 = 0;
      dVar11 = crt_math_c_floor_FUN_005feb90
                         (((double)CONCAT44 /* combine 2-byte values */(local_b0,uStack_b4) -
                          this_ptr->prev_hardware_playback_pos) /
                          (double)CONCAT44 /* combine 2-byte values */(channel_gains,channel_buffers));
      uStack_8c = SUB84 /* extract 2-byte value */(dVar11,0);
      uStack_88 = (uint)((ulonglong)dVar11 >> 0x20);
      uVar12 = 0x5a789d;
      dVar11 = crt_math_c_round_FUN_005fe6b0(dVar11);
      local_4c = (float)(int)ROUND(dVar11);
      if ((int)local_4c < 1) {
        dVar11 = (double)CONCAT44 /* combine 2-byte values */(sample_data,uVar12) - (double)CONCAT44 /* combine 2-byte values */(local_b0,uStack_b4);
        if (dVar11 < 0.0) {
          dVar11 = 0.0;
        }
        sample_data = (short *)((ulonglong)dVar11 >> 0x20);
        dVar11 = crt_math_c_floor_FUN_005feb90
                           (((double)CONCAT44 /* combine 2-byte values */(local_b0,uStack_b4) - dVar11) /
                            (double)CONCAT44 /* combine 2-byte values */(channel_gains,channel_buffers));
        uStack_8c = SUB84 /* extract 2-byte value */(dVar11,0);
        uStack_88 = (uint)((ulonglong)dVar11 >> 0x20);
        uVar12 = 0x5a78f1;
        dVar11 = crt_math_c_round_FUN_005fe6b0(dVar11);
        local_4c = (float)(int)ROUND(dVar11);
      }
      value = (double)CONCAT44 /* combine 2-byte values */(channel_buffers,sample_data);
      if ((int)local_4c < (int)fStack_ac) {
        fStack_ac = local_4c;
        local_54 = 0;
        local_58 = 1;
      }
      else if (local_4c == fStack_ac) {
        local_58 = 1;
      }
      if (local_68 == (float *)0x0) {
        pCVar4 = this_ptr->sample;
        iVar9 = (int)fStack_ac << 2;
        if ((pCVar4->sample_info).bit_depth == 8) {
          if ((pCVar4->sample_info).num_channels == 2) {
            dVar11 = (double)CONCAT44 /* combine 2-byte values */(channel_buffers,sample_data);
            if (0 < (int)fStack_ac) {
              local_24 = 0;
              local_44 = iVar9;
              do {
                uVar12 = 0x5a7a4a;
                dVar11 = crt_math_c_round_FUN_005fe6b0
                                   ((double)CONCAT44 /* combine 2-byte values */(channel_gains,channel_buffers));
                local_7c[2] = (float)(int)(*(byte *)(*(int *)(extraout_EDX + 0x120) +
                                                    (int)ROUND(dVar11) * 2) - 0x80);
                local_14 = *(byte *)((int)this_ptr->sample->sample_data + (int)ROUND(dVar11) * 2 + 1
                                    ) - 0x80;
                local_7c[3] = (float)local_14;
                uVar5 = 0;
                pCVar6 = this_ptr;
                if (0 < mix_buffer.num_channels) {
                  do {
                    uVar8 = uVar5 & 1;
                    ppfVar3 = mix_buffer.channel_buffers + uVar5;
                    uVar5 = uVar5 + 1;
                    *(float *)((int)*ppfVar3 + local_20) =
                         local_7c[uVar8 + 2] * pCVar6->channel_volumes[0] +
                         *(float *)((int)*ppfVar3 + local_20);
                    pCVar6 = (CSfxSlot *)&(pCVar6->options).position;
                  } while ((int)uVar5 < mix_buffer.num_channels);
                }
                dVar11 = (double)CONCAT44 /* combine 2-byte values */(channel_buffers,uVar12) +
                         (double)CONCAT44 /* combine 2-byte values */(uStack_b4,channel_gains);
                local_20 = local_20 + 4;
                channel_buffers = (SStereoBuffers *)((ulonglong)dVar11 >> 0x20);
              } while (local_20 < local_40);
            }
          }
          else {
            dVar11 = (double)CONCAT44 /* combine 2-byte values */(channel_buffers,sample_data);
            if (0 < (int)fStack_ac) {
              iVar10 = 0;
              local_40 = iVar9;
              do {
                crt_math_c_round_FUN_005fe6b0(value);
                local_14 = *(byte *)this_ptr->sample->sample_data - 0x80;
                local_18 = (float)local_14;
                iVar9 = 0;
                pCVar6 = this_ptr;
                if (0 < mix_buffer.num_channels) {
                  do {
                    ppfVar3 = mix_buffer.channel_buffers + iVar9;
                    iVar9 = iVar9 + 1;
                    *(float *)((int)*ppfVar3 + iVar10) =
                         local_18 * pCVar6->channel_volumes[0] + *(float *)((int)*ppfVar3 + iVar10);
                    pCVar6 = (CSfxSlot *)&(pCVar6->options).position;
                  } while (iVar9 < mix_buffer.num_channels);
                }
                value = value + (double)CONCAT44 /* combine 2-byte values */(uStack_b4,channel_gains);
                iVar10 = iVar10 + 4;
                dVar11 = value;
              } while (iVar10 < local_3c);
            }
          }
        }
        else if ((pCVar4->sample_info).num_channels == 2) {
          if (mix_buffer.num_channels == 2) {
            dVar11 = sound_sndmain_cpp_mixResampleStereoToStereo_FUN_005a5fb0
                               (sample_data,channel_buffers,channel_gains,
                                (double)CONCAT44 /* combine 2-byte values */(uVar12,fStack_ac),
                                (double)CONCAT44 /* combine 2-byte values */(channel_buffers,sample_data),(int)channel_gains);
            uStack_88 = SUB84 /* extract 2-byte value */(dVar11,0);
            local_84 = (uint)((ulonglong)dVar11 >> 0x20);
          }
          else {
            dVar11 = (double)CONCAT44 /* combine 2-byte values */(channel_buffers,sample_data);
            if (0 < (int)fStack_ac) {
              local_28 = 0;
              local_3c = iVar9;
              do {
                uVar12 = 0x5a7bf3;
                dVar11 = crt_math_c_round_FUN_005fe6b0
                                   ((double)CONCAT44 /* combine 2-byte values */(channel_gains,channel_buffers));
                local_14 = (int)ROUND(dVar11);
                local_7c[0] = (float)*(short *)(*(int *)(extraout_EDX_00 + 0x120) + local_14 * 4);
                local_7c[1] = (float)*(short *)((int)this_ptr->sample->sample_data +
                                               local_14 * 4 + 2);
                uVar5 = 0;
                pCVar6 = this_ptr;
                if (0 < mix_buffer.num_channels) {
                  do {
                    uVar8 = uVar5 & 1;
                    ppfVar3 = mix_buffer.channel_buffers + uVar5;
                    uVar5 = uVar5 + 1;
                    *(float *)((int)*ppfVar3 + local_24) =
                         local_7c[uVar8] * pCVar6->channel_volumes[0] +
                         *(float *)((int)*ppfVar3 + local_24);
                    pCVar6 = (CSfxSlot *)&(pCVar6->options).position;
                  } while ((int)uVar5 < mix_buffer.num_channels);
                }
                dVar11 = (double)CONCAT44 /* combine 2-byte values */(channel_buffers,uVar12) +
                         (double)CONCAT44 /* combine 2-byte values */(uStack_b4,channel_gains);
                local_24 = local_24 + 4;
                channel_buffers = (SStereoBuffers *)((ulonglong)dVar11 >> 0x20);
              } while (local_24 < local_38);
            }
          }
        }
        else if (mix_buffer.num_channels == 2) {
          dVar11 = sound_sndmain_cpp_mixResampleMonoToStereo_FUN_005a5e70
                             (sample_data,channel_buffers,channel_gains,
                              (double)CONCAT44 /* combine 2-byte values */(uVar12,fStack_ac),
                              (double)CONCAT44 /* combine 2-byte values */(channel_buffers,sample_data),(int)channel_gains);
          uStack_88 = SUB84 /* extract 2-byte value */(dVar11,0);
          local_84 = (uint)((ulonglong)dVar11 >> 0x20);
        }
        else {
          dVar11 = value;
          if (0 < (int)fStack_ac) {
            iVar10 = 0;
            local_38 = iVar9;
            do {
              uVar12 = 0x5a7cef;
              dVar11 = crt_math_c_round_FUN_005fe6b0
                                 ((double)CONCAT44 /* combine 2-byte values */(channel_gains,channel_buffers));
              local_14 = (int)ROUND(dVar11);
              local_1c = (float)*(short *)(*(int *)(extraout_EAX + 0x120) + (int)ROUND(dVar11) * 2);
              iVar9 = 0;
              pCVar6 = this_ptr;
              if (0 < mix_buffer.num_channels) {
                do {
                  ppfVar3 = mix_buffer.channel_buffers + iVar9;
                  iVar9 = iVar9 + 1;
                  *(float *)((int)*ppfVar3 + iVar10) =
                       local_1c * pCVar6->channel_volumes[0] + *(float *)((int)*ppfVar3 + iVar10);
                  pCVar6 = (CSfxSlot *)&(pCVar6->options).position;
                } while (iVar9 < mix_buffer.num_channels);
              }
              dVar11 = (double)CONCAT44 /* combine 2-byte values */(channel_buffers,uVar12) +
                       (double)CONCAT44 /* combine 2-byte values */(uStack_b4,channel_gains);
              iVar10 = iVar10 + 4;
              channel_buffers = (SStereoBuffers *)((ulonglong)dVar11 >> 0x20);
            } while (iVar10 < local_34);
          }
        }
      }
      else {
        local_18 = fStack_ac;
        dVar11 = (double)(int)fStack_ac * (double)CONCAT44 /* combine 2-byte values */(channel_gains,channel_buffers) +
                 (double)CONCAT44 /* combine 2-byte values */(sample_data,uVar12);
      }
      if (local_54 != 0) {
        dVar11 = 0.0;
      }
      if ((double)CONCAT44 /* combine 2-byte values */(fStack_ac,local_b0) <= dVar11) {
        dVar11 = dVar11 - (double)CONCAT44 /* combine 2-byte values */(fStack_ac,local_b0);
      }
      sound_sndmain_cpp_CSfxSlot_updatePlaybackPos_FUN_005a8170(this_ptr,dVar11);
      if (local_50 != 0) {
        iVar10 = this_ptr->loop_marker_index + 1;
        iVar9 = this_ptr->sample->loop_markers[this_ptr->loop_marker_index];
        this_ptr->loop_marker_index = iVar10;
        pCVar4 = this_ptr->sample;
        (this_ptr->options).trigger_time = (double)iVar9;
        if (pCVar4->loop_marker_count <= iVar10) {
          this_ptr->loop_marker_index = 0;
        }
      }
      iVar9 = 0;
      mix_buffer.num_output_samples = mix_buffer.num_output_samples - iVar7;
      if (0 < mix_buffer.num_channels) {
        iVar10 = 0;
        do {
          piVar2 = (int *)((int)mix_buffer.channel_buffers + iVar10);
          *piVar2 = *piVar2 + iVar7 * 4;
          iVar9 = iVar9 + 1;
          iVar10 = iVar10 + 4;
        } while (iVar9 < mix_buffer.num_channels);
      }
    }
    sound_sndmain_cpp_CSfxSlot_kill_FUN_005a7e60(this_ptr);
LAB_005a770c:
    local_58 = 0;
    if (0 < mix_buffer.num_channels) {
      local_4c = 0.0;
      do {
        if (*(int *)((int)aiStack_a4 + (int)local_4c) != 0) {
          local_28 = (int)local_4c;
          local_44 = local_5c;
          iVar7 = 0;
          local_30 = (local_5c +
                     *(int *)((int)this_ptr->channel_target_buffer_offsets + (int)local_4c)) -
                     *(int *)((int)this_ptr->channel_current_buffer_offsets + (int)local_4c);
          local_2c = local_30 * 4;
          iVar9 = 0;
          if (0 < local_2c) {
            do {
              local_14 = (iVar7 / local_30) * 4;
              pfVar1 = (float *)(*(int *)((int)aiStack_a4 + (int)local_4c) + iVar9);
              iVar9 = iVar9 + 4;
              *(float *)(*(int *)((int)aiStack_a4 + (int)local_4c) + -4 + iVar9) =
                   *(float *)(*(int *)((int)g_ChannelTertiaryBuffers + (int)local_4c) + local_14) +
                   *pfVar1;
              iVar7 = iVar7 + local_5c;
            } while (iVar9 < local_2c);
          }
          *(uint *)((int)this_ptr->channel_current_buffer_offsets + (int)local_4c) =
               *(uint *)((int)this_ptr->channel_target_buffer_offsets + (int)local_4c);
        }
        local_58 = local_58 + 1;
        local_4c = (float)((int)local_4c + 4);
      } while (local_58 < mix_buffer.num_channels);
    }
  }
  return;
}
