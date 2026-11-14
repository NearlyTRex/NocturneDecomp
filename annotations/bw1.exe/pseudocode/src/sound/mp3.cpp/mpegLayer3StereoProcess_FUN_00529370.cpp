// Name: sound_mp3.cpp_mpegLayer3StereoProcess_FUN_00529370
// Address: 00529370
// Address Range: [[00529370, 0052a0d1]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_mpegLayer3StereoProcess_FUN_00529370(SMpegStereoSubbandSamples *input_lr_samples,SMpegStereoSubbandSamples *output_samples,SMpegScalefactorBandData *scalefactor_data,SMpegLayer3GranuleInfo *granule,SMpegFrame *frame)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_mp3_cpp_mpegLayer3StereoProcess_FUN_00529370(SMpegStereoSubbandSamples *input_lr_samples,SMpegStereoSubbandSamples *output_samples,SMpegScalefactorBandData *scalefactor_data,SMpegLayer3GranuleInfo *granule,SMpegFrame *frame)

{
  int *piVar1;
  uint uVar2;
  short sVar3;
  ushort uVar4;
  float fVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  float (*pafVar10) [18];
  int iVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  float *pfVar15;
  int iVar16;
  float (*pafVar17) [18];
  int iVar18;
  int iVar19;
  bool bVar20;
  float10 fVar21;
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
  
  iVar16 = frame->channel_count;
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
  bVar20 = frame->header->mpeg_version != 0;
  if ((granule->scalefac_compress & 1U) == 1) {
    local_100 = 0x667f6ee7;
    local_fc = 0x3fe6a09e;
  }
  else {
    local_100 = 0x995b2417;
    local_fc = 0x3feae89f;
  }
  iVar11 = frame->header->sampling_rate_index + frame->header->mpeg_version * 3;
  iVar12 = 0;
  do {
    iVar8 = iVar12 + 2;
    *(ushort *)(iVar12 + 0x1d3c9c8) = 7;
    iVar12 = iVar8;
  } while (iVar8 != 0x480);
  if ((iVar16 == 2) && (bVar7)) {
    if ((granule->window_switching_flag == 0) || (granule->block_type != 2)) {
      iVar8 = 0x1f;
      iVar14 = 0x11;
      iVar12 = 0;
      pafVar17 = input_lr_samples->channels[0].samples + 0x1f;
      do {
        if ((*(uint *)((int)(pafVar17 + 0x20) + iVar14 * 4) & 0x7fffffff) != 0) {
          iVar12 = iVar8 * 0x12 + iVar14;
          break;
        }
        iVar14 = iVar14 + -1;
        if (iVar14 < 0) {
          pafVar17 = pafVar17 + -1;
          iVar8 = iVar8 + -1;
          iVar14 = 0x11;
        }
      } while (-1 < iVar8);
      iVar14 = iVar11 * 0x94;
      iVar18 = 0;
      iVar8 = *(int *)(&DAT_00620798 + iVar14);
      while (iVar8 <= iVar12) {
        iVar18 = iVar18 + 1;
        piVar1 = (int *)(&DAT_0062079c + iVar14);
        iVar14 = iVar14 + 4;
        iVar8 = *piVar1;
      }
      iVar12 = *(int *)(&DAT_00620798 + iVar14);
      iVar11 = iVar11 * 0x94;
      local_84 = iVar18 * 4;
      local_88 = iVar11 + local_84;
      if (iVar18 < 0x15) {
        do {
          iVar8 = *(int *)(&DAT_0062079c + local_88) - *(int *)(&DAT_00620798 + local_88);
          if (0 < iVar8) {
            iVar14 = iVar12 * 2;
            local_8c = iVar12 * 4;
            do {
              sVar3 = *(short *)((int)scalefactor_data->granules[1].long_scalefactors + local_84);
              *(short *)(iVar14 + 0x1d3c9c8) = sVar3;
              if (sVar3 != 7) {
                if (bVar20) {
                  fVar21 = (float10)fptan((float10)*(short *)(iVar14 + 0x1d3c9c8) *
                                          (float10)_DAT_005eb4be);
                  *(float *)(local_8c + 0x1d3ce48) = (float)fVar21;
                }
                else {
                  sound_mp3_cpp_calculateIntensityStereoRatio_FUN_005292d0
                            (*(int *)(iVar14 + 0x1d3c9c6) >> 0x10,
                             __BITCAST_DOUBLE(CONCAT44(local_fc,local_100)),iVar12,(float *)0x1d3d748);
                }
              }
              iVar14 = iVar14 + 2;
              iVar12 = iVar12 + 1;
              local_8c = local_8c + 4;
              iVar8 = iVar8 + -1;
            } while (0 < iVar8);
          }
          local_88 = local_88 + 4;
          local_84 = local_84 + 4;
        } while (local_84 < 0x54);
      }
      iVar8 = 0x240 - *(int *)(&DAT_006207ec + iVar11);
      iVar11 = *(int *)(&DAT_006207e8 + iVar11);
      if (0 < iVar8) {
        iVar18 = iVar11 * 4;
        iVar14 = iVar12 * 4;
        local_80 = iVar12 * 2;
        do {
          uVar2 = *(uint *)(iVar18 + 0x1d3ce48);
          iVar8 = iVar8 + -1;
          *(uint *)(iVar14 + 0x1d3d748) = *(uint *)(iVar18 + 0x1d3d748);
          *(uint *)(iVar14 + 0x1d3ce48) = uVar2;
          uVar4 = *(ushort *)(iVar11 * 2 + 0x1d3c9c8);
          *(uint *)(iVar14 + 0x1d3e048) = *(uint *)(iVar18 + 0x1d3e048);
          *(ushort *)(local_80 + 0x1d3c9c8) = uVar4;
          iVar14 = iVar14 + 4;
          local_80 = local_80 + 2;
        } while (0 < iVar8);
      }
    }
    else {
      iVar12 = iVar11 * 0x94;
      if (granule->mixed_block_flag == 0) {
        local_70 = (int *)scalefactor_data;
        local_e4 = 0;
        do {
          iVar11 = 0xc;
          local_c0 = -1;
          do {
            iVar14 = iVar11 * 4 + iVar12;
            iVar8 = *(int *)(iVar14 + 0x6207f4);
            iVar14 = *(int *)(&DAT_006207f8 + iVar14) - iVar8;
            iVar8 = iVar8 * 3 + (local_e4 + 1) * iVar14;
            for (; 0 < iVar14; iVar14 = iVar14 + -1) {
              iVar8 = iVar8 + -1;
              iVar18 = iVar11;
              if (ABS(input_lr_samples->channels[1].samples[iVar8 / 0x12][iVar8 % 0x12]) != 0.0) {
                iVar18 = -10;
                iVar14 = -10;
                local_c0 = iVar11;
              }
              iVar11 = iVar18;
            }
            iVar11 = iVar11 + -1;
          } while (-1 < iVar11);
          local_74 = (local_c0 + 1) * 4;
          local_78 = iVar12 + local_74;
          if (local_c0 + 1 < 0xc) {
            do {
              iVar11 = *(int *)(&DAT_006207f8 + local_78) - *(int *)(local_78 + 0x6207f4);
              iVar8 = local_e4 * iVar11 + *(int *)(local_78 + 0x6207f4) * 3;
              if (0 < iVar11) {
                iVar14 = iVar8 * 2;
                local_7c = iVar8 * 4;
                do {
                  sVar3 = *(short *)((int)local_70 + local_74 + 0x154);
                  *(short *)(iVar14 + 0x1d3c9c8) = sVar3;
                  if (sVar3 != 7) {
                    if (bVar20) {
                      fVar21 = (float10)fptan((float10)*(short *)(iVar14 + 0x1d3c9c8) *
                                              (float10)_DAT_005eb4be);
                      *(float *)(local_7c + 0x1d3ce48) = (float)fVar21;
                    }
                    else {
                      sound_mp3_cpp_calculateIntensityStereoRatio_FUN_005292d0
                                (*(int *)(iVar14 + 0x1d3c9c6) >> 0x10,
                                 __BITCAST_DOUBLE(CONCAT44(local_fc,local_100)),iVar8,(float *)0x1d3d748);
                    }
                  }
                  iVar14 = iVar14 + 2;
                  iVar8 = iVar8 + 1;
                  local_7c = local_7c + 4;
                  iVar11 = iVar11 + -1;
                } while (0 < iVar11);
              }
              local_78 = local_78 + 4;
              local_74 = local_74 + 4;
            } while (local_74 < 0x30);
          }
          iVar14 = *(int *)(&DAT_00620828 + iVar12) - *(int *)(&DAT_00620824 + iVar12);
          iVar11 = *(int *)(&DAT_00620820 + iVar12) * 3;
          iVar8 = local_e4 * (*(int *)(&DAT_00620824 + iVar12) - *(int *)(&DAT_00620820 + iVar12)) +
                  iVar11;
          iVar11 = iVar11 + local_e4 * iVar14;
          if (0 < iVar14) {
            iVar19 = iVar8 * 4;
            iVar18 = iVar11 * 4;
            iVar11 = iVar11 * 2;
            do {
              uVar2 = *(uint *)(iVar19 + 0x1d3ce48);
              iVar14 = iVar14 + -1;
              uVar4 = *(ushort *)(iVar8 * 2 + 0x1d3c9c8);
              *(uint *)(iVar18 + 0x1d3d748) = *(uint *)(iVar19 + 0x1d3d748);
              *(uint *)(iVar18 + 0x1d3ce48) = uVar2;
              *(ushort *)(iVar11 + 0x1d3c9c8) = uVar4;
              *(uint *)(iVar18 + 0x1d3e048) = *(uint *)(iVar19 + 0x1d3e048);
              iVar18 = iVar18 + 4;
              iVar11 = iVar11 + 2;
            } while (0 < iVar14);
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
            iVar18 = iVar8 * 4 + iVar12;
            iVar14 = *(int *)(iVar18 + 0x6207f4);
            iVar18 = *(int *)(&DAT_006207f8 + iVar18) - iVar14;
            iVar14 = (local_f4 + 1) * iVar18 + iVar14 * 3;
            for (; 0 < iVar18; iVar18 = iVar18 + -1) {
              iVar14 = iVar14 + -1;
              iVar19 = iVar8;
              if (ABS(input_lr_samples->channels[1].samples[iVar14 / 0x12][iVar14 % 0x12]) != 0.0) {
                iVar19 = -10;
                iVar18 = -10;
                local_d8 = iVar8;
              }
              iVar8 = iVar19;
            }
            iVar8 = iVar8 + -1;
          } while (2 < iVar8);
          local_34 = local_d8 + 1;
          if (local_dc < local_34) {
            local_dc = local_34;
          }
          local_68 = local_34 * 4 + iVar12;
          for (; local_34 < 0xc; local_34 = local_34 + 1) {
            iVar8 = *(int *)(&DAT_006207f8 + local_68) - *(int *)(local_68 + 0x6207f4);
            iVar14 = *(int *)(local_68 + 0x6207f4) * 3 + local_f4 * iVar8;
            if (0 < iVar8) {
              iVar18 = iVar14 * 2;
              local_6c = iVar14 * 4;
              do {
                iVar19 = local_64[local_34 + 0x55];
                *(short *)(iVar18 + 0x1d3c9c8) = (short)iVar19;
                if ((short)iVar19 != 7) {
                  if (bVar20) {
                    fVar21 = (float10)fptan((float10)*(short *)(iVar18 + 0x1d3c9c8) *
                                            (float10)_DAT_005eb4be);
                    *(float *)(local_6c + 0x1d3ce48) = (float)fVar21;
                  }
                  else {
                    sound_mp3_cpp_calculateIntensityStereoRatio_FUN_005292d0
                              (*(int *)(iVar18 + 0x1d3c9c6) >> 0x10,
                               __BITCAST_DOUBLE(CONCAT44(local_fc,local_100)),iVar14,(float *)0x1d3d748);
                  }
                }
                iVar18 = iVar18 + 2;
                iVar14 = iVar14 + 1;
                local_6c = local_6c + 4;
                iVar8 = iVar8 + -1;
              } while (0 < iVar8);
            }
            local_68 = local_68 + 4;
          }
          iVar18 = *(int *)(&DAT_00620828 + iVar12) - *(int *)(&DAT_00620824 + iVar12);
          iVar8 = *(int *)(&DAT_00620820 + iVar12) * 3;
          iVar14 = local_f4 * (*(int *)(&DAT_00620824 + iVar12) - *(int *)(&DAT_00620820 + iVar12))
                   + iVar8;
          iVar8 = iVar8 + local_f4 * iVar18;
          if (0 < iVar18) {
            iVar19 = iVar14 * 4;
            iVar9 = iVar8 * 4;
            iVar8 = iVar8 * 2;
            do {
              uVar2 = *(uint *)(iVar19 + 0x1d3ce48);
              iVar18 = iVar18 + -1;
              uVar4 = *(ushort *)(iVar14 * 2 + 0x1d3c9c8);
              *(uint *)(iVar9 + 0x1d3d748) = *(uint *)(iVar19 + 0x1d3d748);
              *(uint *)(iVar9 + 0x1d3ce48) = uVar2;
              *(ushort *)(iVar8 + 0x1d3c9c8) = uVar4;
              *(uint *)(iVar9 + 0x1d3e048) = *(uint *)(iVar19 + 0x1d3e048);
              iVar9 = iVar9 + 4;
              iVar8 = iVar8 + 2;
            } while (0 < iVar18);
          }
          local_f4 = local_f4 + 1;
          local_64 = local_64 + 0xd;
        } while (local_f4 < 3);
        if (local_dc < 4) {
          iVar12 = 2;
          iVar8 = 0x11;
          local_1c = -1;
          pafVar17 = input_lr_samples->channels[0].samples + 2;
          do {
            if ((*(uint *)((int)(pafVar17 + 0x20) + iVar8 * 4) & 0x7fffffff) != 0) {
              local_1c = iVar12 * 0x12 + iVar8;
              break;
            }
            iVar8 = iVar8 + -1;
            if (iVar8 < 0) {
              pafVar17 = pafVar17 + -1;
              iVar12 = iVar12 + -1;
              iVar8 = 0x11;
            }
          } while (-1 < iVar12);
          iVar8 = iVar11 * 0x94;
          local_f8 = 0;
          iVar12 = *(int *)(&DAT_00620798 + iVar8);
          while (iVar12 <= local_1c) {
            local_f8 = local_f8 + 1;
            piVar1 = (int *)(&DAT_0062079c + iVar8);
            iVar8 = iVar8 + 4;
            iVar12 = *piVar1;
          }
          iVar12 = *(int *)(&DAT_00620798 + iVar8);
          if (local_f8 < 8) {
            local_5c = local_f8 * 4 + iVar11 * 0x94;
            do {
              iVar11 = *(int *)(&DAT_0062079c + local_5c) - *(int *)(&DAT_00620798 + local_5c);
              if (0 < iVar11) {
                iVar8 = iVar12 * 2;
                local_60 = iVar12 * 4;
                do {
                  sVar3 = (short)scalefactor_data->granules[1].long_scalefactors[local_f8];
                  *(short *)(iVar8 + 0x1d3c9c8) = sVar3;
                  if (sVar3 != 7) {
                    if (bVar20) {
                      fVar21 = (float10)fptan((float10)*(short *)(iVar8 + 0x1d3c9c8) *
                                              (float10)_DAT_005eb4be);
                      *(float *)(local_60 + 0x1d3ce48) = (float)fVar21;
                    }
                    else {
                      sound_mp3_cpp_calculateIntensityStereoRatio_FUN_005292d0
                                (*(int *)(iVar8 + 0x1d3c9c6) >> 0x10,
                                 __BITCAST_DOUBLE(CONCAT44(local_fc,local_100)),iVar12,(float *)0x1d3d748);
                    }
                  }
                  iVar8 = iVar8 + 2;
                  iVar12 = iVar12 + 1;
                  local_60 = local_60 + 4;
                  iVar11 = iVar11 + -1;
                } while (0 < iVar11);
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
    iVar12 = 0;
    pafVar17 = local_58;
    do {
      pafVar17 = pafVar17 + 1;
      pafVar10 = local_58 + iVar12;
      do {
        (*pafVar10)[0] = 0.0;
        pafVar10 = (float (*) [18])(*pafVar10 + 1);
      } while (pafVar10 != pafVar17);
      iVar12 = iVar12 + 1;
    } while (iVar12 < 0x20);
    local_58 = local_58 + 0x20;
  } while ((SMpegStereoSubbandSamples *)local_58 != output_samples + 1);
  if (iVar16 == 2) {
    local_20 = 0;
    local_40 = (float (*) [18])input_lr_samples;
    local_38 = 0;
    local_3c = (float (*) [18])output_samples;
    do {
      local_4c = local_38;
      iVar12 = 0;
      iVar16 = 0;
      do {
        pfVar13 = (float *)((int)((SMpegSubbandSamples *)*local_3c)->samples[0] + iVar16);
        pfVar15 = (float *)((int)((SMpegSubbandSamples *)*local_40)->samples[0] + iVar16);
        if (*(short *)(local_4c + 0x1d3c9c8) == 7) {
          if (bVar6) {
            fVar5 = (float)_DAT_005eb4c6;
            *pfVar13 = (*pfVar15 + pfVar15[0x240]) * fVar5;
            fVar5 = (*pfVar15 - pfVar15[0x240]) * fVar5;
LAB_0052956c:
            pfVar13[0x240] = fVar5;
          }
          else {
            *pfVar13 = *pfVar15;
            pfVar13[0x240] = pfVar15[0x240];
          }
        }
        else {
          if (bVar7) {
            iVar11 = (local_20 * 0x12 + iVar12) * 4;
            if (bVar20) {
              *pfVar13 = (*(float *)(iVar11 + 0x1d3ce48) / (*(float *)(iVar11 + 0x1d3ce48) + 1.0)) *
                         *pfVar15;
              fVar5 = (1.0 / (*(float *)(iVar11 + 0x1d3ce48) + 1.0)) * *pfVar15;
            }
            else {
              *pfVar13 = *pfVar15 * *(float *)(iVar11 + 0x1d3d748);
              fVar5 = *pfVar15 * *(float *)(iVar11 + 0x1d3e048);
            }
            goto LAB_0052956c;
          }
          _DAT_01d1d400 = "..\\sound\\mp3.cpp";
          _DAT_01d1d404 = 0xa3a;
          core_main_c_FUN_005030e0("Error in streo processing.  File: %s",&DAT_01d404c8);
        }
        iVar12 = iVar12 + 1;
        local_4c = local_4c + 2;
        iVar16 = iVar16 + 4;
      } while (iVar12 < 0x12);
      local_38 = local_38 + 0x24;
      local_20 = local_20 + 1;
      local_3c = local_3c + 1;
      local_40 = local_40 + 1;
    } while (local_20 < 0x20);
  }
  else {
    iVar16 = 0;
    local_50 = (float *)output_samples;
    pafVar17 = (float (*) [18])input_lr_samples;
    do {
      pafVar17 = pafVar17 + 1;
      pafVar10 = input_lr_samples->channels[0].samples + iVar16;
      pfVar15 = local_50;
      do {
        pfVar13 = *pafVar10;
        pafVar10 = (float (*) [18])(*pafVar10 + 1);
        *pfVar15 = *pfVar13;
        pfVar15 = pfVar15 + 1;
      } while (pafVar10 != pafVar17);
      iVar16 = iVar16 + 1;
      local_50 = local_50 + 0x12;
    } while (iVar16 < 0x20);
  }
  return;
}
