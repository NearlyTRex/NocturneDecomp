// Name: sound_mp3.cpp_mpegLayer3StereoProcess_FUN_005325e0
// Address: 005325e0
// Address Range: [[005325e0, 005334a8]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_mpegLayer3StereoProcess_FUN_005325e0(SMpegStereoSubbandSamples *input_lr_samples,SMpegStereoSubbandSamples *output_samples,SMpegScalefactorBandData *scalefactor_data,SMpegFrame *frame_info,SMpegFrame *frame)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_mpegLayer3StereoProcess_FUN_005325e0(SMpegStereoSubbandSamples *input_lr_samples,SMpegStereoSubbandSamples *output_samples,SMpegScalefactorBandData *scalefactor_data,SMpegFrame *frame_info,SMpegFrame *frame)

{
  float fVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  float (*pafVar6) [18];
  int iVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  float *pfVar11;
  float (*pafVar12) [18];
  float10 fVar13;
  uint local_2080;
  uint local_207c;
  float local_2078 [576];
  float afStack_1778 [576];
  float afStack_e78 [575];
  uint uStack_57a;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  uint local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int *local_cc;
  int *local_c8;
  int *local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int *local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int *local_74;
  int local_70;
  int local_6c;
  int *local_68;
  int local_64;
  int local_60;
  float (*local_5c) [18];
  SMpegStereoSubbandSamples *local_58;
  float *local_54;
  int local_50;
  float (*local_4c) [18];
  float (*local_48) [18];
  float (*local_44) [18];
  float (*local_40) [18];
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  
  local_f0 = frame->samples_per_granule;
  if ((frame->header->channel_mode == 1) && ((frame->header->mode_extension & 2) != 0)) {
    local_ec = 1;
  }
  else {
    local_ec = 0;
  }
  if ((frame->header->channel_mode == 1) && ((frame->header->mode_extension & 1) != 0)) {
    local_ac = 1;
  }
  else {
    local_ac = 0;
  }
  local_e0 = (uint)(frame->header->mpeg_version == 0);
  if ((frame_info->table_index & 1U) == 1) {
    local_2080 = 0x667f6ee7;
    local_207c = 0x3fe6a09e;
  }
  else {
    local_2080 = 0x995b2417;
    local_207c = 0x3feae89f;
  }
  local_f4 = frame->header->sampling_rate_index + frame->header->mpeg_version * 3;
  iVar8 = 0;
  do {
    iVar5 = iVar8 + 2;
    *(ushort *)((int)&uStack_57a + iVar8 + 2) = 7;
    iVar8 = iVar5;
  } while (iVar5 != 0x480);
  if ((local_f0 == 2) && (local_ac != 0)) {
    if ((frame_info->samples_per_granule == 0) || (frame_info->js_bound != 2)) {
      iVar5 = 0x1f;
      iVar10 = 0x11;
      iVar8 = 0;
      pafVar12 = input_lr_samples->channels[0].samples + 0x1f;
      do {
        if ((*(uint *)((int)(pafVar12 + 0x20) + iVar10 * 4) & 0x7fffffff) != 0) {
          iVar8 = iVar5 * 0x12 + iVar10;
          break;
        }
        iVar10 = iVar10 + -1;
        if (iVar10 < 0) {
          pafVar12 = pafVar12 + -1;
          iVar5 = iVar5 + -1;
          iVar10 = 0x11;
        }
      } while (-1 < iVar5);
      iVar10 = local_f4 * 0x94;
      local_e8 = 0;
      for (iVar5 = g_Layer3BandIndex[local_f4].l[0]; iVar5 <= iVar8;
          iVar5 = *(int *)((int)g_Layer3BandIndex[0].l + iVar5)) {
        local_e8 = local_e8 + 1;
        iVar5 = iVar10 + 4;
        iVar10 = iVar10 + 4;
      }
      iVar8 = *(int *)((int)g_Layer3BandIndex[0].l + iVar10);
      local_94 = local_f4 * 0x94;
      local_8c = local_f4 * 0x94 + local_e8 * 4;
      if (local_e8 < 0x15) {
        local_88 = local_e8 * 4;
        do {
          iVar5 = *(int *)((int)g_Layer3BandIndex[0].l + local_8c + 4) -
                  *(int *)((int)g_Layer3BandIndex[0].l + local_8c);
          if (0 < iVar5) {
            iVar10 = iVar8 * 2;
            local_a8 = (int)scalefactor_data->granules[0].long_scalefactors + local_88;
            local_90 = iVar8 * 4;
            do {
              sVar2 = *(short *)(local_a8 + 0xf8);
              *(short *)((int)&uStack_57a + iVar10 + 2) = sVar2;
              if (sVar2 != 7) {
                if (local_e0 == 0) {
                  fVar13 = (float10)fptan((float10)*(short *)((int)&uStack_57a + iVar10 + 2) *
                                          (float10)0.26179938779914902);
                  *(float *)((int)afStack_e78 + local_90) = (float)fVar13;
                }
                else {
                  sound_mp3_cpp_calculateIntensityStereoRatio_FUN_00532540
                            (*(int *)((int)&uStack_57a + iVar10) >> 0x10,
                             (double)CONCAT44(local_207c,local_2080),iVar8,local_2078);
                }
              }
              iVar10 = iVar10 + 2;
              iVar8 = iVar8 + 1;
              iVar5 = iVar5 + -1;
              local_90 = local_90 + 4;
            } while (0 < iVar5);
          }
          local_88 = local_88 + 4;
          local_8c = local_8c + 4;
          local_e8 = local_e8 + 1;
        } while (local_88 < 0x54);
      }
      iVar10 = 0x240 - *(int *)((int)g_Layer3BandIndex[0].l + local_94 + 0x54);
      iVar5 = *(int *)((int)g_Layer3BandIndex[0].l + local_94 + 0x50);
      if (0 < iVar10) {
        local_a4 = iVar5 * 2;
        local_84 = iVar8 * 2;
        iVar8 = iVar8 * 4;
        do {
          iVar4 = local_84;
          iVar7 = local_a4;
          fVar1 = afStack_e78[iVar5];
          iVar10 = iVar10 + -1;
          *(float *)((int)local_2078 + iVar8) = local_2078[iVar5];
          *(float *)((int)afStack_e78 + iVar8) = fVar1;
          uVar3 = *(ushort *)((int)&uStack_57a + iVar7 + 2);
          *(float *)((int)afStack_1778 + iVar8) = afStack_1778[iVar5];
          local_84 = local_84 + 2;
          *(ushort *)((int)&uStack_57a + iVar4 + 2) = uVar3;
          iVar8 = iVar8 + 4;
        } while (0 < iVar10);
      }
    }
    else {
      iVar8 = local_f4 * 0x94;
      if (frame_info->sblimit == 0) {
        local_9c = iVar8;
        local_bc = iVar8;
        local_e4 = frame_info->sblimit;
        local_74 = (int *)scalefactor_data;
        do {
          iVar8 = 0xc;
          local_c0 = -1;
          local_b8 = local_e4 + 1;
          do {
            iVar10 = iVar8 * 4 + local_bc;
            iVar5 = *(int *)((int)g_Layer3BandIndex[0].s + iVar10);
            iVar10 = *(int *)((int)g_Layer3BandIndex[0].s + iVar10 + 4) - iVar5;
            iVar5 = iVar5 * 3 + (local_e4 + 1) * iVar10;
            for (; 0 < iVar10; iVar10 = iVar10 + -1) {
              iVar5 = iVar5 + -1;
              local_18 = 0x12;
              if (ABS(input_lr_samples->channels[1].samples[iVar5 / 0x12][iVar5 % 0x12]) != 0.0) {
                local_c0 = iVar8;
                iVar8 = -10;
                iVar10 = -10;
              }
            }
            iVar8 = iVar8 + -1;
          } while (-1 < iVar8);
          local_30 = local_c0 + 1;
          local_b4 = local_74;
          local_7c = local_9c + local_30 * 4;
          if (local_30 < 0xc) {
            local_78 = local_30 * 4;
            do {
              iVar8 = *(int *)((int)g_Layer3BandIndex[0].s + local_7c);
              iVar5 = *(int *)((int)g_Layer3BandIndex[0].s + local_7c + 4) - iVar8;
              iVar8 = iVar8 * 3 + local_e4 * iVar5;
              if (0 < iVar5) {
                iVar10 = iVar8 * 2;
                local_b0 = (int)local_b4 + local_78;
                local_80 = iVar8 * 4;
                do {
                  sVar2 = *(short *)(local_b0 + 0x154);
                  *(short *)((int)&uStack_57a + iVar10 + 2) = sVar2;
                  if (sVar2 != 7) {
                    if (local_e0 == 0) {
                      fVar13 = (float10)fptan((float10)*(short *)((int)&uStack_57a + iVar10 + 2) *
                                              (float10)0.26179938779914902);
                      *(float *)((int)afStack_e78 + local_80) = (float)fVar13;
                    }
                    else {
                      sound_mp3_cpp_calculateIntensityStereoRatio_FUN_00532540
                                (*(int *)((int)&uStack_57a + iVar10) >> 0x10,
                                 (double)CONCAT44(local_207c,local_2080),iVar8,local_2078);
                    }
                  }
                  iVar10 = iVar10 + 2;
                  iVar8 = iVar8 + 1;
                  iVar5 = iVar5 + -1;
                  local_80 = local_80 + 4;
                } while (0 < iVar5);
              }
              local_78 = local_78 + 4;
              local_7c = local_7c + 4;
              local_30 = local_30 + 1;
            } while (local_78 < 0x30);
          }
          iVar8 = *(int *)((int)g_Layer3BandIndex[0].s + local_9c + 0x2c);
          iVar5 = *(int *)((int)g_Layer3BandIndex[0].s + local_9c + 0x34) -
                  *(int *)((int)g_Layer3BandIndex[0].s + local_9c + 0x30);
          local_28 = iVar8 * 3;
          iVar8 = local_e4 * (*(int *)((int)g_Layer3BandIndex[0].s + local_9c + 0x30) - iVar8) +
                  local_28;
          local_28 = local_28 + local_e4 * iVar5;
          if (0 < iVar5) {
            iVar10 = local_28 * 4;
            iVar7 = local_28 * 2;
            do {
              fVar1 = afStack_e78[iVar8];
              iVar5 = iVar5 + -1;
              uVar3 = *(ushort *)((int)&uStack_57a + iVar8 * 2 + 2);
              *(float *)((int)local_2078 + iVar10) = local_2078[iVar8];
              *(float *)((int)afStack_e78 + iVar10) = fVar1;
              *(ushort *)((int)&uStack_57a + iVar7 + 2) = uVar3;
              *(float *)((int)afStack_1778 + iVar10) = afStack_1778[iVar8];
              local_28 = local_28 + 1;
              iVar10 = iVar10 + 4;
              iVar7 = iVar7 + 2;
            } while (0 < iVar5);
          }
          local_e4 = local_e4 + 1;
          local_74 = local_74 + 0xd;
        } while (local_e4 < 3);
      }
      else {
        local_98 = iVar8;
        local_d4 = iVar8;
        local_dc = 0;
        local_24 = 0;
        local_68 = (int *)scalefactor_data;
        do {
          iVar8 = 0xc;
          local_d8 = 2;
          local_d0 = local_24 + 1;
          do {
            iVar10 = iVar8 * 4 + local_d4;
            iVar5 = *(int *)((int)g_Layer3BandIndex[0].s + iVar10);
            iVar10 = *(int *)((int)g_Layer3BandIndex[0].s + iVar10 + 4) - iVar5;
            iVar5 = (local_24 + 1) * iVar10 + iVar5 * 3;
            for (; 0 < iVar10; iVar10 = iVar10 + -1) {
              iVar5 = iVar5 + -1;
              local_18 = 0x12;
              if (ABS(input_lr_samples->channels[1].samples[iVar5 / 0x12][iVar5 % 0x12]) != 0.0) {
                local_d8 = iVar8;
                iVar8 = -10;
                iVar10 = -10;
              }
            }
            iVar8 = iVar8 + -1;
          } while (2 < iVar8);
          local_34 = local_d8 + 1;
          if (local_dc < local_34) {
            local_dc = local_34;
          }
          local_cc = local_68;
          local_6c = local_34 * 4 + local_98;
          for (; local_34 < 0xc; local_34 = local_34 + 1) {
            iVar8 = *(int *)((int)g_Layer3BandIndex[0].s + local_6c);
            iVar5 = *(int *)((int)g_Layer3BandIndex[0].s + local_6c + 4) - iVar8;
            iVar8 = iVar8 * 3 + local_24 * iVar5;
            if (0 < iVar5) {
              iVar10 = iVar8 * 2;
              local_c8 = local_cc + local_34;
              local_70 = iVar8 * 4;
              do {
                sVar2 = *(short *)(local_c8 + 0x55);
                *(short *)((int)&uStack_57a + iVar10 + 2) = sVar2;
                if (sVar2 != 7) {
                  if (local_e0 == 0) {
                    fVar13 = (float10)fptan((float10)*(short *)((int)&uStack_57a + iVar10 + 2) *
                                            (float10)0.26179938779914902);
                    *(float *)((int)afStack_e78 + local_70) = (float)fVar13;
                  }
                  else {
                    sound_mp3_cpp_calculateIntensityStereoRatio_FUN_00532540
                              (*(int *)((int)&uStack_57a + iVar10) >> 0x10,
                               (double)CONCAT44(local_207c,local_2080),iVar8,local_2078);
                  }
                }
                iVar10 = iVar10 + 2;
                iVar8 = iVar8 + 1;
                iVar5 = iVar5 + -1;
                local_70 = local_70 + 4;
              } while (0 < iVar5);
            }
            local_6c = local_6c + 4;
          }
          iVar8 = *(int *)((int)g_Layer3BandIndex[0].s + local_98 + 0x2c);
          iVar5 = *(int *)((int)g_Layer3BandIndex[0].s + local_98 + 0x34) -
                  *(int *)((int)g_Layer3BandIndex[0].s + local_98 + 0x30);
          local_2c = iVar8 * 3;
          iVar8 = local_24 * (*(int *)((int)g_Layer3BandIndex[0].s + local_98 + 0x30) - iVar8) +
                  local_2c;
          local_2c = local_2c + local_24 * iVar5;
          if (0 < iVar5) {
            iVar10 = local_2c * 4;
            iVar7 = local_2c * 2;
            do {
              fVar1 = afStack_e78[iVar8];
              iVar5 = iVar5 + -1;
              uVar3 = *(ushort *)((int)&uStack_57a + iVar8 * 2 + 2);
              *(float *)((int)local_2078 + iVar10) = local_2078[iVar8];
              *(float *)((int)afStack_e78 + iVar10) = fVar1;
              *(ushort *)((int)&uStack_57a + iVar7 + 2) = uVar3;
              *(float *)((int)afStack_1778 + iVar10) = afStack_1778[iVar8];
              local_2c = local_2c + 1;
              iVar10 = iVar10 + 4;
              iVar7 = iVar7 + 2;
            } while (0 < iVar5);
          }
          local_24 = local_24 + 1;
          local_68 = local_68 + 0xd;
        } while (local_24 < 3);
        if (local_dc < 4) {
          iVar8 = 2;
          iVar5 = 0x11;
          local_1c = -1;
          pafVar12 = input_lr_samples->channels[0].samples + 2;
          do {
            if ((*(uint *)((int)(pafVar12 + 0x20) + iVar5 * 4) & 0x7fffffff) != 0) {
              local_1c = iVar8 * 0x12 + iVar5;
              break;
            }
            iVar5 = iVar5 + -1;
            if (iVar5 < 0) {
              pafVar12 = pafVar12 + -1;
              iVar8 = iVar8 + -1;
              iVar5 = 0x11;
            }
          } while (-1 < iVar8);
          iVar5 = local_f4 * 0x94;
          local_38 = 0;
          for (iVar8 = g_Layer3BandIndex[local_f4].l[0]; iVar8 <= local_1c;
              iVar8 = *(int *)((int)g_Layer3BandIndex[0].l + iVar8)) {
            local_38 = local_38 + 1;
            iVar8 = iVar5 + 4;
            iVar5 = iVar5 + 4;
          }
          iVar8 = *(int *)((int)g_Layer3BandIndex[0].l + iVar5);
          if (local_38 < 8) {
            local_60 = local_38 * 4 + local_f4 * 0x94;
            do {
              iVar5 = *(int *)((int)g_Layer3BandIndex[0].l + local_60 + 4) -
                      *(int *)((int)g_Layer3BandIndex[0].l + local_60);
              if (0 < iVar5) {
                iVar10 = iVar8 * 2;
                local_c4 = scalefactor_data->granules[0].long_scalefactors + local_38;
                local_64 = iVar8 * 4;
                do {
                  sVar2 = *(short *)(local_c4 + 0x3e);
                  *(short *)((int)&uStack_57a + iVar10 + 2) = sVar2;
                  if (sVar2 != 7) {
                    if (local_e0 == 0) {
                      fVar13 = (float10)fptan((float10)*(short *)((int)&uStack_57a + iVar10 + 2) *
                                              (float10)0.26179938779914902);
                      *(float *)((int)afStack_e78 + local_64) = (float)fVar13;
                    }
                    else {
                      sound_mp3_cpp_calculateIntensityStereoRatio_FUN_00532540
                                (*(int *)((int)&uStack_57a + iVar10) >> 0x10,
                                 (double)CONCAT44(local_207c,local_2080),iVar8,local_2078);
                    }
                  }
                  iVar10 = iVar10 + 2;
                  iVar8 = iVar8 + 1;
                  iVar5 = iVar5 + -1;
                  local_64 = local_64 + 4;
                } while (0 < iVar5);
              }
              local_38 = local_38 + 1;
              local_60 = local_60 + 4;
            } while (local_38 < 8);
          }
        }
      }
    }
  }
  local_5c = (float (*) [18])output_samples;
  local_58 = output_samples + 1;
  do {
    iVar8 = 0;
    pafVar12 = local_5c;
    do {
      pafVar12 = pafVar12 + 1;
      pafVar6 = local_5c + iVar8;
      do {
        (*pafVar6)[0] = 0.0;
        pafVar6 = (float (*) [18])(*pafVar6 + 1);
      } while (pafVar6 != pafVar12);
      iVar8 = iVar8 + 1;
    } while (iVar8 < 0x20);
    local_5c = local_5c + 0x20;
  } while ((SMpegStereoSubbandSamples *)local_5c != output_samples + 1);
  if (local_f0 == 2) {
    local_20 = 0;
    local_44 = (float (*) [18])input_lr_samples;
    local_3c = 0;
    local_40 = (float (*) [18])output_samples;
    do {
      local_a0 = local_20 * 0x12;
      local_50 = local_3c;
      iVar8 = 0;
      local_4c = local_40;
      iVar5 = 0;
      local_48 = local_44;
      do {
        local_f8 = local_a0 + iVar8;
        pfVar9 = (float *)((int)*local_4c + iVar5);
        pfVar11 = (float *)((int)*local_48 + iVar5);
        if (*(short *)((int)&uStack_57a + local_50 + 2) == 7) {
          if (local_ec == 0) {
            *pfVar9 = *pfVar11;
            pfVar9[0x240] = pfVar11[0x240];
          }
          else {
            fVar1 = (float)0.70710678237309499;
            *pfVar9 = (*pfVar11 + pfVar11[0x240]) * fVar1;
            fVar1 = (*pfVar11 - pfVar11[0x240]) * fVar1;
LAB_005327f7:
            pfVar9[0x240] = fVar1;
          }
        }
        else {
          if (local_ac != 0) {
            if (local_e0 == 0) {
              *pfVar9 = (afStack_e78[local_f8] / (afStack_e78[local_f8] + 1.0)) * *pfVar11;
              fVar1 = (1.0 / (afStack_e78[local_f8] + 1.0)) * *pfVar11;
            }
            else {
              *pfVar9 = *pfVar11 * local_2078[local_f8];
              fVar1 = *pfVar11 * afStack_1778[local_f8];
            }
            goto LAB_005327f7;
          }
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0x9bd;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("Error in streo processing.  File: %s",g_CurrentMp3Filename);
        }
        iVar8 = iVar8 + 1;
        iVar5 = iVar5 + 4;
        local_50 = local_50 + 2;
      } while (iVar8 < 0x12);
      local_20 = local_20 + 1;
      local_40 = local_40 + 1;
      local_3c = local_3c + 0x24;
      local_44 = local_44 + 1;
    } while (local_20 < 0x20);
  }
  else {
    iVar8 = 0;
    local_54 = (float *)output_samples;
    pafVar12 = (float (*) [18])input_lr_samples;
    do {
      pafVar12 = pafVar12 + 1;
      pafVar6 = input_lr_samples->channels[0].samples + iVar8;
      pfVar11 = local_54;
      do {
        pfVar9 = *pafVar6;
        pafVar6 = (float (*) [18])(*pafVar6 + 1);
        *pfVar11 = *pfVar9;
        pfVar11 = pfVar11 + 1;
      } while (pafVar6 != pafVar12);
      iVar8 = iVar8 + 1;
      local_54 = local_54 + 0x12;
    } while (iVar8 < 0x20);
  }
  return;
}
