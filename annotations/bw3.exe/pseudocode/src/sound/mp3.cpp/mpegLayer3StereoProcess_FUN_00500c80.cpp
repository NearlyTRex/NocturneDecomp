// Name: sound_mp3.cpp_mpegLayer3StereoProcess_FUN_00500c80
// Address: 00500c80
// Address Range: [[00500c80, 005019e1]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_mpegLayer3StereoProcess_FUN_00500c80(SMpegStereoSubbandSamples *input_lr_samples,SMpegStereoSubbandSamples *output_samples,SMpegScalefactorBandData *scalefactor_data,SMpegLayer3GranuleInfo *granule,SMpegFrame *frame)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_mpegLayer3StereoProcess_FUN_00500c80(SMpegStereoSubbandSamples *input_lr_samples,SMpegStereoSubbandSamples *output_samples,SMpegScalefactorBandData *scalefactor_data,SMpegLayer3GranuleInfo *granule,SMpegFrame *frame)

{
  int *piVar1;
  uint uVar2;
  short sVar3;
  ushort uVar4;
  float fVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  float (*pafVar9) [18];
  int iVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  float *pfVar14;
  int iVar15;
  float (*pafVar16) [18];
  int iVar17;
  int iVar18;
  bool bVar19;
  float10 fVar20;
  uint local_100;
  uint local_fc;
  int local_f8;
  int local_f4;
  int local_e4;
  int local_dc;
  int local_d8;
  int local_c0;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int *local_70;
  int local_6c;
  int local_68;
  int *local_64;
  int local_60;
  int local_5c;
  float (*local_58) [18];
  float *local_50;
  int local_4c;
  float (*local_40) [18];
  float (*local_3c) [18];
  int local_38;
  int local_34;
  int local_20;
  int local_1c;
  
  iVar15 = frame->channel_count;
  if ((frame->header->channel_mode == 1) && ((frame->header->mode_extension & 2) != 0)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if ((frame->header->channel_mode == 1) && ((frame->header->mode_extension & 1) != 0)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  bVar19 = frame->header->mpeg_version != 0;
  if ((granule->scalefac_compress & 1U) == 1) {
    local_100 = 0x667f6ee7;
    local_fc = 0x3fe6a09e;
  }
  else {
    local_100 = 0x995b2417;
    local_fc = 0x3feae89f;
  }
  iVar10 = frame->header->sampling_rate_index + frame->header->mpeg_version * 3;
  iVar11 = 0;
  do {
    iVar8 = iVar11 + 2;
    *(ushort *)(iVar11 + 0x1d91098) = 7;
    iVar11 = iVar8;
  } while (iVar8 != 0x480);
  if ((iVar15 == 2) && (bVar7)) {
    if ((granule->window_switching_flag == 0) || (granule->block_type != 2)) {
      iVar8 = 0x1f;
      iVar13 = 0x11;
      iVar11 = 0;
      pafVar16 = input_lr_samples->channels[0].samples + 0x1f;
      do {
        if ((*(uint *)((int)(pafVar16 + 0x20) + iVar13 * 4) & 0x7fffffff) != 0) {
          iVar11 = iVar8 * 0x12 + iVar13;
          break;
        }
        iVar13 = iVar13 + -1;
        if (iVar13 < 0) {
          pafVar16 = pafVar16 + -1;
          iVar8 = iVar8 + -1;
          iVar13 = 0x11;
        }
      } while (-1 < iVar8);
      iVar13 = iVar10 * 0x94;
      iVar17 = 0;
      iVar8 = *(int *)(&DAT_00601668 + iVar13);
      while (iVar8 <= iVar11) {
        iVar17 = iVar17 + 1;
        piVar1 = (int *)((int)g_INT_ARRAY_0060166c + iVar13);
        iVar13 = iVar13 + 4;
        iVar8 = *piVar1;
      }
      iVar11 = *(int *)(&DAT_00601668 + iVar13);
      iVar10 = iVar10 * 0x94;
      local_84 = iVar17 * 4;
      local_88 = iVar10 + local_84;
      if (iVar17 < 0x15) {
        do {
          iVar8 = *(int *)((int)g_INT_ARRAY_0060166c + local_88) -
                  *(int *)(&DAT_00601668 + local_88);
          if (0 < iVar8) {
            iVar13 = iVar11 * 2;
            local_8c = iVar11 * 4;
            do {
              sVar3 = *(short *)((int)scalefactor_data->granules[1].long_scalefactors + local_84);
              *(short *)(iVar13 + 0x1d91098) = sVar3;
              if (sVar3 != 7) {
                if (bVar19) {
                  fVar20 = (float10)fptan((float10)*(short *)(iVar13 + 0x1d91098) *
                                          (float10)0.26179938779914902);
                  *(float *)(local_8c + 0x1d91518) = (float)fVar20;
                }
                else {
                  sound_mp3_cpp_calculateIntensityStereoRatio_FUN_00500be0
                            (*(int *)((int)g_DOUBLE_ARRAY_01d90a58 + iVar13 + 0x63e) >> 0x10,
                             __BITCAST_DOUBLE(CONCAT44(local_fc,local_100)),iVar11,&g_FLOAT_01d91e18);
                }
              }
              iVar13 = iVar13 + 2;
              iVar11 = iVar11 + 1;
              local_8c = local_8c + 4;
              iVar8 = iVar8 + -1;
            } while (0 < iVar8);
          }
          local_88 = local_88 + 4;
          local_84 = local_84 + 4;
        } while (local_84 < 0x54);
      }
      iVar8 = 0x240 - *(int *)(&DAT_006016bc + iVar10);
      iVar10 = *(int *)(&DAT_006016b8 + iVar10);
      if (0 < iVar8) {
        iVar13 = iVar11 * 4;
        local_80 = iVar11 * 2;
        do {
          uVar2 = *(uint *)(iVar10 * 4 + 0x1d91518);
          iVar8 = iVar8 + -1;
          *(float *)((int)&g_FLOAT_01d91e18 + iVar13) = (&g_FLOAT_01d91e18)[iVar10];
          *(uint *)(iVar13 + 0x1d91518) = uVar2;
          uVar4 = *(ushort *)(iVar10 * 2 + 0x1d91098);
          *(uint *)(iVar13 + 0x1d92718) = *(uint *)(iVar10 * 4 + 0x1d92718);
          *(ushort *)(local_80 + 0x1d91098) = uVar4;
          iVar13 = iVar13 + 4;
          local_80 = local_80 + 2;
        } while (0 < iVar8);
      }
    }
    else {
      iVar11 = iVar10 * 0x94;
      if (granule->mixed_block_flag == 0) {
        local_70 = (int *)scalefactor_data;
        local_e4 = 0;
        do {
          iVar10 = 0xc;
          local_c0 = -1;
          do {
            iVar13 = iVar10 * 4 + iVar11;
            iVar8 = *(int *)(iVar13 + 0x6016c4);
            iVar13 = *(int *)(&DAT_006016c8 + iVar13) - iVar8;
            iVar8 = iVar8 * 3 + (local_e4 + 1) * iVar13;
            for (; 0 < iVar13; iVar13 = iVar13 + -1) {
              iVar8 = iVar8 + -1;
              iVar17 = iVar10;
              if (ABS(input_lr_samples->channels[1].samples[iVar8 / 0x12][iVar8 % 0x12]) != 0.0) {
                iVar17 = -10;
                iVar13 = -10;
                local_c0 = iVar10;
              }
              iVar10 = iVar17;
            }
            iVar10 = iVar10 + -1;
          } while (-1 < iVar10);
          local_74 = (local_c0 + 1) * 4;
          local_78 = iVar11 + local_74;
          if (local_c0 + 1 < 0xc) {
            do {
              iVar10 = *(int *)(&DAT_006016c8 + local_78) - *(int *)(local_78 + 0x6016c4);
              iVar8 = local_e4 * iVar10 + *(int *)(local_78 + 0x6016c4) * 3;
              if (0 < iVar10) {
                iVar13 = iVar8 * 2;
                local_7c = iVar8 * 4;
                do {
                  sVar3 = *(short *)((int)local_70 + local_74 + 0x154);
                  *(short *)(iVar13 + 0x1d91098) = sVar3;
                  if (sVar3 != 7) {
                    if (bVar19) {
                      fVar20 = (float10)fptan((float10)*(short *)(iVar13 + 0x1d91098) *
                                              (float10)0.26179938779914902);
                      *(float *)(local_7c + 0x1d91518) = (float)fVar20;
                    }
                    else {
                      sound_mp3_cpp_calculateIntensityStereoRatio_FUN_00500be0
                                (*(int *)((int)g_DOUBLE_ARRAY_01d90a58 + iVar13 + 0x63e) >> 0x10,
                                 __BITCAST_DOUBLE(CONCAT44(local_fc,local_100)),iVar8,&g_FLOAT_01d91e18);
                    }
                  }
                  iVar13 = iVar13 + 2;
                  iVar8 = iVar8 + 1;
                  local_7c = local_7c + 4;
                  iVar10 = iVar10 + -1;
                } while (0 < iVar10);
              }
              local_78 = local_78 + 4;
              local_74 = local_74 + 4;
            } while (local_74 < 0x30);
          }
          iVar13 = *(int *)(&DAT_006016f8 + iVar11) - *(int *)(&DAT_006016f4 + iVar11);
          iVar10 = *(int *)(&DAT_006016f0 + iVar11) * 3;
          iVar8 = local_e4 * (*(int *)(&DAT_006016f4 + iVar11) - *(int *)(&DAT_006016f0 + iVar11)) +
                  iVar10;
          iVar10 = iVar10 + local_e4 * iVar13;
          if (0 < iVar13) {
            iVar17 = iVar10 * 4;
            iVar10 = iVar10 * 2;
            do {
              uVar2 = *(uint *)(iVar8 * 4 + 0x1d91518);
              iVar13 = iVar13 + -1;
              uVar4 = *(ushort *)(iVar8 * 2 + 0x1d91098);
              *(float *)((int)&g_FLOAT_01d91e18 + iVar17) = (&g_FLOAT_01d91e18)[iVar8];
              *(uint *)(iVar17 + 0x1d91518) = uVar2;
              *(ushort *)(iVar10 + 0x1d91098) = uVar4;
              *(uint *)(iVar17 + 0x1d92718) = *(uint *)(iVar8 * 4 + 0x1d92718);
              iVar17 = iVar17 + 4;
              iVar10 = iVar10 + 2;
            } while (0 < iVar13);
          }
          local_e4 = local_e4 + 1;
          local_70 = local_70 + 0xd;
        } while (local_e4 < 3);
      }
      else {
        local_dc = 0;
        local_f4 = 0;
        local_64 = (int *)scalefactor_data;
        do {
          iVar8 = 0xc;
          local_d8 = 2;
          do {
            iVar17 = iVar8 * 4 + iVar11;
            iVar13 = *(int *)(iVar17 + 0x6016c4);
            iVar17 = *(int *)(&DAT_006016c8 + iVar17) - iVar13;
            iVar13 = (local_f4 + 1) * iVar17 + iVar13 * 3;
            for (; 0 < iVar17; iVar17 = iVar17 + -1) {
              iVar13 = iVar13 + -1;
              iVar18 = iVar8;
              if (ABS(input_lr_samples->channels[1].samples[iVar13 / 0x12][iVar13 % 0x12]) != 0.0) {
                iVar18 = -10;
                iVar17 = -10;
                local_d8 = iVar8;
              }
              iVar8 = iVar18;
            }
            iVar8 = iVar8 + -1;
          } while (2 < iVar8);
          local_34 = local_d8 + 1;
          if (local_dc < local_34) {
            local_dc = local_34;
          }
          local_68 = local_34 * 4 + iVar11;
          for (; local_34 < 0xc; local_34 = local_34 + 1) {
            iVar8 = *(int *)(&DAT_006016c8 + local_68) - *(int *)(local_68 + 0x6016c4);
            iVar13 = *(int *)(local_68 + 0x6016c4) * 3 + local_f4 * iVar8;
            if (0 < iVar8) {
              iVar17 = iVar13 * 2;
              local_6c = iVar13 * 4;
              do {
                iVar18 = local_64[local_34 + 0x55];
                *(short *)(iVar17 + 0x1d91098) = (short)iVar18;
                if ((short)iVar18 != 7) {
                  if (bVar19) {
                    fVar20 = (float10)fptan((float10)*(short *)(iVar17 + 0x1d91098) *
                                            (float10)0.26179938779914902);
                    *(float *)(local_6c + 0x1d91518) = (float)fVar20;
                  }
                  else {
                    sound_mp3_cpp_calculateIntensityStereoRatio_FUN_00500be0
                              (*(int *)((int)g_DOUBLE_ARRAY_01d90a58 + iVar17 + 0x63e) >> 0x10,
                               __BITCAST_DOUBLE(CONCAT44(local_fc,local_100)),iVar13,&g_FLOAT_01d91e18);
                  }
                }
                iVar17 = iVar17 + 2;
                iVar13 = iVar13 + 1;
                local_6c = local_6c + 4;
                iVar8 = iVar8 + -1;
              } while (0 < iVar8);
            }
            local_68 = local_68 + 4;
          }
          iVar17 = *(int *)(&DAT_006016f8 + iVar11) - *(int *)(&DAT_006016f4 + iVar11);
          iVar8 = *(int *)(&DAT_006016f0 + iVar11) * 3;
          iVar13 = local_f4 * (*(int *)(&DAT_006016f4 + iVar11) - *(int *)(&DAT_006016f0 + iVar11))
                   + iVar8;
          iVar8 = iVar8 + local_f4 * iVar17;
          if (0 < iVar17) {
            iVar18 = iVar8 * 4;
            iVar8 = iVar8 * 2;
            do {
              uVar2 = *(uint *)(iVar13 * 4 + 0x1d91518);
              iVar17 = iVar17 + -1;
              uVar4 = *(ushort *)(iVar13 * 2 + 0x1d91098);
              *(float *)((int)&g_FLOAT_01d91e18 + iVar18) = (&g_FLOAT_01d91e18)[iVar13];
              *(uint *)(iVar18 + 0x1d91518) = uVar2;
              *(ushort *)(iVar8 + 0x1d91098) = uVar4;
              *(uint *)(iVar18 + 0x1d92718) = *(uint *)(iVar13 * 4 + 0x1d92718);
              iVar18 = iVar18 + 4;
              iVar8 = iVar8 + 2;
            } while (0 < iVar17);
          }
          local_f4 = local_f4 + 1;
          local_64 = local_64 + 0xd;
        } while (local_f4 < 3);
        if (local_dc < 4) {
          iVar11 = 2;
          iVar8 = 0x11;
          local_1c = -1;
          pafVar16 = input_lr_samples->channels[0].samples + 2;
          do {
            if ((*(uint *)((int)(pafVar16 + 0x20) + iVar8 * 4) & 0x7fffffff) != 0) {
              local_1c = iVar11 * 0x12 + iVar8;
              break;
            }
            iVar8 = iVar8 + -1;
            if (iVar8 < 0) {
              pafVar16 = pafVar16 + -1;
              iVar11 = iVar11 + -1;
              iVar8 = 0x11;
            }
          } while (-1 < iVar11);
          iVar8 = iVar10 * 0x94;
          local_f8 = 0;
          iVar11 = *(int *)(&DAT_00601668 + iVar8);
          while (iVar11 <= local_1c) {
            local_f8 = local_f8 + 1;
            piVar1 = (int *)((int)g_INT_ARRAY_0060166c + iVar8);
            iVar8 = iVar8 + 4;
            iVar11 = *piVar1;
          }
          iVar11 = *(int *)(&DAT_00601668 + iVar8);
          if (local_f8 < 8) {
            local_5c = local_f8 * 4 + iVar10 * 0x94;
            do {
              iVar10 = *(int *)((int)g_INT_ARRAY_0060166c + local_5c) -
                       *(int *)(&DAT_00601668 + local_5c);
              if (0 < iVar10) {
                iVar8 = iVar11 * 2;
                local_60 = iVar11 * 4;
                do {
                  sVar3 = (short)scalefactor_data->granules[1].long_scalefactors[local_f8];
                  *(short *)(iVar8 + 0x1d91098) = sVar3;
                  if (sVar3 != 7) {
                    if (bVar19) {
                      fVar20 = (float10)fptan((float10)*(short *)(iVar8 + 0x1d91098) *
                                              (float10)0.26179938779914902);
                      *(float *)(local_60 + 0x1d91518) = (float)fVar20;
                    }
                    else {
                      sound_mp3_cpp_calculateIntensityStereoRatio_FUN_00500be0
                                (*(int *)((int)g_DOUBLE_ARRAY_01d90a58 + iVar8 + 0x63e) >> 0x10,
                                 __BITCAST_DOUBLE(CONCAT44(local_fc,local_100)),iVar11,&g_FLOAT_01d91e18);
                    }
                  }
                  iVar8 = iVar8 + 2;
                  iVar11 = iVar11 + 1;
                  local_60 = local_60 + 4;
                  iVar10 = iVar10 + -1;
                } while (0 < iVar10);
              }
              local_5c = local_5c + 4;
              local_f8 = local_f8 + 1;
            } while (local_f8 < 8);
          }
        }
      }
    }
  }
  local_58 = (float (*) [18])output_samples;
  do {
    iVar11 = 0;
    pafVar16 = local_58;
    do {
      pafVar16 = pafVar16 + 1;
      pafVar9 = local_58 + iVar11;
      do {
        (*pafVar9)[0] = 0.0;
        pafVar9 = (float (*) [18])(*pafVar9 + 1);
      } while (pafVar9 != pafVar16);
      iVar11 = iVar11 + 1;
    } while (iVar11 < 0x20);
    local_58 = local_58 + 0x20;
  } while ((SMpegStereoSubbandSamples *)local_58 != output_samples + 1);
  if (iVar15 == 2) {
    local_20 = 0;
    local_40 = (float (*) [18])input_lr_samples;
    local_38 = 0;
    local_3c = (float (*) [18])output_samples;
    do {
      local_4c = local_38;
      iVar11 = 0;
      iVar15 = 0;
      do {
        iVar10 = local_20 * 0x12 + iVar11;
        pfVar12 = (float *)((int)((SMpegSubbandSamples *)*local_3c)->samples[0] + iVar15);
        pfVar14 = (float *)((int)((SMpegSubbandSamples *)*local_40)->samples[0] + iVar15);
        if (*(short *)(local_4c + 0x1d91098) == 7) {
          if (bVar6) {
            fVar5 = (float)0.70710678237309499;
            *pfVar12 = (*pfVar14 + pfVar14[0x240]) * fVar5;
            fVar5 = (*pfVar14 - pfVar14[0x240]) * fVar5;
LAB_00500e7c:
            pfVar12[0x240] = fVar5;
          }
          else {
            *pfVar12 = *pfVar14;
            pfVar12[0x240] = pfVar14[0x240];
          }
        }
        else {
          if (bVar7) {
            iVar8 = iVar10 * 4;
            if (bVar19) {
              *pfVar12 = (*(float *)(iVar8 + 0x1d91518) / (*(float *)(iVar8 + 0x1d91518) + 1.0)) *
                         *pfVar14;
              fVar5 = (1.0 / (*(float *)(iVar8 + 0x1d91518) + 1.0)) * *pfVar14;
            }
            else {
              *pfVar12 = *pfVar14 * (&g_FLOAT_01d91e18)[iVar10];
              fVar5 = *pfVar14 * *(float *)(iVar8 + 0x1d92718);
            }
            goto LAB_00500e7c;
          }
          g_CHAR_PTR_01d71de0 = "..\\sound\\mp3.cpp";
          g_INT_01d71de4 = 0xa3a;
          core_main_c_displayErrorAndQuit_FUN_004e4330("Error in streo processing.  File: %s");
        }
        iVar11 = iVar11 + 1;
        local_4c = local_4c + 2;
        iVar15 = iVar15 + 4;
      } while (iVar11 < 0x12);
      local_38 = local_38 + 0x24;
      local_20 = local_20 + 1;
      local_3c = local_3c + 1;
      local_40 = local_40 + 1;
    } while (local_20 < 0x20);
  }
  else {
    iVar15 = 0;
    local_50 = (float *)output_samples;
    pafVar16 = (float (*) [18])input_lr_samples;
    do {
      pafVar16 = pafVar16 + 1;
      pafVar9 = input_lr_samples->channels[0].samples + iVar15;
      pfVar14 = local_50;
      do {
        pfVar12 = *pafVar9;
        pafVar9 = (float (*) [18])(*pafVar9 + 1);
        *pfVar14 = *pfVar12;
        pfVar14 = pfVar14 + 1;
      } while (pafVar9 != pafVar16);
      iVar15 = iVar15 + 1;
      local_50 = local_50 + 0x12;
    } while (iVar15 < 0x20);
  }
  return;
}
