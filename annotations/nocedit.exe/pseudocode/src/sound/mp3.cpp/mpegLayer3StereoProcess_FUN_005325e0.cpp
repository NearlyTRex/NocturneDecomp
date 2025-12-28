// Name: sound_mp3.cpp_mpegLayer3StereoProcess_FUN_005325e0
// Address: 005325e0
// Address Range: [[005325e0, 005334a8]]
// Convention: __cdecl
// Signature: void sound_mp3.cpp_mpegLayer3StereoProcess_FUN_005325e0(SMpegStereoSubbandSamples * input_lr_samples, SMpegStereoSubbandSamples * output_samples, SMpegScalefactorBandData * scalefactor_data, SMpegFrame * frame_info, SMpegLayer3Granule * * granule_array)

#include "nocturne.h"

void __cdecl
sound_mp3_cpp_mpegLayer3StereoProcess_FUN_005325e0
          (SMpegStereoSubbandSamples *input_lr_samples,SMpegStereoSubbandSamples *output_samples,
          SMpegScalefactorBandData *scalefactor_data,SMpegFrame *frame_info,
          SMpegLayer3Granule **granule_array)

{
  int *piVar1;
  float fVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  float (*pafVar7) [18];
  int iVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  float (*pafVar12) [18];
  BADSPACEBASE *in_ESP;
  float10 fVar13;
  float *pfVar14;
  uint local_2078;
  float afStack_2074 [576];
  float afStack_1774 [576];
  float afStack_e74 [575];
  ushort uStack_578;
  uint uStack_576;
  int local_f4;
  SMpegLayer3Granule *local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  uint local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int *local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
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
  SMpegScalefactorBandData *local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  float (*local_58) [18];
  SMpegStereoSubbandSamples *local_54;
  float *local_50;
  int local_4c;
  float (*local_48) [18];
  float (*local_44) [18];
  float (*local_40) [18];
  float (*local_3c) [18];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint uStack_14;
  
  local_f0 = granule_array[4];
  if (((*granule_array)->big_value_pair_count == 1) && (((*granule_array)->global_gain & 2) != 0)) {
    local_ec = 1;
  }
  else {
    local_ec = 0;
  }
  if (((*granule_array)->big_value_pair_count == 1) && (((*granule_array)->global_gain & 1) != 0)) {
    local_ac = 1;
  }
  else {
    local_ac = 0;
  }
  local_e0 = (uint)((*granule_array)->field0_0x0 == 0);
  if ((frame_info->table_index & 1U) == 1) {
    pfVar14 = (float *)0x3fe6a09e;
  }
  else {
    pfVar14 = (float *)0x3feae89f;
  }
  local_f4 = *(int *)((*granule_array)->field2_0x8 + 8) + (*granule_array)->field0_0x0 * 3;
  iVar9 = 0;
  do {
    iVar6 = iVar9 + 2;
    *(ushort *)((int)&uStack_578 + iVar9) = 7;
    iVar9 = iVar6;
  } while (iVar6 != 0x480);
  if ((local_f0 == (SMpegLayer3Granule *)&DAT_00000002) && (local_ac != 0)) {
    if ((frame_info->samples_per_granule == 0) || (frame_info->js_bound != 2)) {
      iVar6 = 0x1f;
      iVar11 = 0x11;
      iVar9 = 0;
      pafVar12 = input_lr_samples->channels[0].samples + 0x1f;
      do {
        if ((*(uint *)((int)(pafVar12 + 0x20) + iVar11 * 4) & 0x7fffffff) != 0) {
          iVar9 = iVar6 * 0x12 + iVar11;
          break;
        }
        iVar11 = iVar11 + -1;
        if (iVar11 < 0) {
          pafVar12 = pafVar12 + -1;
          iVar6 = iVar6 + -1;
          iVar11 = 0x11;
        }
      } while (-1 < iVar6);
      iVar11 = local_f4 * 0x94;
      local_e8 = 0;
      iVar6 = *(int *)(&DAT_0067e6c8 + iVar11);
      while (iVar6 <= iVar9) {
        local_e8 = local_e8 + 1;
        piVar1 = (int *)(&DAT_0067e6cc + iVar11);
        iVar11 = iVar11 + 4;
        iVar6 = *piVar1;
      }
      iVar9 = *(int *)(&DAT_0067e6c8 + iVar11);
      local_94 = local_f4 * 0x94;
      local_8c = local_f4 * 0x94 + local_e8 * 4;
      if (local_e8 < 0x15) {
        local_88 = local_e8 * 4;
        do {
          iVar6 = *(int *)(&DAT_0067e6cc + local_88) - *(int *)(&DAT_0067e6c8 + local_88);
          if (0 < iVar6) {
            iVar11 = iVar9 * 2;
            local_a4 = (int)scalefactor_data->reserved + local_84;
            local_8c = iVar9 * 4;
            do {
              sVar3 = *(short *)(local_a4 + 0xf8);
              *(short *)((int)&uStack_576 + iVar11 + 2) = sVar3;
              if (sVar3 != 7) {
                if (local_dc == 0) {
                  fVar13 = (float10)fptan((float10)*(short *)((int)&uStack_576 + iVar11 + 2) *
                                          (float10)0.26179938779914902);
                  *(float *)((int)afStack_e74 + local_8c) = (float)fVar13;
                }
                else {
                  sound_mp3_cpp_calculateIntensityStereoRatio_FUN_00532540
                            (*(int *)((int)&uStack_576 + iVar11) >> 0x10,
                             (double)CONCAT44 /* combine 2-byte values */(local_2078,pfVar14),iVar9,(int)afStack_2074,pfVar14);
                }
              }
              iVar11 = iVar11 + 2;
              iVar9 = iVar9 + 1;
              iVar6 = iVar6 + -1;
              local_8c = local_8c + 4;
            } while (0 < iVar6);
          }
          local_84 = local_84 + 4;
          local_88 = local_88 + 4;
          local_e4 = local_e4 + 1;
        } while (local_84 < 0x54);
      }
      iVar11 = 0x240 - *(int *)(&DAT_0067e71c + local_90);
      iVar6 = *(int *)(&DAT_0067e718 + local_90);
      if (0 < iVar11) {
        local_a0 = iVar6 * 2;
        local_80 = iVar9 * 2;
        iVar9 = iVar9 * 4;
        do {
          iVar5 = local_80;
          iVar8 = local_a0;
          fVar2 = afStack_e74[iVar6];
          iVar11 = iVar11 + -1;
          *(float *)((int)afStack_2074 + iVar9) = afStack_2074[iVar6];
          *(float *)((int)afStack_e74 + iVar9) = fVar2;
          uVar4 = *(ushort *)((int)&uStack_576 + iVar8 + 2);
          *(float *)((int)afStack_1774 + iVar9) = afStack_1774[iVar6];
          local_80 = local_80 + 2;
          *(ushort *)((int)&uStack_576 + iVar5 + 2) = uVar4;
          iVar9 = iVar9 + 4;
        } while (0 < iVar11);
      }
    }
    else if (frame_info->sblimit == 0) {
      local_9c = local_f4 * 0x94;
      local_e4 = frame_info->sblimit;
      local_74 = scalefactor_data;
      do {
        iVar9 = 0xc;
        local_bc = -1;
        local_b4 = local_e0 + 1;
        do {
          iVar11 = iVar9 * 4 + local_b8;
          iVar6 = *(int *)(iVar11 + 0x67e724);
          iVar11 = *(int *)(&DAT_0067e728 + iVar11) - iVar6;
          iVar6 = iVar6 * 3 + (local_e0 + 1) * iVar11;
          for (; 0 < iVar11; iVar11 = iVar11 + -1) {
            iVar6 = iVar6 + -1;
            uStack_14 = 0x12;
            if (ABS(input_lr_samples->channels[1].samples[iVar6 / 0x12][iVar6 % 0x12]) != 0.0) {
              local_bc = iVar9;
              iVar9 = -10;
              iVar11 = -10;
            }
          }
          iVar9 = iVar9 + -1;
        } while (-1 < iVar9);
        local_2c = local_bc + 1;
        local_b0 = local_70;
        local_78 = (int)((SMpegScalefactorBandData *)(local_2c * 4))->reserved + local_98;
        if (local_2c < 0xc) {
          local_74 = (SMpegScalefactorBandData *)(local_2c * 4);
          do {
            iVar9 = *(int *)(&DAT_0067e728 + local_78) - *(int *)(local_78 + 0x67e724);
            iVar6 = *(int *)(local_78 + 0x67e724) * 3 + local_e0 * iVar9;
            if (0 < iVar9) {
              iVar11 = iVar6 * 2;
              local_ac = (int)local_74->reserved + local_b0;
              local_7c = iVar6 * 4;
              do {
                sVar3 = *(short *)(local_ac + 0x154);
                *(short *)((int)&uStack_576 + iVar11 + 2) = sVar3;
                if (sVar3 != 7) {
                  if (local_dc == 0) {
                    fVar13 = (float10)fptan((float10)*(short *)((int)&uStack_576 + iVar11 + 2) *
                                            (float10)0.26179938779914902);
                    *(float *)((int)afStack_e74 + local_7c) = (float)fVar13;
                  }
                  else {
                    sound_mp3_cpp_calculateIntensityStereoRatio_FUN_00532540
                              (*(int *)((int)&uStack_576 + iVar11) >> 0x10,
                               (double)CONCAT44 /* combine 2-byte values */(local_2078,pfVar14),iVar6,(int)afStack_2074,pfVar14)
                    ;
                  }
                }
                iVar11 = iVar11 + 2;
                iVar6 = iVar6 + 1;
                iVar9 = iVar9 + -1;
                local_7c = local_7c + 4;
              } while (0 < iVar9);
            }
            piVar1 = local_74->reserved;
            local_78 = local_78 + 4;
            local_74 = (SMpegScalefactorBandData *)(piVar1 + 1);
            local_2c = local_2c + 1;
          } while ((int)(piVar1 + 1) < 0x30);
        }
        iVar6 = *(int *)(&DAT_0067e758 + local_98) - *(int *)(&DAT_0067e754 + local_98);
        local_24 = *(int *)(&DAT_0067e750 + local_98) * 3;
        iVar9 = local_e0 * (*(int *)(&DAT_0067e754 + local_98) - *(int *)(&DAT_0067e750 + local_98))
                + local_24;
        local_24 = local_24 + local_e0 * iVar6;
        if (0 < iVar6) {
          iVar11 = local_24 * 4;
          iVar8 = local_24 * 2;
          do {
            fVar2 = afStack_e74[iVar9];
            iVar6 = iVar6 + -1;
            uVar4 = *(ushort *)((int)&uStack_576 + iVar9 * 2 + 2);
            *(float *)((int)afStack_2074 + iVar11) = afStack_2074[iVar9];
            *(float *)((int)afStack_e74 + iVar11) = fVar2;
            *(ushort *)((int)&uStack_576 + iVar8 + 2) = uVar4;
            *(float *)((int)afStack_1774 + iVar11) = afStack_1774[iVar9];
            local_24 = local_24 + 1;
            iVar11 = iVar11 + 4;
            iVar8 = iVar8 + 2;
          } while (0 < iVar6);
        }
        local_e0 = local_e0 + 1;
        local_70 = local_70 + 0x34;
      } while ((int)local_e0 < 3);
    }
    else {
      local_98 = local_f4 * 0x94;
      local_dc = 0;
      local_24 = 0;
      do {
        iVar9 = 0xc;
        local_d4 = 2;
        local_cc = local_20 + 1;
        do {
          iVar11 = iVar9 * 4 + local_d0;
          iVar6 = *(int *)(iVar11 + 0x67e724);
          iVar11 = *(int *)(&DAT_0067e728 + iVar11) - iVar6;
          iVar6 = (local_20 + 1) * iVar11 + iVar6 * 3;
          for (; 0 < iVar11; iVar11 = iVar11 + -1) {
            iVar6 = iVar6 + -1;
            uStack_14 = 0x12;
            if (ABS(input_lr_samples->channels[1].samples[iVar6 / 0x12][iVar6 % 0x12]) != 0.0) {
              local_d4 = iVar9;
              iVar9 = -10;
              iVar11 = -10;
            }
          }
          iVar9 = iVar9 + -1;
        } while (2 < iVar9);
        local_30 = local_d4 + 1;
        if (local_d8 < local_30) {
          local_d8 = local_30;
        }
        local_c8 = local_64;
        local_68 = local_30 * 4 + local_94;
        for (; local_30 < 0xc; local_30 = local_30 + 1) {
          iVar9 = *(int *)(&DAT_0067e728 + local_68) - *(int *)(local_68 + 0x67e724);
          iVar6 = *(int *)(local_68 + 0x67e724) * 3 + local_20 * iVar9;
          if (0 < iVar9) {
            iVar11 = iVar6 * 2;
            local_c4 = local_c8 + local_30 * 4;
            local_6c = iVar6 * 4;
            do {
              sVar3 = *(short *)(local_c4 + 0x154);
              *(short *)((int)&uStack_576 + iVar11 + 2) = sVar3;
              if (sVar3 != 7) {
                if (local_dc == 0) {
                  fVar13 = (float10)fptan((float10)*(short *)((int)&uStack_576 + iVar11 + 2) *
                                          (float10)0.26179938779914902);
                  *(float *)((int)afStack_e74 + local_6c) = (float)fVar13;
                }
                else {
                  sound_mp3_cpp_calculateIntensityStereoRatio_FUN_00532540
                            (*(int *)((int)&uStack_576 + iVar11) >> 0x10,
                             (double)CONCAT44 /* combine 2-byte values */(local_2078,pfVar14),iVar6,(int)afStack_2074,pfVar14);
                }
              }
              iVar11 = iVar11 + 2;
              iVar6 = iVar6 + 1;
              iVar9 = iVar9 + -1;
              local_6c = local_6c + 4;
            } while (0 < iVar9);
          }
          local_68 = local_68 + 4;
        }
        iVar6 = *(int *)(&DAT_0067e758 + local_94) - *(int *)(&DAT_0067e754 + local_94);
        local_28 = *(int *)(&DAT_0067e750 + local_94) * 3;
        iVar9 = local_20 * (*(int *)(&DAT_0067e754 + local_94) - *(int *)(&DAT_0067e750 + local_94))
                + local_28;
        local_28 = local_28 + local_20 * iVar6;
        if (0 < iVar6) {
          iVar11 = local_28 * 4;
          iVar8 = local_28 * 2;
          do {
            fVar2 = afStack_e74[iVar9];
            iVar6 = iVar6 + -1;
            uVar4 = *(ushort *)((int)&uStack_576 + iVar9 * 2 + 2);
            *(float *)((int)afStack_2074 + iVar11) = afStack_2074[iVar9];
            *(float *)((int)afStack_e74 + iVar11) = fVar2;
            *(ushort *)((int)&uStack_576 + iVar8 + 2) = uVar4;
            *(float *)((int)afStack_1774 + iVar11) = afStack_1774[iVar9];
            local_28 = local_28 + 1;
            iVar11 = iVar11 + 4;
            iVar8 = iVar8 + 2;
          } while (0 < iVar6);
        }
        local_20 = local_20 + 1;
        local_64 = local_64 + 0x34;
      } while (local_20 < 3);
      if (local_d8 < 4) {
        iVar9 = 2;
        iVar6 = 0x11;
        local_18 = -1;
        pafVar12 = input_lr_samples->channels[0].samples + 2;
        do {
          if ((*(uint *)((int)(pafVar12 + 0x20) + iVar6 * 4) & 0x7fffffff) != 0) {
            local_18 = iVar9 * 0x12 + iVar6;
            break;
          }
          iVar6 = iVar6 + -1;
          if (iVar6 < 0) {
            pafVar12 = pafVar12 + -1;
            iVar9 = iVar9 + -1;
            iVar6 = 0x11;
          }
        } while (-1 < iVar9);
        iVar6 = (int)local_f0 * 0x94;
        local_34 = 0;
        iVar9 = *(int *)(&DAT_0067e6c8 + iVar6);
        while (iVar9 <= local_18) {
          local_34 = local_34 + 1;
          piVar1 = (int *)(&DAT_0067e6cc + iVar6);
          iVar6 = iVar6 + 4;
          iVar9 = *piVar1;
        }
        iVar9 = *(int *)(&DAT_0067e6c8 + iVar6);
        if (local_34 < 8) {
          local_5c = local_34 * 4 + (int)local_f0 * 0x94;
          do {
            iVar6 = *(int *)(&DAT_0067e6cc + local_5c) - *(int *)(&DAT_0067e6c8 + local_5c);
            if (0 < iVar6) {
              iVar11 = iVar9 * 2;
              local_c0 = scalefactor_data->reserved + local_34;
              local_60 = iVar9 * 4;
              do {
                sVar3 = *(short *)(local_c0 + 0x3e);
                *(short *)((int)&uStack_576 + iVar11 + 2) = sVar3;
                if (sVar3 != 7) {
                  if (local_dc == 0) {
                    fVar13 = (float10)fptan((float10)*(short *)((int)&uStack_576 + iVar11 + 2) *
                                            (float10)0.26179938779914902);
                    *(float *)((int)afStack_e74 + local_60) = (float)fVar13;
                  }
                  else {
                    sound_mp3_cpp_calculateIntensityStereoRatio_FUN_00532540
                              (*(int *)((int)&uStack_576 + iVar11) >> 0x10,
                               (double)CONCAT44 /* combine 2-byte values */(local_2078,pfVar14),iVar9,(int)afStack_2074,pfVar14)
                    ;
                  }
                }
                iVar11 = iVar11 + 2;
                iVar9 = iVar9 + 1;
                iVar6 = iVar6 + -1;
                local_60 = local_60 + 4;
              } while (0 < iVar6);
            }
            local_34 = local_34 + 1;
            local_5c = local_5c + 4;
          } while (local_34 < 8);
        }
      }
    }
  }
  local_58 = (float (*) [18])output_samples;
  local_54 = output_samples + 1;
  do {
    iVar9 = 0;
    pafVar12 = local_58;
    do {
      pafVar12 = pafVar12 + 1;
      pafVar7 = local_58 + iVar9;
      do {
        (*pafVar7)[0] = 0.0;
        pafVar7 = (float (*) [18])(*pafVar7 + 1);
      } while (pafVar7 != pafVar12);
      iVar9 = iVar9 + 1;
    } while (iVar9 < 0x20);
    local_58 = local_58 + 0x20;
  } while ((SMpegStereoSubbandSamples *)local_58 != output_samples + 1);
  if (local_ec == 2) {
    local_1c = 0;
    local_40 = (float (*) [18])input_lr_samples;
    local_38 = 0;
    local_3c = (float (*) [18])output_samples;
    do {
      local_9c = local_1c * 0x12;
      local_4c = local_38;
      iVar9 = 0;
      local_48 = local_3c;
      iVar6 = 0;
      local_44 = local_40;
      do {
        local_f4 = local_9c + iVar9;
        pfVar10 = (float *)((int)*local_48 + iVar6);
        pfVar14 = (float *)((int)*local_44 + iVar6);
        if (*(short *)((int)&uStack_576 + local_4c + 2) == 7) {
          if (local_e8 == 0) {
            *pfVar10 = *pfVar14;
            pfVar10[0x240] = pfVar14[0x240];
          }
          else {
            fVar2 = (float)0.70710678237309499;
            *pfVar10 = (*pfVar14 + pfVar14[0x240]) * fVar2;
            fVar2 = (*pfVar14 - pfVar14[0x240]) * fVar2;
LAB_005327f7:
            pfVar10[0x240] = fVar2;
          }
        }
        else {
          if (local_a8 != 0) {
            if (local_dc == 0) {
              *pfVar10 = (afStack_e74[local_f4] / (afStack_e74[local_f4] + 1.0)) * *pfVar14;
              fVar2 = (1.0 / (afStack_e74[local_f4] + 1.0)) * *pfVar14;
            }
            else {
              *pfVar10 = *pfVar14 * afStack_2074[local_f4];
              fVar2 = *pfVar14 * afStack_1774[local_f4];
            }
            goto LAB_005327f7;
          }
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0x9bd;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("Error in streo processing.  File: %s",g_CurrentMp3Filename);
        }
        iVar9 = iVar9 + 1;
        iVar6 = iVar6 + 4;
        local_4c = local_4c + 2;
      } while (iVar9 < 0x12);
      local_1c = local_1c + 1;
      local_3c = local_3c + 1;
      local_38 = local_38 + 0x24;
      local_40 = local_40 + 1;
    } while (local_1c < 0x20);
  }
  else {
    iVar9 = 0;
    local_50 = (float *)output_samples;
    pafVar12 = (float (*) [18])input_lr_samples;
    do {
      pafVar12 = pafVar12 + 1;
      pafVar7 = input_lr_samples->channels[0].samples + iVar9;
      pfVar14 = local_50;
      do {
        pfVar10 = *pafVar7;
        pafVar7 = (float (*) [18])(*pafVar7 + 1);
        *pfVar14 = *pfVar10;
        pfVar14 = pfVar14 + 1;
      } while (pafVar7 != pafVar12);
      iVar9 = iVar9 + 1;
      local_50 = local_50 + 0x12;
    } while (iVar9 < 0x20);
  }
  return;
}
