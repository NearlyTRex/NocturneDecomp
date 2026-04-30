// Name: sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40
// Address: 00534d40
// MANUAL RECONSTRUCTION
// Address Range: [[00442439, 004424b4] [00534d40, 00535c20]]
// Convention: __cdecl
// Signature: int __cdecl sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_00534d40(CMP3Decoder *this_ptr,short *pcm_output)

#include "nocturne.h"

int __cdecl sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_00534d40(CMP3Decoder *this_ptr,short *pcm_output)

{
  uint *puVar1;
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
  SMpegLayer3GranuleInfo *side_info;  // granule cursor passed to requantizeLayer3Samples; Ghidra mistyped as SMpegLayer3SideInfo *
  int iVar16;
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
  SMpegLayer3SideInfo local_4d8;  // was char; readLayer3SideInfo fills this as a full SMpegLayer3SideInfo. Ghidra split it from local_4c0 which was really &local_4d8.channels[0].granules[0]
  SMpegSubbandSCFSI local_390 [2];
  SMpegSubbandAllocation local_290 [2];
  float local_190 [32];
  SMpegFrameHeader local_110;
  SMpegFrameDecodeContext local_e0;
  int local_b0;
  int local_ac;
  uint local_a8;
  uint local_a4 = 0;  // asm inits to 0, decompiler dropped the init; read once as (local_a4 - 1) for a "frame %d" error message that effectively always prints -1
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
  SMpegLayer3GranuleInfo *local_4c;  // granule cursor; Ghidra mistyped as SMpegFrame *
  SMpegSubbandSamples *local_48;
  SMpegLayer3GranuleInfo *local_44;  // granule cursor; Ghidra mistyped as SMpegFrame *
  short *local_40;
  int local_3c;
  SMpegLayer3GranuleInfo *local_38;  // granule cursor; Ghidra mistyped as SMpegLayer3SideInfo *
  int local_34;
  short *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_e0.frame.header = &local_110;
  local_e0.frame.table_index = -1;
  local_e0.frame.allocation_table = (SBitAllocationTable *)0x0;
  local_e0.dead3 = 0;
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
                (&this_ptr->file_bitstream,&local_e0.frame.header);
      local_e0.frame.channel_mode = local_110.channel_mode;
      local_e0.frame.channel_count = (local_e0.frame.channel_mode != 3) + 1;
      if (local_110.layer == 2) {
        iVar9 = local_110.mpeg_version;
        iVar4 = g_MpegBitrateTable[iVar9][1][local_110.bitrate_index] /
                local_e0.frame.channel_count;
        iVar5 = (int)ROUND(ROUND(g_MpegSampleRateTable[iVar9][local_110.sampling_rate_index]));
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
        if (iVar5 != local_e0.frame.table_index) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0x1a2;
          core_main_c_displayErrorAndQuit_FUN_00506f10("MPEG Layer 2 - pick_table - can't load tables!  File: %s", g_CurrentFilename);
        }
      }
      else {
        local_e0.frame.sblimit = 0x20;
      }
      local_e0.frame.js_bound = local_e0.frame.sblimit;
      if (local_110.channel_mode == 1) {
        iVar5 = local_110.layer;
        iVar6 = local_110.mode_extension;
        if ((((iVar5 < 1) || (3 < iVar5)) || (iVar6 < 0)) || (3 < iVar6)) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0x1b2;
          core_main_c_displayErrorAndQuit_FUN_00506f10("js_bound bad layer/modext (%d/%d)  File: %s", iVar5, iVar6, g_CurrentFilename);
        }
        local_e0.frame.js_bound = g_MpegLayer2AllocationTables[iVar5][iVar6];
      }
      local_e0.channel_count = local_e0.frame.channel_count;
      iVar6 = (local_110.mpeg_version != 0) + 1;
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
                      (local_cc8,local_9c8,local_290,&local_e0.frame);
            for (local_5c = 0; local_5c < 0x20; local_5c = local_5c + 1) {
              for (iVar5 = 0; iVar5 < local_e0.frame.channel_count; iVar5 = iVar5 + 1) {
                iVar9 = local_fc8[iVar5].codes[0][local_5c];
                *(float *)&local_9c8[iVar5].codes[0][local_5c] =
                     *(float *)&local_9c8[iVar5].codes[0][local_5c] *
                     (float)g_MpegScalefactorTable[iVar9];
              }
            }
            iVar5 = 0;
            if (0 < local_e0.channel_count) {
              subband_samples = local_9c8;
              psVar13 = local_33c8;
              do {
                sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0
                          (this_ptr,(float *)subband_samples,iVar5,psVar13);
                iVar5 = iVar5 + 1;
                subband_samples = subband_samples + 1;
                psVar13 = psVar13 + 0x240;
              } while (iVar5 < local_e0.channel_count);
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
        local_e0.group_counter = 0;
        do {
          sound_mp3_cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_0052fc50
                    (pCVar2,local_cc8,local_290,(SBitAllocationTable *)&local_e0);
          sound_mp3_cpp_requantizeLayer3SamplesSimple_FUN_0052fee0
                    ((int *)local_cc8,(uint *)local_290,(float *)local_9c8,&local_e0.frame);
          sound_mp3_cpp_applyScalefactorsToSubbands_FUN_005302f0
                    ((float *)local_9c8,(int *)local_fc8,&local_e0.frame,
                     local_e0.group_counter >> 2);
          if (pcm_output != (short *)0x0) {
            for (local_28 = 0; local_28 < 3; local_28 = local_28 + 1) {
              for (iVar5 = 0; iVar5 < local_e0.channel_count; iVar5 = iVar5 + 1) {
                sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0
                          (this_ptr,(float *)&local_9c8[iVar5].codes[local_28][0],iVar5,
                           &local_33c8[iVar5 * 0x240 + local_28 * 0x20]);
              }
            }
            local_e0.group_counter = 0;
            for (local_24 = 0; local_24 < 3; local_24 = local_24 + 1) {
              for (iVar5 = 0; iVar5 < 0x20; iVar5 = iVar5 + 1) {
                for (iVar9 = 0; iVar9 < local_e0.channel_count; iVar9 = iVar9 + 1) {
                  *pcm_output = local_33c8[iVar9 * 0x240 + local_24 * 0x20 + iVar5];
                  pcm_output = pcm_output + 1;
                }
              }
            }
          }
          local_e0.group_counter = local_e0.group_counter + 1;
        } while (local_e0.group_counter < 0xc);
      }
      else if (local_110.layer == 3) {
        local_60d0 = 8;
        if (local_110.mpeg_version == 0) {
          local_60cc = 0x240;
        }
        else {
          local_60cc = 0x480;
        }
        sound_mp3_cpp_CMP3Decoder_readLayer3SideInfo_FUN_005307a0
                  (this_ptr,&this_ptr->file_bitstream,&local_4d8,
                   &local_e0.frame);
        for (iVar5 = sound_mp3_cpp_calculateMainDataSize_FUN_00533c50(local_e0.frame); 0 < iVar5;
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
        local_70 = (this_ptr->main_data_offset - uVar10) - local_4d8.main_data_begin;
        if (0x1000 < uVar10) {
          this_ptr->main_data_offset = this_ptr->main_data_offset + -0x1000;
          sound_mp3_cpp_CMP3Decoder_rewindBytes_FUN_0052f320(this_ptr,0x1000);
        }
        iVar5 = sound_mp3_cpp_calculateMainDataSize_FUN_00533c50(local_e0.frame);
        this_ptr->main_data_offset = this_ptr->main_data_offset + iVar5;
        if (local_70 < 0) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0xf9a;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Not enough main data to decode frame %d.", local_a4 - 1);
        }
        for (; 0 < local_70; local_70 = local_70 + -1) {
          sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170(this_ptr,8);
        }
        if ((pcm_output != (short *)0x0) && (local_74 = 0, iVar6 != 0)) {
          local_38 = local_4d8.channels[0].granules;
          local_34 = 0;
          do {
            iVar5 = 0;
            if (0 < local_e0.channel_count) {
              local_58 = local_4ec8.channels;
              side_info = (SMpegLayer3GranuleInfo *)((char *)local_4d8.channels[0].granules + local_34);
              do {
                uVar10 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
                if (local_110.mpeg_version == 0) {
                  sound_mp3_cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_00531480
                            (this_ptr,(int *)&local_6c8,&local_4d8,local_74,
                             iVar5,&local_e0.frame);
                }
                else {
                  sound_mp3_cpp_CMP3Decoder_readLayer3Scalefactors_FUN_00530d20
                            (this_ptr,(int *)&local_6c8,&local_4d8,local_74,
                             iVar5,&local_e0.frame);
                }
                sound_mp3_cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00531680
                          (this_ptr,&local_3cc8,&local_4d8,iVar5,local_74,
                           uVar10,&local_e0.frame);
                sound_mp3_cpp_requantizeLayer3Samples_FUN_00531d50
                          (&local_3cc8,local_58,(int *)&local_6c8,side_info,iVar5,
                           &local_e0.frame);
                iVar5 = iVar5 + 1;
                side_info = (SMpegLayer3GranuleInfo *)((char *)side_info + sizeof(SMpegLayer3SideInfoChannel));
                local_58 = local_58 + 1;
              } while (iVar5 < local_e0.channel_count);
            }
            sound_mp3_cpp_mpegLayer3StereoProcess_FUN_005325e0
                      (&local_4ec8,&local_60c8,&local_6c8,local_38,
                       &local_e0.frame);
            local_1c = 0;
            if (0 < local_e0.channel_count) {
              local_4c = (SMpegLayer3GranuleInfo *)((char *)local_4d8.channels[0].granules + local_34);
              local_48 = local_60c8.channels;
              local_40 = local_33c8;
              local_44 = local_4c;
              do {
                sound_mp3_cpp_reorderShortBlockSamples_FUN_00532200
                          (local_48,&local_21c8,local_44,&local_e0.frame);
                sound_mp3_cpp_antiAliasingButterfly_FUN_005334b0
                          ((float *)&local_21c8,local_2ac8,local_44,local_e0.frame.header);
                pfVar7 = local_18c8;
                local_54 = local_2ac8;
                iVar5 = 0;
                do {
                  sound_mp3_cpp_CMP3Decoder_synthesisPoly_FUN_00533ba0
                            (this_ptr,local_54,pfVar7,iVar5,local_1c,local_4c,local_e0.frame.header);
                  iVar5 = iVar5 + 1;
                  local_54 = local_54 + 0x12;
                  pfVar7 = pfVar7 + 0x12;
                } while (iVar5 < 0x20);
                for (local_18 = 0; local_18 < 0x12; local_18 = local_18 + 1) {
                  for (iVar9 = 0; iVar9 < 0x20; iVar9 = iVar9 + 1) {
                    if ((local_18 % 2 != 0) && (iVar9 % 2 != 0)) {
                      local_18c8[local_18 + 18 * iVar9] = -local_18c8[local_18 + 18 * iVar9];
                    }
                  }
                }
                psVar13 = local_40;
                for (iVar5 = 0; iVar5 < 18; iVar5 = iVar5 + 1) {
                  for (iVar9 = 0; iVar9 < 32; iVar9 = iVar9 + 1) {
                    local_190[iVar9] = local_18c8[iVar5 + 18 * iVar9];
                  }
                  sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0
                            (this_ptr,local_190,local_1c,psVar13);
                  psVar13 = psVar13 + 0x20;
                }
                local_4c = (SMpegLayer3GranuleInfo *)((char *)local_4c + sizeof(SMpegLayer3SideInfoChannel));
                local_48 = local_48 + 1;
                local_44 = (SMpegLayer3GranuleInfo *)((char *)local_44 + sizeof(SMpegLayer3SideInfoChannel));
                local_40 = local_40 + 0x240;
                local_1c = local_1c + 1;
              } while (local_1c < local_e0.channel_count);
            }
            for (local_3c = 0; local_3c < 0x12; local_3c = local_3c + 1) {
              for (iVar5 = 0; iVar5 < 0x20; iVar5 = iVar5 + 1) {
                for (iVar9 = 0; iVar9 < local_e0.channel_count; iVar9 = iVar9 + 1) {
                  *pcm_output = local_33c8[iVar9 * 0x240 + local_3c * 0x20 + iVar5];
                  pcm_output = pcm_output + 1;
                }
              }
            }
            local_38 = local_38 + 1;
            local_34 = local_34 + 0x48;
            local_74 = local_74 + 1;
          } while (local_74 < iVar6);
        }
      }
      if (0 < local_110.bitrate_index) {
        local_e0.dead2 = 0;
        local_e0.dead1 = local_60d0;
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
