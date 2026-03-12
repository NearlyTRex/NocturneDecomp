// Name: sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40
// Address: 00534d40
// Address Range: [[00534d40, 00535c20]]
// Convention: __cdecl
// Signature: int __cdecl sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_00534d40(CMP3Decoder *this_ptr,short *pcm_output)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __cdecl sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_00534d40(CMP3Decoder *this_ptr,short *pcm_output)

{
  CFileBitStream *pCVar2;
  uint uVar1;
  uint uVar3;
  int iVar4;
  int iVar2;
  int iVar3;
  float *pfVar5;
  int iVar6;
  int iVar5;
  int iVar7;
  int iVar9;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int iVar10;
  short *psVar12;
  short *psVar11;
  CFileBitStream *pCVar13;
  SMpegSubbandScalefactors *subband_samples;
  SMpegFrameHeader *pSVar12;
  SMpegFrameHeader *pSVar13;
  int *piVar14;
  SMpegLayer3SideInfo *pSVar14;
  float *pfVar15;
  byte bVar15;
  int in_stack_ffff9f14;
  uint in_stack_ffff9f18;
  SMpegLayer3SideInfo *side_info_array;
  SMpegFrameHeader *frame;
  uint uVar17;
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
  CMP3Decoder *pCVar17;
  CMP3Decoder *num_bits;
  uint *puVar1;
  CMP3Decoder *pCVar22;
  SMpegFrame *frame_info_01;
  SMpegFrame frame_info;
  SMpegFrame frame_info_00;
  uint uVar16;
  byte uVar18;
  byte uVar19;
  ushort uVar20;
  ushort uVar21;
  ushort uVar23;
  
  bVar15 = 0;
  local_e0.mpeg_version = (int)&local_110;
  local_e0.bitrate_index = -1;
  local_e0.protection = 0;
  local_e0.emphasis = 0;
  pCVar2 = &this_ptr->file_bitstream;
  if ((this_ptr->file_bitstream).error_flag == 0) {
    uVar9 = (this_ptr->file_bitstream).total_bits_read & 7;
    if (uVar9 != 0) {
      sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(pCVar2,8 - uVar9);
    }
    uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(pCVar2,0xc);
    while (((uVar1 & 0x1fff) != 0xfff && ((this_ptr->file_bitstream).error_flag == 0))) {
      uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(pCVar2,8);
      uVar1 = uVar1 << 8 | uVar3;
    }
    if ((this_ptr->file_bitstream).error_flag == 0) {
      iVar10 = (this_ptr->file_bitstream).total_bits_read;
      sound_mp3_cpp_CFileBitStream_readFrameHeader_FUN_0052f5b0
                (&this_ptr->file_bitstream,(SMpegFrameHeader **)&local_e0);
      iVar3 = local_e0.mpeg_version;
      local_e0.layer = *(int *)(local_e0.mpeg_version + 0x1c);
      local_e0.sampling_rate_index = (local_e0.layer != 3) + 1;
      if (*(int *)(local_e0.mpeg_version + 4) == 2) {
        iVar9 = *(int *)local_e0.mpeg_version;
        iVar4 = g_MpegBitrateTable[iVar9][1][*(int *)(local_e0.mpeg_version + 0xc)] /
                local_e0.sampling_rate_index;
        iVar2 = (int)ROUND(ROUND(g_MpegSampleRateTable[iVar9]
                                 [*(int *)(local_e0.mpeg_version + 0x10)]));
        if (iVar9 == 1) {
          if (((iVar2 == 0x30) && (0x37 < iVar4)) || ((0x37 < iVar4 && (iVar4 < 0x51)))) {
            iVar2 = 0;
          }
          else if ((iVar2 == 0x30) || (iVar4 < 0x60)) {
            if ((iVar2 == 0x20) || (0x30 < iVar4)) {
              iVar2 = 3;
            }
            else {
              iVar2 = 2;
            }
          }
          else {
            iVar2 = 1;
          }
        }
        else {
          iVar2 = 4;
        }
        if (iVar2 != local_e0.bitrate_index) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0x1a2;
          core_main_c_displayErrorAndQuit_FUN_00506f10("MPEG Layer 2 - pick_table - can't load tables!  File: %s");
        }
      }
      else {
        local_e0.private_bit = 0x20;
      }
      local_e0.padding = local_e0.private_bit;
      if (*(int *)(iVar3 + 0x1c) == 1) {
        iVar2 = *(int *)(iVar3 + 4);
        iVar3 = *(int *)(iVar3 + 0x20);
        if ((((iVar2 < 1) || (3 < iVar2)) || (iVar3 < 0)) || (3 < iVar3)) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0x1b2;
          core_main_c_displayErrorAndQuit_FUN_00506f10("js_bound bad layer/modext (%d/%d)  File: %s");
        }
        local_e0.padding = g_MpegLayer2AllocationTables[iVar2][iVar3];
      }
      local_e0.original = local_e0.sampling_rate_index;
      iVar3 = (*(int *)local_e0.mpeg_version != 0) + 1;
      pCVar13 = &this_ptr->file_bitstream;
      if ((uint)local_110.layer < 2) {
        if (local_110.layer == 1) {
          local_60d0 = 0x20;
          local_60cc = 0x180;
          sound_mp3_cpp_CFileBitStream_readAllocationTable_FUN_0052f7a0
                    (pCVar13,(uint *)local_290,(SBitAllocationTable *)&local_e0);
          sound_mp3_cpp_CFileBitStream_readScalefactors_FUN_0052f850
                    (pCVar13,local_290,local_fc8,(SBitAllocationTable *)&local_e0);
          local_20 = 0;
          do {
            sound_mp3_cpp_CFileBitStream_readQuantizedSamples_FUN_0052fb50
                      (pCVar13,local_cc8,local_290,(SBitAllocationTable *)&local_e0);
            sound_mp3_cpp_requantizeSamples_FUN_005301b0
                      (local_cc8,local_9c8,local_290,(SMpegFrame *)&local_e0);
            local_5c = 0;
            do {
              iVar7 = 0;
              if (0 < local_e0.sampling_rate_index) {
                piVar10 = (int *)((int)local_fc8[0].codes[0] + local_5c);
                pfVar5 = (float *)((int)local_9c8[0].codes[0] + local_5c);
                do {
                  iVar2 = *piVar10;
                  piVar10 = piVar10 + 0x60;
                  iVar7 = iVar7 + 1;
                  *pfVar5 = *pfVar5 * (float)g_MpegScalefactorTable[iVar2];
                  pfVar5 = pfVar5 + 0x60;
                } while (iVar7 < local_e0.sampling_rate_index);
              }
              local_5c = local_5c + 4;
            } while (local_5c != 0x80);
            iVar2 = 0;
            if (0 < local_e0.original) {
              subband_samples = local_9c8;
              psVar12 = local_33c8;
              do {
                sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0
                          (this_ptr,(float *)subband_samples,iVar2,psVar12);
                iVar2 = iVar2 + 1;
                subband_samples = subband_samples + 1;
                psVar12 = psVar12 + 0x240;
              } while (iVar2 < local_e0.original);
            }
            local_20 = local_20 + 1;
          } while (local_20 < 0xc);
        }
      }
      else if ((uint)local_110.layer < 3) {
        local_60cc = 0x480;
        local_60d0 = 8;
        sound_mp3_cpp_CFileBitStream_readAllocationValues_FUN_0052f670
                  (pCVar13,local_290,(SBitAllocationTable *)&local_e0);
        sound_mp3_cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_0052f8e0
                  (pCVar13,local_390,local_290,local_fc8,(SBitAllocationTable *)&local_e0);
        local_e0.copyright = 0;
        do {
          sound_mp3_cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_0052fc50
                    (pCVar13,local_cc8,local_290,(SBitAllocationTable *)&local_e0);
          sound_mp3_cpp_requantizeLayer3Samples_FUN_0052fee0
                    ((int *)local_cc8,(uint *)local_290,(float *)local_9c8,(SMpegFrame *)&local_e0);
          sound_mp3_cpp_applyScalefactorsToSubbands_FUN_005302f0
                    ((float *)local_9c8,(int *)local_fc8,(SMpegFrame *)&local_e0,
                     local_e0.copyright >> 2);
          if (pcm_output != (short *)0x0) {
            local_28 = 0;
            local_2c = 0;
            do {
              iVar2 = 0;
              if (0 < local_e0.original) {
                pfVar15 = (float *)((int)local_9c8[0].codes[0] + local_2c);
                local_30 = (short *)((int)local_33c8 + local_28);
                do {
                  sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0
                            (this_ptr,pfVar15,iVar2,local_30);
                  iVar2 = iVar2 + 1;
                  pfVar15 = pfVar15 + 0x60;
                  local_30 = local_30 + 0x240;
                } while (iVar2 < local_e0.original);
              }
              local_28 = local_28 + 0x40;
              local_2c = local_2c + 0x80;
            } while (local_28 != 0xc0);
            local_24 = 0;
            local_e0.copyright = 0;
            do {
              iVar2 = 0;
              do {
                iVar9 = 0;
                if (0 < local_e0.original) {
                  iVar5 = iVar2 + local_24;
                  psVar12 = pcm_output;
                  do {
                    pcm_output = psVar12 + 1;
                    iVar9 = iVar9 + 1;
                    *psVar12 = *(short *)((int)local_33c8 + iVar5);
                    iVar5 = iVar5 + 0x480;
                    psVar12 = pcm_output;
                  } while (iVar9 < local_e0.original);
                }
                iVar2 = iVar2 + 2;
              } while (iVar2 != 0x40);
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
        frame = &local_e0;
        side_info_array = (SMpegLayer3SideInfo *)&local_4d8;
        pCVar13 = &this_ptr->file_bitstream;
        uVar18 = SUB41(pCVar13,0);
        uVar19 = (byte)((uint)pCVar13 >> 8);
        uVar20 = (ushort)((uint)pCVar13 >> 0x10);
        uVar16 = 0x535611;
        pCVar17 = this_ptr;
        sound_mp3_cpp_CMP3Decoder_readLayer3SideInfo_FUN_005307a0
                  (this_ptr,pCVar13,side_info_array,(SMpegFrame *)frame);
        iVar2 = 7;
        pSVar12 = &local_e0;
        piVar14 = (int *)&stack0xffff9f14;
        while( true ) {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          pSVar12 = (SMpegFrameHeader *)((int)pSVar12 + (uint)bVar15 * -8 + 4);
          *piVar14 = pSVar12->mpeg_version;
          pSVar12 = pSVar12;
          piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
        }
        frame_info.channel_mode = in_stack_ffff9f18;
        frame_info.header = (SMpegFrameHeader *)in_stack_ffff9f14;
        frame_info.allocation_table = (SBitAllocationTable *)uVar16;
        frame_info.table_index = (int)pCVar17;
        frame_info.samples_per_granule._0_1_ = uVar18;
        frame_info.samples_per_granule._1_1_ = uVar19;
        frame_info.samples_per_granule._2_2_ = uVar20;
        frame_info.js_bound._0_2_ = (short)side_info_array;
        frame_info.js_bound._2_2_ = (short)((uint)side_info_array >> 0x10);
        frame_info.sblimit = (int)frame;
        iVar2 = sound_mp3_cpp_calculateMainDataSize_FUN_00533c50(frame_info);
        for (; 0 < iVar2; iVar2 = iVar2 + -1) {
          uVar17 = 8;
          uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(pCVar13,8);
          uVar18 = SUB41(this_ptr,0);
          uVar19 = (byte)((uint)this_ptr >> 8);
          pCVar17 = (CMP3Decoder *)0x535654;
          uVar20 = (short)((uint)this_ptr >> 0x10);
          sound_mp3_cpp_CMP3Decoder_putByte_FUN_0052f260(this_ptr,uVar1,uVar17);
        }
        uVar1 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
        uVar21 = 0x5677;
        uVar23 = 0x53;
        num_bits = this_ptr;
        uVar17 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
        pCVar22 = (CMP3Decoder *)CONCAT22(uVar23,uVar21);
        uVar1 = uVar1 >> 3;
        if (uVar17 % 8 != 0) {
          num_bits = (CMP3Decoder *)(8 - uVar17 % 8);
          uVar1 = uVar1 + 1;
          uVar18 = 0x94;
          uVar19 = 0x56;
          uVar20 = 0x53;
          pCVar22 = this_ptr;
          sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170(this_ptr,(uint)num_bits);
        }
        local_70 = (this_ptr->main_data_offset - uVar1) - _local_4d8;
        if (0x1000 < uVar1) {
          num_bits = (CMP3Decoder *)0x1000;
          this_ptr->main_data_offset = this_ptr->main_data_offset + -0x1000;
          uVar18 = 0xda;
          uVar19 = 0x56;
          uVar20 = 0x53;
          pCVar22 = this_ptr;
          sound_mp3_cpp_CMP3Decoder_rewindBytes_FUN_0052f320(this_ptr,0x1000);
        }
        iVar2 = 7;
        pSVar13 = &local_e0;
        piVar14 = (int *)&stack0xffff9f14;
        while( true ) {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          pSVar13 = (SMpegFrameHeader *)((int)pSVar13 + (uint)bVar15 * -8 + 4);
          *piVar14 = pSVar13->mpeg_version;
          pSVar13 = pSVar13;
          piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
        }
        frame_info_00.channel_mode = in_stack_ffff9f18;
        frame_info_00.header = (SMpegFrameHeader *)in_stack_ffff9f14;
        frame_info_00.allocation_table = (SBitAllocationTable *)uVar16;
        frame_info_00.table_index = (int)pCVar17;
        frame_info_00.samples_per_granule._0_1_ = uVar18;
        frame_info_00.samples_per_granule._1_1_ = uVar19;
        frame_info_00.samples_per_granule._2_2_ = uVar20;
        frame_info_00.js_bound._0_2_ = (short)pCVar22;
        frame_info_00.js_bound._2_2_ = (short)((uint)pCVar22 >> 0x10);
        frame_info_00.sblimit = (int)num_bits;
        iVar2 = sound_mp3_cpp_calculateMainDataSize_FUN_00533c50(frame_info_00);
        this_ptr->main_data_offset = this_ptr->main_data_offset + iVar2;
        if (local_70 < 0) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0xf9a;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Not enough main data to decode frame %d.");
        }
        for (; 0 < local_70; local_70 = local_70 + -1) {
          sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170(this_ptr,8);
        }
        if ((pcm_output != (short *)0x0) && (local_74 = 0, iVar3 != 0)) {
          local_38 = &local_4c0;
          local_34 = 0;
          psVar11 = pcm_output;
          do {
            iVar2 = 0;
            if (0 < local_e0.original) {
              local_58 = local_4ec8.channels;
              pSVar14 = (SMpegLayer3SideInfo *)((int)local_4c0.scfsi + local_34 + -8);
              do {
                uVar1 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
                if (*(int *)local_e0.mpeg_version == 0) {
                  sound_mp3_cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_00531480
                            (this_ptr,(int *)&local_6c8,(SMpegLayer3SideInfo *)&local_4d8,local_74,
                             iVar2,(SMpegFrame *)&local_e0);
                }
                else {
                  sound_mp3_cpp_CMP3Decoder_readLayer3Scalefactors_FUN_00530d20
                            (this_ptr,(int *)&local_6c8,(SMpegLayer3SideInfo *)&local_4d8,local_74,
                             iVar2,(SMpegFrame *)&local_e0);
                }
                sound_mp3_cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00531680
                          (this_ptr,&local_3cc8,(SMpegLayer3SideInfo *)&local_4d8,iVar2,local_74,
                           uVar1,(SMpegFrame *)&local_e0);
                sound_mp3_cpp_requantizeLayer3Samples_FUN_00531d50
                          (&local_3cc8,local_58,(int *)&local_6c8,pSVar14,iVar2,
                           (SMpegFrame *)&local_e0);
                iVar2 = iVar2 + 1;
                pSVar14 = (SMpegLayer3SideInfo *)&pSVar14->granules[1].scalefac_scale;
                local_58 = local_58 + 1;
              } while (iVar2 < local_e0.original);
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
                pfVar15 = local_18c8;
                local_54 = local_2ac8;
                iVar2 = 0;
                do {
                  sound_mp3_cpp_CMP3Decoder_synthesisPoly_FUN_00533ba0
                            (this_ptr,local_54,pfVar15,iVar2,local_1c,local_4c,&local_e0);
                  iVar2 = iVar2 + 1;
                  local_54 = local_54 + 0x12;
                  pfVar15 = pfVar15 + 0x12;
                } while (iVar2 < 0x20);
                local_50 = 0;
                local_18 = 0;
                do {
                  iVar9 = 0;
                  iVar2 = local_50;
                  do {
                    if ((local_18 % 2 != 0) && (iVar9 % 2 != 0)) {
                      *(float *)((int)local_18c8 + iVar2) = -*(float *)((int)local_18c8 + iVar2);
                    }
                    iVar9 = iVar9 + 1;
                    iVar2 = iVar2 + 0x48;
                  } while (iVar9 < 0x20);
                  local_18 = local_18 + 1;
                  local_50 = local_50 + 4;
                } while (local_18 < 0x12);
                iVar2 = 0;
                psVar12 = local_40;
                do {
                  iVar6 = 0;
                  iVar8 = iVar2;
                  do {
                    iVar6 = iVar6 + 4;
                    puVar1 = (uint *)((int)local_18c8 + iVar8);
                    iVar8 = iVar8 + 0x48;
                    *(uint *)((int)local_190 + iVar6) = *puVar1;
                    iVar6 = iVar6;
                  } while (iVar6 != 0x80);
                  iVar2 = iVar2 + 4;
                  sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0
                            (this_ptr,local_190,local_1c,psVar12);
                  psVar12 = psVar12 + 0x20;
                } while (iVar2 != 0x48);
                local_4c = (SMpegFrame *)&local_4c[5].js_bound;
                local_48 = local_48 + 1;
                local_44 = (SMpegFrame *)&local_44[5].js_bound;
                local_40 = local_40 + 0x240;
                local_1c = local_1c + 1;
              } while (local_1c < local_e0.original);
            }
            local_3c = 0;
            do {
              iVar2 = 0;
              do {
                iVar9 = 0;
                if (0 < local_e0.original) {
                  iVar5 = iVar2 + local_3c;
                  psVar11 = psVar11;
                  do {
                    psVar11 = psVar11 + 1;
                    iVar9 = iVar9 + 1;
                    *psVar11 = *(short *)((int)local_33c8 + iVar5);
                    iVar5 = iVar5 + 0x480;
                    psVar11 = psVar11;
                  } while (iVar9 < local_e0.original);
                }
                iVar2 = iVar2 + 2;
              } while (iVar2 != 0x40);
              local_3c = local_3c + 0x40;
            } while (local_3c != 0x480);
            local_38 = (SMpegLayer3SideInfo *)(local_38->granules[0].subblock_gain + 2);
            local_34 = local_34 + 0x48;
            local_74 = local_74 + 1;
          } while (local_74 < iVar3);
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
        iVar10 = local_60 * local_60d0 -
                 (((this_ptr->file_bitstream).total_bits_read - iVar10) + 0xc);
        iVar2 = 0;
        if (0 < iVar10) {
          do {
            sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(&this_ptr->file_bitstream);
            iVar2 = iVar2 + 1;
          } while (iVar2 < iVar10);
        }
      }
      return iVar3 * 0x240;
    }
  }
  return 0;
}
