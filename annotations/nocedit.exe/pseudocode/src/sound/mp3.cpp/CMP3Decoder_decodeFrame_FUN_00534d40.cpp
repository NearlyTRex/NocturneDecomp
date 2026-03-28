// Name: sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40
// Address: 00534d40
// Address Range: [[00442439, 004424b4] [00534d40, 00535c20]]
// Convention: __cdecl
// Signature: int __cdecl sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_00534d40(CMP3Decoder *this_ptr,short *pcm_output)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __cdecl sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_00534d40(CMP3Decoder *this_ptr,short *pcm_output)

{
  uint *puVar1;
  SMpegFrame frame_info;
  SMpegFrame frame_info_00;
  CFileBitStream *pCVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  short *psVar13;
  SMpegSubbandScalefactors *subband_samples;
  SMpegFrameHeader *pSVar14;
  SMpegLayer3SideInfo *side_info;
  byte bVar15;
  int iVar16;
  byte uVar17;
  byte uVar18;
  ushort uVar19;
  ushort uVar20;
  ushort uVar21;
  int iVar22;
  uint local_60d0;
  uint local_60cc;
  SMpegStereoSubbandSamples local_60c8;
  SMpegStereoSubbandSamples local_4ec8;
  SMpegSubbandQuantizedSamples local_3cc8;
  short local_33c8 [1152];
  float local_2ac8 [576];
  SMpegSubbandSamples local_21c8;
  float local_18c8 [576];
  SMpegSubbandScalefactors local_fc8 [2];
  SMpegSubbandScalefactors local_cc8 [2];
  SMpegSubbandScalefactors local_9c8 [2];
  SMpegScalefactorBandData local_6c8;
  char local_4d8;
  SMpegLayer3SideInfo local_4c0;
  SMpegSubbandSCFSI local_390 [2];
  SMpegSubbandAllocation local_290 [2];
  float local_190 [32];
  SMpegFrameHeader local_110;
  SMpegFrameHeader local_e0;
  int local_b0;
  int local_ac;
  uint local_a8;
  uint local_a4;
  SMpegFrameHeader *local_a0;
  int local_9c;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  CFileBitStream *local_84;
  SMpegSubbandScalefactors *local_80;
  SMpegSubbandScalefactors *local_7c;
  CFileBitStream *local_78;
  int local_74;
  int local_70;
  CFileBitStream *local_6c;
  uint local_68;
  SMpegFrame *local_64;
  int local_60;
  int local_5c;
  SMpegSubbandSamples *local_58;
  float *local_54;
  int local_50;
  SMpegFrame *local_4c;
  SMpegSubbandSamples *local_48;
  SMpegFrame *local_44;
  short *local_40;
  int local_3c;
  SMpegLayer3SideInfo *local_38;
  int local_34;
  short *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar15 = 0;
  local_e0.mpeg_version = (int)&local_110;
  local_e0.bitrate_index = -1;
  local_e0.protection = 0;
  local_e0.emphasis = 0;
  pCVar2 = &this_ptr->file_bitstream;
  if ((this_ptr->file_bitstream).error_flag == 0) {
    uVar10 = (this_ptr->file_bitstream).total_bits_read & 7;
    if (uVar10 != 0) {
      sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(pCVar2,8 - uVar10);
    }
    uVar10 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(pCVar2,0xc);
    while (((uVar10 & 0x1fff) != 0xfff && ((this_ptr->file_bitstream).error_flag == 0))) {
      uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(pCVar2,8);
      uVar10 = uVar10 << 8 | uVar3;
    }
    if ((this_ptr->file_bitstream).error_flag == 0) {
      iVar12 = (this_ptr->file_bitstream).total_bits_read;
      sound_mp3_cpp_CFileBitStream_readFrameHeader_FUN_0052f5b0
                (&this_ptr->file_bitstream,(SMpegFrameHeader **)&local_e0);
      iVar6 = local_e0.mpeg_version;
      local_e0.layer = *(int *)(local_e0.mpeg_version + 0x1c);
      local_e0.sampling_rate_index = (local_e0.layer != 3) + 1;
      if (*(int *)(local_e0.mpeg_version + 4) == 2) {
        iVar9 = *(int *)local_e0.mpeg_version;
        iVar4 = g_MpegBitrateTable[iVar9][1][*(int *)(local_e0.mpeg_version + 0xc)] /
                local_e0.sampling_rate_index;
        iVar5 = (int)ROUND(ROUND(g_MpegSampleRateTable[iVar9]
                                 [*(int *)(local_e0.mpeg_version + 0x10)]));
        if (iVar9 == 1) {
          if (((iVar5 == 0x30) && (0x37 < iVar4)) || ((0x37 < iVar4 && (iVar4 < 0x51)))) {
            iVar5 = 0;
          }
          else if ((iVar5 == 0x30) || (iVar4 < 0x60)) {
            if ((iVar5 == 0x20) || (0x30 < iVar4)) {
              iVar5 = 3;
            }
            else {
              iVar5 = 2;
            }
          }
          else {
            iVar5 = 1;
          }
        }
        else {
          iVar5 = 4;
        }
        if (iVar5 != local_e0.bitrate_index) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0x1a2;
          core_main_c_displayErrorAndQuit_FUN_00506f10("MPEG Layer 2 - pick_table - can't load tables!  File: %s");
        }
      }
      else {
        local_e0.private_bit = 0x20;
      }
      local_e0.padding = local_e0.private_bit;
      if (*(int *)(iVar6 + 0x1c) == 1) {
        iVar5 = *(int *)(iVar6 + 4);
        iVar6 = *(int *)(iVar6 + 0x20);
        if ((((iVar5 < 1) || (3 < iVar5)) || (iVar6 < 0)) || (3 < iVar6)) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0x1b2;
          core_main_c_displayErrorAndQuit_FUN_00506f10("js_bound bad layer/modext (%d/%d)  File: %s");
        }
        local_e0.padding = g_MpegLayer2AllocationTables[iVar5][iVar6];
      }
      local_e0.original = local_e0.sampling_rate_index;
      iVar6 = (*(int *)local_e0.mpeg_version != 0) + 1;
      pCVar2 = &this_ptr->file_bitstream;
      if ((uint)local_110.layer < 2) {
        if (local_110.layer == 1) {
          local_60d0 = 0x20;
          local_60cc = 0x180;
          sound_mp3_cpp_CFileBitStream_readAllocationTable_FUN_0052f7a0
                    (pCVar2,(uint *)local_290,(SBitAllocationTable *)&local_e0);
          sound_mp3_cpp_CFileBitStream_readScalefactors_FUN_0052f850
                    (pCVar2,local_290,local_fc8,(SBitAllocationTable *)&local_e0);
          local_20 = 0;
          do {
            sound_mp3_cpp_CFileBitStream_readQuantizedSamples_FUN_0052fb50
                      (pCVar2,local_cc8,local_290,(SBitAllocationTable *)&local_e0);
            sound_mp3_cpp_requantizeSamples_FUN_005301b0
                      (local_cc8,local_9c8,local_290,(SMpegFrame *)&local_e0);
            local_5c = 0;
            do {
              iVar5 = 0;
              if (0 < local_e0.sampling_rate_index) {
                piVar11 = (int *)((int)local_fc8[0].codes[0] + local_5c);
                pfVar7 = (float *)((int)local_9c8[0].codes[0] + local_5c);
                do {
                  iVar9 = *piVar11;
                  piVar11 = piVar11 + 0x60;
                  iVar5 = iVar5 + 1;
                  *pfVar7 = *pfVar7 * (float)g_MpegScalefactorTable[iVar9];
                  pfVar7 = pfVar7 + 0x60;
                } while (iVar5 < local_e0.sampling_rate_index);
              }
              local_5c = local_5c + 4;
            } while (local_5c != 0x80);
            iVar5 = 0;
            if (0 < local_e0.original) {
              subband_samples = local_9c8;
              psVar13 = local_33c8;
              do {
                sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0
                          (this_ptr,(float *)subband_samples,iVar5,psVar13);
                iVar5 = iVar5 + 1;
                subband_samples = subband_samples + 1;
                psVar13 = psVar13 + 0x240;
              } while (iVar5 < local_e0.original);
            }
            local_20 = local_20 + 1;
          } while (local_20 < 0xc);
        }
      }
      else if ((uint)local_110.layer < 3) {
        local_60cc = 0x480;
        local_60d0 = 8;
        sound_mp3_cpp_CFileBitStream_readAllocationValues_FUN_0052f670
                  (pCVar2,local_290,(SBitAllocationTable *)&local_e0);
        sound_mp3_cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_0052f8e0
                  (pCVar2,local_390,local_290,local_fc8,(SBitAllocationTable *)&local_e0);
        local_e0.copyright = 0;
        do {
          sound_mp3_cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_0052fc50
                    (pCVar2,local_cc8,local_290,(SBitAllocationTable *)&local_e0);
          sound_mp3_cpp_requantizeLayer3SamplesSimple_FUN_0052fee0
                    ((int *)local_cc8,(uint *)local_290,(float *)local_9c8,(SMpegFrame *)&local_e0);
          sound_mp3_cpp_applyScalefactorsToSubbands_FUN_005302f0
                    ((float *)local_9c8,(int *)local_fc8,(SMpegFrame *)&local_e0,
                     local_e0.copyright >> 2);
          if (pcm_output != (short *)0x0) {
            local_28 = 0;
            local_2c = 0;
            do {
              iVar5 = 0;
              if (0 < local_e0.original) {
                pfVar7 = (float *)((int)local_9c8[0].codes[0] + local_2c);
                local_30 = (short *)((int)local_33c8 + local_28);
                do {
                  sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0
                            (this_ptr,pfVar7,iVar5,local_30);
                  iVar5 = iVar5 + 1;
                  pfVar7 = pfVar7 + 0x60;
                  local_30 = local_30 + 0x240;
                } while (iVar5 < local_e0.original);
              }
              local_28 = local_28 + 0x40;
              local_2c = local_2c + 0x80;
            } while (local_28 != 0xc0);
            local_24 = 0;
            local_e0.copyright = 0;
            do {
              iVar5 = 0;
              do {
                iVar9 = 0;
                if (0 < local_e0.original) {
                  iVar4 = iVar5 + local_24;
                  psVar13 = pcm_output;
                  do {
                    pcm_output = psVar13 + 1;
                    iVar9 = iVar9 + 1;
                    *psVar13 = *(short *)((int)local_33c8 + iVar4);
                    iVar4 = iVar4 + 0x480;
                    psVar13 = pcm_output;
                  } while (iVar9 < local_e0.original);
                }
                iVar5 = iVar5 + 2;
              } while (iVar5 != 0x40);
              local_24 = local_24 + 0x40;
            } while (local_24 != 0xc0);
          }
          local_e0.copyright = local_e0.copyright + 1;
        } while (local_e0.copyright < 0xc);
      }
      else if (local_110.layer == 3) {
        local_60d0 = 8;
        if (*(int *)local_e0.mpeg_version == 0) {
          local_60cc = 0x240;
        }
        else {
          local_60cc = 0x480;
        }
        sound_mp3_cpp_CMP3Decoder_readLayer3SideInfo_FUN_005307a0
                  (this_ptr,&this_ptr->file_bitstream,(SMpegLayer3SideInfo *)&local_4d8,
                   (SMpegFrame *)&local_e0);
        uVar17 = (byte)local_e0.sampling_rate_index;
        uVar18 = (byte)((uint)local_e0.sampling_rate_index >> 8);
        uVar19 = (ushort)((uint)local_e0.sampling_rate_index >> 0x10);
        uVar20 = (ushort)local_e0.padding;
        uVar21 = (ushort)((uint)local_e0.padding >> 0x10);
        pSVar14 = &local_e0;
        piVar11 = (int *)&stack0xffff9f14;
        iVar9 = local_e0.mpeg_version;
        iVar4 = local_e0.layer;
        iVar8 = local_e0.protection;
        iVar16 = local_e0.bitrate_index;
        iVar22 = local_e0.private_bit;
        for (iVar5 = local_e0.private_bit; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar11 = pSVar14->mpeg_version;
          pSVar14 = (SMpegFrameHeader *)((int)pSVar14 + (uint)bVar15 * -8 + 4);
          piVar11 = piVar11 + (uint)bVar15 * -2 + 1;
        }
        frame_info.channel_mode = iVar4;
        frame_info.header = (SMpegFrameHeader *)iVar9;
        frame_info.allocation_table = (SBitAllocationTable *)iVar8;
        frame_info.table_index = iVar16;
        frame_info.samples_per_granule._0_1_ = uVar17;
        frame_info.samples_per_granule._1_1_ = uVar18;
        frame_info.samples_per_granule._2_2_ = uVar19;
        frame_info.js_bound._0_2_ = uVar20;
        frame_info.js_bound._2_2_ = uVar21;
        frame_info.sblimit = iVar22;
        for (iVar5 = sound_mp3_cpp_calculateMainDataSize_FUN_00533c50(frame_info); 0 < iVar5;
            iVar5 = iVar5 + -1) {
          uVar3 = 8;
          uVar10 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(&this_ptr->file_bitstream,8);
          sound_mp3_cpp_CMP3Decoder_putByte_FUN_0052f260(this_ptr,uVar10,uVar3);
        }
        uVar10 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
        uVar3 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
        uVar10 = uVar10 >> 3;
        if (uVar3 % 8 != 0) {
          uVar10 = uVar10 + 1;
          sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170(this_ptr,8 - uVar3 % 8);
        }
        local_70 = (this_ptr->main_data_offset - uVar10) - _local_4d8;
        if (0x1000 < uVar10) {
          this_ptr->main_data_offset = this_ptr->main_data_offset + -0x1000;
          sound_mp3_cpp_CMP3Decoder_rewindBytes_FUN_0052f320(this_ptr,0x1000);
        }
        uVar17 = (byte)local_e0.sampling_rate_index;
        uVar18 = (byte)((uint)local_e0.sampling_rate_index >> 8);
        uVar19 = (ushort)((uint)local_e0.sampling_rate_index >> 0x10);
        uVar20 = (ushort)local_e0.padding;
        uVar21 = (ushort)((uint)local_e0.padding >> 0x10);
        pSVar14 = &local_e0;
        piVar11 = (int *)&stack0xffff9f14;
        iVar9 = local_e0.mpeg_version;
        iVar4 = local_e0.layer;
        iVar8 = local_e0.protection;
        iVar16 = local_e0.bitrate_index;
        iVar22 = local_e0.private_bit;
        for (iVar5 = local_e0.private_bit; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar11 = pSVar14->mpeg_version;
          pSVar14 = (SMpegFrameHeader *)((int)pSVar14 + (uint)bVar15 * -8 + 4);
          piVar11 = piVar11 + (uint)bVar15 * -2 + 1;
        }
        frame_info_00.channel_mode = iVar4;
        frame_info_00.header = (SMpegFrameHeader *)iVar9;
        frame_info_00.allocation_table = (SBitAllocationTable *)iVar8;
        frame_info_00.table_index = iVar16;
        frame_info_00.samples_per_granule._0_1_ = uVar17;
        frame_info_00.samples_per_granule._1_1_ = uVar18;
        frame_info_00.samples_per_granule._2_2_ = uVar19;
        frame_info_00.js_bound._0_2_ = uVar20;
        frame_info_00.js_bound._2_2_ = uVar21;
        frame_info_00.sblimit = iVar22;
        iVar5 = sound_mp3_cpp_calculateMainDataSize_FUN_00533c50(frame_info_00);
        this_ptr->main_data_offset = this_ptr->main_data_offset + iVar5;
        if (local_70 < 0) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0xf9a;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Not enough main data to decode frame %d.");
        }
        for (; 0 < local_70; local_70 = local_70 + -1) {
          sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170(this_ptr,8);
        }
        if ((pcm_output != (short *)0x0) && (local_74 = 0, iVar6 != 0)) {
          local_38 = &local_4c0;
          local_34 = 0;
          do {
            iVar5 = 0;
            if (0 < local_e0.original) {
              local_58 = local_4ec8.channels;
              side_info = (SMpegLayer3SideInfo *)((int)local_4c0.scfsi + local_34 + -8);
              do {
                uVar10 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
                if (*(int *)local_e0.mpeg_version == 0) {
                  sound_mp3_cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_00531480
                            (this_ptr,(int *)&local_6c8,(SMpegLayer3SideInfo *)&local_4d8,local_74,
                             iVar5,(SMpegFrame *)&local_e0);
                }
                else {
                  sound_mp3_cpp_CMP3Decoder_readLayer3Scalefactors_FUN_00530d20
                            (this_ptr,(int *)&local_6c8,(SMpegLayer3SideInfo *)&local_4d8,local_74,
                             iVar5,(SMpegFrame *)&local_e0);
                }
                sound_mp3_cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00531680
                          (this_ptr,&local_3cc8,(SMpegLayer3SideInfo *)&local_4d8,iVar5,local_74,
                           uVar10,(SMpegFrame *)&local_e0);
                sound_mp3_cpp_requantizeLayer3Samples_FUN_00531d50
                          (&local_3cc8,local_58,(int *)&local_6c8,side_info,iVar5,
                           (SMpegFrame *)&local_e0);
                iVar5 = iVar5 + 1;
                side_info = (SMpegLayer3SideInfo *)&side_info->granules[1].scalefac_scale;
                local_58 = local_58 + 1;
              } while (iVar5 < local_e0.original);
            }
            sound_mp3_cpp_mpegLayer3StereoProcess_FUN_005325e0
                      (&local_4ec8,&local_60c8,&local_6c8,(SMpegFrame *)local_38,
                       (SMpegFrame *)&local_e0);
            local_1c = 0;
            if (0 < local_e0.original) {
              local_4c = (SMpegFrame *)((int)local_4c0.scfsi + local_34 + -8);
              local_48 = local_60c8.channels;
              local_40 = local_33c8;
              local_44 = local_4c;
              do {
                sound_mp3_cpp_reorderShortBlockSamples_FUN_00532200
                          (local_48,&local_21c8,local_44,(SMpegFrame *)&local_e0);
                sound_mp3_cpp_antiAliasingButterfly_FUN_005334b0
                          ((float *)&local_21c8,local_2ac8,local_44,&local_e0);
                pfVar7 = local_18c8;
                local_54 = local_2ac8;
                iVar5 = 0;
                do {
                  sound_mp3_cpp_CMP3Decoder_synthesisPoly_FUN_00533ba0
                            (this_ptr,local_54,pfVar7,iVar5,local_1c,local_4c,&local_e0);
                  iVar5 = iVar5 + 1;
                  local_54 = local_54 + 0x12;
                  pfVar7 = pfVar7 + 0x12;
                } while (iVar5 < 0x20);
                local_50 = 0;
                local_18 = 0;
                do {
                  iVar9 = 0;
                  iVar5 = local_50;
                  do {
                    if ((local_18 % 2 != 0) && (iVar9 % 2 != 0)) {
                      *(float *)((int)local_18c8 + iVar5) = -*(float *)((int)local_18c8 + iVar5);
                    }
                    iVar9 = iVar9 + 1;
                    iVar5 = iVar5 + 0x48;
                  } while (iVar9 < 0x20);
                  local_18 = local_18 + 1;
                  local_50 = local_50 + 4;
                } while (local_18 < 0x12);
                iVar5 = 0;
                psVar13 = local_40;
                do {
                  iVar9 = 0;
                  iVar4 = iVar5;
                  do {
                    iVar8 = iVar9 + 4;
                    puVar1 = (uint *)((int)local_18c8 + iVar4);
                    iVar4 = iVar4 + 0x48;
                    *(uint *)((int)local_190 + iVar9) = *puVar1;
                    iVar9 = iVar8;
                  } while (iVar8 != 0x80);
                  iVar5 = iVar5 + 4;
                  sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0
                            (this_ptr,local_190,local_1c,psVar13);
                  psVar13 = psVar13 + 0x20;
                } while (iVar5 != 0x48);
                local_4c = (SMpegFrame *)&local_4c[5].js_bound;
                local_48 = local_48 + 1;
                local_44 = (SMpegFrame *)&local_44[5].js_bound;
                local_40 = local_40 + 0x240;
                local_1c = local_1c + 1;
              } while (local_1c < local_e0.original);
            }
            local_3c = 0;
            do {
              iVar5 = 0;
              do {
                iVar9 = 0;
                if (0 < local_e0.original) {
                  iVar4 = iVar5 + local_3c;
                  psVar13 = pcm_output;
                  do {
                    pcm_output = psVar13 + 1;
                    iVar9 = iVar9 + 1;
                    *psVar13 = *(short *)((int)local_33c8 + iVar4);
                    iVar4 = iVar4 + 0x480;
                    psVar13 = pcm_output;
                  } while (iVar9 < local_e0.original);
                }
                iVar5 = iVar5 + 2;
              } while (iVar5 != 0x40);
              local_3c = local_3c + 0x40;
            } while (local_3c != 0x480);
            local_38 = (SMpegLayer3SideInfo *)(local_38->granules[0].subblock_gain + 2);
            local_34 = local_34 + 0x48;
            local_74 = local_74 + 1;
          } while (local_74 < iVar6);
        }
      }
      if (0 < local_110.bitrate_index) {
        local_e0.mode_extension = 0;
        local_e0.channel_mode = local_60d0;
        local_60 = (int)ROUND(ROUND((((double)local_60cc /
                                     g_MpegSampleRateTable[local_110.mpeg_version]
                                     [local_110.sampling_rate_index]) *
                                    (double)g_MpegBitrateTable[local_110.mpeg_version + -1]
                                            [local_110.layer + 2][local_110.bitrate_index]) /
                                    (double)local_60d0));
        if (local_110.padding != 0) {
          local_60 = local_60 + 1;
        }
        iVar12 = local_60 * local_60d0 -
                 (((this_ptr->file_bitstream).total_bits_read - iVar12) + 0xc);
        iVar5 = 0;
        if (0 < iVar12) {
          do {
            sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(&this_ptr->file_bitstream);
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar12);
        }
      }
      return iVar6 * 0x240;
    }
  }
  return 0;
}
