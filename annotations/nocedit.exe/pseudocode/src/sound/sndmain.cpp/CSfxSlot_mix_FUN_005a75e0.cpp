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
  float fVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  CSfxSlot *pCVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  BADSPACEBASE *in_ESP;
  float10 in_ST0;
  double dVar15;
  double dVar16;
  uint uVar17;
  short *sample_data;
  SStereoBuffers *channel_buffers;
  SStereoGains *channel_gains;
  ulonglong uStack_ac;
  int aiStack_a0 [7];
  ulonglong local_84;
  float local_7c;
  CSfxSample *local_78;
  float local_74;
  float local_68;
  float *local_64;
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
  int local_2c;
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  int local_18;
  
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0xa27;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::mix - must be locked!");
  }
  if (this_ptr->playback_state != 0) {
    local_58 = mix_buffer.num_output_samples;
    local_60 = 1;
    if (this_ptr->sample != (CSfxSample *)0x0) {
      local_68 = 1.0 / (float)(1 << ((char)(this_ptr->sample->sample_info).bit_depth + 6U & 0x1f));
      iVar12 = 0;
      pCVar11 = this_ptr;
      if (0 < mix_buffer.num_channels) {
        do {
          if (local_68 < pCVar11->channel_volumes[0]) {
            local_60 = 0;
            break;
          }
          iVar12 = iVar12 + 1;
          pCVar11 = (CSfxSlot *)&(pCVar11->options).position;
        } while (iVar12 < mix_buffer.num_channels);
      }
    }
    iVar12 = 0;
    pCVar11 = this_ptr;
    if (0 < mix_buffer.num_channels) {
      do {
        if ((local_60 != 0) || (pCVar11->channel_current_buffer_offsets[0] < 0)) {
          pCVar11->channel_current_buffer_offsets[0] = pCVar11->channel_target_buffer_offsets[0];
        }
        mix_buffer.channel_buffers[iVar12] =
             mix_buffer.channel_buffers[iVar12] + pCVar11->channel_current_buffer_offsets[0];
        uVar10 = pCVar11->channel_current_buffer_offsets[0] -
                 pCVar11->channel_target_buffer_offsets[0];
        uVar13 = (int)uVar10 >> 0x1f;
        if ((int)((uVar10 ^ uVar13) - uVar13) < 2) {
          aiStack_a0[iVar12] = 0;
        }
        else {
          aiStack_a0[iVar12] = (int)mix_buffer.channel_buffers[iVar12];
          mix_buffer.channel_buffers[iVar12] = g_ChannelTertiaryBuffers[iVar12];
          crt_memory_c_memset_FUN_005fde40
                    (mix_buffer.channel_buffers[iVar12],0,mix_buffer.num_output_samples << 2);
        }
        iVar12 = iVar12 + 1;
        pCVar11 = (CSfxSlot *)&(pCVar11->options).position;
      } while (iVar12 < mix_buffer.num_channels);
    }
    local_64 = this_ptr->channel_volumes;
    while (((iVar12 = mix_buffer.num_output_samples, this_ptr->playback_state != 0 &&
            (pCVar5 = this_ptr->sample, pCVar5 != (CSfxSample *)0x0)) &&
           (0.0 <= (this_ptr->options).trigger_time))) {
      if ((mix_buffer.num_output_samples < 1) ||
         (dVar4 = (double)(((float)(pCVar5->sample_info).sample_rate /
                           (float)mix_buffer.output_sample_rate) * this_ptr->effective_frequency),
         dVar4 <= 0.0)) goto LAB_005a770c;
      uStack_ac = (double)pCVar5->streaming_buffer_size;
      local_4c = 0;
      if (0 < (pCVar5->sample_info).sample_count) {
        fVar6 = (float)this_ptr->loop_marker_index;
        dVar15 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
        in_ST0 = (float10)dVar15;
        local_7c = fVar6;
        local_78 = pCVar5;
        dVar15 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(pCVar5,fVar6));
        local_5c = (int)ROUND(dVar15);
        if (local_5c < iVar12) {
          local_4c = 1;
        }
      }
      channel_buffers = *(SStereoBuffers **)&this_ptr->prev_hardware_playback_pos;
      channel_gains = *(SStereoGains **)((int)&this_ptr->prev_hardware_playback_pos + 4);
      local_50 = 0;
      sample_data = (short *)((ulonglong)
                              ((uStack_ac - this_ptr->prev_hardware_playback_pos) / dVar4) >> 0x20);
      dVar16 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
      local_84 = (double)(ZEXT48(pCVar5) << 0x20);
      uVar17 = 0x5a789d;
      dVar15 = crt_math_c_round_FUN_005fe6b0(local_84);
      local_4c = (int)ROUND(dVar15);
      if (local_4c < 1) {
        dVar15 = (double)CONCAT44 /* combine 2-byte values */(sample_data,uVar17) - dVar4;
        bVar7 = NAN(dVar15);
        bVar8 = 0.0 < dVar15;
        bVar9 = dVar15 == 0.0;
        if (!bVar8 && bVar9 == 0) {
          dVar15 = 0.0;
        }
        sample_data = (short *)((ulonglong)dVar15 >> 0x20);
        dVar16 = crt_math_c_floor_FUN_005feb90(dVar16);
        local_84 = (double)CONCAT44 /* combine 2-byte values */(pCVar5,(uint)(ushort)((ushort)bVar8 << 8 | (ushort)bVar7 << 10 |
                                                         (ushort)bVar9 << 0xe));
        uVar17 = 0x5a78f1;
        dVar15 = crt_math_c_round_FUN_005fe6b0(local_84);
        local_4c = (int)ROUND(dVar15);
      }
      dVar15 = (double)CONCAT44 /* combine 2-byte values */(sample_data,uVar17);
      in_ST0 = (float10)dVar16;
      if (local_4c < (int)uStack_ac) {
        uStack_ac._4_4_ = (int)((ulonglong)uStack_ac >> 0x20);
        uStack_ac = (double)CONCAT44 /* combine 2-byte values */(uStack_ac._4_4_,local_4c);
        local_54 = 0;
        local_58 = 1;
      }
      else if (local_4c == (int)uStack_ac) {
        local_58 = 1;
      }
      if (local_68 == 0.0) {
        pCVar5 = this_ptr->sample;
        iVar12 = (int)uStack_ac << 2;
        if ((pCVar5->sample_info).bit_depth == 8) {
          if ((pCVar5->sample_info).num_channels == 2) {
            dVar16 = (double)CONCAT44 /* combine 2-byte values */(sample_data,uVar17);
            if (0 < (int)uStack_ac) {
              local_24 = 0;
              local_44 = iVar12;
              do {
                pCVar5 = this_ptr->sample;
                dVar16 = crt_math_c_round_FUN_005fe6b0(dVar15);
                local_78 = (CSfxSample *)
                           (float)(int)(*(byte *)((int)pCVar5->sample_data + (int)ROUND(dVar16) * 2)
                                       - 0x80);
                local_18 = *(byte *)((int)this_ptr->sample->sample_data + (int)ROUND(dVar16) * 2 + 1
                                    ) - 0x80;
                local_74 = (float)local_18;
                uVar10 = 0;
                pCVar11 = this_ptr;
                if (0 < mix_buffer.num_channels) {
                  do {
                    uVar13 = uVar10 & 1;
                    ppfVar3 = mix_buffer.channel_buffers + uVar10;
                    uVar10 = uVar10 + 1;
                    *(float *)((int)*ppfVar3 + local_24) =
                         (float)(&local_78)[uVar13] * pCVar11->channel_volumes[0] +
                         *(float *)((int)*ppfVar3 + local_24);
                    pCVar11 = (CSfxSlot *)&(pCVar11->options).position;
                  } while ((int)uVar10 < mix_buffer.num_channels);
                }
                dVar15 = dVar15 + (double)CONCAT44 /* combine 2-byte values */(channel_gains,channel_buffers);
                local_24 = local_24 + 4;
                dVar16 = dVar15;
              } while (local_24 < local_44);
            }
          }
          else {
            dVar16 = (double)CONCAT44 /* combine 2-byte values */(sample_data,uVar17);
            if (0 < (int)uStack_ac) {
              iVar14 = 0;
              local_40 = iVar12;
              do {
                dVar16 = crt_math_c_round_FUN_005fe6b0(dVar15);
                local_18 = *(byte *)((int)this_ptr->sample->sample_data + (int)ROUND(dVar16)) - 0x80
                ;
                local_1c = (float)local_18;
                iVar12 = 0;
                pCVar11 = this_ptr;
                if (0 < mix_buffer.num_channels) {
                  do {
                    ppfVar3 = mix_buffer.channel_buffers + iVar12;
                    iVar12 = iVar12 + 1;
                    *(float *)((int)*ppfVar3 + iVar14) =
                         local_1c * pCVar11->channel_volumes[0] + *(float *)((int)*ppfVar3 + iVar14)
                    ;
                    pCVar11 = (CSfxSlot *)&(pCVar11->options).position;
                  } while (iVar12 < mix_buffer.num_channels);
                }
                dVar15 = dVar15 + (double)CONCAT44 /* combine 2-byte values */(channel_gains,channel_buffers);
                iVar14 = iVar14 + 4;
                dVar16 = dVar15;
              } while (iVar14 < local_40);
            }
          }
        }
        else if ((pCVar5->sample_info).num_channels == 2) {
          if (mix_buffer.num_channels == 2) {
            local_84 = sound_sndmain_cpp_mixResampleStereoToStereo_FUN_005a5fb0
                                 (sample_data,channel_buffers,channel_gains,
                                  (double)CONCAT44 /* combine 2-byte values */(uVar17,(int)uStack_ac),
                                  (double)CONCAT44 /* combine 2-byte values */(channel_buffers,sample_data),(int)channel_gains);
            dVar16 = local_84;
          }
          else {
            dVar16 = (double)CONCAT44 /* combine 2-byte values */(sample_data,uVar17);
            if (0 < (int)uStack_ac) {
              local_28 = 0;
              local_3c = iVar12;
              do {
                pCVar5 = this_ptr->sample;
                dVar16 = crt_math_c_round_FUN_005fe6b0(dVar15);
                local_18 = (int)ROUND(dVar16);
                local_84 = (double)CONCAT44 /* combine 2-byte values */((float)*(short *)((int)pCVar5->sample_data +
                                                             local_18 * 4),(uint)local_84);
                local_7c = (float)*(short *)((int)this_ptr->sample->sample_data + local_18 * 4 + 2);
                uVar10 = 0;
                pCVar11 = this_ptr;
                if (0 < mix_buffer.num_channels) {
                  do {
                    uVar13 = uVar10 & 1;
                    ppfVar3 = mix_buffer.channel_buffers + uVar10;
                    uVar10 = uVar10 + 1;
                    *(float *)((int)*ppfVar3 + local_28) =
                         *(float *)((int)&local_84 + uVar13 * 4 + 4) * pCVar11->channel_volumes[0] +
                         *(float *)((int)*ppfVar3 + local_28);
                    pCVar11 = (CSfxSlot *)&(pCVar11->options).position;
                  } while ((int)uVar10 < mix_buffer.num_channels);
                }
                dVar15 = dVar15 + (double)CONCAT44 /* combine 2-byte values */(channel_gains,channel_buffers);
                local_28 = local_28 + 4;
                dVar16 = dVar15;
              } while (local_28 < local_3c);
            }
          }
        }
        else if (mix_buffer.num_channels == 2) {
          local_84 = sound_sndmain_cpp_mixResampleMonoToStereo_FUN_005a5e70
                               (sample_data,channel_buffers,channel_gains,
                                (double)CONCAT44 /* combine 2-byte values */(uVar17,(int)uStack_ac),
                                (double)CONCAT44 /* combine 2-byte values */(channel_buffers,sample_data),(int)channel_gains);
          dVar16 = local_84;
        }
        else {
          dVar16 = dVar15;
          if (0 < (int)uStack_ac) {
            iVar14 = 0;
            local_38 = iVar12;
            do {
              pCVar5 = this_ptr->sample;
              dVar16 = crt_math_c_round_FUN_005fe6b0(dVar15);
              local_18 = (int)ROUND(dVar16);
              local_20 = (float)*(short *)((int)pCVar5->sample_data + (int)ROUND(dVar16) * 2);
              iVar12 = 0;
              pCVar11 = this_ptr;
              if (0 < mix_buffer.num_channels) {
                do {
                  ppfVar3 = mix_buffer.channel_buffers + iVar12;
                  iVar12 = iVar12 + 1;
                  *(float *)((int)*ppfVar3 + iVar14) =
                       local_20 * pCVar11->channel_volumes[0] + *(float *)((int)*ppfVar3 + iVar14);
                  pCVar11 = (CSfxSlot *)&(pCVar11->options).position;
                } while (iVar12 < mix_buffer.num_channels);
              }
              dVar15 = dVar15 + (double)CONCAT44 /* combine 2-byte values */(channel_gains,channel_buffers);
              iVar14 = iVar14 + 4;
              dVar16 = dVar15;
            } while (iVar14 < local_38);
          }
        }
      }
      else {
        local_18 = (int)uStack_ac;
        dVar16 = (double)(int)uStack_ac * (double)CONCAT44 /* combine 2-byte values */(channel_gains,channel_buffers) +
                 (double)CONCAT44 /* combine 2-byte values */(sample_data,uVar17);
      }
      if (local_58 != 0) {
        dVar16 = 0.0;
      }
      if (dVar4 <= dVar16) {
        dVar16 = dVar16 - dVar4;
      }
      sound_sndmain_cpp_CSfxSlot_updatePlaybackPos_FUN_005a8170(this_ptr,dVar16);
      if (local_50 != 0) {
        iVar14 = this_ptr->loop_marker_index + 1;
        iVar12 = this_ptr->sample->loop_markers[this_ptr->loop_marker_index];
        this_ptr->loop_marker_index = iVar14;
        pCVar5 = this_ptr->sample;
        (this_ptr->options).trigger_time = (double)iVar12;
        if (pCVar5->loop_marker_count <= iVar14) {
          this_ptr->loop_marker_index = 0;
        }
      }
      iVar12 = 0;
      mix_buffer.num_output_samples = mix_buffer.num_output_samples - uStack_ac._4_4_;
      if (0 < mix_buffer.num_channels) {
        iVar14 = 0;
        do {
          piVar2 = (int *)((int)mix_buffer.channel_buffers + iVar14);
          *piVar2 = *piVar2 + uStack_ac._4_4_ * 4;
          iVar12 = iVar12 + 1;
          iVar14 = iVar14 + 4;
        } while (iVar12 < mix_buffer.num_channels);
      }
    }
    sound_sndmain_cpp_CSfxSlot_kill_FUN_005a7e60(this_ptr);
LAB_005a770c:
    local_54 = 0;
    if (0 < mix_buffer.num_channels) {
      local_48 = 0;
      do {
        if (*(int *)((int)aiStack_a0 + local_48) != 0) {
          local_24 = local_48;
          local_40 = local_58;
          iVar12 = 0;
          local_2c = (local_58 + *(int *)((int)this_ptr->channel_target_buffer_offsets + local_48))
                     - *(int *)((int)this_ptr->channel_current_buffer_offsets + local_48);
          local_28 = local_2c * 4;
          iVar14 = 0;
          if (0 < local_28) {
            do {
              pfVar1 = (float *)(*(int *)((int)aiStack_a0 + local_48) + iVar14);
              iVar14 = iVar14 + 4;
              *(float *)(*(int *)((int)aiStack_a0 + local_48) + -4 + iVar14) =
                   *(float *)(*(int *)((int)g_ChannelTertiaryBuffers + local_48) +
                             (iVar12 / local_2c) * 4) + *pfVar1;
              iVar12 = iVar12 + local_58;
            } while (iVar14 < local_28);
          }
          *(uint *)((int)this_ptr->channel_current_buffer_offsets + local_48) =
               *(uint *)((int)this_ptr->channel_target_buffer_offsets + local_48);
        }
        local_54 = local_54 + 1;
        local_48 = local_48 + 4;
      } while (local_54 < mix_buffer.num_channels);
    }
  }
  return;
}
