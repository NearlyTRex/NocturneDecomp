// Name: sound_sndmain.cpp_parseWavFile_FUN_005a3fe0
// Address: 005a3fe0
// Address Range: [[005a3fe0, 005a439a]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_parseWavFile_FUN_005a3fe0(_FILE *file_handle,int *file_offset_ptr,CSfxSample *sfx_sample)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_parseWavFile_FUN_005a3fe0(_FILE *file_handle,int *file_offset_ptr,CSfxSample *sfx_sample)

{
  short sVar1;
  int iVar2;
  SIZE_T SVar3;
  SIZE_T SVar1;
  int iVar4;
  int iVar3;
  int iVar5;
  int iVar6;
  char local_88 [100];
  SWavFmtChunk local_24;
  SWavChunkHeader local_18;
  
  iVar2 = _fseek(file_handle,*file_offset_ptr,0);
  if (iVar2 == 0) {
    SVar3 = _fread(&local_18,8,1,file_handle);
    if (SVar3 == 1) {
      if ((((local_18.id[0] == 'R') && (local_18.id[1] == 'I')) && (local_18.id[2] == 'F')) &&
         (local_18.id[3] == 'F')) {
        iVar6 = local_18.size + 8;
        SVar1 = _fread(local_88,4,1,file_handle);
        if (SVar1 == 1) {
          if (((local_88[0] == 'W') && (local_88[1] == 'A')) &&
             ((local_88[2] == 'V' && (local_88[3] == 'E')))) {
            iVar5 = 0xc;
            do {
              iVar4 = _fseek(file_handle,*file_offset_ptr + iVar5,0);
              if (iVar4 != 0) goto LAB_005a4007;
              SVar1 = _fread(&local_18,8,1,file_handle);
              if (SVar1 != 1) goto LAB_005a4007;
              iVar5 = iVar5 + local_18.size + 8;
              if (((local_18.id[0] == 'd') && (local_18.id[1] == 'a')) &&
                 ((local_18.id[2] == 't' && (local_18.id[3] == 'a')))) {
                sound_sndmain_cpp_logSoundError_FUN_005adba0
                          ("WAV file is invalid: %s\n","\"data\" chunk preceeds \"fmt\" chunk");
                goto LAB_005a4007;
              }
              if (((local_18.id[0] == 'f') && (local_18.id[1] == 'm')) && (local_18.id[2] == 't')) {
                if (local_18.size < 10) {
                  sound_sndmain_cpp_logSoundError_FUN_005adba0
                            ("WAV file is invalid: %s\n","File contains invalid \"fmt\" chunk");
                  goto LAB_005a4007;
                }
                SVar1 = _fread(&local_24,10,1,file_handle);
                if (SVar1 != 1) goto LAB_005a4007;
                if (local_24.format_tag != 1) {
                  _sprintf
                            (local_88,"Invalid \"fmt\" chunk tag: %04X  (Must be 0001h = Pulse Code Modulation)",local_24._0_4_ & 0xffff);
                  sound_sndmain_cpp_logSoundError_FUN_005adba0
                            ("WAV file is invalid: %s\n",local_88);
                  goto LAB_005a4007;
                }
                if ((local_24.num_channels == 0) || (2 < local_24.num_channels)) {
                  _sprintf
                            (local_88,"Invalid number of channels: %u  (must be 1 or 2)",
                             (uint)local_24.num_channels);
                  sound_sndmain_cpp_logSoundError_FUN_005adba0
                            ("WAV file is invalid: %s\n",local_88);
                  goto LAB_005a4007;
                }
                sVar1 = local_24.num_channels * (short)local_24.sample_rate;
                if (sVar1 == (short)local_24.byte_rate) {
                  (sfx_sample->sample_info).bit_depth = 8;
                  goto LAB_005a41f8;
                }
                if ((short)(sVar1 * 2) == (short)local_24.byte_rate) {
                  (sfx_sample->sample_info).bit_depth = 0x10;
                  goto LAB_005a41f8;
                }
                _sprintf
                          (local_88,"Invalid bytes/sec value: %u (%04Xh)",local_24.byte_rate & 0xffff,
                           local_24.byte_rate & 0xffff);
                sound_sndmain_cpp_logSoundError_FUN_005adba0
                          ("WAV file is invalid: %s\n",local_88);
                goto LAB_005a4007;
              }
            } while (iVar5 <= iVar6);
            sound_sndmain_cpp_logSoundError_FUN_005adba0
                      ("WAV file is invalid: %s\n","Required \"fmt\" chunk not found");
          }
          else {
            sound_sndmain_cpp_logSoundError_FUN_005adba0
                      ("WAV file is invalid: %s\n","\"WAVE\" ID not found at offset 00000008h");
          }
        }
      }
      else {
        sound_sndmain_cpp_logSoundError_FUN_005adba0
                  ("WAV file is invalid: %s\n","\"RIFF\" ID not found at offset 00000000h");
      }
    }
  }
  goto LAB_005a4007;
  while( true ) {
    SVar1 = _fread(&local_18,8,1,file_handle);
    if (SVar1 != 1) goto LAB_005a4007;
    if (((local_18.id[0] == 'd') && (local_18.id[1] == 'a')) &&
       ((local_18.id[2] == 't' && (local_18.id[3] == 'a')))) {
      *file_offset_ptr = *file_offset_ptr + iVar5 + 8;
      (sfx_sample->sample_info).num_channels = (uint)local_24.num_channels;
      iVar6 = (sfx_sample->sample_info).bit_depth >> 0x1f;
      (sfx_sample->sample_info).sample_count =
           (int)(((ulonglong)local_18.size / (ulonglong)local_24.num_channels) /
                (ulonglong)
                (uint)((int)(((sfx_sample->sample_info).bit_depth + iVar6 * -8) -
                            (uint)(iVar6 << 2 < 0)) >> 3));
      (sfx_sample->sample_info).sample_rate = local_24.sample_rate & 0xffff;
      return 1;
    }
    iVar5 = iVar5 + 8 + local_18.size;
    if (iVar6 < iVar5) break;
LAB_005a41f8:
    iVar3 = _fseek(file_handle,*file_offset_ptr + iVar5,0);
    if (iVar3 != 0) goto LAB_005a4007;
  }
  sound_sndmain_cpp_logSoundError_FUN_005adba0
            ("WAV file is invalid: %s\n","No \"data\" chunk found");
LAB_005a4007:
  if (file_handle != (_FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\sound\\sndmain.cpp",0x181);
  }
  return 0;
}
