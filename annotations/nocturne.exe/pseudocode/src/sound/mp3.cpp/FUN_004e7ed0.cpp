// Name: sound_mp3.cpp_FUN_004e7ed0
// Address: 004e7ed0
// Address Range: [[004e7ed0, 004e825f]]
// Convention: __cdecl
// Signature: int __cdecl sound_mp3_cpp_FUN_004e7ed0(CMP3Decoder *this_ptr,_FILE *file_handle,int file_size)

#include "nocturne.h"

int __cdecl sound_mp3_cpp_FUN_004e7ed0(CMP3Decoder *this_ptr,_FILE *file_handle,int file_size)

{
  SMpegFrameHeader *pSVar1;
  long lVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  CFileBitStream *pCVar8;
  double dVar9;
  CMP3Decoder *unaff_retaddr;
  SMpegFrameHeader **header_out;
  SMpegFrameHeader local_78;
  SMpegFrameHeader *local_48;
  int local_44;
  int iStack_40;
  int local_38;
  ulong local_34;
  ulong local_30;
  int local_2c;
  int local_28;
  int local_24;
  SMpegFrameHeader **local_20;
  ulong local_1c;
  int local_18;
  
  sound_mp3_cpp_CMP3Decoder_free_FUN_004e8260(this_ptr);
  local_1c = 0x1000;
  pCVar8 = &this_ptr->file_bitstream;
  local_24 = file_size;
  if (pCVar8->file_handle != (_FILE *)0x0) {
    _fclose(pCVar8->file_handle);
    pCVar8->file_handle = (_FILE *)0x0;
  }
  pcVar3 = (this_ptr->file_bitstream).buffer;
  if (pcVar3 != (char *)0x0) {
    FUN_005638d0(pcVar3);
    (this_ptr->file_bitstream).buffer = (char *)0x0;
  }
  pCVar8->file_handle = file_handle;
  lVar2 = _ftell(file_handle);
  (this_ptr->file_bitstream).stream_start_position = lVar2;
  (this_ptr->file_bitstream).stream_length = local_24;
  (this_ptr->file_bitstream).buffer_size = local_1c;
  pcVar3 = (char *)malloc(local_1c);
  (this_ptr->file_bitstream).buffer = pcVar3;
  if (pcVar3 == (char *)0x0) {
    PTR_01cc4800 = "..\\sound\\mp3.cpp";
    INT_01cc4804 = 0x1ff;
    core_main_c_FUN_004c8440("Out of memory.  File: %s",&DAT_01cd8b28);
  }
  _fseek(pCVar8->file_handle,(this_ptr->file_bitstream).stream_start_position,0);
  (this_ptr->file_bitstream).current_byte_index = 0;
  (this_ptr->file_bitstream).bits_available = 0;
  (this_ptr->file_bitstream).total_bits_read = 0;
  (this_ptr->file_bitstream).bytes_remaining = (this_ptr->file_bitstream).stream_length;
  (this_ptr->file_bitstream).end_of_stream_flag = 0;
  pCVar8 = &this_ptr->file_bitstream;
  (this_ptr->file_bitstream).error_flag = 0;
  uVar7 = (this_ptr->file_bitstream).total_bits_read & 7;
  if (uVar7 != 0) {
    sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(pCVar8,8 - uVar7);
  }
  uVar7 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(pCVar8,0xc);
  while (((uVar7 & 0x1fff) != 0xfff && ((this_ptr->file_bitstream).error_flag == 0))) {
    uVar4 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(pCVar8,8);
    uVar7 = uVar7 << 8 | uVar4;
  }
  header_out = &local_48;
  local_48 = &local_78;
  sound_mp3_cpp_CFileBitStream_readFrameHeader_FUN_004e3130(&this_ptr->file_bitstream,header_out);
  pSVar1 = local_48;
  local_44 = local_48->channel_mode;
  local_38 = (local_44 != 3) + 1;
  if (local_48->layer == 2) {
    local_18 = local_30;
    local_2c = local_48->layer + -1;
    local_28 = local_48->bitrate_index;
    iVar6 = local_48->mpeg_version;
    iVar5 = *(int *)(&DAT_005bbc88 + local_28 * 4 + iVar6 * 0xb4 + local_2c * 0x3c) / local_38;
    header_out = (SMpegFrameHeader **)0x4e80e5;
    local_20 = &local_48;
    dVar9 = round
                      (*(double *)(&DAT_005bbc48 + local_48->sampling_rate_index * 8 + iVar6 * 0x20)
                      );
    local_18 = (int)ROUND(dVar9);
    if (iVar6 == 1) {
      if (((local_18 == 0x30) && (0x37 < iVar5)) || ((0x37 < iVar5 && (iVar5 < 0x51)))) {
        iVar6 = 0;
      }
      else if ((local_18 == 0x30) || (iVar5 < 0x60)) {
        if ((local_18 == 0x20) || (0x30 < iVar5)) {
          iVar6 = 3;
        }
        else {
          iVar6 = 2;
        }
      }
      else {
        iVar6 = 1;
      }
    }
    else {
      iVar6 = 4;
    }
    if (iVar6 != *(int *)(local_24 + 0xc)) {
      PTR_01cc4800 = "..\\sound\\mp3.cpp";
      INT_01cc4804 = 0x1a1;
      core_main_c_FUN_004c8440("MPEG Layer 2 - pick_table - can't load tables!  File: %s",&DAT_01cd8b28);
    }
    local_30 = local_1c;
  }
  else {
    local_30 = 0x20;
  }
  local_34 = local_30;
  if (pSVar1->channel_mode == 1) {
    iVar6 = pSVar1->layer;
    iVar5 = pSVar1->mode_extension;
    if ((((iVar6 < 1) || (3 < iVar6)) || (iVar5 < 0)) || (3 < iVar5)) {
      PTR_01cc4800 = "..\\sound\\mp3.cpp";
      INT_01cc4804 = 0x1b1;
      core_main_c_FUN_004c8440("js_bound bad layer/modext (%d/%d)  File: %s",iVar6,iVar5,&DAT_01cd8b28);
    }
    local_34 = *(ulong *)("$CMotionController$$" + iVar5 * 4 + iVar6 * 0x10 + 10);
  }
  iVar6 = 0x4e81c7;
  dVar9 = round
                    (*(double *)
                      (&DAT_005bbc48 + local_78.bitrate_index * 8 + (int)header_out * 0x20) *
                     1000);
  unaff_retaddr->sample_rate = (int)ROUND(dVar9);
  unaff_retaddr->num_channels = iStack_40;
  iVar6 = sound_mp3_cpp_CMP3Decoder_seek_FUN_004e8410(unaff_retaddr,iVar6);
  return iVar6;
}
