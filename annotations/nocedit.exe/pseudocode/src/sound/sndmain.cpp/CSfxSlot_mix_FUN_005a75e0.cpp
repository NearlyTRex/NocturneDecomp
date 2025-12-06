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
  byte bVar4;
  double dVar5;
  uint uVar6;
  uint extraout_EAX;
  uint extraout_EAX_00;
  uint extraout_EAX_01;
  CSfxSample *pCVar7;
  CSfxSlot *pCVar8;
  int iVar9;
  uint uVar10;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  CVector3d *pCVar11;
  int iVar12;
  BADSPACEBASE *in_ESP;
  float10 in_ST0;
  float10 fVar13;
  double dVar14;
  double dVar15;
  uint uVar16;
  uint uVar17;
  short *sample_data;
  SStereoBuffers *channel_buffers;
  double dVar18;
  SStereoGains *channel_gains;
  uint uStack_ac;
  int iStack_a4;
  int aiStack_a0 [9];
  double local_7c;
  float local_74 [4];
  float *local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  CVector3d *local_3c;
  CVector3d *local_38;
  CVector3d *local_34;
  CVector3d *local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0xa27;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::mix - must be locked!");
  }
  if (this_ptr->playback_state != 0) {
    local_58 = mix_buffer.num_output_samples;
    local_60 = 1;
    if (this_ptr->sample != (CSfxSample *)0x0) {
      local_74[3] = 1.0 / (float)(1 << ((char)(this_ptr->sample->sample_info).bit_depth + 6U & 0x1f)
                                 );
      iVar9 = 0;
      pCVar8 = this_ptr;
      if (0 < mix_buffer.num_channels) {
        do {
          if (local_74[3] < pCVar8->channel_volumes[0]) {
            local_60 = 0;
            break;
          }
          iVar9 = iVar9 + 1;
          pCVar8 = (CSfxSlot *)&(pCVar8->options).position;
        } while (iVar9 < mix_buffer.num_channels);
      }
    }
    iVar9 = 0;
    pCVar8 = this_ptr;
    if (0 < mix_buffer.num_channels) {
      do {
        if ((local_60 != 0) || (pCVar8->channel_current_buffer_offsets[0] < 0)) {
          pCVar8->channel_current_buffer_offsets[0] = pCVar8->channel_target_buffer_offsets[0];
        }
        mix_buffer.channel_buffers[iVar9] =
             mix_buffer.channel_buffers[iVar9] + pCVar8->channel_current_buffer_offsets[0];
        uVar6 = pCVar8->channel_current_buffer_offsets[0] - pCVar8->channel_target_buffer_offsets[0]
        ;
        uVar10 = (int)uVar6 >> 0x1f;
        if ((int)((uVar6 ^ uVar10) - uVar10) < 2) {
          aiStack_a0[iVar9] = 0;
        }
        else {
          aiStack_a0[iVar9] = (int)mix_buffer.channel_buffers[iVar9];
          mix_buffer.channel_buffers[iVar9] = g_ChannelTertiaryBuffers[iVar9];
          crt_memory_c_memset_FUN_005fde40
                    (mix_buffer.channel_buffers[iVar9],0,mix_buffer.num_output_samples << 2);
        }
        iVar9 = iVar9 + 1;
        pCVar8 = (CSfxSlot *)&(pCVar8->options).position;
      } while (iVar9 < mix_buffer.num_channels);
    }
    local_64 = this_ptr->channel_volumes;
    while (((iVar9 = mix_buffer.num_output_samples, this_ptr->playback_state != 0 &&
            (pCVar7 = this_ptr->sample, pCVar7 != (CSfxSample *)0x0)) &&
           (0.0 <= (this_ptr->options).trigger_time))) {
      if ((mix_buffer.num_output_samples < 1) ||
         (dVar18 = (double)(((float)(pCVar7->sample_info).sample_rate /
                            (float)mix_buffer.output_sample_rate) * this_ptr->effective_frequency),
         dVar18 <= 0.0)) goto LAB_005a770c;
      dVar5 = (double)pCVar7->streaming_buffer_size;
      uStack_ac = SUB84 /* extract 2-byte value */(dVar5,0);
      iStack_a4 = mix_buffer.num_output_samples;
      local_4c = 0;
      if (0 < (pCVar7->sample_info).sample_count) {
        dVar14 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
        in_ST0 = (float10)dVar14;
        fVar13 = (float10)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX);
        crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX));
        local_5c = (int)ROUND(fVar13);
        if (local_5c < iVar9) {
          local_4c = 1;
          iStack_a4 = local_5c;
        }
      }
      uVar16 = *(uint *)&this_ptr->prev_hardware_playback_pos;
      uVar17 = *(uint *)((int)&this_ptr->prev_hardware_playback_pos + 4);
      local_50 = 0;
      dVar14 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
      in_ST0 = (float10)dVar14;
      fVar13 = (float10)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX_00,extraout_EAX_00);
      crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX_00,extraout_EAX_00));
      dVar14 = (double)CONCAT44 /* combine 2-byte values */(uVar17,uVar16);
      local_44 = (int)ROUND(fVar13);
      if (local_44 < 1) {
        dVar14 = (double)CONCAT44 /* combine 2-byte values */(uVar17,uVar16) - dVar5;
        if (dVar14 < 0.0) {
          dVar14 = 0.0;
        }
        dVar15 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
        in_ST0 = (float10)dVar15;
        fVar13 = (float10)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX_01,extraout_EAX_01);
        crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX_01,extraout_EAX_01));
        local_44 = (int)ROUND(fVar13);
      }
      sample_data = (short *)((ulonglong)dVar14 >> 0x20);
      channel_gains = (SStereoGains *)((ulonglong)dVar18 >> 0x20);
      channel_buffers = SUB84 /* extract 2-byte value */(dVar18,0);
      if (local_44 < iStack_a4) {
        iStack_a4 = local_44;
        local_4c = 0;
        local_50 = 1;
      }
      else if (local_44 == iStack_a4) {
        local_50 = 1;
      }
      if (local_60 == 0) {
        pCVar7 = this_ptr->sample;
        pCVar11 = (CVector3d *)(iStack_a4 << 2);
        if ((pCVar7->sample_info).bit_depth == 8) {
          if ((pCVar7->sample_info).num_channels == 2) {
            if (0 < iStack_a4) {
              uVar6 = 0;
              local_1c = 0;
              local_3c = pCVar11;
              do {
                fVar13 = (float10)dVar14;
                dVar15 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(this_ptr->sample,uVar6));
                local_74[2] = (float)(int)(*(byte *)(*(int *)((int)((ulonglong)dVar15 >> 0x20) +
                                                             0x120) + (int)ROUND(fVar13) * 2) - 0x80
                                          );
                local_74[3] = (float)(int)(*(byte *)((int)this_ptr->sample->sample_data +
                                                    (int)ROUND(fVar13) * 2 + 1) - 0x80);
                uVar6 = 0;
                pCVar8 = this_ptr;
                if (0 < mix_buffer.num_channels) {
                  do {
                    uVar10 = uVar6 & 1;
                    ppfVar3 = mix_buffer.channel_buffers + uVar6;
                    uVar6 = uVar6 + 1;
                    *(float *)((int)*ppfVar3 + local_18) =
                         local_74[uVar10 + 2] * pCVar8->channel_volumes[0] +
                         *(float *)((int)*ppfVar3 + local_18);
                    pCVar8 = (CSfxSlot *)&(pCVar8->options).position;
                  } while ((int)uVar6 < mix_buffer.num_channels);
                }
                dVar14 = dVar14 + (double)CONCAT44 /* combine 2-byte values */(uStack_ac,(int)((ulonglong)dVar18 >> 0x20));
                local_18 = local_18 + 4;
              } while (local_18 < (int)local_38);
            }
          }
          else if (0 < iStack_a4) {
            iVar9 = 0;
            local_38 = pCVar11;
            do {
              fVar13 = (float10)dVar14;
              dVar15 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(pCVar11,pCVar7));
              pCVar11 = (CVector3d *)((ulonglong)dVar15 >> 0x20);
              bVar4 = *(byte *)((int)this_ptr->sample->sample_data + (int)ROUND(fVar13));
              pCVar7 = (CSfxSample *)0x0;
              pCVar8 = this_ptr;
              if (0 < mix_buffer.num_channels) {
                do {
                  ppfVar3 = mix_buffer.channel_buffers + (int)pCVar7;
                  pCVar7 = (CSfxSample *)((pCVar7->sample_info).name + 1);
                  *(float *)((int)*ppfVar3 + iVar9) =
                       (float)(int)(bVar4 - 0x80) * pCVar8->channel_volumes[0] +
                       *(float *)((int)*ppfVar3 + iVar9);
                  pCVar11 = &(pCVar8->options).position;
                  pCVar8 = (CSfxSlot *)pCVar11;
                } while ((int)pCVar7 < mix_buffer.num_channels);
              }
              dVar14 = dVar14 + (double)CONCAT44 /* combine 2-byte values */(uStack_ac,(int)((ulonglong)dVar18 >> 0x20));
              iVar9 = iVar9 + 4;
            } while (iVar9 < (int)local_34);
          }
        }
        else if ((pCVar7->sample_info).num_channels == 2) {
          if (mix_buffer.num_channels == 2) {
            local_7c = sound_sndmain_cpp_mixResampleStereoToStereo_FUN_005a5fb0
                                 (sample_data,channel_buffers,channel_gains,
                                  (double)CONCAT44 /* combine 2-byte values */(SUB84 /* extract 2-byte value */(dVar14,0),iStack_a4),
                                  (double)CONCAT44 /* combine 2-byte values */(channel_buffers,sample_data),(int)channel_gains);
            dVar14 = local_7c;
          }
          else if (0 < iStack_a4) {
            uVar6 = 0;
            local_20 = 0;
            local_34 = pCVar11;
            do {
              fVar13 = (float10)dVar14;
              dVar15 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(this_ptr->sample,uVar6));
              local_74[0] = (float)*(short *)(*(int *)((int)((ulonglong)dVar15 >> 0x20) + 0x120) +
                                             (int)ROUND(fVar13) * 4);
              local_74[1] = (float)*(short *)((int)this_ptr->sample->sample_data +
                                             (int)ROUND(fVar13) * 4 + 2);
              uVar6 = 0;
              pCVar8 = this_ptr;
              if (0 < mix_buffer.num_channels) {
                do {
                  uVar10 = uVar6 & 1;
                  ppfVar3 = mix_buffer.channel_buffers + uVar6;
                  uVar6 = uVar6 + 1;
                  *(float *)((int)*ppfVar3 + local_1c) =
                       local_74[uVar10] * pCVar8->channel_volumes[0] +
                       *(float *)((int)*ppfVar3 + local_1c);
                  pCVar8 = (CSfxSlot *)&(pCVar8->options).position;
                } while ((int)uVar6 < mix_buffer.num_channels);
              }
              dVar14 = dVar14 + (double)CONCAT44 /* combine 2-byte values */(uStack_ac,(int)((ulonglong)dVar18 >> 0x20));
              local_1c = local_1c + 4;
            } while (local_1c < (int)local_30);
          }
        }
        else if (mix_buffer.num_channels == 2) {
          local_7c = sound_sndmain_cpp_mixResampleMonoToStereo_FUN_005a5e70
                               (sample_data,channel_buffers,channel_gains,
                                (double)CONCAT44 /* combine 2-byte values */(SUB84 /* extract 2-byte value */(dVar14,0),iStack_a4),
                                (double)CONCAT44 /* combine 2-byte values */(channel_buffers,sample_data),(int)channel_gains);
          dVar14 = local_7c;
        }
        else if (0 < iStack_a4) {
          iVar9 = 0;
          local_30 = pCVar11;
          do {
            fVar13 = (float10)dVar14;
            dVar15 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(pCVar11,this_ptr->sample));
            local_14 = (float)*(short *)(*(int *)(SUB84 /* extract 2-byte value */(dVar15,0) + 0x120) + (int)ROUND(fVar13) * 2)
            ;
            iVar12 = 0;
            pCVar8 = this_ptr;
            pCVar11 = (CVector3d *)mix_buffer.num_channels;
            if (0 < mix_buffer.num_channels) {
              do {
                ppfVar3 = mix_buffer.channel_buffers + iVar12;
                iVar12 = iVar12 + 1;
                *(float *)((int)*ppfVar3 + iVar9) =
                     local_14 * pCVar8->channel_volumes[0] + *(float *)((int)*ppfVar3 + iVar9);
                pCVar11 = &(pCVar8->options).position;
                pCVar8 = (CSfxSlot *)pCVar11;
              } while (iVar12 < mix_buffer.num_channels);
            }
            dVar14 = dVar14 + (double)CONCAT44 /* combine 2-byte values */(uStack_ac,(int)((ulonglong)dVar18 >> 0x20));
            iVar9 = iVar9 + 4;
          } while (iVar9 < local_2c);
        }
      }
      else {
        dVar14 = (double)iStack_a4 * dVar18 + dVar14;
      }
      if (local_50 != 0) {
        dVar14 = 0.0;
      }
      if (dVar5 <= dVar14) {
        dVar14 = dVar14 - dVar5;
      }
      sound_sndmain_cpp_CSfxSlot_updatePlaybackPos_FUN_005a8170(this_ptr,dVar14);
      if (local_48 != 0) {
        iVar12 = this_ptr->loop_marker_index + 1;
        iVar9 = this_ptr->sample->loop_markers[this_ptr->loop_marker_index];
        this_ptr->loop_marker_index = iVar12;
        pCVar7 = this_ptr->sample;
        (this_ptr->options).trigger_time = (double)iVar9;
        if (pCVar7->loop_marker_count <= iVar12) {
          this_ptr->loop_marker_index = 0;
        }
      }
      iVar9 = 0;
      mix_buffer.num_output_samples = mix_buffer.num_output_samples - aiStack_a0[0];
      if (0 < mix_buffer.num_channels) {
        iVar12 = 0;
        do {
          piVar2 = (int *)((int)mix_buffer.channel_buffers + iVar12);
          *piVar2 = *piVar2 + aiStack_a0[0] * 4;
          iVar9 = iVar9 + 1;
          iVar12 = iVar12 + 4;
        } while (iVar9 < mix_buffer.num_channels);
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
          iVar9 = 0;
          local_2c = (local_58 + *(int *)((int)this_ptr->channel_target_buffer_offsets + local_48))
                     - *(int *)((int)this_ptr->channel_current_buffer_offsets + local_48);
          local_28 = local_2c * 4;
          iVar12 = 0;
          if (0 < local_28) {
            do {
              pfVar1 = (float *)(*(int *)((int)aiStack_a0 + local_48) + iVar12);
              iVar12 = iVar12 + 4;
              *(float *)(*(int *)((int)aiStack_a0 + local_48) + -4 + iVar12) =
                   *(float *)(*(int *)((int)g_ChannelTertiaryBuffers + local_48) +
                             (iVar9 / local_2c) * 4) + *pfVar1;
              iVar9 = iVar9 + local_58;
            } while (iVar12 < local_28);
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
