// Name: sound_sndmain.cpp_parseWavFile_FUN_005a3fe0
// Address: 005a3fe0
// Address Range: [[005a3fe0, 005a439a]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_parseWavFile_FUN_005a3fe0(FILE * file_handle, long * file_offset_ptr, CSfxSample * sfx_sample)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005a4237) */
/* WARNING: Removing unreachable block (ram,0x005a4240) */
/* WARNING: Removing unreachable block (ram,0x005a4247) */
/* WARNING: Removing unreachable block (ram,0x005a431e) */

int __cdecl
sound_sndmain_cpp_parseWavFile_FUN_005a3fe0
          (FILE *file_handle,long *file_offset_ptr,CSfxSample *sfx_sample)

{
  short sVar1;
  int iVar2;
  SIZE_T SVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  uint unaff_EBP;
  uint unaff_ESI;
  int unaff_EDI;
  int in_stack_0000001c;
  uint in_stack_ffffff84;
  byte *puStack_78;
  byte auStack_74 [92];
  byte local_18 [4];
  byte local_14 [2];
  ushort uStack_12;
  char cVar5;
  char cVar6;
  
  iVar2 = crt_stdio_c_fseek_FUN_005ffacc(file_handle,*file_offset_ptr,0);
  if ((iVar2 == 0) && (SVar3 = crt_stdio_c_fread_FUN_005fd990(local_14,8,1,file_handle), SVar3 == 1)
     ) {
    if (((char)unaff_EBP == 'R') &&
       ((((char)((uint)unaff_EBP >> 8) == 'I' && ((char)((uint)unaff_EBP >> 0x10) == 'F')) &&
        ((char)((uint)unaff_EBP >> 0x18) == 'F')))) {
      SVar3 = crt_stdio_c_fread_FUN_005fd990(&stack0xffffff80,4,1,file_handle);
      if (SVar3 == 1) {
        if ((((char)in_stack_ffffff84 == 'W') && ((char)((uint)in_stack_ffffff84 >> 8) == 'A')) &&
           (((char)((uint)in_stack_ffffff84 >> 0x10) == 'V' &&
            ((char)((uint)in_stack_ffffff84 >> 0x18) == 'E')))) {
          iVar2 = 0xc;
          do {
            iVar4 = crt_stdio_c_fseek_FUN_005ffacc(file_handle,*file_offset_ptr + iVar2,0);
            if ((iVar4 != 0) ||
               (SVar3 = crt_stdio_c_fread_FUN_005fd990(&stack0xfffffff0,8,1,file_handle), SVar3 != 1
               )) goto LAB_005a4007;
            iVar2 = iVar2 + unaff_ESI + 8;
            cVar5 = (char)((uint)unaff_EDI >> 8);
            cVar6 = (char)((uint)unaff_EDI >> 0x10);
            if (((char)unaff_EDI == 'd') &&
               (((cVar5 == 'a' && (cVar6 == 't')) && ((char)((uint)unaff_EDI >> 0x18) == 'a')))) {
              sound_sndmain_cpp_logSoundError_FUN_005adba0("WAV file is invalid: %s\n");
              goto LAB_005a4007;
            }
            if ((((char)unaff_EDI == 'f') && (cVar5 == 'm')) && (cVar6 == 't')) {
              if (unaff_ESI < 10) {
                sound_sndmain_cpp_logSoundError_FUN_005adba0("WAV file is invalid: %s\n");
                goto LAB_005a4007;
              }
              SVar3 = crt_stdio_c_fread_FUN_005fd990(local_18,10,1,file_handle);
              if (SVar3 != 1) goto LAB_005a4007;
              if ((short)_local_14 != 1) {
                crt_stdio_c_sprintf_FUN_005fdbd0
                          ((char *)&puStack_78,"Invalid \"fmt\" chunk tag: %04X  (Must be 0001h = Pulse Code Modulation)");
                puStack_78 = auStack_74;
                sound_sndmain_cpp_logSoundError_FUN_005adba0("WAV file is invalid: %s\n");
                goto LAB_005a4007;
              }
              if ((uStack_12 == 0) || (2 < uStack_12)) {
                crt_stdio_c_sprintf_FUN_005fdbd0
                          ((char *)&puStack_78,"Invalid number of channels: %u  (must be 1 or 2)");
                puStack_78 = auStack_74;
                sound_sndmain_cpp_logSoundError_FUN_005adba0("WAV file is invalid: %s\n");
                goto LAB_005a4007;
              }
              sVar1 = uStack_12 * (short)unaff_EBP;
              if (sVar1 == (short)unaff_EDI) {
                *(uint *)(in_stack_0000001c + 0x104) = 8;
                goto LAB_005a41f8;
              }
              if ((short)(sVar1 * 2) != (short)unaff_EDI) {
                crt_stdio_c_sprintf_FUN_005fdbd0
                          ((char *)&puStack_78,"Invalid bytes/sec value: %u (%04Xh)");
                puStack_78 = auStack_74;
                sound_sndmain_cpp_logSoundError_FUN_005adba0("WAV file is invalid: %s\n");
                goto LAB_005a4007;
              }
              *(uint *)(in_stack_0000001c + 0x104) = 0x10;
              goto LAB_005a41f8;
            }
          } while (iVar2 <= unaff_EDI + 8);
          sound_sndmain_cpp_logSoundError_FUN_005adba0("WAV file is invalid: %s\n");
        }
        else {
          sound_sndmain_cpp_logSoundError_FUN_005adba0("WAV file is invalid: %s\n");
        }
      }
    }
    else {
      sound_sndmain_cpp_logSoundError_FUN_005adba0
                ("WAV file is invalid: %s\n","\"RIFF\" ID not found at offset 00000000h");
    }
  }
  goto LAB_005a4007;
  while (iVar2 = iVar2 + 8 + unaff_ESI, iVar2 <= unaff_EDI + 8) {
LAB_005a41f8:
    iVar4 = crt_stdio_c_fseek_FUN_005ffacc(file_handle,*file_offset_ptr + iVar2,0);
    if ((iVar4 != 0) ||
       (SVar3 = crt_stdio_c_fread_FUN_005fd990(&stack0xfffffff0,8,1,file_handle), SVar3 != 1))
    goto LAB_005a4007;
  }
  sound_sndmain_cpp_logSoundError_FUN_005adba0("WAV file is invalid: %s\n");
LAB_005a4007:
  if (file_handle != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\sound\\sndmain.cpp",0x181);
  }
  return 0;
}
