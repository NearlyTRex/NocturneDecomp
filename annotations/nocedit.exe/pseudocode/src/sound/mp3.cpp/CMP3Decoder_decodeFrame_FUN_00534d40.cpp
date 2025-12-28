// Name: sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40
// Address: 00534d40
// Address Range: [[00534d40, 00535c20]]
// Convention: __cdecl
// Signature: int sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40(CMP3Decoder * this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_00534d40(CMP3Decoder *this_ptr)

{
  SMpegFrame frame_info;
  SMpegFrame frame_info_00;
  uint uVar1;
  int extraout_EAX;
  int iVar2;
  float *pfVar3;
  SMpegFrame *pSVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  ushort *puVar9;
  BADSPACEBASE *in_ESP;
  uint unaff_EBP;
  uint *puVar10;
  void **ppvVar11;
  int unaff_EDI;
  uint *puVar12;
  SMpegLayer3Granule *granule_info;
  short *psVar13;
  byte bVar14;
  double dVar15;
  ushort *in_stack_00000008;
  uint in_stack_ffff9f18;
  uint uVar16;
  CFileBitStream *pCVar17;
  CMP3Decoder *side_info_array;
  SMpegFrameHeader *in_stack_ffff9f30;
  int iVar18;
  uint in_stack_ffff9f34;
  CMP3Decoder *pCVar19;
  CMP3Decoder *in_stack_ffff9f3c;
  float in_stack_ffff9f40;
  byte local_4ec8 [6912];
  short local_33c8 [2];
  byte auStack_33c4 [4];
  short asStack_33c0 [1152];
  float fStack_2ac0;
  SMpegFrame aSStack_2abc [82];
  SMpegSubbandSamples SStack_21c4;
  float afStack_18bc [572];
  SMpegSubbandScalefactors aSStack_fcc [2];
  byte local_cc8 [768];
  float local_9c8;
  byte auStack_9c4 [752];
  int aiStack_6d4 [2];
  int iStack_6cc;
  SMpegScalefactorBandData local_6c8;
  byte auStack_4e4 [12];
  char local_4d8;
  int iStack_4c4;
  byte local_4c0 [300];
  SMpegSubbandSCFSI aSStack_394 [2];
  byte auStack_294 [8];
  SMpegSubbandAllocation aSStack_28c [2];
  SMpegFrameHeader aSStack_184 [2];
  int local_110;
  uint local_10c;
  int local_104;
  int local_100;
  int local_fc;
  byte auStack_ec [8];
  byte auStack_e4 [8];
  byte local_dc [8];
  SBitAllocationTable *local_d4;
  int local_d0;
  void *local_cc;
  void *local_c8;
  SMpegFrameHeader *local_c4;
  int iStack_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  uint local_ac;
  uint local_a8;
  int local_a4;
  byte *local_a0;
  void *local_9c;
  short local_98 [2];
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  CFileBitStream *local_84;
  int local_80;
  int local_7c;
  CFileBitStream *local_78;
  int *local_74;
  SMpegFrame *local_70;
  CFileBitStream *local_6c;
  CFileBitStream *local_64;
  int local_60;
  SMpegSubbandSamples *local_5c;
  SMpegFrame *local_58;
  int local_54 [3];
  SMpegFrame *local_48;
  float (*local_44) [18];
  SMpegFrame *local_40;
  byte *local_3c;
  SMpegFrame *local_38;
  int local_34;
  short *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  short local_1c [4];
  int local_14;
  
  bVar14 = 0;
  auStack_e4._4_4_ = &local_110;
  local_b0 = 0;
  local_d4 = (SBitAllocationTable *)0xffffffff;
  local_dc._4_4_ = 0;
  local_b4 = 0;
  pCVar17 = &this_ptr->file_bitstream;
  if ((this_ptr->file_bitstream).error_flag == 0) {
    local_a8 = 0xfff;
    local_a4 = 0x1fff;
    uVar7 = (this_ptr->file_bitstream).total_bits_read & 7;
    if (uVar7 != 0) {
      sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(pCVar17,8 - uVar7);
    }
    uVar7 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(pCVar17,0xc);
    while (((local_a8 & uVar7) != local_ac && ((this_ptr->file_bitstream).error_flag == 0))) {
      uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(pCVar17,8);
      uVar7 = uVar7 << 8 | uVar1;
    }
    if ((this_ptr->file_bitstream).error_flag == 0) {
      local_b4 = (this_ptr->file_bitstream).total_bits_read;
      sound_mp3_cpp_CFileBitStream_readFrameHeader_FUN_0052f5b0
                (&this_ptr->file_bitstream,(SMpegFrameHeader *)auStack_e4);
      uVar16 = auStack_e4._4_4_;
      local_dc._0_4_ = *(int *)(auStack_e4._4_4_ + 0x1c);
      local_d0 = ((SMpegLayer3Granule *)local_dc._0_4_ != (SMpegLayer3Granule *)0x3) + 1;
      if (*(int *)(auStack_e4._4_4_ + 4) == 2) {
        local_9c = local_c8;
        local_8c = *(int *)auStack_e4._4_4_;
        local_98[0] = 1;
        local_98[1] = 0;
        local_94 = *(int *)(auStack_e4._4_4_ + 0xc);
        local_14 = local_8c * 0xb4 + 0x3c;
        local_a0 = auStack_e4 + 4;
        dVar15 = crt_math_c_round_FUN_005fe6b0
                           (g_MpegSampleRateTable[local_8c][*(int *)(auStack_e4._4_4_ + 0x10)]);
        local_94 = (int)ROUND(dVar15);
        if (local_90 == 1) {
          if (((local_94 == 0x30) && (0x37 < extraout_EAX)) ||
             ((0x37 < extraout_EAX && (extraout_EAX < 0x51)))) {
            iVar2 = 0;
          }
          else if ((local_94 == 0x30) || (extraout_EAX < 0x60)) {
            if ((local_94 == 0x20) || (0x30 < extraout_EAX)) {
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
        if (iVar2 != *(int *)(local_a4 + 0xc)) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0x1a2;
          core_main_c_displayErrorAndQuit_FUN_00506f10("MPEG Layer 2 - pick_table - can't load tables!  File: %s");
        }
        local_c8 = local_9c;
      }
      else {
        local_c8 = (void *)0x20;
      }
      local_cc = local_c8;
      if (*(int *)(uVar16 + 0x1c) == 1) {
        local_88 = *(int *)(uVar16 + 4);
        iVar2 = *(int *)(uVar16 + 0x20);
        if ((((local_88 < 1) || (3 < local_88)) || (iVar2 < 0)) || (3 < iVar2)) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0x1b2;
          core_main_c_displayErrorAndQuit_FUN_00506f10("js_bound bad layer/modext (%d/%d)  File: %s");
        }
        local_cc = g_MpegLayer2AllocationTables[local_88][iVar2];
      }
      local_b8 = local_d0;
      local_ac = (*(int *)auStack_e4._4_4_ != 0) + 1;
      pCVar17 = &this_ptr->file_bitstream;
      if (local_10c < 2) {
        if (local_10c == 1) {
          in_stack_ffff9f34 = 0x180;
          sound_mp3_cpp_CFileBitStream_readAllocationTable_FUN_0052f7a0
                    (pCVar17,(uint *)(auStack_294 + 4),(SBitAllocationTable *)(auStack_e4 + 4));
          sound_mp3_cpp_CFileBitStream_readScalefactors_FUN_0052f850
                    (pCVar17,(SMpegSubbandAllocation *)auStack_294,aSStack_fcc,
                     (SBitAllocationTable *)auStack_e4);
          local_20 = 0;
          local_84 = pCVar17;
          do {
            sound_mp3_cpp_CFileBitStream_readQuantizedSamples_FUN_0052fb50
                      (local_84,(SMpegSubbandScalefactors *)local_cc8,
                       (SMpegSubbandAllocation *)(auStack_294 + 4),
                       (SBitAllocationTable *)(auStack_e4 + 4));
            in_stack_ffff9f30 = (SMpegFrameHeader *)local_dc;
            sound_mp3_cpp_requantizeSamples_FUN_005301b0
                      ((SMpegSubbandScalefactors *)(local_cc8 + 4),
                       (SMpegSubbandScalefactors *)auStack_9c4,aSStack_28c,in_stack_ffff9f30);
            local_78 = (CFileBitStream *)(auStack_9c4 + 4);
            local_74 = aSStack_fcc[0].codes[0] + 3;
            local_54[0] = 0;
            do {
              iVar2 = 0;
              if (0 < (int)local_c8) {
                piVar8 = (int *)((int)local_74 + local_54[0]);
                pfVar3 = (float *)((int)&local_78->file_handle + local_54[0]);
                do {
                  iVar18 = *piVar8;
                  piVar8 = piVar8 + 0x60;
                  iVar2 = iVar2 + 1;
                  *pfVar3 = *pfVar3 * (float)g_MpegScalefactorTable[iVar18];
                  pfVar3 = pfVar3 + 0x60;
                } while (iVar2 < (int)local_c8);
              }
              local_54[0] = local_54[0] + 4;
            } while (local_54[0] != 0x80);
            iVar2 = 0;
            local_54[0]._0_2_ = 0x80;
            local_54[0]._2_2_ = 0;
            if (0 < local_b0) {
              pfVar3 = (float *)(auStack_9c4 + 4);
              psVar13 = asStack_33c0;
              do {
                sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0
                          (this_ptr,pfVar3,iVar2,psVar13);
                iVar2 = iVar2 + 1;
                pfVar3 = pfVar3 + 0x60;
                psVar13 = psVar13 + 0x240;
              } while (iVar2 < local_b8);
            }
            local_20 = local_20 + 1;
          } while (local_20 < 0xc);
        }
      }
      else if (local_10c < 3) {
        sound_mp3_cpp_CFileBitStream_readAllocationValues_FUN_0052f670
                  (pCVar17,(SMpegSubbandAllocation *)(auStack_294 + 4),
                   (SBitAllocationTable *)(auStack_e4 + 4));
        sound_mp3_cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_0052f8e0
                  (pCVar17,aSStack_394,(SMpegSubbandAllocation *)auStack_294,aSStack_fcc,
                   (SBitAllocationTable *)auStack_e4);
        local_bc = 0;
        local_78 = pCVar17;
        do {
          sound_mp3_cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_0052fc50
                    (local_78,(SMpegSubbandScalefactors *)local_cc8,
                     (SMpegSubbandAllocation *)(auStack_294 + 4),
                     (SBitAllocationTable *)(auStack_e4 + 4));
          sound_mp3_cpp_requantizeLayer3Samples_FUN_0052fee0
                    ((int *)(local_cc8 + 4),(uint *)aSStack_28c,(float *)auStack_9c4,
                     (SMpegFrame *)local_dc);
          in_stack_ffff9f34 = local_b4 >> 2;
          in_stack_ffff9f30 = (SMpegFrameHeader *)(local_dc + 4);
          sound_mp3_cpp_applyScalefactorsToSubbands_FUN_005302f0
                    ((float *)(auStack_9c4 + 4),aSStack_fcc[0].codes[0] + 3,
                     (SMpegFrame *)in_stack_ffff9f30,in_stack_ffff9f34);
          if (in_stack_00000008 != (ushort *)0x0) {
            local_1c[0] = 0;
            local_1c[1] = 0;
            local_20 = 0;
            do {
              iVar2 = 0;
              if (0 < local_b8) {
                pfVar3 = (float *)((int)&local_9c8 + local_2c);
                local_30 = (short *)((int)local_33c8 + local_28);
                do {
                  sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0
                            (this_ptr,pfVar3,iVar2,local_30);
                  iVar2 = iVar2 + 1;
                  pfVar3 = pfVar3 + 0x60;
                  local_30 = local_30 + 0x240;
                } while (iVar2 < local_b8);
              }
              local_28 = local_28 + 0x40;
              local_2c = local_2c + 0x80;
            } while (local_28 != 0xc0);
            local_24 = 0;
            local_bc = 0;
            do {
              iVar2 = 0;
              do {
                iVar18 = 0;
                if (0 < local_b8) {
                  iVar6 = iVar2 + local_24;
                  puVar9 = in_stack_00000008;
                  do {
                    in_stack_00000008 = puVar9 + 1;
                    iVar18 = iVar18 + 1;
                    *puVar9 = *(ushort *)((int)local_33c8 + iVar6);
                    iVar6 = iVar6 + 0x480;
                    puVar9 = in_stack_00000008;
                  } while (iVar18 < local_b8);
                }
                iVar2 = iVar2 + 2;
              } while (iVar2 != 0x40);
              local_24 = local_24 + 0x40;
            } while (local_24 != 0xc0);
          }
          local_bc = local_bc + 1;
        } while (local_bc < 0xc);
      }
      else if (local_10c == 3) {
        iVar18 = 8;
        pSVar4 = (SMpegFrame *)(auStack_e4 + 4);
        side_info_array = (CMP3Decoder *)&local_4d8;
        pCVar17 = &this_ptr->file_bitstream;
        uVar16 = 0x535611;
        pCVar19 = this_ptr;
        local_6c = pCVar17;
        sound_mp3_cpp_CMP3Decoder_readLayer3SideInfo_FUN_005307a0
                  (this_ptr,pCVar17,(SMpegLayer3Granule *)side_info_array,pSVar4);
        puVar10 = (uint *)local_dc;
        puVar12 = (uint *)&stack0xffff9f18;
        for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar12 = *puVar10;
          puVar10 = puVar10 + (uint)bVar14 * -2 + 1;
          puVar12 = puVar12 + (uint)bVar14 * -2 + 1;
        }
        frame_info.channel_mode = uVar16;
        frame_info.header = (SMpegFrameHeader *)in_stack_ffff9f18;
        frame_info.allocation_table = (SBitAllocationTable *)pCVar19;
        frame_info.table_index = (int)pCVar17;
        frame_info.samples_per_granule = (int)side_info_array;
        frame_info.js_bound = (int)pSVar4;
        frame_info.sblimit = iVar18;
        for (iVar2 = sound_mp3_cpp_calculateMainDataSize_FUN_00533c50(frame_info); 0 < iVar2;
            iVar2 = iVar2 + -1) {
          uVar7 = 8;
          pSVar4 = (SMpegFrame *)sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(local_64,8);
          side_info_array = this_ptr;
          sound_mp3_cpp_CMP3Decoder_putByte_FUN_0052f260(this_ptr,(uint)pSVar4,uVar7);
        }
        in_stack_ffff9f30 = (SMpegFrameHeader *)0x535669;
        uVar7 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
        in_stack_ffff9f34 = 0x535677;
        pCVar19 = this_ptr;
        uVar1 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
        uVar7 = uVar7 >> 3;
        if (uVar1 % (uint)in_stack_ffff9f40 != 0) {
          in_stack_ffff9f3c =
               (CMP3Decoder *)((int)in_stack_ffff9f40 - uVar1 % (uint)in_stack_ffff9f40);
          uVar7 = uVar7 + 1;
          in_stack_ffff9f34 = 0x535694;
          pCVar19 = this_ptr;
          sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170(this_ptr,(uint)in_stack_ffff9f3c);
        }
        local_5c = (SMpegSubbandSamples *)((this_ptr->field8_0x534c - uVar7) - iStack_4c4);
        if (0x1000 < uVar7) {
          in_stack_ffff9f40 = 5.73972e-42;
          this_ptr->field8_0x534c = this_ptr->field8_0x534c + -0x1000;
          pCVar19 = (CMP3Decoder *)0x5356da;
          in_stack_ffff9f3c = this_ptr;
          sound_mp3_cpp_CMP3Decoder_rewindBytes_FUN_0052f320(this_ptr,0x1000);
        }
        ppvVar11 = &local_cc;
        puVar10 = (uint *)&stack0xffff9f28;
        for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar10 = *ppvVar11;
          ppvVar11 = ppvVar11 + (uint)bVar14 * -2 + 1;
          puVar10 = puVar10 + (uint)bVar14 * -2 + 1;
        }
        frame_info_00.channel_mode = (int)pSVar4;
        frame_info_00.header = (SMpegFrameHeader *)side_info_array;
        frame_info_00.allocation_table = (SBitAllocationTable *)in_stack_ffff9f30;
        frame_info_00.table_index = in_stack_ffff9f34;
        frame_info_00.samples_per_granule = (int)pCVar19;
        frame_info_00.js_bound = (int)in_stack_ffff9f3c;
        frame_info_00.sblimit = (int)in_stack_ffff9f40;
        iVar2 = sound_mp3_cpp_calculateMainDataSize_FUN_00533c50(frame_info_00);
        this_ptr->field8_0x534c = this_ptr->field8_0x534c + iVar2;
        if ((int)local_58 < 0) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0xf9a;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Not enough main data to decode frame %d.");
        }
        while (pSVar4 = local_70, 0 < (int)local_70) {
          sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170(this_ptr,8);
          local_6c = (CFileBitStream *)((int)&pSVar4[-1].sblimit + 3);
        }
        if ((in_stack_00000008 != (ushort *)0x0) && (local_74 = (int *)0x0, 0 < (int)local_ac))
        {
          local_38 = (SMpegFrame *)local_4c0;
          local_34 = 0;
          do {
            iVar2 = 0;
            if (0 < local_b8) {
              local_58 = (SMpegFrame *)local_4ec8;
              granule_info = (SMpegLayer3Granule *)(local_4c0 + local_34);
              do {
                local_74 = (int *)sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
                if (*(int *)auStack_ec._0_4_ == 0) {
                  sound_mp3_cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_00531480
                            (this_ptr,aiStack_6d4,(SMpegLayer3Granule *)auStack_4e4,local_80,iVar2,
                             (SMpegFrame *)auStack_ec);
                }
                else {
                  sound_mp3_cpp_CMP3Decoder_readLayer3Scalefactors_FUN_00530d20
                            (this_ptr,aiStack_6d4,(SMpegLayer3Granule *)auStack_4e4,local_80,iVar2,
                             (SMpegFrame *)auStack_ec);
                }
                sound_mp3_cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00531680
                          (this_ptr,(float *)(local_4ec8 + 0x11f8),
                           (SMpegLayer3Granule *)(auStack_4e4 + 4),iVar2,local_7c,local_70,
                           (int)(auStack_ec + 4));
                sound_mp3_cpp_requantizeLayer3Samples_FUN_00531d50
                          ((SMpegSubbandQuantizedSamples *)(local_4ec8 + 0x11fc),local_5c,
                           &iStack_6cc,granule_info,iVar2,(SMpegLayer3Granule **)auStack_e4);
                iVar2 = iVar2 + 1;
                granule_info = granule_info + 1;
                local_58 = (SMpegFrame *)((int)local_58 + 0x900);
              } while (iVar2 < local_b8);
            }
            sound_mp3_cpp_mpegLayer3StereoProcess_FUN_005325e0
                      ((SMpegStereoSubbandSamples *)local_4ec8,
                       (SMpegStereoSubbandSamples *)&stack0xffff9f38,&local_6c8,local_38,
                       (SMpegLayer3Granule **)(auStack_e4 + 4));
            local_1c[2] = 0;
            local_1c[3] = 0;
            if (0 < local_b4) {
              local_48 = (SMpegFrame *)((int)local_30 + (int)(local_4c0 + 4));
              local_44 = (float (*) [18])&stack0xffff9f3c;
              local_3c = auStack_33c4;
              local_40 = local_48;
              do {
                pSVar4 = local_40;
                sound_mp3_cpp_reorderShortBlockSamples_FUN_00532200
                          ((SMpegSubbandSamples *)local_44,&SStack_21c4,local_40,
                           (SMpegLayer3Granule **)local_dc);
                sound_mp3_cpp_antiAliasingButterfly_FUN_005334b0
                          (SStack_21c4.samples[0] + 1,&fStack_2ac0,pSVar4,local_dc + 4);
                pfVar3 = afStack_18bc;
                local_58 = local_40;
                local_48 = aSStack_2abc;
                iVar2 = 0;
                do {
                  sound_mp3_cpp_CMP3Decoder_synthesisPoly_FUN_00533ba0
                            (this_ptr,local_48,pfVar3,iVar2,unaff_EBP,local_58,&local_d4);
                  iVar2 = iVar2 + 1;
                  pfVar3 = pfVar3 + 0x12;
                  local_44 = local_44 + 1;
                } while (iVar2 < 0x20);
                local_40 = (SMpegFrame *)0x0;
                iVar2 = 0;
                do {
                  iVar18 = 0;
                  pSVar4 = local_40;
                  do {
                    if ((iVar2 % 2 != 0) && (iVar18 % 2 != 0)) {
                      *(float *)(&stack0x00000000 + (int)&pSVar4[-0xe2].header) =
                           -*(float *)(&stack0x00000000 + (int)&pSVar4[-0xe2].header);
                    }
                    iVar18 = iVar18 + 1;
                    pSVar4 = (SMpegFrame *)&pSVar4[2].samples_per_granule;
                  } while (iVar18 < 0x20);
                  iVar2 = iVar2 + 1;
                  local_40 = (SMpegFrame *)&local_40->channel_mode;
                } while (iVar2 < 0x12);
                iVar2 = 0;
                psVar13 = local_30;
                do {
                  iVar18 = 0;
                  iVar6 = iVar2;
                  do {
                    iVar5 = iVar18 + 4;
                    puVar10 = (uint *)((int)afStack_18bc + iVar6);
                    iVar6 = iVar6 + 0x48;
                    *(uint *)((int)&aSStack_184[0].mpeg_version + iVar18) = *puVar10;
                    iVar18 = iVar5;
                  } while (iVar5 != 0x80);
                  in_stack_ffff9f30 = aSStack_184;
                  iVar2 = iVar2 + 4;
                  in_stack_ffff9f34 = unaff_EBP;
                  sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0
                            (this_ptr,(float *)in_stack_ffff9f30,unaff_EBP,psVar13);
                  psVar13 = psVar13 + 0x20;
                } while (iVar2 != 0x48);
                local_3c = local_3c + 0xa0;
                unaff_EDI = unaff_EDI + 1;
                local_38 = (SMpegFrame *)&local_38[0x52].allocation_table;
                local_34 = local_34 + 0xa0;
                local_30 = local_30 + 0x240;
              } while (unaff_EDI < (int)local_a8);
            }
            local_3c = (byte *)0x0;
            do {
              iVar2 = 0;
              do {
                iVar18 = 0;
                if (0 < local_b8) {
                  iVar6 = iVar2 + (int)local_3c;
                  puVar9 = in_stack_00000008;
                  do {
                    in_stack_00000008 = puVar9 + 1;
                    iVar18 = iVar18 + 1;
                    *puVar9 = *(ushort *)((int)local_33c8 + iVar6);
                    iVar6 = iVar6 + 0x480;
                    puVar9 = in_stack_00000008;
                  } while (iVar18 < local_b8);
                }
                iVar2 = iVar2 + 2;
              } while (iVar2 != 0x40);
              local_3c = (byte *)((int)local_3c + 0x40);
            } while (local_3c != (byte *)0x480);
            local_38 = (SMpegFrame *)&local_38[2].samples_per_granule;
            local_34 = local_34 + 0x48;
            local_74 = (int *)((int)local_74 + 1);
          } while ((int)local_74 < (int)local_ac);
        }
      }
      if (0 < local_104) {
        iStack_c0 = 0;
        local_c4 = in_stack_ffff9f30;
        dVar15 = crt_math_c_round_FUN_005fe6b0
                           ((((double)in_stack_ffff9f34 /
                             g_MpegSampleRateTable[local_110][local_100]) *
                            (double)g_MpegBitrateTable[local_110 + -1][local_10c + 2][local_104]) /
                            (double)in_stack_ffff9f30);
        local_60 = (int)ROUND(dVar15);
        if (local_fc != 0) {
          local_60 = local_60 + 1;
        }
        local_60 = local_60 * (int)in_stack_ffff9f30 -
                   (((this_ptr->file_bitstream).total_bits_read - local_b0) + 0xc);
        iVar2 = 0;
        if (0 < local_60) {
          do {
            sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(&this_ptr->file_bitstream);
            iVar2 = iVar2 + 1;
          } while (iVar2 < local_60);
        }
      }
      return local_ac * 0x240;
    }
  }
  return 0;
}
