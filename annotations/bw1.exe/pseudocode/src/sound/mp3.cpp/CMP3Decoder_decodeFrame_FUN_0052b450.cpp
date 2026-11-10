// Name: sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0052b450
// Address: 0052b450
// Address Range: [[0052b450, 0052c094]]
// Convention: __cdecl
// Signature: int __cdecl sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_0052b450(CMP3Decoder *this_ptr,short *pcm_output)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_0052b450(CMP3Decoder *this_ptr,short *pcm_output)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  SMpegSubbandScalefactors *pSVar6;
  short *psVar7;
  CFileBitStream *pCVar8;
  SMpegFrameHeader **ppSVar9;
  int iVar10;
  uint *puVar11;
  byte bVar12;
  float10 fVar13;
  uint uVar14;
  uint local_60b0;
  uint local_60ac;
  byte local_60a8 [4608];
  byte local_4ea8 [4608];
  short local_3ca8 [2304];
  float local_2aa8 [576];
  float local_21a8 [576];
  SMpegSubbandQuantizedSamples local_18a8 [2304];
  SMpegSubbandScalefactors local_fa8 [768];
  SMpegSubbandScalefactors local_ca8 [768];
  float local_9a8 [192];
  int local_6a8 [124];
  int local_4b8 [6];
  SMpegLayer3GranuleInfo local_4a0 [304];
  SMpegSubbandSCFSI local_370 [256];
  SMpegSubbandAllocation local_270 [256];
  float local_170 [32];
  int local_f0;
  uint local_ec;
  int local_e4;
  int local_e0;
  int local_dc;
  SMpegFrameHeader *local_c0 [2];
  uint local_b8;
  uint local_b4;
  int local_b0;
  uint local_a4;
  uint uStack_a0;
  int local_9c;
  int local_98;
  uint local_94;
  int local_90;
  CFileBitStream *local_8c;
  float *local_88;
  SMpegSubbandScalefactors *local_84;
  CFileBitStream *local_80;
  int local_7c;
  int local_78;
  CFileBitStream *local_74;
  uint local_70;
  SMpegLayer3GranuleInfo *local_6c;
  int local_68;
  uint local_64;
  int local_60;
  byte *local_5c;
  float *local_58;
  int local_54;
  short *local_50;
  SMpegLayer3GranuleInfo *local_4c;
  byte *local_48;
  SMpegLayer3GranuleInfo *local_44;
  short *local_40;
  SMpegLayer3GranuleInfo *local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  float *local_14;
  
  bVar12 = 0;
  local_c0[0] = (SMpegFrameHeader *)&local_f0;
  pCVar8 = &this_ptr->file_bitstream;
  local_b4 = 0xffffffff;
  local_b8 = 0;
  local_94 = 0;
  if ((this_ptr->file_bitstream).error_flag != 0) {
    return 0;
  }
  iVar1 = sound_mp3_cpp_CFileBitStream_syncToPattern_FUN_00525e70(pCVar8,0xfff,0xc);
  if (iVar1 == 0) {
    return 0;
  }
  local_24 = (this_ptr->file_bitstream).total_bits_read;
  sound_mp3_cpp_CFileBitStream_readFrameHeader_FUN_00526340(pCVar8,local_c0);
  sound_mp3_cpp_calculateMpegFrame_FUN_00525840((SMpegFrame *)local_c0);
  local_98 = local_b0;
  local_90 = (*(int *)local_c0[0] != 0) + 1;
  if (local_ec < 2) {
    if (local_ec == 1) {
      local_60ac = 0x20;
      local_60b0 = 0x180;
      sound_mp3_cpp_CFileBitStream_readAllocationTable_FUN_00526530
                (pCVar8,(uint *)local_270,(SMpegFrame *)local_c0);
      sound_mp3_cpp_CFileBitStream_readScalefactors_FUN_005265e0
                (pCVar8,local_270,local_ca8,(SMpegFrame *)local_c0);
      local_28 = 0;
      local_8c = pCVar8;
      do {
        sound_mp3_cpp_CFileBitStream_readQuantizedSamples_FUN_005268e0
                  (local_8c,local_fa8,local_270,(SMpegFrame *)local_c0);
        sound_mp3_cpp_requantizeSamples_FUN_00526f40();
        local_88 = local_9a8;
        local_84 = local_ca8;
        local_60 = 0;
        do {
          iVar1 = 0;
          if (0 < local_b0) {
            pSVar6 = local_84 + local_60;
            pfVar5 = (float *)((int)local_88 + local_60);
            do {
              iVar3 = *(int *)pSVar6;
              pSVar6 = pSVar6 + 0x180;
              iVar1 = iVar1 + 1;
              *pfVar5 = *pfVar5 * (float)*(double *)(&DAT_00620490 + iVar3 * 8);
              pfVar5 = pfVar5 + 0x60;
            } while (iVar1 < local_b0);
          }
          local_60 = local_60 + 4;
        } while (local_60 != 0x80);
        iVar1 = 0;
        local_60 = 0x80;
        if (0 < local_98) {
          pfVar5 = local_9a8;
          psVar7 = local_3ca8;
          do {
            sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_00527280(this_ptr,pfVar5,iVar1,psVar7)
            ;
            iVar1 = iVar1 + 1;
            pfVar5 = pfVar5 + 0x60;
            psVar7 = psVar7 + 0x240;
          } while (iVar1 < local_98);
        }
        local_28 = local_28 + 1;
      } while (local_28 < 0xc);
    }
  }
  else if (local_ec < 3) {
    local_60b0 = 0x480;
    local_60ac = 8;
    sound_mp3_cpp_CFileBitStream_readAllocationValues_FUN_00526400
              (pCVar8,local_270,(SMpegFrame *)local_c0);
    sound_mp3_cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_00526670
              (pCVar8,local_370,local_270,local_ca8,(SMpegFrame *)local_c0);
    local_9c = 0;
    local_80 = pCVar8;
    do {
      sound_mp3_cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_005269e0
                (local_80,local_fa8,local_270,(SMpegFrame *)local_c0);
      sound_mp3_cpp_requantizeLayer3SamplesSimple_FUN_00526c70();
      sound_mp3_cpp_applyScalefactorsToSubbands_FUN_00527080();
      if (pcm_output != (short *)0x0) {
        local_30 = 0;
        local_34 = 0;
        do {
          iVar1 = 0;
          if (0 < local_98) {
            local_14 = (float *)((int)local_9a8 + local_34);
            psVar7 = (short *)((int)local_3ca8 + local_30);
            do {
              sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_00527280
                        (this_ptr,local_14,iVar1,psVar7);
              psVar7 = psVar7 + 0x240;
              iVar1 = iVar1 + 1;
              local_14 = local_14 + 0x60;
            } while (iVar1 < local_98);
          }
          local_30 = local_30 + 0x40;
          local_34 = local_34 + 0x80;
        } while (local_30 != 0xc0);
        local_2c = 0;
        local_9c = 0;
        do {
          iVar1 = 0;
          do {
            iVar3 = 0;
            if (0 < local_98) {
              iVar10 = iVar1 + local_2c;
              psVar7 = pcm_output;
              do {
                pcm_output = psVar7 + 1;
                iVar3 = iVar3 + 1;
                *psVar7 = *(short *)((int)local_3ca8 + iVar10);
                iVar10 = iVar10 + 0x480;
                psVar7 = pcm_output;
              } while (iVar3 < local_98);
            }
            iVar1 = iVar1 + 2;
          } while (iVar1 != 0x40);
          local_2c = local_2c + 0x40;
        } while (local_2c != 0xc0);
      }
      local_9c = local_9c + 1;
    } while (local_9c < 0xc);
  }
  else if (local_ec == 3) {
    local_60ac = 8;
    if (*(int *)local_c0[0] == 0) {
      local_60b0 = 0x240;
    }
    else {
      local_60b0 = 0x480;
    }
    local_74 = &this_ptr->file_bitstream;
    sound_mp3_cpp_CMP3Decoder_readLayer3SideInfo_FUN_00527530
              (this_ptr,local_74,(SMpegLayer3SideInfo *)local_4b8,(SMpegFrame *)local_c0);
    ppSVar9 = local_c0;
    puVar11 = (uint *)&stack0xffff9f34;
    for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar11 = *ppSVar9;
      ppSVar9 = ppSVar9 + (uint)bVar12 * -2 + 1;
      puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
    }
    iVar1 = sound_mp3_cpp_calculateMainDataSize_FUN_0052a880();
    pCVar8 = local_74;
    for (; 0 < iVar1; iVar1 = iVar1 + -1) {
      uVar14 = 8;
      uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_00525cd0(pCVar8,8);
      sound_mp3_cpp_CMP3Decoder_putByte_FUN_00525ff0(this_ptr,uVar2,uVar14);
    }
    uVar2 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_00525ef0(this_ptr);
    uVar14 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_00525ef0(this_ptr);
    uVar2 = uVar2 >> 3;
    if (uVar14 % 8 != 0) {
      uVar2 = uVar2 + 1;
      sound_mp3_cpp_CMP3Decoder_readBits_FUN_00525f00(this_ptr,8 - uVar14 % 8);
    }
    local_78 = (this_ptr->main_data_offset - uVar2) - local_4b8[0];
    if (0x1000 < uVar2) {
      this_ptr->main_data_offset = this_ptr->main_data_offset + -0x1000;
      sound_mp3_cpp_CMP3Decoder_rewindBytes_FUN_005260b0(this_ptr,0x1000);
    }
    ppSVar9 = local_c0;
    puVar11 = (uint *)&stack0xffff9f34;
    for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar11 = *ppSVar9;
      ppSVar9 = ppSVar9 + (uint)bVar12 * -2 + 1;
      puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
    }
    iVar1 = sound_mp3_cpp_calculateMainDataSize_FUN_0052a880();
    this_ptr->main_data_offset = this_ptr->main_data_offset + iVar1;
    if (local_78 < 0) {
      _DAT_01d1d400 = "..\\sound\\mp3.cpp";
      _DAT_01d1d404 = 0x1029;
      core_main_c_FUN_005030e0();
    }
    while (iVar1 = local_78, 0 < local_78) {
      sound_mp3_cpp_CMP3Decoder_readBits_FUN_00525f00(this_ptr,8);
      local_78 = iVar1 + -1;
    }
    if ((pcm_output != (short *)0x0) && (local_7c = 0, 0 < local_90)) {
      local_3c = local_4a0;
      local_38 = 0;
      do {
        iVar1 = 0;
        if (0 < local_98) {
          local_5c = local_60a8;
          do {
            local_70 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_00525ef0(this_ptr);
            if (*(int *)local_c0[0] == 0) {
              sound_mp3_cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_00528210
                        (this_ptr,local_6a8,(SMpegLayer3SideInfo *)local_4b8,local_7c,iVar1,
                         (SMpegFrame *)local_c0);
            }
            else {
              sound_mp3_cpp_CMP3Decoder_readLayer3Scalefactors_FUN_00527ab0
                        (this_ptr,local_6a8,(SMpegLayer3SideInfo *)local_4b8,local_7c,iVar1,
                         (SMpegFrame *)local_c0);
            }
            sound_mp3_cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00528410
                      (this_ptr,local_18a8,(SMpegLayer3SideInfo *)local_4b8,iVar1,local_7c,local_70,
                       (SMpegFrame *)local_c0);
            sound_mp3_cpp_requantizeLayer3Samples_FUN_00528ae0();
            iVar1 = iVar1 + 1;
            local_5c = local_5c + 0x900;
          } while (iVar1 < local_98);
        }
        sound_mp3_cpp_mpegLayer3StereoProcess_FUN_00529370();
        local_20 = 0;
        if (0 < local_98) {
          local_4c = local_4a0 + local_38;
          local_48 = local_4ea8;
          local_40 = local_3ca8;
          local_44 = local_4c;
          do {
            sound_mp3_cpp_reorderShortBlockSamples_FUN_00528f90();
            sound_mp3_cpp_antiAliasingButterfly_FUN_0052a0e0();
            pfVar5 = local_2aa8;
            local_6c = local_4c;
            local_58 = local_21a8;
            iVar1 = 0;
            do {
              sound_mp3_cpp_CMP3Decoder_synthesisPoly_FUN_0052a7d0
                        (this_ptr,pfVar5,local_58,iVar1,local_20,local_6c,
                         (SMpegFrameHeader *)local_c0);
              iVar1 = iVar1 + 1;
              pfVar5 = pfVar5 + 0x12;
              local_58 = local_58 + 0x12;
            } while (iVar1 < 0x20);
            local_54 = 0;
            local_1c = 0;
            do {
              iVar3 = 0;
              iVar1 = local_54;
              do {
                if ((local_1c % 2 != 0) && (local_64 = 2, iVar3 % 2 != 0)) {
                  *(float *)((int)local_21a8 + iVar1) = -*(float *)((int)local_21a8 + iVar1);
                }
                iVar3 = iVar3 + 1;
                iVar1 = iVar1 + 0x48;
              } while (iVar3 < 0x20);
              local_1c = local_1c + 1;
              local_54 = local_54 + 4;
            } while (local_1c < 0x12);
            iVar1 = 0;
            local_50 = local_40;
            do {
              psVar7 = local_50;
              iVar3 = 0;
              iVar10 = iVar1;
              do {
                iVar4 = iVar3 + 4;
                puVar11 = (uint *)((int)local_21a8 + iVar10);
                iVar10 = iVar10 + 0x48;
                *(uint *)((int)local_170 + iVar3) = *puVar11;
                iVar3 = iVar4;
              } while (iVar4 != 0x80);
              sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_00527280
                        (this_ptr,local_170,local_20,local_50);
              iVar1 = iVar1 + 4;
              local_50 = psVar7 + 0x20;
            } while (iVar1 != 0x48);
            local_20 = local_20 + 1;
            local_4c = local_4c + 0xa0;
            local_48 = local_48 + 0x900;
            local_44 = local_44 + 0xa0;
            local_40 = local_40 + 0x240;
          } while (local_20 < local_98);
        }
        local_18 = 0;
        do {
          iVar1 = 0;
          do {
            iVar3 = 0;
            if (0 < local_98) {
              iVar10 = iVar1 + local_18;
              psVar7 = pcm_output;
              do {
                pcm_output = psVar7 + 1;
                iVar3 = iVar3 + 1;
                *psVar7 = *(short *)((int)local_3ca8 + iVar10);
                iVar10 = iVar10 + 0x480;
                psVar7 = pcm_output;
              } while (iVar3 < local_98);
            }
            iVar1 = iVar1 + 2;
          } while (iVar1 != 0x40);
          local_18 = local_18 + 0x40;
        } while (local_18 != 0x480);
        local_3c = local_3c + 0x48;
        local_38 = local_38 + 0x48;
        local_7c = local_7c + 1;
      } while (local_7c < local_90);
    }
  }
  if (0 < local_e4) {
    uStack_a0 = 0;
    local_a4 = local_60ac;
    fVar13 = (((float10)local_60b0 /
              (float10)*(double *)(&DAT_006202e8 + local_f0 * 0x20 + local_e0 * 8)) *
             (float10)*(int *)(&DAT_00620328 +
                              local_e4 * 4 + (local_ec - 1) * 0x3c + local_f0 * 0xb4)) /
             (float10)local_60ac;
    round();
    local_68 = (int)ROUND(fVar13);
    if (local_dc != 0) {
      local_68 = local_68 + 1;
    }
    local_68 = local_68 * local_60ac -
               (((this_ptr->file_bitstream).total_bits_read - local_24) + 0xc);
    iVar1 = 0;
    if (0 < local_68) {
      do {
        sound_mp3_cpp_CFileBitStream_readBit_FUN_00525be0(&this_ptr->file_bitstream);
        iVar1 = iVar1 + 1;
      } while (iVar1 < local_68);
    }
  }
  return local_90 * 0x240;
}
