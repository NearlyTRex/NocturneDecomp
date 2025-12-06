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
  short *psVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  ushort *puVar12;
  BADSPACEBASE *in_ESP;
  uint *puVar13;
  uint *puVar14;
  SMpegLayer3Granule *granule_info;
  byte bVar15;
  float10 fVar16;
  double dVar17;
  short *unaff_retaddr;
  ushort *in_stack_00000008;
  int in_stack_00000020;
  int in_stack_00000024;
  int iStack00000028;
  uint uVar18;
  uint uVar19;
  CFileBitStream *pCVar20;
  CMP3Decoder *side_info_array;
  SMpegLayer3Granule *in_stack_ffff9f44;
  CMP3Decoder *in_stack_ffff9f48;
  CMP3Decoder *pCVar21;
  CMP3Decoder *in_stack_ffff9f50;
  uint in_stack_ffff9f54;
  float afStack_6094 [1151];
  byte auStack_4e98 [6892];
  short asStack_33ac [6];
  short asStack_33a0 [4];
  ushort auStack_3398 [1156];
  float fStack_2a90;
  SMpegFrame aSStack_2a8c [82];
  SMpegSubbandSamples SStack_2194;
  float afStack_188c [565];
  byte auStack_fb8 [12];
  int aiStack_fac [190];
  byte auStack_cb4 [8];
  SMpegSubbandScalefactors SStack_cac;
  byte auStack_9b0 [16];
  float afStack_9a0 [191];
  int aiStack_6a4 [2];
  int iStack_69c;
  SMpegScalefactorBandData SStack_698;
  char local_4d8;
  byte auStack_4b4 [36];
  byte auStack_490 [280];
  SMpegSubbandSCFSI SStack_378;
  byte auStack_280 [8];
  byte auStack_278 [8];
  uint auStack_270 [71];
  float afStack_154 [17];
  byte local_110 [20];
  int local_fc;
  uint uStack_f8;
  int local_f0;
  int iStack_ec;
  int iStack_e8;
  byte *local_e0;
  byte local_d8 [12];
  byte local_cc [4];
  byte local_c8 [8];
  byte auStack_c0 [8];
  uint local_b8;
  SMpegLayer3Granule *local_b4;
  SMpegLayer3Granule *local_b0;
  SMpegLayer3Granule *local_ac;
  int local_a8;
  SMpegFrameHeader *local_a4;
  uint local_a0;
  uint local_9c;
  int local_98;
  byte *local_94;
  int local_90;
  int local_8c;
  SMpegFrameHeader *local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  CFileBitStream *local_70;
  byte *local_64;
  int *local_60;
  CFileBitStream *local_5c;
  CFileBitStream *local_58;
  CFileBitStream *local_50;
  int local_4c;
  int local_48;
  uint local_44;
  SMpegFrame *local_40;
  byte *local_3c;
  SMpegSubbandSamples *local_2c;
  SMpegFrame *local_28;
  SMpegFrame *local_18;
  float (*local_14) [18];
  SMpegFrame *frame_info_01;
  
  bVar15 = 0;
  local_e0 = local_110;
  local_b0 = (SMpegLayer3Granule *)0x0;
  local_d8._4_4_ = (int *)0xffffffff;
  local_d8._0_4_ = 0;
  local_b4 = (SMpegLayer3Granule *)0x0;
  pCVar20 = &this_ptr->file_bitstream;
  if ((this_ptr->file_bitstream).error_flag == 0) {
    local_a8 = 0xfff;
    local_a4 = (SMpegFrameHeader *)0x1fff;
    uVar10 = (this_ptr->file_bitstream).total_bits_read & 7;
    if (uVar10 != 0) {
      sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(pCVar20,8 - uVar10);
    }
    uVar10 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(pCVar20,0xc);
    while (((local_9c & uVar10) != local_a0 && ((this_ptr->file_bitstream).error_flag == 0))) {
      uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(pCVar20,8);
      uVar10 = uVar10 << 8 | uVar1;
    }
    if ((this_ptr->file_bitstream).error_flag == 0) {
      local_a8 = (this_ptr->file_bitstream).total_bits_read;
      uVar18 = 0x534e49;
      sound_mp3_cpp_CFileBitStream_readFrameHeader_FUN_0052f5b0
                (&this_ptr->file_bitstream,(SMpegFrameHeader *)local_d8);
      uVar19 = local_d8._4_4_;
      local_d8._8_4_ = *(int *)(local_d8._4_4_ + 0x1c);
      local_c8._4_4_ = (local_d8._8_4_ != 3) + 1;
      if (*(int *)(local_d8._4_4_ + 4) == 2) {
        local_90 = auStack_c0._4_4_;
        local_80 = *(int *)local_d8._4_4_;
        local_8c = 1;
        local_88 = *(SMpegFrameHeader **)(local_d8._4_4_ + 0xc);
        fVar16 = (float10)g_MpegSampleRateTable[local_80][*(int *)(local_d8._4_4_ + 0x10)];
        local_94 = local_d8 + 4;
        dVar17 = crt_math_c_round_FUN_005fe6b0
                           ((double)CONCAT44 /* combine 2-byte values */(*(int *)(local_d8._4_4_ + 0x10) * 8 + local_80 * 0x20,
                                             g_MpegBitrateTable[local_80][1][(int)local_88] /
                                             (int)local_c8._4_4_));
        iVar2 = SUB84 /* extract 2-byte value */(dVar17,0);
        local_80 = (int)ROUND(fVar16);
        if (local_7c == 1) {
          if (((local_80 == 0x30) && (0x37 < iVar2)) || ((0x37 < iVar2 && (iVar2 < 0x51)))) {
            iVar2 = 0;
          }
          else if ((local_80 == 0x30) || (iVar2 < 0x60)) {
            if ((local_80 == 0x20) || (0x30 < iVar2)) {
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
        if (iVar2 != *(int *)(local_90 + 0xc)) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0x1a2;
          core_main_c_displayErrorAndQuit_FUN_00506f10("MPEG Layer 2 - pick_table - can't load tables!  File: %s");
        }
        auStack_c0._4_4_ = local_88;
      }
      else {
        auStack_c0._4_4_ = (SMpegFrameHeader *)0x20;
      }
      auStack_c0._0_4_ = auStack_c0._4_4_;
      if (*(int *)(uVar19 + 0x1c) == 1) {
        local_74 = *(int *)(uVar19 + 4);
        iVar2 = *(int *)(uVar19 + 0x20);
        if ((((local_74 < 1) || (3 < local_74)) || (iVar2 < 0)) || (3 < iVar2)) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0x1b2;
          core_main_c_displayErrorAndQuit_FUN_00506f10("js_bound bad layer/modext (%d/%d)  File: %s");
        }
        auStack_c0._0_4_ = (SMpegFrameHeader *)g_MpegLayer2AllocationTables[local_74][iVar2];
      }
      local_a4 = (SMpegFrameHeader *)auStack_c0._4_4_;
      local_98 = (*(int *)local_cc != 0) + 1;
      pCVar20 = &this_ptr->file_bitstream;
      if (uStack_f8 < 2) {
        if (uStack_f8 == 1) {
          in_stack_ffff9f48 = (CMP3Decoder *)0x180;
          sound_mp3_cpp_CFileBitStream_readAllocationTable_FUN_0052f7a0
                    (pCVar20,(uint *)(auStack_280 + 4),(SBitAllocationTable *)local_cc);
          sound_mp3_cpp_CFileBitStream_readScalefactors_FUN_0052f850
                    (pCVar20,(SMpegSubbandAllocation *)auStack_280,
                     (SMpegSubbandScalefactors *)auStack_fb8,(SBitAllocationTable *)(local_d8 + 8));
          iVar2 = 0;
          local_70 = pCVar20;
          do {
            sound_mp3_cpp_CFileBitStream_readQuantizedSamples_FUN_0052fb50
                      (local_70,(SMpegSubbandScalefactors *)auStack_cb4,
                       (SMpegSubbandAllocation *)(auStack_280 + 4),(SBitAllocationTable *)local_cc);
            in_stack_ffff9f44 = (SMpegLayer3Granule *)local_c8;
            sound_mp3_cpp_requantizeSamples_FUN_005301b0
                      ((SMpegSubbandScalefactors *)(auStack_cb4 + 4),
                       (SMpegSubbandScalefactors *)auStack_9b0,(SMpegSubbandAllocation *)auStack_278
                       ,(SMpegFrameHeader *)in_stack_ffff9f44);
            local_64 = auStack_9b0 + 4;
            local_60 = aiStack_fac;
            local_40 = (SMpegFrame *)0x0;
            do {
              iVar6 = 0;
              if (0 < (int)local_b4) {
                piVar11 = (int *)((int)local_60 + (int)local_40);
                pfVar3 = (float *)(local_64 + (int)local_40);
                do {
                  iVar8 = *piVar11;
                  piVar11 = piVar11 + 0x60;
                  iVar6 = iVar6 + 1;
                  *pfVar3 = *pfVar3 * (float)g_MpegScalefactorTable[iVar8];
                  pfVar3 = pfVar3 + 0x60;
                } while (iVar6 < (int)local_b4);
              }
              local_40 = (SMpegFrame *)((int)local_40 + 4);
            } while (local_40 != (SMpegFrame *)0x80);
            iVar6 = 0;
            local_40 = (SMpegFrame *)0x80;
            if (0 < (int)local_9c) {
              pfVar3 = (float *)(auStack_9b0 + 4);
              psVar7 = asStack_33ac;
              do {
                sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0
                          (this_ptr,pfVar3,iVar6,psVar7);
                iVar6 = iVar6 + 1;
                pfVar3 = pfVar3 + 0x60;
                psVar7 = psVar7 + 0x240;
              } while (iVar6 < (int)local_a4);
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < 0xc);
        }
      }
      else if (uStack_f8 < 3) {
        sound_mp3_cpp_CFileBitStream_readAllocationValues_FUN_0052f670
                  (pCVar20,(SMpegSubbandAllocation *)(auStack_280 + 4),
                   (SBitAllocationTable *)local_cc);
        sound_mp3_cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_0052f8e0
                  (pCVar20,&SStack_378,(SMpegSubbandAllocation *)auStack_278,
                   (SMpegSubbandScalefactors *)(auStack_fb8 + 8),(SBitAllocationTable *)local_c8);
        local_a0 = 0;
        local_5c = pCVar20;
        do {
          sound_mp3_cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_0052fc50
                    (local_5c,&SStack_cac,(SMpegSubbandAllocation *)(auStack_278 + 4),
                     (SBitAllocationTable *)(local_c8 + 4));
          sound_mp3_cpp_requantizeLayer3Samples_FUN_0052fee0
                    (SStack_cac.codes[0] + 1,auStack_270,(float *)(auStack_9b0 + 8),
                     (SMpegFrame *)auStack_c0);
          in_stack_ffff9f48 = (CMP3Decoder *)(aiStack_fac + 2);
          in_stack_ffff9f44 = (SMpegLayer3Granule *)(auStack_9b0 + 0xc);
          sound_mp3_cpp_applyScalefactorsToSubbands_FUN_005302f0
                    ((float *)in_stack_ffff9f44,(int *)in_stack_ffff9f48,
                     (SMpegFrame *)(auStack_c0 + 4),local_98 >> 2);
          if (in_stack_00000008 != (ushort *)0x0) {
            iVar6 = 0;
            iVar2 = 0;
            do {
              iVar8 = 0;
              if (0 < local_90) {
                pfVar3 = (float *)((int)afStack_9a0 + iVar2);
                do {
                  in_stack_ffff9f44 = (SMpegLayer3Granule *)0x5354fd;
                  in_stack_ffff9f48 = this_ptr;
                  sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0
                            (this_ptr,pfVar3,iVar8,(short *)((int)asStack_33a0 + iVar6));
                  iVar8 = iVar8 + 1;
                  pfVar3 = pfVar3 + 0x60;
                  iVar2 = iVar2 + 0x480;
                } while (iVar8 < local_8c);
              }
              iVar6 = iVar6 + 0x40;
              iVar2 = iVar2 + 0x80;
            } while (iVar6 != 0xc0);
            this_ptr = (CMP3Decoder *)0x0;
            local_94 = (byte *)0x0;
            do {
              iVar2 = 0;
              do {
                iVar6 = 0;
                if (0 < local_90) {
                  psVar7 = (short *)(this_ptr->filename + iVar2);
                  puVar12 = in_stack_00000008;
                  do {
                    in_stack_00000008 = puVar12 + 1;
                    iVar6 = iVar6 + 1;
                    *puVar12 = *(ushort *)((int)asStack_33a0 + (int)psVar7);
                    psVar7 = psVar7 + 0x240;
                    puVar12 = in_stack_00000008;
                  } while (iVar6 < local_90);
                }
                iVar2 = iVar2 + 2;
              } while (iVar2 != 0x40);
              this_ptr = (CMP3Decoder *)(this_ptr->filename + 0x40);
            } while (this_ptr != (CMP3Decoder *)0xc0);
          }
          local_a0 = local_a0 + 1;
        } while ((int)local_a0 < 0xc);
      }
      else if (uStack_f8 == 3) {
        iVar6 = 8;
        pSVar4 = (SMpegFrame *)local_cc;
        side_info_array = (CMP3Decoder *)&stack0xfffffb3c;
        pCVar20 = &this_ptr->file_bitstream;
        uVar19 = 0x535611;
        pCVar21 = this_ptr;
        local_58 = pCVar20;
        sound_mp3_cpp_CMP3Decoder_readLayer3SideInfo_FUN_005307a0
                  (this_ptr,pCVar20,(SMpegLayer3Granule *)side_info_array,pSVar4);
        puVar13 = (uint *)local_c8;
        puVar14 = (uint *)&stack0xffff9f2c;
        for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar14 = *puVar13;
          puVar13 = puVar13 + (uint)bVar15 * -2 + 1;
          puVar14 = puVar14 + (uint)bVar15 * -2 + 1;
        }
        frame_info.channel_mode = uVar19;
        frame_info.header = (SMpegFrameHeader *)uVar18;
        frame_info.allocation_table = (SBitAllocationTable *)pCVar21;
        frame_info.table_index = (int)pCVar20;
        frame_info.samples_per_granule = (int)side_info_array;
        frame_info.js_bound = (int)pSVar4;
        frame_info.sblimit = iVar6;
        iVar2 = sound_mp3_cpp_calculateMainDataSize_FUN_00533c50(frame_info);
        pCVar20 = local_50;
        for (; 0 < iVar2; iVar2 = iVar2 + -1) {
          uVar10 = 8;
          pSVar4 = (SMpegFrame *)sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(pCVar20,8);
          side_info_array = this_ptr;
          sound_mp3_cpp_CMP3Decoder_putByte_FUN_0052f260(this_ptr,(uint)pSVar4,uVar10);
        }
        in_stack_ffff9f44 = (SMpegLayer3Granule *)0x535669;
        uVar10 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
        in_stack_ffff9f48 = (CMP3Decoder *)0x535677;
        pCVar21 = this_ptr;
        uVar1 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
        uVar10 = uVar10 >> 3;
        if (uVar1 % in_stack_ffff9f54 != 0) {
          in_stack_ffff9f50 = (CMP3Decoder *)(in_stack_ffff9f54 - uVar1 % in_stack_ffff9f54);
          uVar10 = uVar10 + 1;
          in_stack_ffff9f48 = (CMP3Decoder *)0x535694;
          pCVar21 = this_ptr;
          sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170(this_ptr,(uint)in_stack_ffff9f50);
        }
        local_48 = (this_ptr->field8_0x534c - uVar10) - auStack_4b4._4_4_;
        if (0x1000 < uVar10) {
          in_stack_ffff9f54 = 0x1000;
          this_ptr->field8_0x534c = this_ptr->field8_0x534c + -0x1000;
          pCVar21 = (CMP3Decoder *)0x5356da;
          in_stack_ffff9f50 = this_ptr;
          sound_mp3_cpp_CMP3Decoder_rewindBytes_FUN_0052f320(this_ptr,0x1000);
        }
        puVar13 = &local_b8;
        puVar14 = (uint *)&stack0xffff9f3c;
        for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar14 = *puVar13;
          puVar13 = puVar13 + (uint)bVar15 * -2 + 1;
          puVar14 = puVar14 + (uint)bVar15 * -2 + 1;
        }
        frame_info_00.channel_mode = (int)pSVar4;
        frame_info_00.header = (SMpegFrameHeader *)side_info_array;
        frame_info_00.allocation_table = (SBitAllocationTable *)in_stack_ffff9f44;
        frame_info_00.table_index = (int)in_stack_ffff9f48;
        frame_info_00.samples_per_granule = (int)pCVar21;
        frame_info_00.js_bound = (int)in_stack_ffff9f50;
        frame_info_00.sblimit = in_stack_ffff9f54;
        iVar2 = sound_mp3_cpp_calculateMainDataSize_FUN_00533c50(frame_info_00);
        this_ptr->field8_0x534c = this_ptr->field8_0x534c + iVar2;
        if ((int)local_44 < 0) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0xf9a;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Not enough main data to decode frame %d.");
        }
        while (pSVar4 = local_40, 0 < (int)local_40) {
          sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170(this_ptr,8);
          local_3c = (byte *)((int)&pSVar4[-1].sblimit + 3);
        }
        if ((in_stack_00000008 != (ushort *)0x0) && (local_44 = 0, 0 < local_7c)) {
          pSVar4 = (SMpegFrame *)auStack_490;
          iVar2 = 0;
          do {
            iVar6 = 0;
            if (0 < (int)local_88) {
              local_28 = (SMpegFrame *)auStack_4e98;
              granule_info = (SMpegLayer3Granule *)(auStack_490 + iVar2);
              do {
                local_44 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
                if (*(int *)auStack_c0._4_4_ == 0) {
                  sound_mp3_cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_00531480
                            (this_ptr,aiStack_6a4,(SMpegLayer3Granule *)auStack_4b4,(int)local_50,
                             iVar6,(SMpegFrame *)(auStack_c0 + 4));
                }
                else {
                  sound_mp3_cpp_CMP3Decoder_readLayer3Scalefactors_FUN_00530d20
                            (this_ptr,aiStack_6a4,(SMpegLayer3Granule *)auStack_4b4,(int)local_50,
                             iVar6,(SMpegFrame *)(auStack_c0 + 4));
                }
                sound_mp3_cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00531680
                          (this_ptr,(float *)(auStack_4e98 + 0x11f8),
                           (SMpegLayer3Granule *)(auStack_4b4 + 4),iVar6,local_4c,local_40,
                           (int)&local_b8);
                in_stack_ffff9f44 = (SMpegLayer3Granule *)(auStack_4e98 + 0x11fc);
                sound_mp3_cpp_requantizeLayer3Samples_FUN_00531d50
                          ((SMpegSubbandQuantizedSamples *)in_stack_ffff9f44,local_2c,&iStack_69c,
                           granule_info,iVar6,&local_b4);
                iVar6 = iVar6 + 1;
                granule_info = granule_info + 1;
                local_28 = (SMpegFrame *)((int)local_28 + 0x900);
              } while (iVar6 < (int)local_88);
            }
            in_stack_ffff9f48 = (CMP3Decoder *)0x5358de;
            sound_mp3_cpp_mpegLayer3StereoProcess_FUN_005325e0
                      ((SMpegStereoSubbandSamples *)auStack_4e98,
                       (SMpegStereoSubbandSamples *)&stack0xffff9f68,&SStack_698,pSVar4,&local_b0);
            if (0 < local_84) {
              local_18 = (SMpegFrame *)((int)unaff_retaddr + (int)(auStack_490 + 4));
              local_14 = (float (*) [18])afStack_6094;
              frame_info_01 = local_18;
              do {
                sound_mp3_cpp_reorderShortBlockSamples_FUN_00532200
                          ((SMpegSubbandSamples *)local_14,&SStack_2194,frame_info_01,&local_ac);
                sound_mp3_cpp_antiAliasingButterfly_FUN_005334b0
                          (SStack_2194.samples[0] + 1,&fStack_2a90,frame_info_01,&local_a8);
                pfVar3 = afStack_188c;
                local_18 = aSStack_2a8c;
                iVar6 = 0;
                local_28 = frame_info_01;
                do {
                  sound_mp3_cpp_CMP3Decoder_synthesisPoly_FUN_00533ba0
                            (this_ptr,local_18,pfVar3,iVar6,in_stack_00000020,local_28,&local_a4);
                  iVar6 = iVar6 + 1;
                  pfVar3 = pfVar3 + 0x12;
                  local_14 = local_14 + 1;
                } while (iVar6 < 0x20);
                frame_info_01 = (SMpegFrame *)0x0;
                iStack00000028 = 0;
                do {
                  iVar8 = 0;
                  iVar6 = (int)frame_info_01;
                  do {
                    if ((iStack00000028 % 2 != 0) && (iVar8 % 2 != 0)) {
                      *(float *)((int)afStack_188c + iVar6 + 4) =
                           -*(float *)((int)afStack_188c + iVar6 + 4);
                    }
                    iVar8 = iVar8 + 1;
                    iVar6 = iVar6 + 0x48;
                  } while (iVar8 < 0x20);
                  iStack00000028 = iStack00000028 + 1;
                  frame_info_01 = (SMpegFrame *)((int)frame_info_01 + 4);
                } while (iStack00000028 < 0x12);
                iVar6 = 0;
                psVar7 = unaff_retaddr;
                do {
                  iVar8 = 0;
                  iVar9 = iVar6;
                  do {
                    iVar5 = iVar8 + 4;
                    puVar13 = (uint *)((int)afStack_188c + iVar9);
                    iVar9 = iVar9 + 0x48;
                    *(uint *)((int)afStack_154 + iVar8) = *puVar13;
                    iVar8 = iVar5;
                  } while (iVar5 != 0x80);
                  iVar6 = iVar6 + 4;
                  sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0
                            (this_ptr,afStack_154,in_stack_00000020,psVar7);
                  psVar7 = psVar7 + 0x20;
                } while (iVar6 != 0x48);
                pSVar4 = (SMpegFrame *)&pSVar4[0x52].allocation_table;
                iVar2 = iVar2 + 0xa0;
                unaff_retaddr = unaff_retaddr + 0x240;
                in_stack_00000024 = in_stack_00000024 + 1;
              } while (in_stack_00000024 < local_78);
            }
            iVar6 = 0;
            do {
              iVar8 = 0;
              do {
                iVar9 = 0;
                if (0 < (int)local_88) {
                  iVar5 = iVar8 + iVar6;
                  puVar12 = in_stack_00000008;
                  do {
                    in_stack_00000008 = puVar12 + 1;
                    iVar9 = iVar9 + 1;
                    *puVar12 = *(ushort *)((int)auStack_3398 + iVar5);
                    iVar5 = iVar5 + 0x480;
                    puVar12 = in_stack_00000008;
                  } while (iVar9 < (int)local_88);
                }
                iVar8 = iVar8 + 2;
              } while (iVar8 != 0x40);
              iVar6 = iVar6 + 0x40;
            } while (iVar6 != 0x480);
            pSVar4 = (SMpegFrame *)&pSVar4[2].samples_per_granule;
            iVar2 = iVar2 + 0x48;
            local_44 = local_44 + 1;
          } while ((int)local_44 < local_7c);
        }
      }
      if (0 < local_f0) {
        local_ac = (SMpegLayer3Granule *)0x0;
        fVar16 = (((float10)in_stack_ffff9f48 / (float10)g_MpegSampleRateTable[local_fc][iStack_ec])
                 * (float10)g_MpegBitrateTable[local_fc + -1][uStack_f8 + 2][local_f0]) /
                 (float10)in_stack_ffff9f44;
        local_b0 = in_stack_ffff9f44;
        crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(in_stack_ffff9f48,in_stack_ffff9f44));
        local_4c = (int)ROUND(fVar16);
        if (iStack_e8 != 0) {
          local_4c = local_4c + 1;
        }
        local_4c = local_4c * (int)in_stack_ffff9f44 -
                   (((this_ptr->file_bitstream).total_bits_read - local_9c) + 0xc);
        iVar2 = 0;
        if (0 < local_4c) {
          do {
            sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(&this_ptr->file_bitstream);
            iVar2 = iVar2 + 1;
          } while (iVar2 < local_4c);
        }
      }
      return local_98 * 0x240;
    }
  }
  return 0;
}
