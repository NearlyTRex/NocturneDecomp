// Name: sound_sndmain.cpp_parseWavFile_FUN_00551000
// Address: 00551000
// Address Range: [[00551000, 005513ed]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_parseWavFile_FUN_00551000(CInStream *stream,int *file_offset_ptr,CSfxSample *sfx_sample)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_parseWavFile_FUN_00551000(CInStream *stream,int *file_offset_ptr,CSfxSample *sfx_sample)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char cStack_88;
  char cStack_87;
  char cStack_86;
  char cStack_85;
  short sStack_24;
  ushort uStack_22;
  ushort uStack_20;
  short sStack_1c;
  char cStack_18;
  char cStack_17;
  char cStack_16;
  char cStack_15;
  uint uStack_14;
  
  iVar1 = (**(code **)((int)stream->vtable + 0x14))(stream,*file_offset_ptr,0);
  if (iVar1 != 0) {
    iVar1 = (**(code **)((int)stream->vtable + 0x10))(stream,&cStack_18,8);
    if (iVar1 == 8) {
      if ((((cStack_18 == 'R') && (cStack_17 == 'I')) && (cStack_16 == 'F')) && (cStack_15 == 'F'))
      {
        iVar4 = uStack_14 + 8;
        iVar1 = (**(code **)((int)stream->vtable + 0x10))(stream,&cStack_88,4);
        if (iVar1 != 4) {
          return 0;
        }
        if (((cStack_88 == 'W') && (cStack_87 == 'A')) && ((cStack_86 == 'V' && (cStack_85 == 'E')))
           ) {
          iVar1 = 0xc;
          do {
            iVar3 = (**(code **)((int)stream->vtable + 0x14))(stream,*file_offset_ptr + iVar1,0);
            if (iVar3 == 0) {
              return 0;
            }
            iVar3 = (**(code **)((int)stream->vtable + 0x10))(stream,&cStack_18,8);
            if (iVar3 != 8) {
              return 0;
            }
            iVar1 = iVar1 + uStack_14 + 8;
            if (((cStack_18 == 'd') && (cStack_17 == 'a')) &&
               ((cStack_16 == 't' && (cStack_15 == 'a')))) {
              pcVar2 = "\"data\" chunk preceeds \"fmt\" chunk";
              goto LAB_00551052;
            }
            if (((cStack_18 == 'f') && (cStack_17 == 'm')) && (cStack_16 == 't')) {
              if (uStack_14 < 10) {
                pcVar2 = "File contains invalid \"fmt\" chunk";
                goto LAB_00551052;
              }
              iVar3 = (**(code **)((int)stream->vtable + 0x10))(stream,&sStack_24,10);
              if (iVar3 != 10) {
                return 0;
              }
              if (sStack_24 == 1) {
                (sfx_sample->sample_info).streaming_flag = 0;
              }
              else {
                if (sStack_24 != 0x20) {
                  _sprintf(&cStack_88,"Invalid \"fmt\" chunk tag: %04X")
                  ;
                  pcVar2 = &cStack_88;
                  goto LAB_00551052;
                }
                (sfx_sample->sample_info).streaming_flag = 2;
              }
              (sfx_sample->sample_info).bit_depth = 0;
              if ((uStack_22 == 0) || (2 < uStack_22)) {
                _sprintf(&cStack_88,"Invalid number of channels: %u  (must be 1 or 2)");
                pcVar2 = &cStack_88;
                goto LAB_00551052;
              }
              iVar3 = (sfx_sample->sample_info).streaming_flag;
              if (iVar3 != 0) {
                if (iVar3 == 2) {
                  (sfx_sample->sample_info).bit_depth = 4;
                }
                else {
                  _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
                  _DAT_01d71de4 = 0x213;
                  core_main_c_FUN_004e4330("Hell froze");
                }
                goto LAB_005511ed;
              }
              if ((ushort)(uStack_22 * uStack_20) == sStack_1c) {
                (sfx_sample->sample_info).bit_depth = 8;
                goto LAB_005511ed;
              }
              if ((ushort)(uStack_22 * uStack_20 * 2) == sStack_1c) {
                (sfx_sample->sample_info).bit_depth = 0x10;
LAB_005511ed:
                do {
                  iVar3 = (**(code **)((int)stream->vtable + 0x14))
                                    (stream,*file_offset_ptr + iVar1,0);
                  if (iVar3 == 0) {
                    return 0;
                  }
                  iVar3 = (**(code **)((int)stream->vtable + 0x10))(stream,&cStack_18,8);
                  if (iVar3 != 8) {
                    return 0;
                  }
                  if (((cStack_18 == 'd') && (cStack_17 == 'a')) &&
                     ((cStack_16 == 't' && (cStack_15 == 'a')))) {
                    *file_offset_ptr = *file_offset_ptr + iVar1 + 8;
                    (sfx_sample->sample_info).num_channels = (uint)uStack_22;
                    iVar1 = (sfx_sample->sample_info).streaming_flag;
                    if ((iVar1 != 0) && (iVar1 != 2)) {
                      _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
                      _DAT_01d71de4 = 0x238;
                      core_main_c_FUN_004e4330("Hell froze");
                    }
                    (sfx_sample->sample_info).sample_count =
                         (uStack_14 << 3) /
                         (uint)((sfx_sample->sample_info).bit_depth *
                               (sfx_sample->sample_info).num_channels);
                    (sfx_sample->sample_info).sample_rate = (uint)uStack_20;
                    return 1;
                  }
                  iVar1 = iVar1 + 8 + uStack_14;
                } while (iVar1 <= iVar4);
                pcVar2 = "No \"data\" chunk found";
              }
              else {
                _sprintf(&cStack_88,"Invalid bytes/sec value: %u (%04Xh)");
                pcVar2 = &cStack_88;
              }
              goto LAB_00551052;
            }
          } while (iVar1 <= iVar4);
          pcVar2 = "Required \"fmt\" chunk not found";
        }
        else {
          pcVar2 = "\"WAVE\" ID not found at offset 00000008h";
        }
      }
      else {
        pcVar2 = "\"RIFF\" ID not found at offset 00000000h";
      }
LAB_00551052:
      sound_sndmain_cpp_logSoundError_FUN_0055a560("WAV file is invalid: %s\n",pcVar2);
      return 0;
    }
  }
  return 0;
}
