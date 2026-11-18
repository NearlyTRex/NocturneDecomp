// Name: sound_mp3.cpp_mpegLayer3StereoProcess_FUN_00529370
// Address: 00529370
// Address Range: [[00529370, 0052a0d1]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_mpegLayer3StereoProcess_FUN_00529370(SMpegStereoSubbandSamples *input_lr_samples,SMpegStereoSubbandSamples *output_samples,SMpegScalefactorBandData *scalefactor_data,SMpegLayer3GranuleInfo *granule,SMpegFrame *frame)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_mpegLayer3StereoProcess_FUN_00529370(SMpegStereoSubbandSamples *input_lr_samples,SMpegStereoSubbandSamples *output_samples,SMpegScalefactorBandData *scalefactor_data,SMpegLayer3GranuleInfo *granule,SMpegFrame *frame)

{
  uint uVar1;
  short sVar2;
  ushort uVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  float (*pafVar8) [18];
  int iVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  float (*pafVar15) [18];
  int iVar16;
  bool bVar17;
  float10 fVar18;
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
  
  iVar14 = frame->channel_count;
  if ((frame->header->channel_mode == 1) && ((frame->header->mode_extension & 2) != 0)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if ((frame->header->channel_mode == 1) && ((frame->header->mode_extension & 1) != 0)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  bVar17 = frame->header->mpeg_version != 0;
  if ((granule->scalefac_compress & 1U) == 1) {
    local_100 = 0x667f6ee7;
    local_fc = 0x3fe6a09e;
  }
  else {
    local_100 = 0x995b2417;
    local_fc = 0x3feae89f;
  }
  iVar9 = frame->header->sampling_rate_index + frame->header->mpeg_version * 3;
  iVar10 = 0;
  do {
    iVar7 = iVar10 + 2;
    *(ushort *)(iVar10 + 0x1d3c9c8) = 7;
    iVar10 = iVar7;
  } while (iVar7 != 0x480);
  if ((iVar14 == 2) && (bVar6)) {
    if ((granule->window_switching_flag == 0) || (granule->block_type != 2)) {
      iVar7 = 0x1f;
      iVar12 = 0x11;
      iVar10 = 0;
      pafVar15 = input_lr_samples->channels[0].samples + 0x1f;
      do {
        if ((*(uint *)((int)(pafVar15 + 0x20) + iVar12 * 4) & 0x7fffffff) != 0) {
          iVar10 = iVar7 * 0x12 + iVar12;
          break;
        }
        iVar12 = iVar12 + -1;
        if (iVar12 < 0) {
          pafVar15 = pafVar15 + -1;
          iVar7 = iVar7 + -1;
          iVar12 = 0x11;
        }
      } while (-1 < iVar7);
      iVar12 = iVar9 * 0x94;
      iVar16 = 0;
      for (iVar7 = g_Layer3BandIndex[iVar9].l[0]; iVar7 <= iVar10;
          iVar7 = *(int *)((int)g_Layer3BandIndex[0].l + iVar7)) {
        iVar16 = iVar16 + 1;
        iVar7 = iVar12 + 4;
        iVar12 = iVar12 + 4;
      }
      iVar10 = *(int *)((int)g_Layer3BandIndex[0].l + iVar12);
      local_84 = iVar16 * 4;
      local_88 = iVar9 * 0x94 + local_84;
      if (iVar16 < 0x15) {
        do {
          iVar7 = *(int *)((int)g_Layer3BandIndex[0].l + local_88 + 4) -
                  *(int *)((int)g_Layer3BandIndex[0].l + local_88);
          if (0 < iVar7) {
            iVar12 = iVar10 * 2;
            local_8c = iVar10 * 4;
            do {
              sVar2 = *(short *)((int)scalefactor_data->granules[1].long_scalefactors + local_84);
              *(short *)(iVar12 + 0x1d3c9c8) = sVar2;
              if (sVar2 != 7) {
                if (bVar17) {
                  fVar18 = (float10)fptan((float10)*(short *)(iVar12 + 0x1d3c9c8) *
                                          (float10)0.26179938779914902);
                  *(float *)(local_8c + 0x1d3ce48) = (float)fVar18;
                }
                else {
                  sound_mp3_cpp_calculateIntensityStereoRatio_FUN_005292d0
                            (*(int *)((int)g_DOUBLE_ARRAY_01d3c388 + iVar12 + 0x63e) >> 0x10,
                             __BITCAST_DOUBLE(CONCAT44(local_fc,local_100)),iVar10,&g_FLOAT_01d3d748);
                }
              }
              iVar12 = iVar12 + 2;
              iVar10 = iVar10 + 1;
              local_8c = local_8c + 4;
              iVar7 = iVar7 + -1;
            } while (0 < iVar7);
          }
          local_88 = local_88 + 4;
          local_84 = local_84 + 4;
        } while (local_84 < 0x54);
      }
      iVar7 = 0x240 - g_Layer3BandIndex[iVar9].l[0x15];
      iVar9 = g_Layer3BandIndex[iVar9].l[0x14];
      if (0 < iVar7) {
        iVar12 = iVar10 * 4;
        local_80 = iVar10 * 2;
        do {
          uVar1 = *(uint *)(iVar9 * 4 + 0x1d3ce48);
          iVar7 = iVar7 + -1;
          *(float *)((int)&g_FLOAT_01d3d748 + iVar12) = (&g_FLOAT_01d3d748)[iVar9];
          *(uint *)(iVar12 + 0x1d3ce48) = uVar1;
          uVar3 = *(ushort *)(iVar9 * 2 + 0x1d3c9c8);
          *(uint *)(iVar12 + 0x1d3e048) = *(uint *)(iVar9 * 4 + 0x1d3e048);
          *(ushort *)(local_80 + 0x1d3c9c8) = uVar3;
          iVar12 = iVar12 + 4;
          local_80 = local_80 + 2;
        } while (0 < iVar7);
      }
    }
    else if (granule->mixed_block_flag == 0) {
      local_70 = (int *)scalefactor_data;
      local_e4 = 0;
      do {
        iVar10 = 0xc;
        local_c0 = -1;
        do {
          iVar7 = g_Layer3BandIndex[iVar9].s[iVar10 + 1] - g_Layer3BandIndex[iVar9].s[iVar10];
          iVar12 = g_Layer3BandIndex[iVar9].s[iVar10] * 3 + (local_e4 + 1) * iVar7;
          for (; 0 < iVar7; iVar7 = iVar7 + -1) {
            iVar12 = iVar12 + -1;
            iVar16 = iVar10;
            if (ABS(input_lr_samples->channels[1].samples[iVar12 / 0x12][iVar12 % 0x12]) != 0.0) {
              iVar16 = -10;
              iVar7 = -10;
              local_c0 = iVar10;
            }
            iVar10 = iVar16;
          }
          iVar10 = iVar10 + -1;
        } while (-1 < iVar10);
        local_74 = (local_c0 + 1) * 4;
        local_78 = iVar9 * 0x94 + local_74;
        if (local_c0 + 1 < 0xc) {
          do {
            iVar10 = *(int *)((int)g_Layer3BandIndex[0].s + local_78);
            iVar7 = *(int *)((int)g_Layer3BandIndex[0].s + local_78 + 4) - iVar10;
            iVar10 = local_e4 * iVar7 + iVar10 * 3;
            if (0 < iVar7) {
              iVar12 = iVar10 * 2;
              local_7c = iVar10 * 4;
              do {
                sVar2 = *(short *)((int)local_70 + local_74 + 0x154);
                *(short *)(iVar12 + 0x1d3c9c8) = sVar2;
                if (sVar2 != 7) {
                  if (bVar17) {
                    fVar18 = (float10)fptan((float10)*(short *)(iVar12 + 0x1d3c9c8) *
                                            (float10)0.26179938779914902);
                    *(float *)(local_7c + 0x1d3ce48) = (float)fVar18;
                  }
                  else {
                    sound_mp3_cpp_calculateIntensityStereoRatio_FUN_005292d0
                              (*(int *)((int)g_DOUBLE_ARRAY_01d3c388 + iVar12 + 0x63e) >> 0x10,
                               __BITCAST_DOUBLE(CONCAT44(local_fc,local_100)),iVar10,&g_FLOAT_01d3d748);
                  }
                }
                iVar12 = iVar12 + 2;
                iVar10 = iVar10 + 1;
                local_7c = local_7c + 4;
                iVar7 = iVar7 + -1;
              } while (0 < iVar7);
            }
            local_78 = local_78 + 4;
            local_74 = local_74 + 4;
          } while (local_74 < 0x30);
        }
        iVar12 = g_Layer3BandIndex[iVar9].s[0xd] - g_Layer3BandIndex[iVar9].s[0xc];
        iVar10 = g_Layer3BandIndex[iVar9].s[0xb] * 3;
        iVar7 = local_e4 * (g_Layer3BandIndex[iVar9].s[0xc] - g_Layer3BandIndex[iVar9].s[0xb]) +
                iVar10;
        iVar10 = iVar10 + local_e4 * iVar12;
        if (0 < iVar12) {
          iVar16 = iVar10 * 4;
          iVar10 = iVar10 * 2;
          do {
            uVar1 = *(uint *)(iVar7 * 4 + 0x1d3ce48);
            iVar12 = iVar12 + -1;
            uVar3 = *(ushort *)(iVar7 * 2 + 0x1d3c9c8);
            *(float *)((int)&g_FLOAT_01d3d748 + iVar16) = (&g_FLOAT_01d3d748)[iVar7];
            *(uint *)(iVar16 + 0x1d3ce48) = uVar1;
            *(ushort *)(iVar10 + 0x1d3c9c8) = uVar3;
            *(uint *)(iVar16 + 0x1d3e048) = *(uint *)(iVar7 * 4 + 0x1d3e048);
            iVar16 = iVar16 + 4;
            iVar10 = iVar10 + 2;
          } while (0 < iVar12);
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
        iVar10 = 0xc;
        local_d8 = 2;
        do {
          iVar7 = g_Layer3BandIndex[iVar9].s[iVar10 + 1] - g_Layer3BandIndex[iVar9].s[iVar10];
          iVar12 = (local_f4 + 1) * iVar7 + g_Layer3BandIndex[iVar9].s[iVar10] * 3;
          for (; 0 < iVar7; iVar7 = iVar7 + -1) {
            iVar12 = iVar12 + -1;
            iVar16 = iVar10;
            if (ABS(input_lr_samples->channels[1].samples[iVar12 / 0x12][iVar12 % 0x12]) != 0.0) {
              iVar16 = -10;
              iVar7 = -10;
              local_d8 = iVar10;
            }
            iVar10 = iVar16;
          }
          iVar10 = iVar10 + -1;
        } while (2 < iVar10);
        local_34 = local_d8 + 1;
        if (local_dc < local_34) {
          local_dc = local_34;
        }
        local_68 = local_34 * 4 + iVar9 * 0x94;
        for (; local_34 < 0xc; local_34 = local_34 + 1) {
          iVar10 = *(int *)((int)g_Layer3BandIndex[0].s + local_68);
          iVar7 = *(int *)((int)g_Layer3BandIndex[0].s + local_68 + 4) - iVar10;
          iVar10 = iVar10 * 3 + local_f4 * iVar7;
          if (0 < iVar7) {
            iVar12 = iVar10 * 2;
            local_6c = iVar10 * 4;
            do {
              iVar16 = local_64[local_34 + 0x55];
              *(short *)(iVar12 + 0x1d3c9c8) = (short)iVar16;
              if ((short)iVar16 != 7) {
                if (bVar17) {
                  fVar18 = (float10)fptan((float10)*(short *)(iVar12 + 0x1d3c9c8) *
                                          (float10)0.26179938779914902);
                  *(float *)(local_6c + 0x1d3ce48) = (float)fVar18;
                }
                else {
                  sound_mp3_cpp_calculateIntensityStereoRatio_FUN_005292d0
                            (*(int *)((int)g_DOUBLE_ARRAY_01d3c388 + iVar12 + 0x63e) >> 0x10,
                             __BITCAST_DOUBLE(CONCAT44(local_fc,local_100)),iVar10,&g_FLOAT_01d3d748);
                }
              }
              iVar12 = iVar12 + 2;
              iVar10 = iVar10 + 1;
              local_6c = local_6c + 4;
              iVar7 = iVar7 + -1;
            } while (0 < iVar7);
          }
          local_68 = local_68 + 4;
        }
        iVar12 = g_Layer3BandIndex[iVar9].s[0xd] - g_Layer3BandIndex[iVar9].s[0xc];
        iVar10 = g_Layer3BandIndex[iVar9].s[0xb] * 3;
        iVar7 = local_f4 * (g_Layer3BandIndex[iVar9].s[0xc] - g_Layer3BandIndex[iVar9].s[0xb]) +
                iVar10;
        iVar10 = iVar10 + local_f4 * iVar12;
        if (0 < iVar12) {
          iVar16 = iVar10 * 4;
          iVar10 = iVar10 * 2;
          do {
            uVar1 = *(uint *)(iVar7 * 4 + 0x1d3ce48);
            iVar12 = iVar12 + -1;
            uVar3 = *(ushort *)(iVar7 * 2 + 0x1d3c9c8);
            *(float *)((int)&g_FLOAT_01d3d748 + iVar16) = (&g_FLOAT_01d3d748)[iVar7];
            *(uint *)(iVar16 + 0x1d3ce48) = uVar1;
            *(ushort *)(iVar10 + 0x1d3c9c8) = uVar3;
            *(uint *)(iVar16 + 0x1d3e048) = *(uint *)(iVar7 * 4 + 0x1d3e048);
            iVar16 = iVar16 + 4;
            iVar10 = iVar10 + 2;
          } while (0 < iVar12);
        }
        local_f4 = local_f4 + 1;
        local_64 = local_64 + 0xd;
      } while (local_f4 < 3);
      if (local_dc < 4) {
        iVar10 = 2;
        iVar7 = 0x11;
        local_1c = -1;
        pafVar15 = input_lr_samples->channels[0].samples + 2;
        do {
          if ((*(uint *)((int)(pafVar15 + 0x20) + iVar7 * 4) & 0x7fffffff) != 0) {
            local_1c = iVar10 * 0x12 + iVar7;
            break;
          }
          iVar7 = iVar7 + -1;
          if (iVar7 < 0) {
            pafVar15 = pafVar15 + -1;
            iVar10 = iVar10 + -1;
            iVar7 = 0x11;
          }
        } while (-1 < iVar10);
        iVar7 = iVar9 * 0x94;
        local_f8 = 0;
        for (iVar10 = g_Layer3BandIndex[iVar9].l[0]; iVar10 <= local_1c;
            iVar10 = *(int *)((int)g_Layer3BandIndex[0].l + iVar10)) {
          local_f8 = local_f8 + 1;
          iVar10 = iVar7 + 4;
          iVar7 = iVar7 + 4;
        }
        iVar10 = *(int *)((int)g_Layer3BandIndex[0].l + iVar7);
        if (local_f8 < 8) {
          local_5c = local_f8 * 4 + iVar9 * 0x94;
          do {
            iVar9 = *(int *)((int)g_Layer3BandIndex[0].l + local_5c + 4) -
                    *(int *)((int)g_Layer3BandIndex[0].l + local_5c);
            if (0 < iVar9) {
              iVar7 = iVar10 * 2;
              local_60 = iVar10 * 4;
              do {
                sVar2 = (short)scalefactor_data->granules[1].long_scalefactors[local_f8];
                *(short *)(iVar7 + 0x1d3c9c8) = sVar2;
                if (sVar2 != 7) {
                  if (bVar17) {
                    fVar18 = (float10)fptan((float10)*(short *)(iVar7 + 0x1d3c9c8) *
                                            (float10)0.26179938779914902);
                    *(float *)(local_60 + 0x1d3ce48) = (float)fVar18;
                  }
                  else {
                    sound_mp3_cpp_calculateIntensityStereoRatio_FUN_005292d0
                              (*(int *)((int)g_DOUBLE_ARRAY_01d3c388 + iVar7 + 0x63e) >> 0x10,
                               __BITCAST_DOUBLE(CONCAT44(local_fc,local_100)),iVar10,&g_FLOAT_01d3d748);
                  }
                }
                iVar7 = iVar7 + 2;
                iVar10 = iVar10 + 1;
                local_60 = local_60 + 4;
                iVar9 = iVar9 + -1;
              } while (0 < iVar9);
            }
            local_5c = local_5c + 4;
            local_f8 = local_f8 + 1;
          } while (local_f8 < 8);
        }
      }
    }
  }
  local_58 = (float (*) [18])output_samples;
  do {
    iVar10 = 0;
    pafVar15 = local_58;
    do {
      pafVar15 = pafVar15 + 1;
      pafVar8 = local_58 + iVar10;
      do {
        (*pafVar8)[0] = 0.0;
        pafVar8 = (float (*) [18])(*pafVar8 + 1);
      } while (pafVar8 != pafVar15);
      iVar10 = iVar10 + 1;
    } while (iVar10 < 0x20);
    local_58 = local_58 + 0x20;
  } while ((SMpegStereoSubbandSamples *)local_58 != output_samples + 1);
  if (iVar14 == 2) {
    local_20 = 0;
    local_40 = (float (*) [18])input_lr_samples;
    local_38 = 0;
    local_3c = (float (*) [18])output_samples;
    do {
      local_4c = local_38;
      iVar10 = 0;
      iVar14 = 0;
      do {
        iVar9 = local_20 * 0x12 + iVar10;
        pfVar11 = (float *)((int)((SMpegSubbandSamples *)*local_3c)->samples[0] + iVar14);
        pfVar13 = (float *)((int)((SMpegSubbandSamples *)*local_40)->samples[0] + iVar14);
        if (*(short *)(local_4c + 0x1d3c9c8) == 7) {
          if (bVar5) {
            fVar4 = (float)0.70710678237309499;
            *pfVar11 = (*pfVar13 + pfVar13[0x240]) * fVar4;
            fVar4 = (*pfVar13 - pfVar13[0x240]) * fVar4;
LAB_0052956c:
            pfVar11[0x240] = fVar4;
          }
          else {
            *pfVar11 = *pfVar13;
            pfVar11[0x240] = pfVar13[0x240];
          }
        }
        else {
          if (bVar6) {
            iVar7 = iVar9 * 4;
            if (bVar17) {
              *pfVar11 = (*(float *)(iVar7 + 0x1d3ce48) / (*(float *)(iVar7 + 0x1d3ce48) + 1.0)) *
                         *pfVar13;
              fVar4 = (1.0 / (*(float *)(iVar7 + 0x1d3ce48) + 1.0)) * *pfVar13;
            }
            else {
              *pfVar11 = *pfVar13 * (&g_FLOAT_01d3d748)[iVar9];
              fVar4 = *pfVar13 * *(float *)(iVar7 + 0x1d3e048);
            }
            goto LAB_0052956c;
          }
          g_CHAR_PTR_01d1d400 = "..\\sound\\mp3.cpp";
          g_INT_01d1d404 = 0xa3a;
          core_main_c_displayErrorAndQuit_FUN_005030e0("Error in streo processing.  File: %s");
        }
        iVar10 = iVar10 + 1;
        local_4c = local_4c + 2;
        iVar14 = iVar14 + 4;
      } while (iVar10 < 0x12);
      local_38 = local_38 + 0x24;
      local_20 = local_20 + 1;
      local_3c = local_3c + 1;
      local_40 = local_40 + 1;
    } while (local_20 < 0x20);
  }
  else {
    iVar14 = 0;
    local_50 = (float *)output_samples;
    pafVar15 = (float (*) [18])input_lr_samples;
    do {
      pafVar15 = pafVar15 + 1;
      pafVar8 = input_lr_samples->channels[0].samples + iVar14;
      pfVar13 = local_50;
      do {
        pfVar11 = *pafVar8;
        pafVar8 = (float (*) [18])(*pafVar8 + 1);
        *pfVar13 = *pfVar11;
        pfVar13 = pfVar13 + 1;
      } while (pafVar8 != pafVar15);
      iVar14 = iVar14 + 1;
      local_50 = local_50 + 0x12;
    } while (iVar14 < 0x20);
  }
  return;
}
