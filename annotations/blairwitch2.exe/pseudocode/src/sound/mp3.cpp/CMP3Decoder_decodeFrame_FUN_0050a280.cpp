// Name: sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0050a280
// Address: 0050a280
// Address Range: [[0050a280, 0050aec4]]
// Convention: __cdecl
// Signature: int __cdecl sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_0050a280(CMP3Decoder *this_ptr,short *pcm_output)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_0050a280(CMP3Decoder *this_ptr,short *pcm_output)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int *piVar7;
  short *psVar8;
  CFileBitStream *pCVar9;
  SMpegFrameHeader *pSVar10;
  int iVar11;
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
  SMpegSubbandQuantizedSamples local_18a8;
  SMpegSubbandScalefactors local_fa8 [2];
  SMpegSubbandScalefactors local_ca8 [2];
  float local_9a8 [192];
  int local_6a8 [124];
  SMpegLayer3SideInfo local_4b8;
  SMpegSubbandSCFSI local_370 [2];
  SMpegSubbandAllocation local_270 [2];
  float local_170 [32];
  SMpegFrameHeader local_f0;
  SMpegFrameHeader local_c0;
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
  local_c0.mpeg_version = (int)&local_f0;
  pCVar9 = &this_ptr->file_bitstream;
  local_c0.bitrate_index = -1;
  local_c0.protection = 0;
  local_c0.emphasis = 0;
  if ((this_ptr->file_bitstream).error_flag != 0) {
    return 0;
  }
  iVar2 = sound_mp3_cpp_CFileBitStream_syncToPattern_FUN_00504ca0(pCVar9,0xfff,0xc);
  if (iVar2 == 0) {
    return 0;
  }
  local_24 = (this_ptr->file_bitstream).total_bits_read;
  sound_mp3_cpp_CFileBitStream_readFrameHeader_FUN_00505170(pCVar9,(SMpegFrameHeader **)&local_c0);
  sound_mp3_cpp_calculateMpegFrame_FUN_00504670((SMpegFrame *)&local_c0);
  local_c0.original = local_c0.sampling_rate_index;
  local_90 = (*(int *)local_c0.mpeg_version != 0) + 1;
  if ((uint)local_f0.layer < 2) {
    if (local_f0.layer == 1) {
      local_60ac = 0x20;
      local_60b0 = 0x180;
      sound_mp3_cpp_CFileBitStream_readAllocationTable_FUN_00505360
                (pCVar9,(uint *)local_270,(SMpegFrame *)&local_c0);
      sound_mp3_cpp_CFileBitStream_readScalefactors_FUN_00505410
                (pCVar9,local_270,local_ca8,(SMpegFrame *)&local_c0);
      local_28 = 0;
      local_8c = pCVar9;
      do {
        sound_mp3_cpp_CFileBitStream_readQuantizedSamples_FUN_00505710
                  (local_8c,local_fa8,local_270,(SMpegFrame *)&local_c0);
        sound_mp3_cpp_requantizeSamples_FUN_00505d70();
        local_88 = local_9a8;
        local_84 = local_ca8;
        local_60 = 0;
        do {
          iVar2 = 0;
          if (0 < local_c0.sampling_rate_index) {
            piVar7 = (int *)((int)&local_84->codes + local_60);
            pfVar6 = (float *)((int)local_88 + local_60);
            do {
              iVar4 = *piVar7;
              piVar7 = piVar7 + 0x60;
              iVar2 = iVar2 + 1;
              *pfVar6 = *pfVar6 * (float)*(double *)(&DAT_00619030 + iVar4 * 8);
              pfVar6 = pfVar6 + 0x60;
            } while (iVar2 < local_c0.sampling_rate_index);
          }
          local_60 = local_60 + 4;
        } while (local_60 != 0x80);
        iVar2 = 0;
        local_60 = 0x80;
        if (0 < local_c0.original) {
          pfVar6 = local_9a8;
          psVar8 = local_3ca8;
          do {
            sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_005060b0(this_ptr,pfVar6,iVar2,psVar8)
            ;
            iVar2 = iVar2 + 1;
            pfVar6 = pfVar6 + 0x60;
            psVar8 = psVar8 + 0x240;
          } while (iVar2 < local_c0.original);
        }
        local_28 = local_28 + 1;
      } while (local_28 < 0xc);
    }
  }
  else if ((uint)local_f0.layer < 3) {
    local_60b0 = 0x480;
    local_60ac = 8;
    sound_mp3_cpp_CFileBitStream_readAllocationValues_FUN_00505230
              (pCVar9,local_270,(SMpegFrame *)&local_c0);
    sound_mp3_cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_005054a0
              (pCVar9,local_370,local_270,local_ca8,(SMpegFrame *)&local_c0);
    local_c0.copyright = 0;
    local_80 = pCVar9;
    do {
      sound_mp3_cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_00505810
                (local_80,local_fa8,local_270,(SMpegFrame *)&local_c0);
      sound_mp3_cpp_requantizeLayer3SamplesSimple_FUN_00505aa0();
      sound_mp3_cpp_applyScalefactorsToSubbands_FUN_00505eb0();
      if (pcm_output != (short *)0x0) {
        local_30 = 0;
        local_34 = 0;
        do {
          iVar2 = 0;
          if (0 < local_c0.original) {
            local_14 = (float *)((int)local_9a8 + local_34);
            psVar8 = (short *)((int)local_3ca8 + local_30);
            do {
              sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_005060b0
                        (this_ptr,local_14,iVar2,psVar8);
              psVar8 = psVar8 + 0x240;
              iVar2 = iVar2 + 1;
              local_14 = local_14 + 0x60;
            } while (iVar2 < local_c0.original);
          }
          local_30 = local_30 + 0x40;
          local_34 = local_34 + 0x80;
        } while (local_30 != 0xc0);
        local_2c = 0;
        local_c0.copyright = 0;
        do {
          iVar2 = 0;
          do {
            iVar4 = 0;
            if (0 < local_c0.original) {
              iVar11 = iVar2 + local_2c;
              psVar8 = pcm_output;
              do {
                pcm_output = psVar8 + 1;
                iVar4 = iVar4 + 1;
                *psVar8 = *(short *)((int)local_3ca8 + iVar11);
                iVar11 = iVar11 + 0x480;
                psVar8 = pcm_output;
              } while (iVar4 < local_c0.original);
            }
            iVar2 = iVar2 + 2;
          } while (iVar2 != 0x40);
          local_2c = local_2c + 0x40;
        } while (local_2c != 0xc0);
      }
      local_c0.copyright = local_c0.copyright + 1;
    } while (local_c0.copyright < 0xc);
  }
  else if (local_f0.layer == 3) {
    local_60ac = 8;
    if (*(int *)local_c0.mpeg_version == 0) {
      local_60b0 = 0x240;
    }
    else {
      local_60b0 = 0x480;
    }
    local_74 = &this_ptr->file_bitstream;
    sound_mp3_cpp_CMP3Decoder_readLayer3SideInfo_FUN_00506360
              (this_ptr,local_74,&local_4b8,(SMpegFrame *)&local_c0);
    pSVar10 = &local_c0;
    piVar7 = (int *)&stack0xffff9f34;
    for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar7 = pSVar10->mpeg_version;
      pSVar10 = (SMpegFrameHeader *)((int)pSVar10 + ((uint)bVar12 * -2 + 1) * 4);
      piVar7 = piVar7 + (uint)bVar12 * -2 + 1;
    }
    iVar2 = sound_mp3_cpp_calculateMainDataSize_FUN_005096b0();
    pCVar9 = local_74;
    for (; 0 < iVar2; iVar2 = iVar2 + -1) {
      uVar14 = 8;
      uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_00504b00(pCVar9,8);
      sound_mp3_cpp_CMP3Decoder_putByte_FUN_00504e20(this_ptr,uVar3,uVar14);
    }
    uVar3 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_00504d20(this_ptr);
    uVar14 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_00504d20(this_ptr);
    uVar3 = uVar3 >> 3;
    if (uVar14 % 8 != 0) {
      uVar3 = uVar3 + 1;
      sound_mp3_cpp_CMP3Decoder_readBits_FUN_00504d30(this_ptr,8 - uVar14 % 8);
    }
    local_78 = (this_ptr->main_data_offset - uVar3) - local_4b8.main_data_begin;
    if (0x1000 < uVar3) {
      this_ptr->main_data_offset = this_ptr->main_data_offset + -0x1000;
      sound_mp3_cpp_CMP3Decoder_rewindBytes_FUN_00504ee0(this_ptr,0x1000);
    }
    pSVar10 = &local_c0;
    piVar7 = (int *)&stack0xffff9f34;
    for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar7 = pSVar10->mpeg_version;
      pSVar10 = (SMpegFrameHeader *)((int)pSVar10 + ((uint)bVar12 * -2 + 1) * 4);
      piVar7 = piVar7 + (uint)bVar12 * -2 + 1;
    }
    iVar2 = sound_mp3_cpp_calculateMainDataSize_FUN_005096b0();
    this_ptr->main_data_offset = this_ptr->main_data_offset + iVar2;
    if (local_78 < 0) {
      _DAT_01d046a0 = "..\\sound\\mp3.cpp";
      _DAT_01d046a4 = 0x1029;
      core_main_c_FUN_004e4500();
    }
    while (iVar2 = local_78, 0 < local_78) {
      sound_mp3_cpp_CMP3Decoder_readBits_FUN_00504d30(this_ptr,8);
      local_78 = iVar2 + -1;
    }
    if ((pcm_output != (short *)0x0) && (local_7c = 0, 0 < local_90)) {
      local_3c = local_4b8.channels[0].granules;
      local_38 = 0;
      do {
        iVar2 = 0;
        if (0 < local_c0.original) {
          local_5c = local_60a8;
          do {
            local_70 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_00504d20(this_ptr);
            if (*(int *)local_c0.mpeg_version == 0) {
              sound_mp3_cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_00507040
                        (this_ptr,local_6a8,&local_4b8,local_7c,iVar2,(SMpegFrame *)&local_c0);
            }
            else {
              sound_mp3_cpp_CMP3Decoder_readLayer3Scalefactors_FUN_005068e0
                        (this_ptr,local_6a8,&local_4b8,local_7c,iVar2,(SMpegFrame *)&local_c0);
            }
            sound_mp3_cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00507240
                      (this_ptr,&local_18a8,&local_4b8,iVar2,local_7c,local_70,
                       (SMpegFrame *)&local_c0);
            sound_mp3_cpp_requantizeLayer3Samples_FUN_00507910();
            iVar2 = iVar2 + 1;
            local_5c = local_5c + 0x900;
          } while (iVar2 < local_c0.original);
        }
        sound_mp3_cpp_mpegLayer3StereoProcess_FUN_005081a0();
        local_20 = 0;
        if (0 < local_c0.original) {
          local_4c = (SMpegLayer3GranuleInfo *)
                     ((int)local_4b8.channels[0].granules[0].table_select + local_38 + -0x1c);
          local_48 = local_4ea8;
          local_40 = local_3ca8;
          local_44 = local_4c;
          do {
            sound_mp3_cpp_reorderShortBlockSamples_FUN_00507dc0();
            sound_mp3_cpp_antiAliasingButterfly_FUN_00508f10();
            pfVar6 = local_2aa8;
            local_6c = local_4c;
            local_58 = local_21a8;
            iVar2 = 0;
            do {
              sound_mp3_cpp_CMP3Decoder_synthesisPoly_FUN_00509600
                        (this_ptr,pfVar6,local_58,iVar2,local_20,local_6c,&local_c0);
              iVar2 = iVar2 + 1;
              pfVar6 = pfVar6 + 0x12;
              local_58 = local_58 + 0x12;
            } while (iVar2 < 0x20);
            local_54 = 0;
            local_1c = 0;
            do {
              iVar4 = 0;
              iVar2 = local_54;
              do {
                if ((local_1c % 2 != 0) && (local_64 = 2, iVar4 % 2 != 0)) {
                  *(float *)((int)local_21a8 + iVar2) = -*(float *)((int)local_21a8 + iVar2);
                }
                iVar4 = iVar4 + 1;
                iVar2 = iVar2 + 0x48;
              } while (iVar4 < 0x20);
              local_1c = local_1c + 1;
              local_54 = local_54 + 4;
            } while (local_1c < 0x12);
            iVar2 = 0;
            local_50 = local_40;
            do {
              psVar8 = local_50;
              iVar4 = 0;
              iVar11 = iVar2;
              do {
                iVar5 = iVar4 + 4;
                puVar1 = (uint *)((int)local_21a8 + iVar11);
                iVar11 = iVar11 + 0x48;
                *(uint *)((int)local_170 + iVar4) = *puVar1;
                iVar4 = iVar5;
              } while (iVar5 != 0x80);
              sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_005060b0
                        (this_ptr,local_170,local_20,local_50);
              iVar2 = iVar2 + 4;
              local_50 = psVar8 + 0x20;
            } while (iVar2 != 0x48);
            local_20 = local_20 + 1;
            local_4c = (SMpegLayer3GranuleInfo *)&local_4c[2].window_switching_flag;
            local_48 = local_48 + 0x900;
            local_44 = (SMpegLayer3GranuleInfo *)&local_44[2].window_switching_flag;
            local_40 = local_40 + 0x240;
          } while (local_20 < local_c0.original);
        }
        local_18 = 0;
        do {
          iVar2 = 0;
          do {
            iVar4 = 0;
            if (0 < local_c0.original) {
              iVar11 = iVar2 + local_18;
              psVar8 = pcm_output;
              do {
                pcm_output = psVar8 + 1;
                iVar4 = iVar4 + 1;
                *psVar8 = *(short *)((int)local_3ca8 + iVar11);
                iVar11 = iVar11 + 0x480;
                psVar8 = pcm_output;
              } while (iVar4 < local_c0.original);
            }
            iVar2 = iVar2 + 2;
          } while (iVar2 != 0x40);
          local_18 = local_18 + 0x40;
        } while (local_18 != 0x480);
        local_3c = local_3c + 1;
        local_38 = local_38 + 0x48;
        local_7c = local_7c + 1;
      } while (local_7c < local_90);
    }
  }
  if (0 < local_f0.bitrate_index) {
    local_c0.mode_extension = 0;
    local_c0.channel_mode = local_60ac;
    fVar13 = (((float10)local_60b0 /
              (float10)*(double *)
                        (&DAT_00618e88 +
                        local_f0.mpeg_version * 0x20 + local_f0.sampling_rate_index * 8)) *
             (float10)*(int *)(&DAT_00618ec8 +
                              local_f0.bitrate_index * 4 +
                              (local_f0.layer - 1U) * 0x3c + local_f0.mpeg_version * 0xb4)) /
             (float10)local_60ac;
    round();
    local_68 = (int)ROUND(fVar13);
    if (local_f0.padding != 0) {
      local_68 = local_68 + 1;
    }
    local_68 = local_68 * local_60ac -
               (((this_ptr->file_bitstream).total_bits_read - local_24) + 0xc);
    iVar2 = 0;
    if (0 < local_68) {
      do {
        sound_mp3_cpp_CFileBitStream_readBit_FUN_00504a10(&this_ptr->file_bitstream);
        iVar2 = iVar2 + 1;
      } while (iVar2 < local_68);
    }
  }
  return local_90 * 0x240;
}
