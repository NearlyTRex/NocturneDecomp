// Name: sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40
// Address: 00534d40
// Address Range: [[00534d40, 00535c20]]
// Convention: __cdecl
// Signature: int sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40(CMP3Decoder * this_ptr)

#include "nocturne.h"

int __cdecl sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_00534d40(CMP3Decoder *this_ptr)

{
  SMpegFrame frame_info;
  SMpegFrame frame_info_00;
  CFileBitStream *pCVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  CMP3Decoder *num_bits;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  ushort *puVar10;
  SMpegSubbandScalefactors *subband_samples;
  uint *puVar11;
  uint *puVar12;
  SMpegLayer3Granule *pSVar13;
  short *psVar14;
  byte bVar15;
  double dVar16;
  ushort *in_stack_00000008;
  uint in_stack_ffff9f10;
  uint in_stack_ffff9f14;
  uint uVar17;
  CMP3Decoder *pCVar18;
  CMP3Decoder *bit_stream;
  CMP3Decoder *pCVar19;
  SMpegFrame *pSVar20;
  SMpegFrameHeader *header_out;
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
  byte auStack_4dc [4];
  char local_4d8;
  SMpegLayer3Granule SStack_4c4;
  SMpegSubbandSCFSI aSStack_394 [2];
  SMpegSubbandAllocation aSStack_294 [2];
  float afStack_194 [32];
  int iStack_114;
  uint local_110 [2];
  int iStack_108;
  int local_104;
  int local_100;
  byte auStack_e4 [8];
  SBitAllocationTable *local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  byte *local_cc;
  SMpegFrameHeader *local_c8;
  int local_c4;
  int iStack_c0;
  int local_bc;
  int local_b8;
  uint local_b4;
  int local_b0;
  uint local_a8;
  uint local_a4;
  byte *local_a0;
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
  SMpegFrame *local_6c;
  SMpegFrame *local_68;
  int local_60;
  SMpegSubbandSamples *local_5c;
  float *local_58;
  int local_54;
  SMpegFrame *local_50;
  SMpegSubbandSamples *local_4c;
  SMpegFrame *local_48;
  short *local_44;
  int local_40;
  SMpegLayer3Granule *local_3c;
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
  auStack_e4._4_4_ = local_110;
  local_b0 = 0;
  local_d4 = -1;
  local_d8 = 0;
  local_b4 = 0;
  pCVar1 = &this_ptr->file_bitstream;
  if ((this_ptr->file_bitstream).error_flag == 0) {
    local_a8 = 0xfff;
    local_a4 = 0x1fff;
    uVar8 = (this_ptr->file_bitstream).total_bits_read & 7;
    if (uVar8 != 0) {
      sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(pCVar1,8 - uVar8);
    }
    uVar8 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(pCVar1,0xc);
    while (((local_a4 & uVar8) != local_a8 && ((this_ptr->file_bitstream).error_flag == 0))) {
      uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(pCVar1,8);
      uVar8 = uVar8 << 8 | uVar2;
    }
    if ((this_ptr->file_bitstream).error_flag == 0) {
      local_b0 = (this_ptr->file_bitstream).total_bits_read;
      header_out = (SMpegFrameHeader *)(auStack_e4 + 4);
      sound_mp3_cpp_CFileBitStream_readFrameHeader_FUN_0052f5b0
                (&this_ptr->file_bitstream,header_out);
      uVar17 = auStack_e4._4_4_;
      local_dc = *(SBitAllocationTable **)(auStack_e4._4_4_ + 0x1c);
      local_d0 = (local_dc != (SBitAllocationTable *)0x3) + 1;
      if (*(uint *)(auStack_e4._4_4_ + 4) == 2) {
        local_9c = (int)local_c8;
        local_8c = *(uint *)auStack_e4._4_4_;
        local_98 = 1;
        local_94 = *(uint *)(auStack_e4._4_4_ + 0xc);
        local_14 = local_8c * 0xb4 + 0x3c;
        iVar3 = g_MpegBitrateTable[local_8c][1][local_94] / local_d0;
        header_out = (SMpegFrameHeader *)0x534f33;
        local_a0 = auStack_e4 + 4;
        dVar16 = crt_math_c_round_FUN_005fe6b0
                           (g_MpegSampleRateTable[local_8c][*(uint *)(auStack_e4._4_4_ + 0x10)]);
        local_94 = (uint)ROUND(dVar16);
        if (local_90 == 1) {
          if (((local_94 == 0x30) && (0x37 < iVar3)) || ((0x37 < iVar3 && (iVar3 < 0x51)))) {
            iVar3 = 0;
          }
          else if ((local_94 == 0x30) || (iVar3 < 0x60)) {
            if ((local_94 == 0x20) || (0x30 < iVar3)) {
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
        if (iVar3 != *(int *)(local_a4 + 0xc)) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0x1a2;
          core_main_c_displayErrorAndQuit_FUN_00506f10("MPEG Layer 2 - pick_table - can't load tables!  File: %s");
        }
        local_c8 = (SMpegFrameHeader *)local_a0;
      }
      else {
        local_c8 = (SMpegFrameHeader *)0x20;
      }
      local_cc = (byte *)local_c8;
      if (*(uint *)(uVar17 + 0x1c) == 1) {
        local_8c = *(uint *)(uVar17 + 4);
        uVar8 = *(uint *)(uVar17 + 0x20);
        if (((((int)local_8c < 1) || (3 < (int)local_8c)) || ((int)uVar8 < 0)) || (3 < (int)uVar8))
        {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0x1b2;
          core_main_c_displayErrorAndQuit_FUN_00506f10("js_bound bad layer/modext (%d/%d)  File: %s");
        }
        local_cc = g_MpegLayer2AllocationTables[local_8c][uVar8];
      }
      local_bc = local_d4;
      local_b0 = (*(int *)auStack_e4._0_4_ != 0) + 1;
      pCVar1 = &this_ptr->file_bitstream;
      if (local_110[0] < 2) {
        if (local_110[0] == 1) {
          header_out = (SMpegFrameHeader *)0x20;
          local_60d0 = 0x180;
          sound_mp3_cpp_CFileBitStream_readAllocationTable_FUN_0052f7a0
                    (pCVar1,(uint *)aSStack_294,(SBitAllocationTable *)auStack_e4);
          sound_mp3_cpp_CFileBitStream_readScalefactors_FUN_0052f850
                    (pCVar1,aSStack_294,aSStack_fcc,(SBitAllocationTable *)auStack_e4);
          local_24 = 0;
          local_88 = pCVar1;
          do {
            sound_mp3_cpp_CFileBitStream_readQuantizedSamples_FUN_0052fb50
                      (local_88,aSStack_ccc,aSStack_294,(SBitAllocationTable *)auStack_e4);
            sound_mp3_cpp_requantizeSamples_FUN_005301b0
                      (aSStack_ccc,aSStack_9cc,aSStack_294,(SMpegFrameHeader *)auStack_e4);
            local_84 = aSStack_9cc;
            local_80 = aSStack_fcc;
            local_60 = 0;
            do {
              iVar3 = 0;
              if (0 < local_d4) {
                piVar9 = (int *)((int)local_80->codes[0] + local_60);
                pfVar4 = (float *)((int)local_84->codes[0] + local_60);
                do {
                  iVar6 = *piVar9;
                  piVar9 = piVar9 + 0x60;
                  iVar3 = iVar3 + 1;
                  *pfVar4 = *pfVar4 * (float)g_MpegScalefactorTable[iVar6];
                  pfVar4 = pfVar4 + 0x60;
                } while (iVar3 < local_d4);
              }
              local_60 = local_60 + 4;
            } while (local_60 != 0x80);
            iVar3 = 0;
            local_60 = 0x80;
            if (0 < local_bc) {
              subband_samples = aSStack_9cc;
              psVar14 = asStack_33cc;
              do {
                sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0
                          (this_ptr,(float *)subband_samples,iVar3,psVar14);
                iVar3 = iVar3 + 1;
                subband_samples = subband_samples + 1;
                psVar14 = psVar14 + 0x240;
              } while (iVar3 < local_bc);
            }
            local_24 = local_24 + 1;
          } while (local_24 < 0xc);
        }
      }
      else if (local_110[0] < 3) {
        local_60d0 = 0x480;
        header_out = (SMpegFrameHeader *)&DAT_00000008;
        sound_mp3_cpp_CFileBitStream_readAllocationValues_FUN_0052f670
                  (pCVar1,aSStack_294,(SBitAllocationTable *)auStack_e4);
        sound_mp3_cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_0052f8e0
                  (pCVar1,aSStack_394,aSStack_294,aSStack_fcc,(SBitAllocationTable *)auStack_e4);
        iStack_c0 = 0;
        local_7c = pCVar1;
        do {
          sound_mp3_cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_0052fc50
                    (local_7c,aSStack_ccc,aSStack_294,(SBitAllocationTable *)auStack_e4);
          sound_mp3_cpp_requantizeLayer3Samples_FUN_0052fee0
                    ((int *)aSStack_ccc,(uint *)aSStack_294,(float *)aSStack_9cc,
                     (SMpegFrame *)auStack_e4);
          sound_mp3_cpp_applyScalefactorsToSubbands_FUN_005302f0
                    ((float *)aSStack_9cc,(int *)aSStack_fcc,(SMpegFrame *)auStack_e4,iStack_c0 >> 2
                    );
          if (in_stack_00000008 != (ushort *)0x0) {
            local_2c = 0;
            local_30 = 0;
            do {
              iVar3 = 0;
              if (0 < local_bc) {
                pfVar4 = (float *)((int)aSStack_9cc[0].codes[0] + local_30);
                local_34 = (short *)((int)asStack_33cc + local_2c);
                do {
                  sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0
                            (this_ptr,pfVar4,iVar3,local_34);
                  iVar3 = iVar3 + 1;
                  pfVar4 = pfVar4 + 0x60;
                  local_34 = local_34 + 0x240;
                } while (iVar3 < local_bc);
              }
              local_2c = local_2c + 0x40;
              local_30 = local_30 + 0x80;
            } while (local_2c != 0xc0);
            local_28 = 0;
            iStack_c0 = 0;
            do {
              iVar3 = 0;
              do {
                iVar6 = 0;
                if (0 < local_bc) {
                  iVar7 = iVar3 + local_28;
                  puVar10 = in_stack_00000008;
                  do {
                    in_stack_00000008 = puVar10 + 1;
                    iVar6 = iVar6 + 1;
                    *puVar10 = *(ushort *)((int)asStack_33cc + iVar7);
                    iVar7 = iVar7 + 0x480;
                    puVar10 = in_stack_00000008;
                  } while (iVar6 < local_bc);
                }
                iVar3 = iVar3 + 2;
              } while (iVar3 != 0x40);
              local_28 = local_28 + 0x40;
            } while (local_28 != 0xc0);
          }
          iStack_c0 = iStack_c0 + 1;
        } while (iStack_c0 < 0xc);
      }
      else if (local_110[0] == 3) {
        header_out = (SMpegFrameHeader *)&DAT_00000008;
        if (*(int *)auStack_e4._0_4_ == 0) {
          local_60d0 = 0x240;
        }
        else {
          local_60d0 = 0x480;
        }
        pSVar20 = (SMpegFrame *)auStack_e4;
        pSVar13 = (SMpegLayer3Granule *)auStack_4dc;
        bit_stream = (CMP3Decoder *)&this_ptr->file_bitstream;
        uVar17 = 0x535611;
        pCVar18 = this_ptr;
        local_70 = (CFileBitStream *)bit_stream;
        sound_mp3_cpp_CMP3Decoder_readLayer3SideInfo_FUN_005307a0
                  (this_ptr,(CFileBitStream *)bit_stream,pSVar13,pSVar20);
        puVar11 = (uint *)auStack_e4;
        puVar12 = (uint *)&stack0xffff9f10;
        for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar12 = *puVar11;
          puVar11 = puVar11 + (uint)bVar15 * -2 + 1;
          puVar12 = puVar12 + (uint)bVar15 * -2 + 1;
        }
        frame_info.channel_mode = in_stack_ffff9f14;
        frame_info.header = (SMpegFrameHeader *)in_stack_ffff9f10;
        frame_info.allocation_table = (SBitAllocationTable *)uVar17;
        frame_info.table_index = (int)pCVar18;
        frame_info.samples_per_granule = (int)bit_stream;
        frame_info.js_bound = (int)pSVar13;
        frame_info.sblimit = (int)pSVar20;
        iVar3 = sound_mp3_cpp_calculateMainDataSize_FUN_00533c50(frame_info);
        pCVar1 = local_70;
        for (; 0 < iVar3; iVar3 = iVar3 + -1) {
          uVar2 = 8;
          uVar8 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(pCVar1,8);
          pCVar18 = (CMP3Decoder *)0x535654;
          bit_stream = this_ptr;
          sound_mp3_cpp_CMP3Decoder_putByte_FUN_0052f260(this_ptr,uVar8,uVar2);
        }
        uVar8 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
        pCVar19 = (CMP3Decoder *)0x535677;
        num_bits = this_ptr;
        uVar2 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
        uVar8 = uVar8 >> 3;
        if (uVar2 % (uint)header_out != 0) {
          num_bits = (CMP3Decoder *)((int)header_out - uVar2 % (uint)header_out);
          uVar8 = uVar8 + 1;
          bit_stream = (CMP3Decoder *)0x535694;
          pCVar19 = this_ptr;
          sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170(this_ptr,(uint)num_bits);
        }
        local_74 = (this_ptr->unk1 - uVar8) - (int)auStack_4dc;
        if (0x1000 < uVar8) {
          num_bits = (CMP3Decoder *)0x1000;
          this_ptr->unk1 = this_ptr->unk1 + -0x1000;
          bit_stream = (CMP3Decoder *)0x5356da;
          pCVar19 = this_ptr;
          sound_mp3_cpp_CMP3Decoder_rewindBytes_FUN_0052f320(this_ptr,0x1000);
        }
        puVar11 = (uint *)auStack_e4;
        puVar12 = (uint *)&stack0xffff9f10;
        for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar12 = *puVar11;
          puVar11 = puVar11 + (uint)bVar15 * -2 + 1;
          puVar12 = puVar12 + (uint)bVar15 * -2 + 1;
        }
        frame_info_00.channel_mode = in_stack_ffff9f14;
        frame_info_00.header = (SMpegFrameHeader *)in_stack_ffff9f10;
        frame_info_00.allocation_table = (SBitAllocationTable *)uVar17;
        frame_info_00.table_index = (int)pCVar18;
        frame_info_00.samples_per_granule = (int)bit_stream;
        frame_info_00.js_bound = (int)pCVar19;
        frame_info_00.sblimit = (int)num_bits;
        iVar3 = sound_mp3_cpp_calculateMainDataSize_FUN_00533c50(frame_info_00);
        this_ptr->unk1 = this_ptr->unk1 + iVar3;
        if (local_74 < 0) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0xf9a;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Not enough main data to decode frame %d.");
        }
        while (iVar3 = local_74, 0 < local_74) {
          sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170(this_ptr,8);
          local_74 = iVar3 + -1;
        }
        if ((in_stack_00000008 != (ushort *)0x0) && (local_78 = 0, 0 < local_b0)) {
          local_3c = &SStack_4c4;
          local_38 = 0;
          do {
            iVar3 = 0;
            if (0 < local_bc) {
              local_5c = SStack_4ecc.channels;
              pSVar13 = (SMpegLayer3Granule *)(SStack_4c4.unk3 + local_38 + -8);
              do {
                local_6c = (SMpegFrame *)
                           sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
                if (*(int *)auStack_e4._0_4_ == 0) {
                  sound_mp3_cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_00531480
                            (this_ptr,SStack_6cc.reserved,(SMpegLayer3Granule *)auStack_4dc,local_78
                             ,iVar3,(SMpegFrame *)auStack_e4);
                }
                else {
                  sound_mp3_cpp_CMP3Decoder_readLayer3Scalefactors_FUN_00530d20
                            (this_ptr,SStack_6cc.reserved,(SMpegLayer3Granule *)auStack_4dc,local_78
                             ,iVar3,(SMpegFrame *)auStack_e4);
                }
                sound_mp3_cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00531680
                          (this_ptr,(float *)&SStack_3ccc,(SMpegLayer3Granule *)auStack_4dc,iVar3,
                           local_78,local_6c,(int)auStack_e4);
                sound_mp3_cpp_requantizeLayer3Samples_FUN_00531d50
                          (&SStack_3ccc,local_5c,SStack_6cc.reserved,pSVar13,iVar3,
                           (SMpegLayer3Granule **)auStack_e4);
                iVar3 = iVar3 + 1;
                pSVar13 = pSVar13 + 1;
                local_5c = local_5c + 1;
              } while (iVar3 < local_bc);
            }
            sound_mp3_cpp_mpegLayer3StereoProcess_FUN_005325e0
                      (&SStack_4ecc,&local_60cc,&SStack_6cc,(SMpegFrame *)local_3c,
                       (SMpegLayer3Granule **)auStack_e4);
            local_20 = 0;
            if (0 < local_bc) {
              local_50 = (SMpegFrame *)(SStack_4c4.unk3 + local_38 + -8);
              local_4c = local_60cc.channels;
              local_44 = asStack_33cc;
              local_48 = local_50;
              do {
                pSVar20 = local_48;
                sound_mp3_cpp_reorderShortBlockSamples_FUN_00532200
                          (local_4c,&SStack_21cc,local_48,(SMpegLayer3Granule **)auStack_e4);
                sound_mp3_cpp_antiAliasingButterfly_FUN_005334b0
                          ((float *)&SStack_21cc,afStack_2acc,pSVar20,auStack_e4);
                pfVar4 = afStack_18cc;
                local_68 = local_50;
                local_58 = afStack_2acc;
                iVar3 = 0;
                do {
                  sound_mp3_cpp_CMP3Decoder_synthesisPoly_FUN_00533ba0
                            (this_ptr,local_58,pfVar4,iVar3,local_20,local_68,auStack_e4);
                  iVar3 = iVar3 + 1;
                  pfVar4 = pfVar4 + 0x12;
                  local_58 = local_58 + 0x12;
                } while (iVar3 < 0x20);
                local_54 = 0;
                local_1c = 0;
                do {
                  iVar6 = 0;
                  iVar3 = local_54;
                  do {
                    if ((local_1c % 2 != 0) && (local_18 = 2, iVar6 % 2 != 0)) {
                      *(float *)((int)afStack_18cc + iVar3) = -*(float *)((int)afStack_18cc + iVar3)
                      ;
                    }
                    iVar6 = iVar6 + 1;
                    iVar3 = iVar3 + 0x48;
                  } while (iVar6 < 0x20);
                  local_1c = local_1c + 1;
                  local_54 = local_54 + 4;
                } while (local_1c < 0x12);
                iVar3 = 0;
                psVar14 = local_44;
                do {
                  iVar6 = 0;
                  iVar7 = iVar3;
                  do {
                    iVar5 = iVar6 + 4;
                    puVar11 = (uint *)((int)afStack_18cc + iVar7);
                    iVar7 = iVar7 + 0x48;
                    *(uint *)((int)afStack_194 + iVar6) = *puVar11;
                    iVar6 = iVar5;
                  } while (iVar5 != 0x80);
                  iVar3 = iVar3 + 4;
                  sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0
                            (this_ptr,afStack_194,local_20,psVar14);
                  psVar14 = psVar14 + 0x20;
                } while (iVar3 != 0x48);
                local_20 = local_20 + 1;
                local_50 = (SMpegFrame *)&local_50[5].js_bound;
                local_4c = local_4c + 1;
                local_48 = (SMpegFrame *)&local_48[5].js_bound;
                local_44 = local_44 + 0x240;
              } while (local_20 < local_bc);
            }
            local_40 = 0;
            do {
              iVar3 = 0;
              do {
                iVar6 = 0;
                if (0 < local_bc) {
                  iVar7 = iVar3 + local_40;
                  puVar10 = in_stack_00000008;
                  do {
                    in_stack_00000008 = puVar10 + 1;
                    iVar6 = iVar6 + 1;
                    *puVar10 = *(ushort *)((int)asStack_33cc + iVar7);
                    iVar7 = iVar7 + 0x480;
                    puVar10 = in_stack_00000008;
                  } while (iVar6 < local_bc);
                }
                iVar3 = iVar3 + 2;
              } while (iVar3 != 0x40);
              local_40 = local_40 + 0x40;
            } while (local_40 != 0x480);
            local_3c = (SMpegLayer3Granule *)(local_3c->subblock_gain + 2);
            local_38 = local_38 + 0x48;
            local_78 = local_78 + 1;
          } while (local_78 < local_b0);
        }
      }
      if (0 < iStack_108) {
        local_c4 = 0;
        iVar3 = 0x53528b;
        local_c8 = header_out;
        dVar16 = crt_math_c_round_FUN_005fe6b0
                           ((((double)local_60d0 / g_MpegSampleRateTable[iStack_114][local_104]) *
                            (double)g_MpegBitrateTable[iStack_114 + -1][local_110[0] + 2]
                                    [iStack_108]) / (double)header_out);
        local_68 = (SMpegFrame *)(int)ROUND(dVar16);
        if (local_100 != 0) {
          local_68 = (SMpegFrame *)((int)local_68 + 1);
        }
        local_68 = (SMpegFrame *)
                   ((int)local_68 * iVar3 -
                   (((this_ptr->file_bitstream).total_bits_read - local_b8) + 0xc));
        iVar3 = 0;
        if (0 < (int)local_68) {
          do {
            sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(&this_ptr->file_bitstream);
            iVar3 = iVar3 + 1;
          } while (iVar3 < (int)local_68);
        }
      }
      return local_b0 * 0x240;
    }
  }
  return 0;
}
