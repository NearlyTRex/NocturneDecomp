// Name: sound_sndmain.cpp_parseWavFile_FUN_005a3fe0
// Address: 005a3fe0
// Address Range: [[005a3fe0, 005a439a]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_parseWavFile_FUN_005a3fe0 (_FILE *file_handle,long *file_offset_ptr,CSfxSample *sfx_sample)

#include "nocturne.h"

int __cdecl
sound_sndmain_cpp_parseWavFile_FUN_005a3fe0
          (_FILE *file_handle,long *file_offset_ptr,CSfxSample *sfx_sample)

{
  short sVar1;
  int iVar2;
  SIZE_T SVar3;
  int iVar4;
  int iVar5;
  char local_88;
  char local_87;
  char local_86;
  char local_85;
  uint local_24;
  uint local_20;
  uint local_1c;
  char local_18;
  char local_17;
  char local_16;
  char local_15;
  uint local_14;
  
  iVar2 = _fseek(file_handle,*file_offset_ptr,0);
  if (iVar2 == 0) {
    SVar3 = _fread(&local_18,8,1,file_handle);
    if (SVar3 == 1) {
      if ((((local_18 == 'R') && (local_17 == 'I')) && (local_16 == 'F')) && (local_15 == 'F')) {
        iVar2 = local_14 + 8;
        SVar3 = _fread(&local_88,4,1,file_handle);
        if (SVar3 == 1) {
          if (((local_88 == 'W') && (local_87 == 'A')) && ((local_86 == 'V' && (local_85 == 'E'))))
          {
            iVar5 = 0xc;
            do {
              iVar4 = _fseek(file_handle,*file_offset_ptr + iVar5,0);
              if (iVar4 != 0) goto LAB_005a4007;
              SVar3 = _fread(&local_18,8,1,file_handle);
              if (SVar3 != 1) goto LAB_005a4007;
              iVar5 = iVar5 + local_14 + 8;
              if (((local_18 == 'd') && (local_17 == 'a')) &&
                 ((local_16 == 't' && (local_15 == 'a')))) {
                sound_sndmain_cpp_logSoundError_FUN_005adba0
                          ("WAV file is invalid: %s\n","\"data\" chunk preceeds \"fmt\" chunk");
                goto LAB_005a4007;
              }
              if (((local_18 == 'f') && (local_17 == 'm')) && (local_16 == 't')) {
                if (local_14 < 10) {
                  sound_sndmain_cpp_logSoundError_FUN_005adba0
                            ("WAV file is invalid: %s\n","File contains invalid \"fmt\" chunk");
                  goto LAB_005a4007;
                }
                SVar3 = _fread(&local_24,10,1,file_handle);
                if (SVar3 != 1) goto LAB_005a4007;
                if ((short)local_24 != 1) {
                  _sprintf
                            (&local_88,"Invalid \"fmt\" chunk tag: %04X  (Must be 0001h = Pulse Code Modulation)",local_24 & 0xffff);
                  sound_sndmain_cpp_logSoundError_FUN_005adba0
                            ("WAV file is invalid: %s\n",&local_88);
                  goto LAB_005a4007;
                }
                if ((local_24._2_2_ == 0) || (2 < local_24._2_2_)) {
                  _sprintf
                            (&local_88,"Invalid number of channels: %u  (must be 1 or 2)",(uint)local_24._2_2_);
                  sound_sndmain_cpp_logSoundError_FUN_005adba0
                            ("WAV file is invalid: %s\n",&local_88);
                  goto LAB_005a4007;
                }
                sVar1 = local_24._2_2_ * (short)local_20;
                if (sVar1 == (short)local_1c) {
                  (sfx_sample->sample_info).bit_depth = 8;
                  goto LAB_005a41f8;
                }
                if ((short)(sVar1 * 2) == (short)local_1c) {
                  (sfx_sample->sample_info).bit_depth = 0x10;
                  goto LAB_005a41f8;
                }
                _sprintf
                          (&local_88,"Invalid bytes/sec value: %u (%04Xh)",local_1c & 0xffff,
                           local_1c & 0xffff);
                sound_sndmain_cpp_logSoundError_FUN_005adba0
                          ("WAV file is invalid: %s\n",&local_88);
                goto LAB_005a4007;
              }
            } while (iVar5 <= iVar2);
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
    SVar3 = _fread(&local_18,8,1,file_handle);
    if (SVar3 != 1) goto LAB_005a4007;
    if (((local_18 == 'd') && (local_17 == 'a')) && ((local_16 == 't' && (local_15 == 'a')))) {
      *file_offset_ptr = *file_offset_ptr + iVar5 + 8;
      (sfx_sample->sample_info).num_channels = (uint)local_24._2_2_;
      iVar2 = (sfx_sample->sample_info).bit_depth >> 0x1f;
      (sfx_sample->sample_info).sample_count =
           (int)(((ulonglong)local_14 / (ulonglong)local_24._2_2_) /
                (ulonglong)
                (uint)((int)(((sfx_sample->sample_info).bit_depth + iVar2 * -8) -
                            (uint)(iVar2 << 2 < 0)) >> 3));
      (sfx_sample->sample_info).sample_rate = local_20 & 0xffff;
      return 1;
    }
    iVar5 = iVar5 + 8 + local_14;
    if (iVar2 < iVar5) break;
LAB_005a41f8:
    iVar4 = _fseek(file_handle,*file_offset_ptr + iVar5,0);
    if (iVar4 != 0) goto LAB_005a4007;
  }
  sound_sndmain_cpp_logSoundError_FUN_005adba0
            ("WAV file is invalid: %s\n","No \"data\" chunk found");
LAB_005a4007:
  if (file_handle != (_FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\sound\\sndmain.cpp",0x181);
  }
  return 0;
}
