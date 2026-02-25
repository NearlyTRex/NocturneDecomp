// Name: sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40
// Address: 00534d40
// Address Range: [[00534d40, 00535c20]]
// Convention: __cdecl
// Signature: int __cdecl sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_00534d40(CMP3Decoder *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __cdecl sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_00534d40(CMP3Decoder *this_ptr)

{
  uint *puVar1;
  SMpegFrame frame_info;
  SMpegFrame frame_info_00;
  SMpegFrame *frame_info_01;
  CFileBitStream *pCVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  CMP3Decoder *num_bits;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  ushort *puVar11;
  SMpegSubbandScalefactors *subband_samples;
  SMpegFrameHeader *pSVar12;
  SMpegFrameHeader *pSVar13;
  SMpegLayer3Granule *pSVar14;
  short *psVar15;
  byte bVar16;
  ushort *in_stack_00000008;
  int in_stack_ffff9f14;
  uint in_stack_ffff9f18;
  uint uVar17;
  CMP3Decoder *pCVar18;
  byte uVar19;
  byte uVar20;
  ushort uVar21;
  ushort uVar22;
  ushort uVar24;
  CMP3Decoder *pCVar23;
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
  SMpegLayer3Granule local_4c0;
  SMpegSubbandSCFSI local_390 [2];
  SMpegSubbandAllocation local_290 [2];
  float local_190 [32];
  int local_110;
  uint local_10c;
  int local_104;
  int local_100;
  int local_fc;
  SMpegFrameHeader local_e0;
  int local_b0;
  int local_ac;
  uint local_a8;
  uint local_a4;
  SMpegFrameHeader *local_a0;
  void *local_9c;
  uint local_98;
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
  SMpegFrame *local_68;
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
  SMpegLayer3Granule *local_38;
  int local_34;
  short *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar16 = 0;
  local_e0.mpeg_version = (int)&local_110;
  local_b0 = 0;
  local_e0.bitrate_index = -1;
  local_e0.protection = 0;
  local_e0.emphasis = 0;
  pCVar2 = &this_ptr->file_bitstream;
  if ((this_ptr->file_bitstream).error_flag == 0) {
    local_a8 = 0xfff;
    local_a4 = 0x1fff;
    uVar9 = (this_ptr->file_bitstream).total_bits_read & 7;
    if (uVar9 != 0) {
      sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(pCVar2,8 - uVar9);
    }
    uVar9 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(pCVar2,0xc);
    while (((local_a4 & uVar9) != local_a8 && ((this_ptr->file_bitstream).error_flag == 0))) {
      uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(pCVar2,8);
      uVar9 = uVar9 << 8 | uVar3;
    }
    if ((this_ptr->file_bitstream).error_flag == 0) {
      local_b0 = (this_ptr->file_bitstream).total_bits_read;
      sound_mp3_cpp_CFileBitStream_readFrameHeader_FUN_0052f5b0(&this_ptr->file_bitstream,&local_e0)
      ;
      iVar7 = local_e0.mpeg_version;
      local_e0.layer = *(int *)(local_e0.mpeg_version + 0x1c);
      local_e0.sampling_rate_index = (local_e0.layer != 3) + 1;
      if (*(int *)(local_e0.mpeg_version + 4) == 2) {
        local_9c = (void *)local_e0.private_bit;
        local_8c = *(int *)local_e0.mpeg_version;
        local_98 = 1;
        local_94 = *(int *)(local_e0.mpeg_version + 0xc);
        local_14 = local_8c * 0xb4 + 0x3c;
        iVar4 = g_MpegBitrateTable[local_8c][1][local_94] / local_e0.sampling_rate_index;
        local_90 = (int)ROUND(ROUND(g_MpegSampleRateTable[local_8c]
                                    [*(int *)(local_e0.mpeg_version + 0x10)]));
        if (local_8c == 1) {
          if (((local_90 == 0x30) && (0x37 < iVar4)) || ((0x37 < iVar4 && (iVar4 < 0x51)))) {
            iVar4 = 0;
          }
          else if ((local_90 == 0x30) || (iVar4 < 0x60)) {
            if ((local_90 == 0x20) || (0x30 < iVar4)) {
              iVar4 = 3;
            }
            else {
              iVar4 = 2;
            }
          }
          else {
            iVar4 = 1;
          }
        }
        else {
          iVar4 = 4;
        }
        local_a0 = &local_e0;
        if (iVar4 != local_e0.bitrate_index) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0x1a2;
          core_main_c_displayErrorAndQuit_FUN_00506f10("MPEG Layer 2 - pick_table - can't load tables!  File: %s");
        }
        local_e0.private_bit = (int)local_9c;
      }
      else {
        local_e0.private_bit = 0x20;
      }
      local_e0.padding = local_e0.private_bit;
      if (*(int *)(iVar7 + 0x1c) == 1) {
        local_88 = *(int *)(iVar7 + 4);
        iVar7 = *(int *)(iVar7 + 0x20);
        if ((((local_88 < 1) || (3 < local_88)) || (iVar7 < 0)) || (3 < iVar7)) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0x1b2;
          core_main_c_displayErrorAndQuit_FUN_00506f10("js_bound bad layer/modext (%d/%d)  File: %s");
        }
        local_e0.padding = (int)g_MpegLayer2AllocationTables[local_88][iVar7];
      }
      local_e0.original = local_e0.sampling_rate_index;
      local_ac = (*(int *)local_e0.mpeg_version != 0) + 1;
      pCVar2 = &this_ptr->file_bitstream;
      if (local_10c < 2) {
        if (local_10c == 1) {
          local_60d0 = 0x20;
          local_60cc = 0x180;
          sound_mp3_cpp_CFileBitStream_readAllocationTable_FUN_0052f7a0
                    (pCVar2,(uint *)local_290,(SBitAllocationTable *)&local_e0);
          sound_mp3_cpp_CFileBitStream_readScalefactors_FUN_0052f850
                    (pCVar2,local_290,local_fc8,(SBitAllocationTable *)&local_e0);
          local_20 = 0;
          local_84 = pCVar2;
          do {
            sound_mp3_cpp_CFileBitStream_readQuantizedSamples_FUN_0052fb50
                      (local_84,local_cc8,local_290,(SBitAllocationTable *)&local_e0);
            sound_mp3_cpp_requantizeSamples_FUN_005301b0(local_cc8,local_9c8,local_290,&local_e0);
            local_80 = local_9c8;
            local_7c = local_fc8;
            local_5c = 0;
            do {
              iVar7 = 0;
              if (0 < local_e0.sampling_rate_index) {
                piVar10 = (int *)((int)local_7c->codes[0] + local_5c);
                pfVar5 = (float *)((int)local_80->codes[0] + local_5c);
                do {
                  iVar4 = *piVar10;
                  piVar10 = piVar10 + 0x60;
                  iVar7 = iVar7 + 1;
                  *pfVar5 = *pfVar5 * (float)g_MpegScalefactorTable[iVar4];
                  pfVar5 = pfVar5 + 0x60;
                } while (iVar7 < local_e0.sampling_rate_index);
              }
              local_5c = local_5c + 4;
            } while (local_5c != 0x80);
            iVar7 = 0;
            local_5c = 0x80;
            if (0 < local_e0.original) {
              subband_samples = local_9c8;
              psVar15 = local_33c8;
              do {
                sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0
                          (this_ptr,(float *)subband_samples,iVar7,psVar15);
                iVar7 = iVar7 + 1;
                subband_samples = subband_samples + 1;
                psVar15 = psVar15 + 0x240;
              } while (iVar7 < local_e0.original);
            }
            local_20 = local_20 + 1;
          } while (local_20 < 0xc);
        }
      }
      else if (local_10c < 3) {
        local_60cc = 0x480;
        local_60d0 = 8;
        sound_mp3_cpp_CFileBitStream_readAllocationValues_FUN_0052f670
                  (pCVar2,local_290,(SBitAllocationTable *)&local_e0);
        sound_mp3_cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_0052f8e0
                  (pCVar2,local_390,local_290,local_fc8,(SBitAllocationTable *)&local_e0);
        local_e0.copyright = 0;
        local_78 = pCVar2;
        do {
          sound_mp3_cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_0052fc50
                    (local_78,local_cc8,local_290,(SBitAllocationTable *)&local_e0);
          sound_mp3_cpp_requantizeLayer3Samples_FUN_0052fee0
                    ((int *)local_cc8,(uint *)local_290,(float *)local_9c8,(SMpegFrame *)&local_e0);
          sound_mp3_cpp_applyScalefactorsToSubbands_FUN_005302f0
                    ((float *)local_9c8,(int *)local_fc8,(SMpegFrame *)&local_e0,
                     local_e0.copyright >> 2);
          if (in_stack_00000008 != (ushort *)0x0) {
            local_28 = 0;
            local_2c = 0;
            do {
              iVar7 = 0;
              if (0 < local_e0.original) {
                pfVar5 = (float *)((int)local_9c8[0].codes[0] + local_2c);
                local_30 = (short *)((int)local_33c8 + local_28);
                do {
                  sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0
                            (this_ptr,pfVar5,iVar7,local_30);
                  iVar7 = iVar7 + 1;
                  pfVar5 = pfVar5 + 0x60;
                  local_30 = local_30 + 0x240;
                } while (iVar7 < local_e0.original);
              }
              local_28 = local_28 + 0x40;
              local_2c = local_2c + 0x80;
            } while (local_28 != 0xc0);
            local_24 = 0;
            local_e0.copyright = 0;
            do {
              iVar7 = 0;
              do {
                iVar4 = 0;
                if (0 < local_e0.original) {
                  iVar8 = iVar7 + local_24;
                  puVar11 = in_stack_00000008;
                  do {
                    in_stack_00000008 = puVar11 + 1;
                    iVar4 = iVar4 + 1;
                    *puVar11 = *(ushort *)((int)local_33c8 + iVar8);
                    iVar8 = iVar8 + 0x480;
                    puVar11 = in_stack_00000008;
                  } while (iVar4 < local_e0.original);
                }
                iVar7 = iVar7 + 2;
              } while (iVar7 != 0x40);
              local_24 = local_24 + 0x40;
            } while (local_24 != 0xc0);
          }
          local_e0.copyright = local_e0.copyright + 1;
        } while (local_e0.copyright < 0xc);
      }
      else if (local_10c == 3) {
        local_60d0 = 8;
        if (*(int *)local_e0.mpeg_version == 0) {
          local_60cc = 0x240;
        }
        else {
          local_60cc = 0x480;
        }
        pSVar13 = &local_e0;
        pSVar14 = (SMpegLayer3Granule *)&local_4d8;
        local_6c = &this_ptr->file_bitstream;
        uVar19 = SUB41(local_6c,0);
        uVar20 = (byte)((uint)local_6c >> 8);
        uVar21 = (ushort)((uint)local_6c >> 0x10);
        uVar17 = 0x535611;
        pCVar18 = this_ptr;
        sound_mp3_cpp_CMP3Decoder_readLayer3SideInfo_FUN_005307a0
                  (this_ptr,local_6c,pSVar14,(SMpegFrame *)pSVar13);
        iVar7 = 7;
        pSVar12 = &local_e0;
        piVar10 = (int *)&stack0xffff9f14;
        while( true ) {
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          *piVar10 = pSVar12->mpeg_version;
          pSVar12 = (SMpegFrameHeader *)((int)pSVar12 + ((uint)bVar16 * -2 + 1) * 4);
          piVar10 = piVar10 + (uint)bVar16 * -2 + 1;
        }
        frame_info.channel_mode = in_stack_ffff9f18;
        frame_info.header = (SMpegFrameHeader *)in_stack_ffff9f14;
        frame_info.allocation_table = (SBitAllocationTable *)uVar17;
        frame_info.table_index = (int)pCVar18;
        frame_info.samples_per_granule._0_1_ = uVar19;
        frame_info.samples_per_granule._1_1_ = uVar20;
        frame_info.samples_per_granule._2_2_ = uVar21;
        frame_info.js_bound._0_2_ = (short)pSVar14;
        frame_info.js_bound._2_2_ = (short)((uint)pSVar14 >> 0x10);
        frame_info.sblimit = (int)pSVar13;
        iVar7 = sound_mp3_cpp_calculateMainDataSize_FUN_00533c50(frame_info);
        pCVar2 = local_6c;
        for (; 0 < iVar7; iVar7 = iVar7 + -1) {
          uVar3 = 8;
          uVar9 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(pCVar2,8);
          uVar19 = SUB41(this_ptr,0);
          uVar20 = (byte)((uint)this_ptr >> 8);
          pCVar18 = (CMP3Decoder *)0x535654;
          uVar21 = (short)((uint)this_ptr >> 0x10);
          sound_mp3_cpp_CMP3Decoder_putByte_FUN_0052f260(this_ptr,uVar9,uVar3);
        }
        uVar9 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
        uVar22 = 0x5677;
        uVar24 = 0x53;
        num_bits = this_ptr;
        uVar3 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
        pCVar23 = (CMP3Decoder *)CONCAT22(uVar24,uVar22);
        uVar9 = uVar9 >> 3;
        if (uVar3 % 8 != 0) {
          num_bits = (CMP3Decoder *)(8 - uVar3 % 8);
          uVar9 = uVar9 + 1;
          uVar19 = 0x94;
          uVar20 = 0x56;
          uVar21 = 0x53;
          pCVar23 = this_ptr;
          sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170(this_ptr,(uint)num_bits);
        }
        local_70 = (this_ptr->main_data_offset - uVar9) - _local_4d8;
        if (0x1000 < uVar9) {
          num_bits = (CMP3Decoder *)0x1000;
          this_ptr->main_data_offset = this_ptr->main_data_offset + -0x1000;
          uVar19 = 0xda;
          uVar20 = 0x56;
          uVar21 = 0x53;
          pCVar23 = this_ptr;
          sound_mp3_cpp_CMP3Decoder_rewindBytes_FUN_0052f320(this_ptr,0x1000);
        }
        iVar7 = 7;
        pSVar13 = &local_e0;
        piVar10 = (int *)&stack0xffff9f14;
        while( true ) {
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          *piVar10 = pSVar13->mpeg_version;
          pSVar13 = (SMpegFrameHeader *)((int)pSVar13 + ((uint)bVar16 * -2 + 1) * 4);
          piVar10 = piVar10 + (uint)bVar16 * -2 + 1;
        }
        frame_info_00.channel_mode = in_stack_ffff9f18;
        frame_info_00.header = (SMpegFrameHeader *)in_stack_ffff9f14;
        frame_info_00.allocation_table = (SBitAllocationTable *)uVar17;
        frame_info_00.table_index = (int)pCVar18;
        frame_info_00.samples_per_granule._0_1_ = uVar19;
        frame_info_00.samples_per_granule._1_1_ = uVar20;
        frame_info_00.samples_per_granule._2_2_ = uVar21;
        frame_info_00.js_bound._0_2_ = (short)pCVar23;
        frame_info_00.js_bound._2_2_ = (short)((uint)pCVar23 >> 0x10);
        frame_info_00.sblimit = (int)num_bits;
        iVar7 = sound_mp3_cpp_calculateMainDataSize_FUN_00533c50(frame_info_00);
        this_ptr->main_data_offset = this_ptr->main_data_offset + iVar7;
        if (local_70 < 0) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0xf9a;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Not enough main data to decode frame %d.");
        }
        while (iVar7 = local_70, 0 < local_70) {
          sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170(this_ptr,8);
          local_70 = iVar7 + -1;
        }
        if ((in_stack_00000008 != (ushort *)0x0) && (local_74 = 0, 0 < local_ac)) {
          local_38 = &local_4c0;
          local_34 = 0;
          do {
            iVar7 = 0;
            if (0 < local_e0.original) {
              local_58 = local_4ec8.channels;
              pSVar14 = (SMpegLayer3Granule *)(local_4c0.unk + local_34 + -8);
              do {
                local_68 = (SMpegFrame *)
                           sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
                if (*(int *)local_e0.mpeg_version == 0) {
                  sound_mp3_cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_00531480
                            (this_ptr,local_6c8.reserved,(SMpegLayer3Granule *)&local_4d8,local_74,
                             iVar7,(SMpegFrame *)&local_e0);
                }
                else {
                  sound_mp3_cpp_CMP3Decoder_readLayer3Scalefactors_FUN_00530d20
                            (this_ptr,local_6c8.reserved,(SMpegLayer3Granule *)&local_4d8,local_74,
                             iVar7,(SMpegFrame *)&local_e0);
                }
                sound_mp3_cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00531680
                          (this_ptr,(float *)&local_3cc8,(SMpegLayer3Granule *)&local_4d8,iVar7,
                           local_74,local_68,(int)&local_e0);
                sound_mp3_cpp_requantizeLayer3Samples_FUN_00531d50
                          (&local_3cc8,local_58,local_6c8.reserved,pSVar14,iVar7,
                           (SMpegLayer3Granule **)&local_e0);
                iVar7 = iVar7 + 1;
                pSVar14 = pSVar14 + 1;
                local_58 = local_58 + 1;
              } while (iVar7 < local_e0.original);
            }
            sound_mp3_cpp_mpegLayer3StereoProcess_FUN_005325e0
                      (&local_4ec8,&local_60c8,&local_6c8,(SMpegFrame *)local_38,
                       (SMpegLayer3Granule **)&local_e0);
            local_1c = 0;
            if (0 < local_e0.original) {
              local_4c = (SMpegFrame *)(local_4c0.unk + local_34 + -8);
              local_48 = local_60c8.channels;
              local_40 = local_33c8;
              local_44 = local_4c;
              do {
                frame_info_01 = local_44;
                sound_mp3_cpp_reorderShortBlockSamples_FUN_00532200
                          (local_48,&local_21c8,local_44,(SMpegLayer3Granule **)&local_e0);
                sound_mp3_cpp_antiAliasingButterfly_FUN_005334b0
                          ((float *)&local_21c8,local_2ac8,frame_info_01,&local_e0);
                pfVar5 = local_18c8;
                local_64 = local_4c;
                local_54 = local_2ac8;
                iVar7 = 0;
                do {
                  sound_mp3_cpp_CMP3Decoder_synthesisPoly_FUN_00533ba0
                            (this_ptr,local_54,pfVar5,iVar7,local_1c,local_64,&local_e0);
                  iVar7 = iVar7 + 1;
                  pfVar5 = pfVar5 + 0x12;
                  local_54 = local_54 + 0x12;
                } while (iVar7 < 0x20);
                local_50 = 0;
                local_18 = 0;
                do {
                  iVar4 = 0;
                  iVar7 = local_50;
                  do {
                    if ((local_18 % 2 != 0) && (local_14 = 2, iVar4 % 2 != 0)) {
                      *(float *)((int)local_18c8 + iVar7) = -*(float *)((int)local_18c8 + iVar7);
                    }
                    iVar4 = iVar4 + 1;
                    iVar7 = iVar7 + 0x48;
                  } while (iVar4 < 0x20);
                  local_18 = local_18 + 1;
                  local_50 = local_50 + 4;
                } while (local_18 < 0x12);
                iVar7 = 0;
                psVar15 = local_40;
                do {
                  iVar4 = 0;
                  iVar8 = iVar7;
                  do {
                    iVar6 = iVar4 + 4;
                    puVar1 = (uint *)((int)local_18c8 + iVar8);
                    iVar8 = iVar8 + 0x48;
                    *(uint *)((int)local_190 + iVar4) = *puVar1;
                    iVar4 = iVar6;
                  } while (iVar6 != 0x80);
                  iVar7 = iVar7 + 4;
                  sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0
                            (this_ptr,local_190,local_1c,psVar15);
                  psVar15 = psVar15 + 0x20;
                } while (iVar7 != 0x48);
                local_1c = local_1c + 1;
                local_4c = (SMpegFrame *)&local_4c[5].js_bound;
                local_48 = local_48 + 1;
                local_44 = (SMpegFrame *)&local_44[5].js_bound;
                local_40 = local_40 + 0x240;
              } while (local_1c < local_e0.original);
            }
            local_3c = 0;
            do {
              iVar7 = 0;
              do {
                iVar4 = 0;
                if (0 < local_e0.original) {
                  iVar8 = iVar7 + local_3c;
                  puVar11 = in_stack_00000008;
                  do {
                    in_stack_00000008 = puVar11 + 1;
                    iVar4 = iVar4 + 1;
                    *puVar11 = *(ushort *)((int)local_33c8 + iVar8);
                    iVar8 = iVar8 + 0x480;
                    puVar11 = in_stack_00000008;
                  } while (iVar4 < local_e0.original);
                }
                iVar7 = iVar7 + 2;
              } while (iVar7 != 0x40);
              local_3c = local_3c + 0x40;
            } while (local_3c != 0x480);
            local_38 = (SMpegLayer3Granule *)(local_38->subblock_gain + 2);
            local_34 = local_34 + 0x48;
            local_74 = local_74 + 1;
          } while (local_74 < local_ac);
        }
      }
      if (0 < local_104) {
        local_e0.mode_extension = 0;
        local_e0.channel_mode = local_60d0;
        local_60 = (int)ROUND(ROUND((((double)local_60cc /
                                     g_MpegSampleRateTable[local_110][local_100]) *
                                    (double)g_MpegBitrateTable[local_110 + -1][local_10c + 2]
                                            [local_104]) / (double)local_60d0));
        if (local_fc != 0) {
          local_60 = local_60 + 1;
        }
        local_60 = local_60 * local_60d0 -
                   (((this_ptr->file_bitstream).total_bits_read - local_b0) + 0xc);
        iVar7 = 0;
        if (0 < local_60) {
          do {
            sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(&this_ptr->file_bitstream);
            iVar7 = iVar7 + 1;
          } while (iVar7 < local_60);
        }
      }
      return local_ac * 0x240;
    }
  }
  return 0;
}
