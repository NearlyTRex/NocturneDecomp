// Name: sound_sndmain.cpp_parseWavFile_FUN_00521830
// Address: 00521830
// Address Range: [[00521830, 00521be0]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_parseWavFile_FUN_00521830(_FILE *file_handle,int *file_offset_ptr,CSfxSample *sfx_sample)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_parseWavFile_FUN_00521830(_FILE *file_handle,int *file_offset_ptr,CSfxSample *sfx_sample)

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
  byte local_24 [2];
  ushort uStack_22;
  uint local_20;
  short local_1c;
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
              if (iVar4 != 0) goto LAB_00521857;
              SVar3 = _fread(&local_18,8,1,file_handle);
              if (SVar3 != 1) goto LAB_00521857;
              iVar5 = iVar5 + local_14 + 8;
              if (((local_18 == 'd') && (local_17 == 'a')) &&
                 ((local_16 == 't' && (local_15 == 'a')))) {
                sound_sndmain_cpp_FUN_00529980
                          ("WAV file is invalid: %s\n","\"data\" chunk preceeds \"fmt\" chunk");
                goto LAB_00521857;
              }
              if (((local_18 == 'f') && (local_17 == 'm')) && (local_16 == 't')) {
                if (local_14 < 10) {
                  sound_sndmain_cpp_FUN_00529980
                            ("WAV file is invalid: %s\n","File contains invalid \"fmt\" chunk");
                  goto LAB_00521857;
                }
                SVar3 = _fread(local_24,10,1,file_handle);
                if (SVar3 != 1) goto LAB_00521857;
                if ((short)_local_24 != 1) {
                  _sprintf(&local_88,"Invalid \"fmt\" chunk tag: %04X  (Must be 0001h = Pulse Code Modulation)");
                  sound_sndmain_cpp_FUN_00529980("WAV file is invalid: %s\n",&local_88);
                  goto LAB_00521857;
                }
                if ((uStack_22 == 0) || (2 < uStack_22)) {
                  _sprintf(&local_88,"Invalid number of channels: %u  (must be 1 or 2)");
                  sound_sndmain_cpp_FUN_00529980("WAV file is invalid: %s\n",&local_88);
                  goto LAB_00521857;
                }
                sVar1 = uStack_22 * (short)local_20;
                if (sVar1 == local_1c) {
                  (sfx_sample->sample_info).bit_depth = 8;
                  goto LAB_00521a3e;
                }
                if ((short)(sVar1 * 2) == local_1c) {
                  (sfx_sample->sample_info).bit_depth = 0x10;
                  goto LAB_00521a3e;
                }
                _sprintf(&local_88,"Invalid bytes/sec value: %u (%04Xh)");
                sound_sndmain_cpp_FUN_00529980("WAV file is invalid: %s\n",&local_88);
                goto LAB_00521857;
              }
            } while (iVar5 <= iVar2);
            sound_sndmain_cpp_FUN_00529980
                      ("WAV file is invalid: %s\n","Required \"fmt\" chunk not found");
          }
          else {
            sound_sndmain_cpp_FUN_00529980
                      ("WAV file is invalid: %s\n","\"WAVE\" ID not found at offset 00000008h");
          }
        }
      }
      else {
        sound_sndmain_cpp_FUN_00529980
                  ("WAV file is invalid: %s\n","\"RIFF\" ID not found at offset 00000000h");
      }
    }
  }
  goto LAB_00521857;
  while( true ) {
    SVar3 = _fread(&local_18,8,1,file_handle);
    if (SVar3 != 1) goto LAB_00521857;
    if (((local_18 == 'd') && (local_17 == 'a')) && ((local_16 == 't' && (local_15 == 'a')))) {
      *file_offset_ptr = *file_offset_ptr + iVar5 + 8;
      (sfx_sample->sample_info).num_channels = (uint)uStack_22;
      iVar2 = (sfx_sample->sample_info).bit_depth >> 0x1f;
      (sfx_sample->sample_info).sample_count =
           (int)(((ulonglong)local_14 / (ulonglong)uStack_22) /
                (ulonglong)
                (uint)((int)(((sfx_sample->sample_info).bit_depth + iVar2 * -8) -
                            (uint)(iVar2 << 2 < 0)) >> 3));
      (sfx_sample->sample_info).sample_rate = local_20 & 0xffff;
      return 1;
    }
    iVar5 = iVar5 + 8 + local_14;
    if (iVar2 < iVar5) break;
LAB_00521a3e:
    iVar4 = _fseek(file_handle,*file_offset_ptr + iVar5,0);
    if (iVar4 != 0) goto LAB_00521857;
  }
  sound_sndmain_cpp_FUN_00529980("WAV file is invalid: %s\n","No \"data\" chunk found");
LAB_00521857:
  if (file_handle != (_FILE *)0x0) {
    _fclose(file_handle);
  }
  return 0;
}
