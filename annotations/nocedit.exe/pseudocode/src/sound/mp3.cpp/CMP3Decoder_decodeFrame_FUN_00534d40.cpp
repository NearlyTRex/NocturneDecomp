// Name: sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40
// Address: 00534d40
// Address Range: [[00534d40, 00535c20]]
// Convention: __cdecl
// Signature: int sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40(CMP3Decoder * this_ptr)

#include "nocturne.h"

int __cdecl sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_00534d40(CMP3Decoder *this_ptr)

{
  uint *puVar1;
  SMpegFrame frame_info;
  SMpegFrame frame_info_00;
  CFileBitStream *bitstream;
  SMpegFrame *frame_info_01;
  uint uVar2;
  int extraout_EAX;
  int iVar3;
  float *pfVar4;
  CMP3Decoder *num_bits;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  ushort *puVar10;
  BADSPACEBASE *in_ESP;
  SMpegSubbandScalefactors *subband_samples;
  SMpegFrameHeader *pSVar11;
  SMpegFrameHeader *pSVar12;
  SMpegLayer3Granule *pSVar13;
  short *psVar14;
  byte bVar15;
  double dVar16;
  ushort *in_stack_00000008;
  int in_stack_ffff9f14;
  uint in_stack_ffff9f18;
  uint uVar17;
  CMP3Decoder *pCVar18;
  CFileBitStream *pCVar19;
  CMP3Decoder *pCVar20;
  uint in_stack_ffff9f30;
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
  
  bVar15 = 0;
  local_e0.mpeg_version = (int)&local_110;
  local_b0 = 0;
  local_e0.bitrate_index = -1;
  local_e0.protection = 0;
  local_e0.emphasis = 0;
  pCVar19 = &this_ptr->file_bitstream;
  if ((this_ptr->file_bitstream).error_flag == 0) {
    local_a8 = 0xfff;
    local_a4 = 0x1fff;
    uVar8 = (this_ptr->file_bitstream).total_bits_read & 7;
    if (uVar8 != 0) {
      sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(pCVar19,8 - uVar8);
    }
    uVar8 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(pCVar19,0xc);
    while (((local_a4 & uVar8) != local_a8 && ((this_ptr->file_bitstream).error_flag == 0))) {
      uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(pCVar19,8);
      uVar8 = uVar8 << 8 | uVar2;
    }
    if ((this_ptr->file_bitstream).error_flag == 0) {
      local_b0 = (this_ptr->file_bitstream).total_bits_read;
      sound_mp3_cpp_CFileBitStream_readFrameHeader_FUN_0052f5b0(&this_ptr->file_bitstream,&local_e0)
      ;
      iVar6 = local_e0.mpeg_version;
      local_e0.layer = *(int *)(local_e0.mpeg_version + 0x1c);
      local_e0.sampling_rate_index = (local_e0.layer != 3) + 1;
      if (*(int *)(local_e0.mpeg_version + 4) == 2) {
        local_9c = (void *)local_e0.private_bit;
        local_8c = *(int *)local_e0.mpeg_version;
        local_98 = 1;
        local_94 = *(int *)(local_e0.mpeg_version + 0xc);
        local_14 = local_8c * 0xb4 + 0x3c;
        local_a0 = &local_e0;
        dVar16 = crt_math_c_round_FUN_005fe6b0
                           (g_MpegSampleRateTable[local_8c][*(int *)(local_e0.mpeg_version + 0x10)])
        ;
        local_90 = (int)ROUND(dVar16);
        if (local_8c == 1) {
          if (((local_90 == 0x30) && (0x37 < extraout_EAX)) ||
             ((0x37 < extraout_EAX && (extraout_EAX < 0x51)))) {
            iVar3 = 0;
          }
          else if ((local_90 == 0x30) || (extraout_EAX < 0x60)) {
            if ((local_90 == 0x20) || (0x30 < extraout_EAX)) {
              iVar3 = 3;
            }
            else {
              iVar3 = 2;
            }
          }
          else {
            iVar3 = 1;
          }
        }
        else {
          iVar3 = 4;
        }
        if (iVar3 != local_a0->bitrate_index) {
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
      if (*(int *)(iVar6 + 0x1c) == 1) {
        local_88 = *(int *)(iVar6 + 4);
        iVar6 = *(int *)(iVar6 + 0x20);
        if ((((local_88 < 1) || (3 < local_88)) || (iVar6 < 0)) || (3 < iVar6)) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0x1b2;
          core_main_c_displayErrorAndQuit_FUN_00506f10("js_bound bad layer/modext (%d/%d)  File: %s");
        }
        local_e0.padding = (int)g_MpegLayer2AllocationTables[local_88][iVar6];
      }
      local_e0.original = local_e0.sampling_rate_index;
      local_ac = (*(int *)local_e0.mpeg_version != 0) + 1;
      pCVar19 = &this_ptr->file_bitstream;
      if (local_10c < 2) {
        if (local_10c == 1) {
          in_stack_ffff9f30 = 0x20;
          local_60cc = 0x180;
          sound_mp3_cpp_CFileBitStream_readAllocationTable_FUN_0052f7a0
                    (pCVar19,(uint *)local_290,(SBitAllocationTable *)&local_e0);
          sound_mp3_cpp_CFileBitStream_readScalefactors_FUN_0052f850
                    (pCVar19,local_290,local_fc8,(SBitAllocationTable *)&local_e0);
          local_20 = 0;
          local_84 = pCVar19;
          do {
            sound_mp3_cpp_CFileBitStream_readQuantizedSamples_FUN_0052fb50
                      (local_84,local_cc8,local_290,(SBitAllocationTable *)&local_e0);
            sound_mp3_cpp_requantizeSamples_FUN_005301b0(local_cc8,local_9c8,local_290,&local_e0);
            local_80 = local_9c8;
            local_7c = local_fc8;
            local_5c = 0;
            do {
              iVar6 = 0;
              if (0 < local_e0.sampling_rate_index) {
                piVar9 = (int *)((int)local_7c->codes[0] + local_5c);
                pfVar4 = (float *)((int)local_80->codes[0] + local_5c);
                do {
                  iVar3 = *piVar9;
                  piVar9 = piVar9 + 0x60;
                  iVar6 = iVar6 + 1;
                  *pfVar4 = *pfVar4 * (float)g_MpegScalefactorTable[iVar3];
                  pfVar4 = pfVar4 + 0x60;
                } while (iVar6 < local_e0.sampling_rate_index);
              }
              local_5c = local_5c + 4;
            } while (local_5c != 0x80);
            iVar6 = 0;
            local_5c = 0x80;
            if (0 < local_e0.original) {
              subband_samples = local_9c8;
              psVar14 = local_33c8;
              do {
                sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0
                          (this_ptr,(float *)subband_samples,iVar6,psVar14);
                iVar6 = iVar6 + 1;
                subband_samples = subband_samples + 1;
                psVar14 = psVar14 + 0x240;
              } while (iVar6 < local_e0.original);
            }
            local_20 = local_20 + 1;
          } while (local_20 < 0xc);
        }
      }
      else if (local_10c < 3) {
        local_60cc = 0x480;
        in_stack_ffff9f30 = 8;
        sound_mp3_cpp_CFileBitStream_readAllocationValues_FUN_0052f670
                  (pCVar19,local_290,(SBitAllocationTable *)&local_e0);
        sound_mp3_cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_0052f8e0
                  (pCVar19,local_390,local_290,local_fc8,(SBitAllocationTable *)&local_e0);
        local_e0.copyright = 0;
        local_78 = pCVar19;
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
              iVar6 = 0;
              if (0 < local_e0.original) {
                pfVar4 = (float *)((int)local_9c8[0].codes[0] + local_2c);
                local_30 = (short *)((int)local_33c8 + local_28);
                do {
                  sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0
                            (this_ptr,pfVar4,iVar6,local_30);
                  iVar6 = iVar6 + 1;
                  pfVar4 = pfVar4 + 0x60;
                  local_30 = local_30 + 0x240;
                } while (iVar6 < local_e0.original);
              }
              local_28 = local_28 + 0x40;
              local_2c = local_2c + 0x80;
            } while (local_28 != 0xc0);
            local_24 = 0;
            local_e0.copyright = 0;
            do {
              iVar6 = 0;
              do {
                iVar3 = 0;
                if (0 < local_e0.original) {
                  iVar7 = iVar6 + local_24;
                  puVar10 = in_stack_00000008;
                  do {
                    in_stack_00000008 = puVar10 + 1;
                    iVar3 = iVar3 + 1;
                    *puVar10 = *(ushort *)((int)local_33c8 + iVar7);
                    iVar7 = iVar7 + 0x480;
                    puVar10 = in_stack_00000008;
                  } while (iVar3 < local_e0.original);
                }
                iVar6 = iVar6 + 2;
              } while (iVar6 != 0x40);
              local_24 = local_24 + 0x40;
            } while (local_24 != 0xc0);
          }
          local_e0.copyright = local_e0.copyright + 1;
        } while (local_e0.copyright < 0xc);
      }
      else if (local_10c == 3) {
        in_stack_ffff9f30 = 8;
        if (*(int *)local_e0.mpeg_version == 0) {
          local_60cc = 0x240;
        }
        else {
          local_60cc = 0x480;
        }
        pSVar12 = &local_e0;
        pSVar13 = (SMpegLayer3Granule *)&local_4d8;
        pCVar19 = &this_ptr->file_bitstream;
        uVar17 = 0x535611;
        pCVar18 = this_ptr;
        local_6c = pCVar19;
        sound_mp3_cpp_CMP3Decoder_readLayer3SideInfo_FUN_005307a0
                  (this_ptr,pCVar19,pSVar13,(SMpegFrame *)pSVar12);
        pSVar11 = &local_e0;
        piVar9 = (int *)&stack0xffff9f14;
        for (iVar6 = 7; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar9 = pSVar11->mpeg_version;
          pSVar11 = (SMpegFrameHeader *)((int)pSVar11 + ((uint)bVar15 * -2 + 1) * 4);
          piVar9 = piVar9 + (uint)bVar15 * -2 + 1;
        }
        frame_info.channel_mode = in_stack_ffff9f18;
        frame_info.header = (SMpegFrameHeader *)in_stack_ffff9f14;
        frame_info.allocation_table = (SBitAllocationTable *)uVar17;
        frame_info.table_index = (int)pCVar18;
        frame_info.samples_per_granule = (int)pCVar19;
        frame_info.js_bound = (int)pSVar13;
        frame_info.sblimit = (int)pSVar12;
        iVar6 = sound_mp3_cpp_calculateMainDataSize_FUN_00533c50(frame_info);
        bitstream = local_6c;
        for (; 0 < iVar6; iVar6 = iVar6 + -1) {
          pCVar18 = (CMP3Decoder *)0x535646;
          uVar8 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bitstream,8);
          pCVar19 = (CFileBitStream *)0x535654;
          sound_mp3_cpp_CMP3Decoder_putByte_FUN_0052f260(this_ptr,uVar8,in_stack_ffff9f30);
        }
        uVar8 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
        pCVar20 = (CMP3Decoder *)0x535677;
        num_bits = this_ptr;
        uVar2 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
        uVar8 = uVar8 >> 3;
        if (uVar2 % in_stack_ffff9f30 != 0) {
          num_bits = (CMP3Decoder *)(in_stack_ffff9f30 - uVar2 % in_stack_ffff9f30);
          uVar8 = uVar8 + 1;
          pCVar19 = (CFileBitStream *)0x535694;
          pCVar20 = this_ptr;
          sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170(this_ptr,(uint)num_bits);
        }
        local_70 = (this_ptr->field8_0x534c - uVar8) - _local_4d8;
        if (0x1000 < uVar8) {
          num_bits = (CMP3Decoder *)0x1000;
          this_ptr->field8_0x534c = this_ptr->field8_0x534c + -0x1000;
          pCVar19 = (CFileBitStream *)0x5356da;
          pCVar20 = this_ptr;
          sound_mp3_cpp_CMP3Decoder_rewindBytes_FUN_0052f320(this_ptr,0x1000);
        }
        pSVar12 = &local_e0;
        piVar9 = (int *)&stack0xffff9f14;
        for (iVar6 = 7; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar9 = pSVar12->mpeg_version;
          pSVar12 = (SMpegFrameHeader *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
          piVar9 = piVar9 + (uint)bVar15 * -2 + 1;
        }
        frame_info_00.channel_mode = in_stack_ffff9f18;
        frame_info_00.header = (SMpegFrameHeader *)in_stack_ffff9f14;
        frame_info_00.allocation_table = (SBitAllocationTable *)uVar17;
        frame_info_00.table_index = (int)pCVar18;
        frame_info_00.samples_per_granule = (int)pCVar19;
        frame_info_00.js_bound = (int)pCVar20;
        frame_info_00.sblimit = (int)num_bits;
        iVar6 = sound_mp3_cpp_calculateMainDataSize_FUN_00533c50(frame_info_00);
        this_ptr->field8_0x534c = this_ptr->field8_0x534c + iVar6;
        if (local_70 < 0) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0xf9a;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Not enough main data to decode frame %d.");
        }
        while (iVar6 = local_70, 0 < local_70) {
          sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170(this_ptr,8);
          local_70 = iVar6 + -1;
        }
        if ((in_stack_00000008 != (ushort *)0x0) && (local_74 = 0, 0 < local_ac)) {
          local_38 = &local_4c0;
          local_34 = 0;
          do {
            iVar6 = 0;
            if (0 < local_e0.original) {
              local_58 = local_4ec8.channels;
              pSVar13 = (SMpegLayer3Granule *)(local_4c0.field2_0x8 + local_34 + -8);
              do {
                local_68 = (SMpegFrame *)
                           sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
                if (*(int *)local_e0.mpeg_version == 0) {
                  sound_mp3_cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_00531480
                            (this_ptr,local_6c8.reserved,(SMpegLayer3Granule *)&local_4d8,local_74,
                             iVar6,(SMpegFrame *)&local_e0);
                }
                else {
                  sound_mp3_cpp_CMP3Decoder_readLayer3Scalefactors_FUN_00530d20
                            (this_ptr,local_6c8.reserved,(SMpegLayer3Granule *)&local_4d8,local_74,
                             iVar6,(SMpegFrame *)&local_e0);
                }
                sound_mp3_cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00531680
                          (this_ptr,(float *)&local_3cc8,(SMpegLayer3Granule *)&local_4d8,iVar6,
                           local_74,local_68,(int)&local_e0);
                sound_mp3_cpp_requantizeLayer3Samples_FUN_00531d50
                          (&local_3cc8,local_58,local_6c8.reserved,pSVar13,iVar6,
                           (SMpegLayer3Granule **)&local_e0);
                iVar6 = iVar6 + 1;
                pSVar13 = pSVar13 + 1;
                local_58 = local_58 + 1;
              } while (iVar6 < local_e0.original);
            }
            sound_mp3_cpp_mpegLayer3StereoProcess_FUN_005325e0
                      (&local_4ec8,&local_60c8,&local_6c8,(SMpegFrame *)local_38,
                       (SMpegLayer3Granule **)&local_e0);
            local_1c = 0;
            if (0 < local_e0.original) {
              local_4c = (SMpegFrame *)(local_4c0.field2_0x8 + local_34 + -8);
              local_48 = local_60c8.channels;
              local_40 = local_33c8;
              local_44 = local_4c;
              do {
                frame_info_01 = local_44;
                sound_mp3_cpp_reorderShortBlockSamples_FUN_00532200
                          (local_48,&local_21c8,local_44,(SMpegLayer3Granule **)&local_e0);
                sound_mp3_cpp_antiAliasingButterfly_FUN_005334b0
                          ((float *)&local_21c8,local_2ac8,frame_info_01,&local_e0);
                pfVar4 = local_18c8;
                local_64 = local_4c;
                local_54 = local_2ac8;
                iVar6 = 0;
                do {
                  sound_mp3_cpp_CMP3Decoder_synthesisPoly_FUN_00533ba0
                            (this_ptr,local_54,pfVar4,iVar6,local_1c,local_64,&local_e0);
                  iVar6 = iVar6 + 1;
                  pfVar4 = pfVar4 + 0x12;
                  local_54 = local_54 + 0x12;
                } while (iVar6 < 0x20);
                local_50 = 0;
                local_18 = 0;
                do {
                  iVar3 = 0;
                  iVar6 = local_50;
                  do {
                    if ((local_18 % 2 != 0) && (local_14 = 2, iVar3 % 2 != 0)) {
                      *(float *)((int)local_18c8 + iVar6) = -*(float *)((int)local_18c8 + iVar6);
                    }
                    iVar3 = iVar3 + 1;
                    iVar6 = iVar6 + 0x48;
                  } while (iVar3 < 0x20);
                  local_18 = local_18 + 1;
                  local_50 = local_50 + 4;
                } while (local_18 < 0x12);
                iVar6 = 0;
                psVar14 = local_40;
                do {
                  iVar3 = 0;
                  iVar7 = iVar6;
                  do {
                    iVar5 = iVar3 + 4;
                    puVar1 = (uint *)((int)local_18c8 + iVar7);
                    iVar7 = iVar7 + 0x48;
                    *(uint *)((int)local_190 + iVar3) = *puVar1;
                    iVar3 = iVar5;
                  } while (iVar5 != 0x80);
                  iVar6 = iVar6 + 4;
                  sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0
                            (this_ptr,local_190,local_1c,psVar14);
                  psVar14 = psVar14 + 0x20;
                } while (iVar6 != 0x48);
                local_1c = local_1c + 1;
                local_4c = (SMpegFrame *)&local_4c[5].js_bound;
                local_48 = local_48 + 1;
                local_44 = (SMpegFrame *)&local_44[5].js_bound;
                local_40 = local_40 + 0x240;
              } while (local_1c < local_e0.original);
            }
            local_3c = 0;
            do {
              iVar6 = 0;
              do {
                iVar3 = 0;
                if (0 < local_e0.original) {
                  iVar7 = iVar6 + local_3c;
                  puVar10 = in_stack_00000008;
                  do {
                    in_stack_00000008 = puVar10 + 1;
                    iVar3 = iVar3 + 1;
                    *puVar10 = *(ushort *)((int)local_33c8 + iVar7);
                    iVar7 = iVar7 + 0x480;
                    puVar10 = in_stack_00000008;
                  } while (iVar3 < local_e0.original);
                }
                iVar6 = iVar6 + 2;
              } while (iVar6 != 0x40);
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
        local_e0.channel_mode = in_stack_ffff9f30;
        dVar16 = crt_math_c_round_FUN_005fe6b0
                           ((((double)local_60cc / g_MpegSampleRateTable[local_110][local_100]) *
                            (double)g_MpegBitrateTable[local_110 + -1][local_10c + 2][local_104]) /
                            (double)in_stack_ffff9f30);
        local_60 = (int)ROUND(dVar16);
        if (local_fc != 0) {
          local_60 = local_60 + 1;
        }
        local_60 = local_60 * in_stack_ffff9f30 -
                   (((this_ptr->file_bitstream).total_bits_read - local_b0) + 0xc);
        iVar6 = 0;
        if (0 < local_60) {
          do {
            sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(&this_ptr->file_bitstream);
            iVar6 = iVar6 + 1;
          } while (iVar6 < local_60);
        }
      }
      return local_ac * 0x240;
    }
  }
  return 0;
}
