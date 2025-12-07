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
  uint uVar1;
  int iVar2;
  float *pfVar3;
  SMpegFrame *pSVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  ushort *puVar10;
  BADSPACEBASE *in_ESP;
  uint *puVar11;
  SBitAllocationTable **ppSVar12;
  short *unaff_EDI;
  uint *puVar13;
  SMpegLayer3Granule *granule_info;
  short *psVar14;
  byte bVar15;
  double dVar16;
  ushort *in_stack_00000008;
  int in_stack_00000014;
  int in_stack_00000018;
  int iStack0000001c;
  uint in_stack_ffff9f20;
  uint uVar17;
  CFileBitStream *pCVar18;
  CMP3Decoder *side_info_array;
  SMpegLayer3Granule *in_stack_ffff9f38;
  int iVar19;
  CMP3Decoder *in_stack_ffff9f3c;
  CMP3Decoder *pCVar20;
  CMP3Decoder *in_stack_ffff9f44;
  uint in_stack_ffff9f48;
  float afStack_60a0 [1151];
  byte auStack_4ea4 [6892];
  short asStack_33b8 [6];
  int aiStack_33ac [2];
  ushort auStack_33a4 [2];
  int aiStack_33a0 [577];
  float fStack_2a9c;
  SMpegFrame aSStack_2a98 [82];
  SMpegSubbandSamples SStack_21a0;
  float afStack_1898 [565];
  byte auStack_fc4 [12];
  int aiStack_fb8 [190];
  byte auStack_cc0 [8];
  SMpegSubbandScalefactors SStack_cb8;
  byte auStack_9bc [16];
  float afStack_9ac [191];
  int aiStack_6b0 [2];
  int iStack_6a8;
  SMpegScalefactorBandData SStack_6a4;
  char local_4d8;
  byte local_4c0 [36];
  byte auStack_49c [280];
  SMpegSubbandSCFSI SStack_384;
  byte auStack_28c [8];
  byte auStack_284 [8];
  uint auStack_27c [71];
  float afStack_160 [20];
  byte local_110 [8];
  int iStack_108;
  uint local_104;
  int local_fc;
  int iStack_f8;
  int local_f4;
  byte *local_e0;
  byte local_dc [4];
  byte local_d8 [4];
  byte local_d4 [8];
  byte local_cc [8];
  SBitAllocationTable *local_c4;
  SMpegLayer3Granule *pSStack_c0;
  SMpegLayer3Granule *local_bc;
  SMpegLayer3Granule *local_b8;
  int local_b4;
  SMpegFrameHeader *local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  uint local_a0;
  uint local_9c;
  int local_98;
  SMpegLayer3Granule *local_94;
  SMpegLayer3Granule *local_90;
  short local_8c [2];
  int local_88;
  int local_84;
  int local_80;
  CFileBitStream *local_7c;
  byte *local_70;
  int *local_6c;
  CFileBitStream *local_68;
  CFileBitStream *local_64;
  CFileBitStream *local_5c;
  int local_58;
  int local_54;
  uint local_50;
  SMpegFrame *local_4c;
  byte *local_48;
  SMpegSubbandSamples *local_38;
  SMpegFrame *local_34;
  SMpegFrame *local_24;
  float (*local_20) [18];
  SMpegFrame *local_1c;
  int *local_18;
  SMpegFrame *local_14;
  
  bVar15 = 0;
  local_e0 = local_110;
  local_b0 = (SMpegFrameHeader *)0x0;
  local_d4._0_4_ = (int *)0xffffffff;
  local_d8 = (byte  [4])0x0;
  local_b4 = 0;
  pCVar18 = &this_ptr->file_bitstream;
  if ((this_ptr->file_bitstream).error_flag == 0) {
    local_a8 = 0xfff;
    local_a4._0_2_ = 0x1fff;
    local_a4._2_2_ = 0;
    uVar8 = (this_ptr->file_bitstream).total_bits_read & 7;
    if (uVar8 != 0) {
      sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(pCVar18,8 - uVar8);
    }
    uVar8 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(pCVar18,0xc);
    while (((local_9c & uVar8) != local_a0 && ((this_ptr->file_bitstream).error_flag == 0))) {
      uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(pCVar18,8);
      uVar8 = uVar8 << 8 | uVar1;
    }
    if ((this_ptr->file_bitstream).error_flag == 0) {
      local_a8 = (this_ptr->file_bitstream).total_bits_read;
      sound_mp3_cpp_CFileBitStream_readFrameHeader_FUN_0052f5b0
                (&this_ptr->file_bitstream,(SMpegFrameHeader *)local_d8);
      uVar17 = local_d4._0_4_;
      local_d4._4_4_ = *(int *)(local_d4._0_4_ + 0x1c);
      local_c4 = (SBitAllocationTable *)
                 (((SBitAllocationTable *)local_d4._4_4_ != (SBitAllocationTable *)0x3) + 1);
      if (*(int *)(local_d4._0_4_ + 4) == 2) {
        local_90 = local_bc;
        local_80 = *(int *)local_d4._0_4_;
        local_8c[0] = 1;
        local_8c[1] = 0;
        local_88 = *(int *)(local_d4._0_4_ + 0xc);
        iVar2 = g_MpegBitrateTable[local_80][1][local_88] / (int)local_c4;
        in_stack_ffff9f38 = (SMpegLayer3Granule *)0x534f33;
        local_94 = (SMpegLayer3Granule *)local_d4;
        dVar16 = crt_math_c_round_FUN_005fe6b0
                           (g_MpegSampleRateTable[local_80][*(int *)(local_d4._0_4_ + 0x10)]);
        local_88 = (int)ROUND(dVar16);
        if (local_84 == 1) {
          if (((local_88 == 0x30) && (0x37 < iVar2)) || ((0x37 < iVar2 && (iVar2 < 0x51)))) {
            iVar2 = 0;
          }
          else if ((local_88 == 0x30) || (iVar2 < 0x60)) {
            if ((local_88 == 0x20) || (0x30 < iVar2)) {
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
        if (iVar2 != *(int *)(local_98 + 0xc)) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0x1a2;
          core_main_c_displayErrorAndQuit_FUN_00506f10("MPEG Layer 2 - pick_table - can't load tables!  File: %s");
        }
        local_bc = local_94;
      }
      else {
        local_bc = (SMpegLayer3Granule *)0x20;
      }
      pSStack_c0 = local_bc;
      if (*(int *)(uVar17 + 0x1c) == 1) {
        local_80 = *(int *)(uVar17 + 4);
        iVar2 = *(int *)(uVar17 + 0x20);
        if ((((local_80 < 1) || (3 < local_80)) || (iVar2 < 0)) || (3 < iVar2)) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0x1b2;
          core_main_c_displayErrorAndQuit_FUN_00506f10("js_bound bad layer/modext (%d/%d)  File: %s");
        }
        pSStack_c0 = (SMpegLayer3Granule *)g_MpegLayer2AllocationTables[local_80][iVar2];
      }
      local_b0 = (SMpegFrameHeader *)local_cc._4_4_;
      local_a4 = (*(int *)local_d8 != 0) + 1;
      pCVar18 = &this_ptr->file_bitstream;
      if (local_104 < 2) {
        if (local_104 == 1) {
          in_stack_ffff9f3c = (CMP3Decoder *)0x180;
          sound_mp3_cpp_CFileBitStream_readAllocationTable_FUN_0052f7a0
                    (pCVar18,(uint *)(auStack_28c + 4),(SBitAllocationTable *)local_d8);
          sound_mp3_cpp_CFileBitStream_readScalefactors_FUN_0052f850
                    (pCVar18,(SMpegSubbandAllocation *)auStack_28c,
                     (SMpegSubbandScalefactors *)auStack_fc4,(SBitAllocationTable *)local_dc);
          local_18 = (int *)0x0;
          local_7c = pCVar18;
          do {
            sound_mp3_cpp_CFileBitStream_readQuantizedSamples_FUN_0052fb50
                      (local_7c,(SMpegSubbandScalefactors *)auStack_cc0,
                       (SMpegSubbandAllocation *)(auStack_28c + 4),(SBitAllocationTable *)local_d8);
            in_stack_ffff9f38 = (SMpegLayer3Granule *)local_d4;
            sound_mp3_cpp_requantizeSamples_FUN_005301b0
                      ((SMpegSubbandScalefactors *)(auStack_cc0 + 4),
                       (SMpegSubbandScalefactors *)auStack_9bc,(SMpegSubbandAllocation *)auStack_284
                       ,(SMpegFrameHeader *)in_stack_ffff9f38);
            local_70 = auStack_9bc + 4;
            local_6c = aiStack_fb8;
            local_4c = (SMpegFrame *)0x0;
            do {
              iVar2 = 0;
              if (0 < (int)pSStack_c0) {
                piVar9 = (int *)((int)local_6c + (int)local_4c);
                pfVar3 = (float *)(local_70 + (int)local_4c);
                do {
                  iVar19 = *piVar9;
                  piVar9 = piVar9 + 0x60;
                  iVar2 = iVar2 + 1;
                  *pfVar3 = *pfVar3 * (float)g_MpegScalefactorTable[iVar19];
                  pfVar3 = pfVar3 + 0x60;
                } while (iVar2 < (int)pSStack_c0);
              }
              local_4c = (SMpegFrame *)((int)local_4c + 4);
            } while (local_4c != (SMpegFrame *)0x80);
            iVar2 = 0;
            local_4c = (SMpegFrame *)0x80;
            if (0 < local_a8) {
              pfVar3 = (float *)(auStack_9bc + 4);
              psVar14 = asStack_33b8;
              do {
                sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0
                          (this_ptr,pfVar3,iVar2,psVar14);
                iVar2 = iVar2 + 1;
                pfVar3 = pfVar3 + 0x60;
                psVar14 = psVar14 + 0x240;
              } while (iVar2 < (int)local_b0);
            }
            local_18 = (int *)((int)local_18 + 1);
          } while ((int)local_18 < 0xc);
        }
      }
      else if (local_104 < 3) {
        sound_mp3_cpp_CFileBitStream_readAllocationValues_FUN_0052f670
                  (pCVar18,(SMpegSubbandAllocation *)(auStack_28c + 4),
                   (SBitAllocationTable *)local_d8);
        sound_mp3_cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_0052f8e0
                  (pCVar18,&SStack_384,(SMpegSubbandAllocation *)auStack_284,
                   (SMpegSubbandScalefactors *)(auStack_fc4 + 8),(SBitAllocationTable *)local_d4);
        local_ac = 0;
        local_68 = pCVar18;
        do {
          sound_mp3_cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_0052fc50
                    (local_68,&SStack_cb8,(SMpegSubbandAllocation *)(auStack_284 + 4),
                     (SBitAllocationTable *)(local_d4 + 4));
          sound_mp3_cpp_requantizeLayer3Samples_FUN_0052fee0
                    (SStack_cb8.codes[0] + 1,auStack_27c,(float *)(auStack_9bc + 8),
                     (SMpegFrame *)local_cc);
          in_stack_ffff9f3c = (CMP3Decoder *)(aiStack_fb8 + 2);
          in_stack_ffff9f38 = (SMpegLayer3Granule *)(auStack_9bc + 0xc);
          sound_mp3_cpp_applyScalefactorsToSubbands_FUN_005302f0
                    ((float *)in_stack_ffff9f38,(int *)in_stack_ffff9f3c,
                     (SMpegFrame *)(local_cc + 4),local_a4 >> 2);
          if (in_stack_00000008 != (ushort *)0x0) {
            iVar19 = 0;
            iVar2 = 0;
            do {
              iVar7 = 0;
              if (0 < (int)local_9c) {
                pfVar3 = (float *)((int)afStack_9ac + iVar2);
                local_14 = (SMpegFrame *)((int)aiStack_33ac + iVar19);
                do {
                  in_stack_ffff9f38 = (SMpegLayer3Granule *)0x5354fd;
                  in_stack_ffff9f3c = this_ptr;
                  sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0
                            (this_ptr,pfVar3,iVar7,(short *)local_14);
                  iVar7 = iVar7 + 1;
                  pfVar3 = pfVar3 + 0x60;
                  iVar2 = iVar2 + 0x480;
                } while (iVar7 < local_98);
              }
              iVar19 = iVar19 + 0x40;
              iVar2 = iVar2 + 0x80;
            } while (iVar19 != 0xc0);
            iVar2 = 0;
            local_a0 = 0;
            do {
              iVar19 = 0;
              do {
                iVar7 = 0;
                if (0 < (int)local_9c) {
                  iVar6 = iVar19 + iVar2;
                  puVar10 = in_stack_00000008;
                  do {
                    in_stack_00000008 = puVar10 + 1;
                    iVar7 = iVar7 + 1;
                    *puVar10 = *(ushort *)((int)aiStack_33ac + iVar6);
                    iVar6 = iVar6 + 0x480;
                    puVar10 = in_stack_00000008;
                  } while (iVar7 < (int)local_9c);
                }
                iVar19 = iVar19 + 2;
              } while (iVar19 != 0x40);
              iVar2 = iVar2 + 0x40;
            } while (iVar2 != 0xc0);
          }
          local_ac = local_ac + 1;
        } while (local_ac < 0xc);
      }
      else if (local_104 == 3) {
        iVar19 = 8;
        pSVar4 = (SMpegFrame *)local_d8;
        side_info_array = (CMP3Decoder *)&stack0xfffffb30;
        pCVar18 = &this_ptr->file_bitstream;
        uVar17 = 0x535611;
        pCVar20 = this_ptr;
        local_64 = pCVar18;
        sound_mp3_cpp_CMP3Decoder_readLayer3SideInfo_FUN_005307a0
                  (this_ptr,pCVar18,(SMpegLayer3Granule *)side_info_array,pSVar4);
        puVar11 = (uint *)local_d4;
        puVar13 = (uint *)&stack0xffff9f20;
        for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar13 = *puVar11;
          puVar11 = puVar11 + (uint)bVar15 * -2 + 1;
          puVar13 = puVar13 + (uint)bVar15 * -2 + 1;
        }
        frame_info.channel_mode = uVar17;
        frame_info.header = (SMpegFrameHeader *)in_stack_ffff9f20;
        frame_info.allocation_table = (SBitAllocationTable *)pCVar20;
        frame_info.table_index = (int)pCVar18;
        frame_info.samples_per_granule = (int)side_info_array;
        frame_info.js_bound = (int)pSVar4;
        frame_info.sblimit = iVar19;
        iVar2 = sound_mp3_cpp_calculateMainDataSize_FUN_00533c50(frame_info);
        pCVar18 = local_5c;
        for (; 0 < iVar2; iVar2 = iVar2 + -1) {
          uVar8 = 8;
          pSVar4 = (SMpegFrame *)sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(pCVar18,8);
          side_info_array = this_ptr;
          sound_mp3_cpp_CMP3Decoder_putByte_FUN_0052f260(this_ptr,(uint)pSVar4,uVar8);
        }
        in_stack_ffff9f38 = (SMpegLayer3Granule *)0x535669;
        uVar8 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
        in_stack_ffff9f3c = (CMP3Decoder *)0x535677;
        pCVar20 = this_ptr;
        uVar1 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
        uVar8 = uVar8 >> 3;
        if (uVar1 % in_stack_ffff9f48 != 0) {
          in_stack_ffff9f44 = (CMP3Decoder *)(in_stack_ffff9f48 - uVar1 % in_stack_ffff9f48);
          uVar8 = uVar8 + 1;
          in_stack_ffff9f3c = (CMP3Decoder *)0x535694;
          pCVar20 = this_ptr;
          sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170(this_ptr,(uint)in_stack_ffff9f44);
        }
        local_54 = (this_ptr->field8_0x534c - uVar8) - local_4c0._4_4_;
        if (0x1000 < uVar8) {
          in_stack_ffff9f48 = 0x1000;
          this_ptr->field8_0x534c = this_ptr->field8_0x534c + -0x1000;
          pCVar20 = (CMP3Decoder *)0x5356da;
          in_stack_ffff9f44 = this_ptr;
          sound_mp3_cpp_CMP3Decoder_rewindBytes_FUN_0052f320(this_ptr,0x1000);
        }
        ppSVar12 = &local_c4;
        puVar11 = (uint *)&stack0xffff9f30;
        for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar11 = *ppSVar12;
          ppSVar12 = ppSVar12 + (uint)bVar15 * -2 + 1;
          puVar11 = puVar11 + (uint)bVar15 * -2 + 1;
        }
        frame_info_00.channel_mode = (int)pSVar4;
        frame_info_00.header = (SMpegFrameHeader *)side_info_array;
        frame_info_00.allocation_table = (SBitAllocationTable *)in_stack_ffff9f38;
        frame_info_00.table_index = (int)in_stack_ffff9f3c;
        frame_info_00.samples_per_granule = (int)pCVar20;
        frame_info_00.js_bound = (int)in_stack_ffff9f44;
        frame_info_00.sblimit = in_stack_ffff9f48;
        iVar2 = sound_mp3_cpp_calculateMainDataSize_FUN_00533c50(frame_info_00);
        this_ptr->field8_0x534c = this_ptr->field8_0x534c + iVar2;
        if ((int)local_50 < 0) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0xf9a;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Not enough main data to decode frame %d.");
        }
        while (pSVar4 = local_4c, 0 < (int)local_4c) {
          sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170(this_ptr,8);
          local_48 = (byte *)((int)&pSVar4[-1].sblimit + 3);
        }
        if ((in_stack_00000008 != (ushort *)0x0) && (local_50 = 0, 0 < local_88)) {
          local_14 = (SMpegFrame *)auStack_49c;
          iVar2 = 0;
          do {
            iVar19 = 0;
            if (0 < (int)local_94) {
              local_34 = (SMpegFrame *)auStack_4ea4;
              granule_info = (SMpegLayer3Granule *)(auStack_49c + iVar2);
              do {
                local_50 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
                if (*(int *)local_cc._4_4_ == 0) {
                  sound_mp3_cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_00531480
                            (this_ptr,aiStack_6b0,(SMpegLayer3Granule *)local_4c0,(int)local_5c,
                             iVar19,(SMpegFrame *)(local_cc + 4));
                }
                else {
                  sound_mp3_cpp_CMP3Decoder_readLayer3Scalefactors_FUN_00530d20
                            (this_ptr,aiStack_6b0,(SMpegLayer3Granule *)local_4c0,(int)local_5c,
                             iVar19,(SMpegFrame *)(local_cc + 4));
                }
                sound_mp3_cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00531680
                          (this_ptr,(float *)(auStack_4ea4 + 0x11f8),
                           (SMpegLayer3Granule *)(local_4c0 + 4),iVar19,local_58,local_4c,
                           (int)&local_c4);
                in_stack_ffff9f38 = (SMpegLayer3Granule *)(auStack_4ea4 + 0x11fc);
                sound_mp3_cpp_requantizeLayer3Samples_FUN_00531d50
                          ((SMpegSubbandQuantizedSamples *)in_stack_ffff9f38,local_38,&iStack_6a8,
                           granule_info,iVar19,&pSStack_c0);
                iVar19 = iVar19 + 1;
                granule_info = granule_info + 1;
                local_34 = (SMpegFrame *)((int)local_34 + 0x900);
              } while (iVar19 < (int)local_94);
            }
            in_stack_ffff9f3c = (CMP3Decoder *)0x5358de;
            sound_mp3_cpp_mpegLayer3StereoProcess_FUN_005325e0
                      ((SMpegStereoSubbandSamples *)auStack_4ea4,
                       (SMpegStereoSubbandSamples *)&stack0xffff9f5c,&SStack_6a4,local_14,&local_bc)
            ;
            if (0 < (int)local_90) {
              local_24 = (SMpegFrame *)((int)unaff_EDI + (int)(auStack_49c + 4));
              local_20 = (float (*) [18])afStack_60a0;
              local_18 = aiStack_33ac + 3;
              local_1c = local_24;
              do {
                pSVar4 = local_1c;
                sound_mp3_cpp_reorderShortBlockSamples_FUN_00532200
                          ((SMpegSubbandSamples *)local_20,&SStack_21a0,local_1c,&local_b8);
                sound_mp3_cpp_antiAliasingButterfly_FUN_005334b0
                          (SStack_21a0.samples[0] + 1,&fStack_2a9c,pSVar4,&local_b4);
                pfVar3 = afStack_1898;
                local_34 = local_1c;
                local_24 = aSStack_2a98;
                iVar19 = 0;
                do {
                  sound_mp3_cpp_CMP3Decoder_synthesisPoly_FUN_00533ba0
                            (this_ptr,local_24,pfVar3,iVar19,in_stack_00000014,local_34,&local_b0);
                  iVar19 = iVar19 + 1;
                  pfVar3 = pfVar3 + 0x12;
                  local_20 = local_20 + 1;
                } while (iVar19 < 0x20);
                local_1c = (SMpegFrame *)0x0;
                iStack0000001c = 0;
                do {
                  iVar19 = 0;
                  pSVar4 = local_1c;
                  do {
                    if ((iStack0000001c % 2 != 0) && (iVar19 % 2 != 0)) {
                      *(float *)((int)&pSVar4->channel_mode + (int)afStack_1898) =
                           -*(float *)((int)&pSVar4->channel_mode + (int)afStack_1898);
                    }
                    iVar19 = iVar19 + 1;
                    pSVar4 = (SMpegFrame *)&pSVar4[2].samples_per_granule;
                  } while (iVar19 < 0x20);
                  iStack0000001c = iStack0000001c + 1;
                  local_1c = (SMpegFrame *)&local_1c->channel_mode;
                } while (iStack0000001c < 0x12);
                iVar19 = 0;
                psVar14 = unaff_EDI;
                do {
                  iVar7 = 0;
                  iVar6 = iVar19;
                  do {
                    iVar5 = iVar7 + 4;
                    puVar11 = (uint *)((int)afStack_1898 + iVar6);
                    iVar6 = iVar6 + 0x48;
                    *(uint *)((int)afStack_160 + iVar7) = *puVar11;
                    iVar7 = iVar5;
                  } while (iVar5 != 0x80);
                  iVar19 = iVar19 + 4;
                  sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0
                            (this_ptr,afStack_160,in_stack_00000014,psVar14);
                  psVar14 = psVar14 + 0x20;
                } while (iVar19 != 0x48);
                local_18 = local_18 + 0x28;
                iVar2 = iVar2 + 0xa0;
                unaff_EDI = unaff_EDI + 0x240;
                in_stack_00000018 = in_stack_00000018 + 1;
                local_14 = (SMpegFrame *)&local_14[0x52].allocation_table;
              } while (in_stack_00000018 < local_84);
            }
            local_18 = (int *)0x0;
            do {
              iVar19 = 0;
              do {
                iVar7 = 0;
                if (0 < (int)local_94) {
                  iVar6 = iVar19 + (int)local_18;
                  puVar10 = in_stack_00000008;
                  do {
                    in_stack_00000008 = puVar10 + 1;
                    iVar7 = iVar7 + 1;
                    *puVar10 = *(ushort *)((int)aiStack_33ac + iVar6 + 8);
                    iVar6 = iVar6 + 0x480;
                    puVar10 = in_stack_00000008;
                  } while (iVar7 < (int)local_94);
                }
                iVar19 = iVar19 + 2;
              } while (iVar19 != 0x40);
              local_18 = (int *)((int)local_18 + 0x40);
            } while (local_18 != (int *)0x480);
            local_14 = (SMpegFrame *)&local_14[2].samples_per_granule;
            iVar2 = iVar2 + 0x48;
            local_50 = local_50 + 1;
          } while ((int)local_50 < local_88);
        }
      }
      if (0 < local_fc) {
        local_b8 = (SMpegLayer3Granule *)0x0;
        local_bc = in_stack_ffff9f38;
        dVar16 = crt_math_c_round_FUN_005fe6b0
                           ((((double)in_stack_ffff9f3c /
                             g_MpegSampleRateTable[iStack_108][iStack_f8]) *
                            (double)g_MpegBitrateTable[iStack_108 + -1][local_104 + 2][local_fc]) /
                            (double)in_stack_ffff9f38);
        local_58 = (int)ROUND(dVar16);
        if (local_f4 != 0) {
          local_58 = local_58 + 1;
        }
        local_58 = local_58 * (int)in_stack_ffff9f38 -
                   (((this_ptr->file_bitstream).total_bits_read - local_a8) + 0xc);
        iVar2 = 0;
        if (0 < local_58) {
          do {
            sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(&this_ptr->file_bitstream);
            iVar2 = iVar2 + 1;
          } while (iVar2 < local_58);
        }
      }
      return local_a4 * 0x240;
    }
  }
  return 0;
}
