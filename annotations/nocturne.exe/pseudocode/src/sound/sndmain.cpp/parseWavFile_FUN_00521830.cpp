// Name: sound_sndmain.cpp_parseWavFile_FUN_00521830
// Address: 00521830
// Address Range: [[00521830, 00521be0]]
// Convention: __cdecl
// Signature: undefined4 __cdecl sound_sndmain_cpp_parseWavFile_FUN_00521830(int param_1,int *param_2,int param_3)

#include "nocturne.h"

uint __cdecl sound_sndmain_cpp_parseWavFile_FUN_00521830(int param_1,int *param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
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
  
  iVar2 = _fseek(param_1,*param_2,0);
  if (iVar2 == 0) {
    iVar2 = _fread(&local_18,8,1,param_1);
    if (iVar2 == 1) {
      if ((((local_18 == 'R') && (local_17 == 'I')) && (local_16 == 'F')) && (local_15 == 'F')) {
        iVar4 = local_14 + 8;
        iVar2 = _fread(&local_88,4,1,param_1);
        if (iVar2 == 1) {
          if (((local_88 == 'W') && (local_87 == 'A')) && ((local_86 == 'V' && (local_85 == 'E'))))
          {
            iVar2 = 0xc;
            do {
              iVar3 = _fseek(param_1,*param_2 + iVar2,0);
              if (iVar3 != 0) goto LAB_00521857;
              iVar3 = _fread(&local_18,8,1,param_1);
              if (iVar3 != 1) goto LAB_00521857;
              iVar2 = iVar2 + local_14 + 8;
              if (((local_18 == 'd') && (local_17 == 'a')) &&
                 ((local_16 == 't' && (local_15 == 'a')))) {
                FUN_00529980("WAV file is invalid: %s\n","\"data\" chunk preceeds \"fmt\" chunk");
                goto LAB_00521857;
              }
              if (((local_18 == 'f') && (local_17 == 'm')) && (local_16 == 't')) {
                if (local_14 < 10) {
                  FUN_00529980("WAV file is invalid: %s\n","File contains invalid \"fmt\" chunk")
                  ;
                  goto LAB_00521857;
                }
                iVar3 = _fread(&local_24,10,1,param_1);
                if (iVar3 != 1) goto LAB_00521857;
                if ((short)local_24 != 1) {
                  _sprintf(&local_88,"Invalid \"fmt\" chunk tag: %04X  (Must be 0001h = Pulse Code Modulation)",local_24 & 0xffff);
                  FUN_00529980("WAV file is invalid: %s\n",&local_88);
                  goto LAB_00521857;
                }
                if ((local_24._2_2_ == 0) || (2 < local_24._2_2_)) {
                  _sprintf(&local_88,"Invalid number of channels: %u  (must be 1 or 2)",local_24._2_2_);
                  FUN_00529980("WAV file is invalid: %s\n",&local_88);
                  goto LAB_00521857;
                }
                sVar1 = local_24._2_2_ * (short)local_20;
                if (sVar1 == (short)local_1c) {
                  *(uint *)(param_3 + 0x104) = 8;
                  goto LAB_00521a3e;
                }
                if ((short)(sVar1 * 2) == (short)local_1c) {
                  *(uint *)(param_3 + 0x104) = 0x10;
                  goto LAB_00521a3e;
                }
                _sprintf(&local_88,"Invalid bytes/sec value: %u (%04Xh)",local_1c & 0xffff,
                           local_1c & 0xffff);
                FUN_00529980("WAV file is invalid: %s\n",&local_88);
                goto LAB_00521857;
              }
            } while (iVar2 <= iVar4);
            FUN_00529980("WAV file is invalid: %s\n","Required \"fmt\" chunk not found");
          }
          else {
            FUN_00529980("WAV file is invalid: %s\n","\"WAVE\" ID not found at offset 00000008h");
          }
        }
      }
      else {
        FUN_00529980("WAV file is invalid: %s\n","\"RIFF\" ID not found at offset 00000000h");
      }
    }
  }
  goto LAB_00521857;
  while( true ) {
    iVar3 = _fread(&local_18,8,1,param_1);
    if (iVar3 != 1) goto LAB_00521857;
    if (((local_18 == 'd') && (local_17 == 'a')) && ((local_16 == 't' && (local_15 == 'a')))) {
      *param_2 = *param_2 + iVar2 + 8;
      *(uint *)(param_3 + 0x108) = (uint)local_24._2_2_;
      iVar2 = *(int *)(param_3 + 0x104) >> 0x1f;
      *(int *)(param_3 + 0x110) =
           (int)(((ulonglong)local_14 / (ulonglong)local_24._2_2_) /
                (ulonglong)
                (uint)((int)((*(int *)(param_3 + 0x104) + iVar2 * -8) - (uint)(iVar2 << 2 < 0)) >> 3
                      ));
      *(uint *)(param_3 + 0x10c) = local_20 & 0xffff;
      return 1;
    }
    iVar2 = iVar2 + 8 + local_14;
    if (iVar4 < iVar2) break;
LAB_00521a3e:
    iVar3 = _fseek(param_1,*param_2 + iVar2,0);
    if (iVar3 != 0) goto LAB_00521857;
  }
  FUN_00529980("WAV file is invalid: %s\n","No \"data\" chunk found");
LAB_00521857:
  if (param_1 != 0) {
    _fclose(param_1);
  }
  return 0;
}
