// Name: sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_004e85b0
// Address: 004e85b0
// Address Range: [[004e85b0, 004e9490]]
// Convention: __cdecl
// Signature: int __cdecl sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_004e85b0(CMP3Decoder *this_ptr,short *pcm_output)

#include "nocturne.h"

int __cdecl sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_004e85b0(CMP3Decoder *this_ptr,short *pcm_output)

{
  uint *puVar1;
  SMpegFrame frame_info;
  SMpegFrame frame_info_00;
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
  short *psVar11;
  SMpegSubbandScalefactors *subband_samples;
  SMpegFrameHeader *pSVar12;
  SMpegFrameHeader *pSVar13;
  SMpegLayer3GranuleInfo *pSVar14;
  byte bVar15;
  double dVar16;
  int in_stack_ffff9f10;
  uint in_stack_ffff9f14;
  uint uVar17;
  CMP3Decoder *pCVar18;
  CMP3Decoder *bit_stream;
  SMpegLayer3SideInfo *side_info_array;
  CMP3Decoder *pCVar19;
  int *header_out;
  uint local_60d0;
  SMpegStereoSubbandSamples local_60cc;
  SMpegStereoSubbandSamples SStack_4ecc;
  SMpegSubbandQuantizedSamples SStack_3ccc;
  short asStack_33cc [1152];
  float afStack_2acc [576];
  SMpegSubbandSamples SStack_21cc;
  float afStack_18cc [576];
  SMpegSubbandScalefactors aSStack_fcc [2];
  SMpegSubbandScalefactors aSStack_ccc [2];
  SMpegSubbandScalefactors aSStack_9cc [2];
  SMpegScalefactorBandData SStack_6cc;
  SMpegLayer3SideInfo SStack_4dc;
  SMpegSubbandSCFSI aSStack_394 [2];
  SMpegSubbandAllocation aSStack_294 [2];
  float afStack_194 [32];
  int iStack_114;
  uint local_110 [2];
  int iStack_108;
  int local_104;
  int local_100;
  SMpegFrameHeader SStack_e4;
  uint local_b4;
  int local_b0;
  uint local_a8;
  uint local_a4;
  int *local_a0;
  int local_9c;
  uint local_98;
  uint local_94;
  int local_90;
  uint local_8c;
  CFileBitStream *local_88;
  SMpegSubbandScalefactors *local_84;
  SMpegSubbandScalefactors *local_80;
  CFileBitStream *local_7c;
  int local_78;
  int local_74;
  CFileBitStream *local_70;
  uint local_6c;
  SMpegLayer3GranuleInfo *local_68;
  int local_60;
  SMpegSubbandSamples *local_5c;
  float *local_58;
  int local_54;
  SMpegLayer3GranuleInfo *local_50;
  SMpegSubbandSamples *local_4c;
  SMpegLayer3GranuleInfo *local_48;
  short *local_44;
  int local_40;
  SMpegLayer3GranuleInfo *local_3c;
  int local_38;
  short *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  
  bVar15 = 0;
  SStack_e4.layer = (int)local_110;
  local_b0 = 0;
  SStack_e4.sampling_rate_index = -1;
  SStack_e4.bitrate_index = 0;
  local_b4 = 0;
  pCVar2 = &this_ptr->file_bitstream;
  if ((this_ptr->file_bitstream).error_flag == 0) {
    local_a8 = 0xfff;
    local_a4 = 0x1fff;
    uVar9 = (this_ptr->file_bitstream).total_bits_read & 7;
    if (uVar9 != 0) {
      sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(pCVar2,8 - uVar9);
    }
    uVar9 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(pCVar2,0xc);
    while (((local_a4 & uVar9) != local_a8 && ((this_ptr->file_bitstream).error_flag == 0))) {
      uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(pCVar2,8);
      uVar9 = uVar9 << 8 | uVar3;
    }
    if ((this_ptr->file_bitstream).error_flag == 0) {
      local_b0 = (this_ptr->file_bitstream).total_bits_read;
      header_out = &SStack_e4.layer;
      sound_mp3_cpp_CFileBitStream_readFrameHeader_FUN_004e3130
                (&this_ptr->file_bitstream,(SMpegFrameHeader **)header_out);
      iVar7 = SStack_e4.layer;
      SStack_e4.protection = *(uint *)(SStack_e4.layer + 0x1c);
      SStack_e4.padding = (SStack_e4.protection != 3) + 1;
      if (*(uint *)(SStack_e4.layer + 4) == 2) {
        local_9c = SStack_e4.channel_mode;
        local_8c = *(uint *)SStack_e4.layer;
        local_98 = 1;
        local_94 = *(uint *)(SStack_e4.layer + 0xc);
        local_14 = local_8c * 0xb4 + 0x3c;
        iVar4 = *(int *)(&DAT_005bbc88 + local_94 * 4 + local_14) / SStack_e4.padding;
        header_out = (int *)0x4e87a3;
        local_a0 = &SStack_e4.layer;
        dVar16 = round
                           (*(double *)
                             (&DAT_005bbc48 +
                             *(uint *)(SStack_e4.layer + 0x10) * 8 + local_8c * 0x20));
        local_94 = (uint)ROUND(dVar16);
        if (local_90 == 1) {
          if (((local_94 == 0x30) && (0x37 < iVar4)) || ((0x37 < iVar4 && (iVar4 < 0x51)))) {
            iVar4 = 0;
          }
          else if ((local_94 == 0x30) || (iVar4 < 0x60)) {
            if ((local_94 == 0x20) || (0x30 < iVar4)) {
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
        if (iVar4 != *(int *)(local_a4 + 0xc)) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 417;
          core_main_c_displayErrorAndQuit_FUN_004c8440("MPEG Layer 2 - pick_table - can't load tables!  File: %s");
        }
        SStack_e4.channel_mode = (int)local_a0;
      }
      else {
        SStack_e4.channel_mode = 0x20;
      }
      SStack_e4.private_bit = SStack_e4.channel_mode;
      if (*(uint *)(iVar7 + 0x1c) == 1) {
        local_8c = *(uint *)(iVar7 + 4);
        uVar9 = *(uint *)(iVar7 + 0x20);
        if (((((int)local_8c < 1) || (3 < (int)local_8c)) || ((int)uVar9 < 0)) || (3 < (int)uVar9))
        {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 433;
          core_main_c_displayErrorAndQuit_FUN_004c8440("js_bound bad layer/modext (%d/%d)  File: %s");
        }
        SStack_e4.private_bit =
             (int)*(int **)("$CMotionController$$" + uVar9 * 4 + local_8c * 0x10 + 10);
      }
      SStack_e4.original = SStack_e4.sampling_rate_index;
      local_b0 = (*(int *)SStack_e4.mpeg_version != 0) + 1;
      pCVar2 = &this_ptr->file_bitstream;
      if (local_110[0] < 2) {
        if (local_110[0] == 1) {
          header_out = (int *)0x20;
          local_60d0 = 0x180;
          sound_mp3_cpp_CFileBitStream_readAllocationTable_FUN_004e3320
                    (pCVar2,(uint *)aSStack_294,(SMpegFrame *)&SStack_e4);
          sound_mp3_cpp_CFileBitStream_readScalefactors_FUN_004e33d0
                    (pCVar2,aSStack_294,aSStack_fcc,(SMpegFrame *)&SStack_e4);
          local_24 = 0;
          local_88 = pCVar2;
          do {
            sound_mp3_cpp_CFileBitStream_readQuantizedSamples_FUN_004e36d0
                      (local_88,aSStack_ccc,aSStack_294,(SMpegFrame *)&SStack_e4);
            sound_mp3_cpp_requantizeSamples_FUN_004e3d30
                      (aSStack_ccc,aSStack_9cc,aSStack_294,(SMpegFrame *)&SStack_e4);
            local_84 = aSStack_9cc;
            local_80 = aSStack_fcc;
            local_60 = 0;
            do {
              iVar7 = 0;
              if (0 < SStack_e4.sampling_rate_index) {
                piVar10 = (int *)((int)&local_80->codes + local_60);
                pfVar5 = (float *)((int)&local_84->codes + local_60);
                do {
                  iVar4 = *piVar10;
                  piVar10 = piVar10 + 0x60;
                  iVar7 = iVar7 + 1;
                  *pfVar5 = *pfVar5 * (float)*(double *)(&DAT_005bbdf0 + iVar4 * 8);
                  pfVar5 = pfVar5 + 0x60;
                } while (iVar7 < SStack_e4.sampling_rate_index);
              }
              local_60 = local_60 + 4;
            } while (local_60 != 0x80);
            iVar7 = 0;
            local_60 = 0x80;
            if (0 < SStack_e4.original) {
              subband_samples = aSStack_9cc;
              psVar11 = asStack_33cc;
              do {
                sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_004e4070
                          (this_ptr,(float *)subband_samples,iVar7,psVar11);
                iVar7 = iVar7 + 1;
                subband_samples = subband_samples + 1;
                psVar11 = psVar11 + 0x240;
              } while (iVar7 < SStack_e4.original);
            }
            local_24 = local_24 + 1;
          } while (local_24 < 0xc);
        }
      }
      else if (local_110[0] < 3) {
        local_60d0 = 0x480;
        header_out = (int *)0x8;
        sound_mp3_cpp_CFileBitStream_readAllocationValues_FUN_004e31f0
                  (pCVar2,aSStack_294,(SMpegFrame *)&SStack_e4);
        sound_mp3_cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_004e3460
                  (pCVar2,aSStack_394,aSStack_294,aSStack_fcc,(SMpegFrame *)&SStack_e4);
        SStack_e4.copyright = 0;
        local_7c = pCVar2;
        do {
          sound_mp3_cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_004e37d0
                    (local_7c,aSStack_ccc,aSStack_294,(SMpegFrame *)&SStack_e4);
          sound_mp3_cpp_requantizeLayer3SamplesSimple_FUN_004e3a60
                    ((int *)aSStack_ccc,(uint *)aSStack_294,(float *)aSStack_9cc,
                     (SMpegFrame *)&SStack_e4);
          sound_mp3_cpp_applyScalefactorsToSubbands_FUN_004e3e70
                    ((float *)aSStack_9cc,(int *)aSStack_fcc,(SMpegFrame *)&SStack_e4,
                     SStack_e4.copyright >> 2);
          if (pcm_output != (short *)0x0) {
            local_2c = 0;
            local_30 = 0;
            do {
              iVar7 = 0;
              if (0 < SStack_e4.original) {
                pfVar5 = (float *)((int)&aSStack_9cc[0].codes + local_30);
                local_34 = (short *)((int)asStack_33cc + local_2c);
                do {
                  sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_004e4070
                            (this_ptr,pfVar5,iVar7,local_34);
                  iVar7 = iVar7 + 1;
                  pfVar5 = pfVar5 + 0x60;
                  local_34 = local_34 + 0x240;
                } while (iVar7 < SStack_e4.original);
              }
              local_2c = local_2c + 0x40;
              local_30 = local_30 + 0x80;
            } while (local_2c != 0xc0);
            local_28 = 0;
            SStack_e4.copyright = 0;
            do {
              iVar7 = 0;
              do {
                iVar4 = 0;
                if (0 < SStack_e4.original) {
                  iVar8 = iVar7 + local_28;
                  psVar11 = pcm_output;
                  do {
                    pcm_output = psVar11 + 1;
                    iVar4 = iVar4 + 1;
                    *psVar11 = *(short *)((int)asStack_33cc + iVar8);
                    iVar8 = iVar8 + 0x480;
                    psVar11 = pcm_output;
                  } while (iVar4 < SStack_e4.original);
                }
                iVar7 = iVar7 + 2;
              } while (iVar7 != 0x40);
              local_28 = local_28 + 0x40;
            } while (local_28 != 0xc0);
          }
          SStack_e4.copyright = SStack_e4.copyright + 1;
        } while (SStack_e4.copyright < 0xc);
      }
      else if (local_110[0] == 3) {
        header_out = (int *)0x8;
        if (*(int *)SStack_e4.mpeg_version == 0) {
          local_60d0 = 0x240;
        }
        else {
          local_60d0 = 0x480;
        }
        pSVar13 = &SStack_e4;
        side_info_array = &SStack_4dc;
        bit_stream = (CMP3Decoder *)&this_ptr->file_bitstream;
        uVar17 = 0x4e8e81;
        pCVar18 = this_ptr;
        local_70 = (CFileBitStream *)bit_stream;
        sound_mp3_cpp_CMP3Decoder_readLayer3SideInfo_FUN_004e4320
                  (this_ptr,(CFileBitStream *)bit_stream,side_info_array,(SMpegFrame *)pSVar13);
        pSVar12 = &SStack_e4;
        piVar10 = (int *)&stack0xffff9f10;
        for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
          *piVar10 = pSVar12->mpeg_version;
          pSVar12 = (SMpegFrameHeader *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
          piVar10 = piVar10 + (uint)bVar15 * -2 + 1;
        }
        frame_info.channel_mode = in_stack_ffff9f14;
        frame_info.header = (SMpegFrameHeader *)in_stack_ffff9f10;
        frame_info.allocation_entries = (SMpegAllocationEntry *)uVar17;
        frame_info.table_index = (int)pCVar18;
        frame_info.channel_count = (int)bit_stream;
        frame_info.js_bound = (int)side_info_array;
        frame_info.sblimit = (int)pSVar13;
        iVar7 = sound_mp3_cpp_calculateMainDataSize_FUN_004e77d0(frame_info);
        pCVar2 = local_70;
        for (; 0 < iVar7; iVar7 = iVar7 + -1) {
          uVar3 = 8;
          uVar9 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(pCVar2,8);
          pCVar18 = (CMP3Decoder *)0x4e8ec4;
          bit_stream = this_ptr;
          sound_mp3_cpp_CMP3Decoder_putByte_FUN_004e2de0(this_ptr,uVar9,uVar3);
        }
        uVar9 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0(this_ptr);
        pCVar19 = (CMP3Decoder *)0x4e8ee7;
        num_bits = this_ptr;
        uVar3 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0(this_ptr);
        uVar9 = uVar9 >> 3;
        if (uVar3 % (uint)header_out != 0) {
          num_bits = (CMP3Decoder *)((int)header_out - uVar3 % (uint)header_out);
          uVar9 = uVar9 + 1;
          bit_stream = (CMP3Decoder *)0x4e8f04;
          pCVar19 = this_ptr;
          sound_mp3_cpp_CMP3Decoder_readBits_FUN_004e2cf0(this_ptr,(uint)num_bits);
        }
        local_74 = (this_ptr->main_data_offset - uVar9) - SStack_4dc.main_data_begin;
        if (0x1000 < uVar9) {
          num_bits = (CMP3Decoder *)0x1000;
          this_ptr->main_data_offset = this_ptr->main_data_offset + -0x1000;
          bit_stream = (CMP3Decoder *)0x4e8f4a;
          pCVar19 = this_ptr;
          sound_mp3_cpp_CMP3Decoder_rewindBytes_FUN_004e2ea0(this_ptr,0x1000);
        }
        pSVar13 = &SStack_e4;
        piVar10 = (int *)&stack0xffff9f10;
        for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
          *piVar10 = pSVar13->mpeg_version;
          pSVar13 = (SMpegFrameHeader *)((int)pSVar13 + ((uint)bVar15 * -2 + 1) * 4);
          piVar10 = piVar10 + (uint)bVar15 * -2 + 1;
        }
        frame_info_00.channel_mode = in_stack_ffff9f14;
        frame_info_00.header = (SMpegFrameHeader *)in_stack_ffff9f10;
        frame_info_00.allocation_entries = (SMpegAllocationEntry *)uVar17;
        frame_info_00.table_index = (int)pCVar18;
        frame_info_00.channel_count = (int)bit_stream;
        frame_info_00.js_bound = (int)pCVar19;
        frame_info_00.sblimit = (int)num_bits;
        iVar7 = sound_mp3_cpp_calculateMainDataSize_FUN_004e77d0(frame_info_00);
        this_ptr->main_data_offset = this_ptr->main_data_offset + iVar7;
        if (local_74 < 0) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 3984;
          core_main_c_displayErrorAndQuit_FUN_004c8440("Not enough main data to decode frame %d.");
        }
        while (iVar7 = local_74, 0 < local_74) {
          sound_mp3_cpp_CMP3Decoder_readBits_FUN_004e2cf0(this_ptr,8);
          local_74 = iVar7 + -1;
        }
        if ((pcm_output != (short *)0x0) && (local_78 = 0, 0 < local_b0)) {
          local_3c = SStack_4dc.channels[0].granules;
          local_38 = 0;
          do {
            iVar7 = 0;
            if (0 < SStack_e4.original) {
              local_5c = SStack_4ecc.channels;
              pSVar14 = (SMpegLayer3GranuleInfo *)
                        ((int)SStack_4dc.channels[0].granules[0].table_select + local_38 + -0x1c);
              do {
                local_6c = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0(this_ptr);
                if (*(int *)SStack_e4.mpeg_version == 0) {
                  sound_mp3_cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_004e5000
                            (this_ptr,(int *)&SStack_6cc,&SStack_4dc,local_78,iVar7,
                             (SMpegFrame *)&SStack_e4);
                }
                else {
                  sound_mp3_cpp_CMP3Decoder_readLayer3Scalefactors_FUN_004e48a0
                            (this_ptr,(int *)&SStack_6cc,&SStack_4dc,local_78,iVar7,
                             (SMpegFrame *)&SStack_e4);
                }
                sound_mp3_cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_004e5200
                          (this_ptr,&SStack_3ccc,&SStack_4dc,iVar7,local_78,local_6c,
                           (SMpegFrame *)&SStack_e4);
                sound_mp3_cpp_requantizeLayer3Samples_FUN_004e58d0
                          (&SStack_3ccc,local_5c,(int *)&SStack_6cc,pSVar14,iVar7,
                           (SMpegFrame *)&SStack_e4);
                iVar7 = iVar7 + 1;
                pSVar14 = (SMpegLayer3GranuleInfo *)&pSVar14[2].window_switching_flag;
                local_5c = local_5c + 1;
              } while (iVar7 < SStack_e4.original);
            }
            sound_mp3_cpp_mpegLayer3StereoProcess_FUN_004e6160
                      (&SStack_4ecc,&local_60cc,&SStack_6cc,local_3c,(SMpegFrame *)&SStack_e4);
            local_20 = 0;
            if (0 < SStack_e4.original) {
              local_50 = (SMpegLayer3GranuleInfo *)
                         ((int)SStack_4dc.channels[0].granules[0].table_select + local_38 + -0x1c);
              local_4c = local_60cc.channels;
              local_44 = asStack_33cc;
              local_48 = local_50;
              do {
                pSVar14 = local_48;
                sound_mp3_cpp_reorderShortBlockSamples_FUN_004e5d80
                          (local_4c,&SStack_21cc,local_48,(SMpegFrame *)&SStack_e4);
                sound_mp3_cpp_antiAliasingButterfly_FUN_004e7030
                          ((float *)&SStack_21cc,afStack_2acc,pSVar14,&SStack_e4);
                pfVar5 = afStack_18cc;
                local_68 = local_50;
                local_58 = afStack_2acc;
                iVar7 = 0;
                do {
                  sound_mp3_cpp_CMP3Decoder_synthesisPoly_FUN_004e7720
                            (this_ptr,local_58,pfVar5,iVar7,local_20,local_68,&SStack_e4);
                  iVar7 = iVar7 + 1;
                  pfVar5 = pfVar5 + 0x12;
                  local_58 = local_58 + 0x12;
                } while (iVar7 < 0x20);
                local_54 = 0;
                local_1c = 0;
                do {
                  iVar4 = 0;
                  iVar7 = local_54;
                  do {
                    if ((local_1c % 2 != 0) && (local_18 = 2, iVar4 % 2 != 0)) {
                      *(float *)((int)afStack_18cc + iVar7) = -*(float *)((int)afStack_18cc + iVar7)
                      ;
                    }
                    iVar4 = iVar4 + 1;
                    iVar7 = iVar7 + 0x48;
                  } while (iVar4 < 0x20);
                  local_1c = local_1c + 1;
                  local_54 = local_54 + 4;
                } while (local_1c < 0x12);
                iVar7 = 0;
                psVar11 = local_44;
                do {
                  iVar4 = 0;
                  iVar8 = iVar7;
                  do {
                    iVar6 = iVar4 + 4;
                    puVar1 = (uint *)((int)afStack_18cc + iVar8);
                    iVar8 = iVar8 + 0x48;
                    *(uint *)((int)afStack_194 + iVar4) = *puVar1;
                    iVar4 = iVar6;
                  } while (iVar6 != 0x80);
                  iVar7 = iVar7 + 4;
                  sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_004e4070
                            (this_ptr,afStack_194,local_20,psVar11);
                  psVar11 = psVar11 + 0x20;
                } while (iVar7 != 0x48);
                local_20 = local_20 + 1;
                local_50 = (SMpegLayer3GranuleInfo *)&local_50[2].window_switching_flag;
                local_4c = local_4c + 1;
                local_48 = (SMpegLayer3GranuleInfo *)&local_48[2].window_switching_flag;
                local_44 = local_44 + 0x240;
              } while (local_20 < SStack_e4.original);
            }
            local_40 = 0;
            do {
              iVar7 = 0;
              do {
                iVar4 = 0;
                if (0 < SStack_e4.original) {
                  iVar8 = iVar7 + local_40;
                  psVar11 = pcm_output;
                  do {
                    pcm_output = psVar11 + 1;
                    iVar4 = iVar4 + 1;
                    *psVar11 = *(short *)((int)asStack_33cc + iVar8);
                    iVar8 = iVar8 + 0x480;
                    psVar11 = pcm_output;
                  } while (iVar4 < SStack_e4.original);
                }
                iVar7 = iVar7 + 2;
              } while (iVar7 != 0x40);
              local_40 = local_40 + 0x40;
            } while (local_40 != 0x480);
            local_3c = local_3c + 1;
            local_38 = local_38 + 0x48;
            local_78 = local_78 + 1;
          } while (local_78 < local_b0);
        }
      }
      if (0 < iStack_108) {
        SStack_e4.mode_extension = 0;
        iVar7 = 0x4e8afb;
        SStack_e4.channel_mode = (int)header_out;
        dVar16 = round
                           ((((double)local_60d0 /
                             *(double *)(&DAT_005bbc48 + local_104 * 8 + iStack_114 * 0x20)) *
                            (double)*(int *)(&DAT_005bbc88 +
                                            iStack_108 * 4 +
                                            (local_110[0] - 1) * 0x3c + iStack_114 * 0xb4)) /
                            (double)header_out);
        local_68 = (SMpegLayer3GranuleInfo *)(int)ROUND(dVar16);
        if (local_100 != 0) {
          local_68 = (SMpegLayer3GranuleInfo *)((int)local_68 + 1);
        }
        local_68 = (SMpegLayer3GranuleInfo *)
                   ((int)local_68 * iVar7 -
                   (((this_ptr->file_bitstream).total_bits_read - SStack_e4.emphasis) + 0xc));
        iVar7 = 0;
        if (0 < (int)local_68) {
          do {
            sound_mp3_cpp_CFileBitStream_readBit_FUN_004e29d0(&this_ptr->file_bitstream);
            iVar7 = iVar7 + 1;
          } while (iVar7 < (int)local_68);
        }
      }
      return local_b0 * 0x240;
    }
  }
  return 0;
}
