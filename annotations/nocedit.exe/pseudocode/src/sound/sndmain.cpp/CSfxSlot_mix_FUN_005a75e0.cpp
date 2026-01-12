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
  BADSPACEBASE *in_ESP;
  double dVar10;
  double dVar11;
  uint uVar12;
  uint uVar13;
  uint in_stack_ffffff44;
  short *sample_data;
  SStereoBuffers *channel_buffers;
  double dVar14;
  SStereoGains *channel_gains;
  uint local_b0;
  int iStack_ac;
  int local_a8;
  int aiStack_a4 [6];
  uint uStack_8c;
  uint uStack_88;
  uint local_84;
  ulonglong uStack_80;
  float local_78;
  float local_74 [3];
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
      local_74[2] = 1.0 / (float)local_14;
      iVar7 = 0;
      pCVar6 = this_ptr;
      if (0 < mix_buffer.num_channels) {
        do {
          if (local_74[2] < pCVar6->channel_volumes[0]) {
            local_64 = 0;
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
        if ((local_64 != 0) || (pCVar6->channel_current_buffer_offsets[0] < 0)) {
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
    dVar10 = (double)((ulonglong)in_stack_ffffff44 << 0x20);
    local_68 = this_ptr->channel_volumes;
    while (((iVar7 = mix_buffer.num_output_samples, uVar13 = (uint)((ulonglong)dVar10 >> 0x20)
            , this_ptr->playback_state != 0 &&
            (pCVar4 = this_ptr->sample, pCVar4 != (CSfxSample *)0x0)) &&
           (0.0 <= (this_ptr->options).trigger_time))) {
      if ((mix_buffer.num_output_samples < 1) ||
         (dVar14 = (double)(((float)(pCVar4->sample_info).sample_rate /
                            (float)mix_buffer.output_sample_rate) * this_ptr->effective_frequency),
         dVar14 <= 0.0)) goto LAB_005a770c;
      local_b0 = SUB84 /* extract 2-byte value */((double)pCVar4->streaming_buffer_size,0);
      iStack_ac = (int)((ulonglong)(double)pCVar4->streaming_buffer_size >> 0x20);
      local_a8 = mix_buffer.num_output_samples;
      local_50 = 0;
      if (0 < (pCVar4->sample_info).sample_count) {
        dVar10 = crt_math_c_floor_FUN_005feb90
                           (((double)pCVar4->loop_markers[this_ptr->loop_marker_index + -5] -
                            (this_ptr->options).trigger_time) / dVar14);
        uStack_88 = SUB84 /* extract 2-byte value */(dVar10,0);
        local_84 = (uint)((ulonglong)dVar10 >> 0x20);
        dVar10 = crt_math_c_round_FUN_005fe6b0(dVar10);
        local_64 = (int)ROUND(dVar10);
        if (local_64 < iVar7) {
          local_54 = 1;
          iStack_ac = local_64;
        }
      }
      uVar12 = *(uint *)((int)&this_ptr->prev_hardware_playback_pos + 4);
      local_58 = 0;
      dVar10 = crt_math_c_floor_FUN_005feb90
                         (((double)CONCAT44 /* combine 2-byte values */(local_b0,(int)((ulonglong)dVar14 >> 0x20)) -
                          this_ptr->prev_hardware_playback_pos) /
                          (double)CONCAT44 /* combine 2-byte values */(SUB84 /* extract 2-byte value */(dVar14,0),uVar13));
      uStack_8c = SUB84 /* extract 2-byte value */(dVar10,0);
      uStack_88 = (uint)((ulonglong)dVar10 >> 0x20);
      dVar11 = crt_math_c_round_FUN_005fe6b0(dVar10);
      dVar10 = (double)CONCAT44 /* combine 2-byte values */(uVar13,uVar12);
      local_48 = (int)ROUND(dVar11);
      if (local_48 < 1) {
        dVar10 = (double)CONCAT44 /* combine 2-byte values */(uVar13,uVar12) - (double)CONCAT44 /* combine 2-byte values */(iStack_ac,local_b0);
        if (dVar10 < 0.0) {
          dVar10 = 0.0;
        }
        dVar11 = crt_math_c_floor_FUN_005feb90
                           (((double)CONCAT44 /* combine 2-byte values */(iStack_ac,local_b0) - dVar10) / dVar14);
        uStack_88 = SUB84 /* extract 2-byte value */(dVar11,0);
        local_84 = (uint)((ulonglong)dVar11 >> 0x20);
        dVar11 = crt_math_c_round_FUN_005fe6b0(dVar11);
        local_48 = (int)ROUND(dVar11);
      }
      sample_data = (short *)((ulonglong)dVar10 >> 0x20);
      channel_gains = (SStereoGains *)((ulonglong)dVar14 >> 0x20);
      channel_buffers = SUB84 /* extract 2-byte value */(dVar14,0);
      if (local_48 < iVar7) {
        local_a8 = local_48;
        local_50 = 0;
        local_54 = 1;
      }
      else if (local_48 == iVar7) {
        local_54 = 1;
      }
      if (local_64 == 0) {
        pCVar4 = this_ptr->sample;
        iVar7 = local_a8 << 2;
        if ((pCVar4->sample_info).bit_depth == 8) {
          if ((pCVar4->sample_info).num_channels == 2) {
            if (0 < local_a8) {
              local_20 = 0;
              local_40 = iVar7;
              do {
                uVar12 = (uint)((ulonglong)dVar10 >> 0x20);
                uVar13 = 0x5a7a4a;
                dVar10 = crt_math_c_round_FUN_005fe6b0(dVar10);
                local_74[0] = (float)(int)(*(byte *)(*(int *)(extraout_EDX + 0x120) +
                                                    (int)ROUND(dVar10) * 2) - 0x80);
                local_14 = *(byte *)((int)this_ptr->sample->sample_data + (int)ROUND(dVar10) * 2 + 1
                                    ) - 0x80;
                local_74[1] = (float)local_14;
                uVar5 = 0;
                pCVar6 = this_ptr;
                if (0 < mix_buffer.num_channels) {
                  do {
                    uVar8 = uVar5 & 1;
                    ppfVar3 = mix_buffer.channel_buffers + uVar5;
                    uVar5 = uVar5 + 1;
                    *(float *)((int)*ppfVar3 + local_20) =
                         local_74[uVar8] * pCVar6->channel_volumes[0] +
                         *(float *)((int)*ppfVar3 + local_20);
                    pCVar6 = (CSfxSlot *)&(pCVar6->options).position;
                  } while ((int)uVar5 < mix_buffer.num_channels);
                }
                dVar10 = (double)CONCAT44 /* combine 2-byte values */(uVar12,uVar13) + dVar14;
                local_20 = local_20 + 4;
              } while (local_20 < local_40);
            }
          }
          else if (0 < local_a8) {
            iVar9 = 0;
            local_3c = iVar7;
            do {
              crt_math_c_round_FUN_005fe6b0(dVar10);
              local_14 = *(byte *)this_ptr->sample->sample_data - 0x80;
              local_18 = (float)local_14;
              iVar7 = 0;
              pCVar6 = this_ptr;
              if (0 < mix_buffer.num_channels) {
                do {
                  ppfVar3 = mix_buffer.channel_buffers + iVar7;
                  iVar7 = iVar7 + 1;
                  *(float *)((int)*ppfVar3 + iVar9) =
                       local_18 * pCVar6->channel_volumes[0] + *(float *)((int)*ppfVar3 + iVar9);
                  pCVar6 = (CSfxSlot *)&(pCVar6->options).position;
                } while (iVar7 < mix_buffer.num_channels);
              }
              dVar10 = dVar10 + dVar14;
              iVar9 = iVar9 + 4;
            } while (iVar9 < local_3c);
          }
        }
        else if ((pCVar4->sample_info).num_channels == 2) {
          if (mix_buffer.num_channels == 2) {
            uStack_80 = sound_sndmain_cpp_mixResampleStereoToStereo_FUN_005a5fb0
                                  (sample_data,channel_buffers,channel_gains,
                                   (double)CONCAT44 /* combine 2-byte values */(SUB84 /* extract 2-byte value */(dVar10,0),local_a8),
                                   (double)CONCAT44 /* combine 2-byte values */(channel_buffers,sample_data),(int)channel_gains)
            ;
            dVar10 = uStack_80;
          }
          else if (0 < local_a8) {
            local_24 = 0;
            local_38 = iVar7;
            do {
              uVar12 = (uint)((ulonglong)dVar10 >> 0x20);
              uVar13 = 0x5a7bf3;
              dVar10 = crt_math_c_round_FUN_005fe6b0(dVar10);
              local_14 = (int)ROUND(dVar10);
              uStack_80 = (double)CONCAT44 /* combine 2-byte values */((float)*(short *)(*(int *)(extraout_EDX_00 + 0x120) +
                                                            local_14 * 4),(uint)uStack_80);
              local_78 = (float)*(short *)((int)this_ptr->sample->sample_data + local_14 * 4 + 2);
              uVar5 = 0;
              pCVar6 = this_ptr;
              if (0 < mix_buffer.num_channels) {
                do {
                  uVar8 = uVar5 & 1;
                  ppfVar3 = mix_buffer.channel_buffers + uVar5;
                  uVar5 = uVar5 + 1;
                  *(float *)((int)*ppfVar3 + local_24) =
                       *(float *)((int)&uStack_80 + uVar8 * 4 + 4) * pCVar6->channel_volumes[0] +
                       *(float *)((int)*ppfVar3 + local_24);
                  pCVar6 = (CSfxSlot *)&(pCVar6->options).position;
                } while ((int)uVar5 < mix_buffer.num_channels);
              }
              dVar10 = (double)CONCAT44 /* combine 2-byte values */(uVar12,uVar13) + dVar14;
              local_24 = local_24 + 4;
            } while (local_24 < local_38);
          }
        }
        else if (mix_buffer.num_channels == 2) {
          uStack_80 = sound_sndmain_cpp_mixResampleMonoToStereo_FUN_005a5e70
                                (sample_data,channel_buffers,channel_gains,
                                 (double)CONCAT44 /* combine 2-byte values */(SUB84 /* extract 2-byte value */(dVar10,0),local_a8),
                                 (double)CONCAT44 /* combine 2-byte values */(channel_buffers,sample_data),(int)channel_gains);
          dVar10 = uStack_80;
        }
        else if (0 < local_a8) {
          iVar9 = 0;
          local_34 = iVar7;
          do {
            uVar12 = (uint)((ulonglong)dVar10 >> 0x20);
            uVar13 = 0x5a7cef;
            dVar10 = crt_math_c_round_FUN_005fe6b0(dVar10);
            local_14 = (int)ROUND(dVar10);
            local_1c = (float)*(short *)(*(int *)(extraout_EAX + 0x120) + (int)ROUND(dVar10) * 2);
            iVar7 = 0;
            pCVar6 = this_ptr;
            if (0 < mix_buffer.num_channels) {
              do {
                ppfVar3 = mix_buffer.channel_buffers + iVar7;
                iVar7 = iVar7 + 1;
                *(float *)((int)*ppfVar3 + iVar9) =
                     local_1c * pCVar6->channel_volumes[0] + *(float *)((int)*ppfVar3 + iVar9);
                pCVar6 = (CSfxSlot *)&(pCVar6->options).position;
              } while (iVar7 < mix_buffer.num_channels);
            }
            dVar10 = (double)CONCAT44 /* combine 2-byte values */(uVar12,uVar13) + dVar14;
            iVar9 = iVar9 + 4;
          } while (iVar9 < local_34);
        }
      }
      else {
        local_14 = local_a8;
        dVar10 = (double)local_a8 * dVar14 + dVar10;
      }
      if (local_54 != 0) {
        dVar10 = 0.0;
      }
      if ((double)CONCAT44 /* combine 2-byte values */(iStack_ac,local_b0) <= dVar10) {
        dVar10 = dVar10 - (double)CONCAT44 /* combine 2-byte values */(iStack_ac,local_b0);
      }
      sound_sndmain_cpp_CSfxSlot_updatePlaybackPos_FUN_005a8170(this_ptr,dVar10);
      if (local_50 != 0) {
        iVar9 = this_ptr->loop_marker_index + 1;
        iVar7 = this_ptr->sample->loop_markers[this_ptr->loop_marker_index];
        this_ptr->loop_marker_index = iVar9;
        pCVar4 = this_ptr->sample;
        (this_ptr->options).trigger_time = (double)iVar7;
        if (pCVar4->loop_marker_count <= iVar9) {
          this_ptr->loop_marker_index = 0;
        }
      }
      iVar7 = 0;
      mix_buffer.num_output_samples = mix_buffer.num_output_samples - local_a8;
      if (0 < mix_buffer.num_channels) {
        iVar9 = 0;
        do {
          piVar2 = (int *)((int)mix_buffer.channel_buffers + iVar9);
          *piVar2 = *piVar2 + local_a8 * 4;
          iVar7 = iVar7 + 1;
          iVar9 = iVar9 + 4;
        } while (iVar7 < mix_buffer.num_channels);
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
          iVar7 = 0;
          local_30 = (local_5c + *(int *)((int)this_ptr->channel_target_buffer_offsets + local_4c))
                     - *(int *)((int)this_ptr->channel_current_buffer_offsets + local_4c);
          local_2c = local_30 * 4;
          iVar9 = 0;
          if (0 < local_2c) {
            do {
              local_14 = (iVar7 / local_30) * 4;
              pfVar1 = (float *)(*(int *)((int)aiStack_a4 + local_4c) + iVar9);
              iVar9 = iVar9 + 4;
              *(float *)(*(int *)((int)aiStack_a4 + local_4c) + -4 + iVar9) =
                   *(float *)(*(int *)((int)g_ChannelTertiaryBuffers + local_4c) + local_14) +
                   *pfVar1;
              iVar7 = iVar7 + local_5c;
            } while (iVar9 < local_2c);
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
