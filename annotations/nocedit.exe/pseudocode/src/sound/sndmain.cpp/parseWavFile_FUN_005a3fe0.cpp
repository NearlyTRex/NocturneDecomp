// Name: sound_sndmain.cpp_parseWavFile_FUN_005a3fe0
// Address: 005a3fe0
// Address Range: [[005a3fe0, 005a439a]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_parseWavFile_FUN_005a3fe0(FILE * file_handle, long * file_offset_ptr, CSfxSample * sfx_sample)
// Cross-references:
//   sound_sndmain.cpp_getSampleInfo_FUN_005aa3f0 (005aa3f0) at 005aa51d [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_getSfxSample_FUN_005a4c80 (005a4c80) at 005a4e48 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_loadStreamingSoundFile_FUN_005a5200 (005a5200) at 005a5489 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_startSfx_FUN_005a8e90 (005a8e90) at 005a9467 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_0064f3bb
//   TerminatedCString s_RIFF_ID_not_found_at_off_0064f3d0
//   TerminatedCString s_WAV_file_is_invalid_s_0064f3f8
//   TerminatedCString s_WAVE_ID_not_found_at_off_0064f411
//   TerminatedCString s_data_chunk_preceeds_fmt__0064f439
//   TerminatedCString s_Required_fmt_chunk_not_f_0064f45b
//   TerminatedCString s_File_contains_invalid_fm_0064f47a
//   TerminatedCString s_Invalid_fmt_chunk_tag_04_0064f49c
//   TerminatedCString s_Invalid_number_of_channe_0064f4e3
//   TerminatedCString s_Invalid_bytes_sec_value__0064f514
//   TerminatedCString s_No_data_chunk_found_0064f538
// Function calls:
//   crt_stdio.c_fread_FUN_005fd990
//   crt_stdio.c_fseek_FUN_005ffacc
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   sound_sndmain.cpp_logSoundError_FUN_005adba0

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
  undefined4 unaff_EBP;
  uint unaff_ESI;
  int unaff_EDI;
  int in_stack_0000001c;
  undefined4 in_stack_ffffff84;
  undefined1 *puStack_78;
  undefined1 auStack_74 [92];
  undefined1 local_18 [4];
  undefined1 local_14 [2];
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
                *(undefined4 *)(in_stack_0000001c + 0x104) = 8;
                goto LAB_005a41f8;
              }
              if ((short)(sVar1 * 2) != (short)unaff_EDI) {
                crt_stdio_c_sprintf_FUN_005fdbd0
                          ((char *)&puStack_78,"Invalid bytes/sec value: %u (%04Xh)");
                puStack_78 = auStack_74;
                sound_sndmain_cpp_logSoundError_FUN_005adba0("WAV file is invalid: %s\n");
                goto LAB_005a4007;
              }
              *(undefined4 *)(in_stack_0000001c + 0x104) = 0x10;
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


// Assembly code:
// 005a3fe0: PUSH EBX
//   Label: sound_sndmain.cpp_parseWavFile_FUN_005a3fe0
// 005a3fe1: PUSH ESI
// 005a3fe2: PUSH EDI
// 005a3fe3: PUSH EBP
// 005a3fe4: SUB ESP,0x78
// 005a3fe7: MOV ESI,dword ptr [ESP + 0x8c]
//   XREF to: Stack[0x4] (READ)
// 005a3fee: MOV EDI,dword ptr [ESP + 0x90]
//   XREF to: Stack[0x8] (READ)
// 005a3ff5: PUSH 0x0
// 005a3ff7: MOV EDX,dword ptr [EDI]
// 005a3ff9: PUSH EDX
// 005a3ffa: PUSH ESI
// 005a3ffb: CALL crt_stdio.c_fseek_FUN_005ffacc
//   XREF to: 005ffacc (UNCONDITIONAL_CALL)
// 005a4000: ADD ESP,0xc
// 005a4003: TEST EAX,EAX
// 005a4005: JZ 0x005a4028
//   XREF to: 005a4028 (CONDITIONAL_JUMP)
// 005a4007: TEST ESI,ESI
//   Label: LAB_005a4007
// 005a4009: JZ 0x005a401e
//   XREF to: 005a401e (CONDITIONAL_JUMP)
// 005a400b: PUSH 0x181
// 005a4010: PUSH 0x64f3bb
//   XREF to: 0064f3bb (DATA)
// 005a4015: PUSH ESI
// 005a4016: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 005a401b: ADD ESP,0xc
// 005a401e: XOR EAX,EAX
//   Label: LAB_005a401e
// 005a4020: ADD ESP,0x78
// 005a4023: POP EBP
// 005a4024: POP EDI
// 005a4025: POP ESI
// 005a4026: POP EBX
// 005a4027: RET
// 005a4028: PUSH ESI
//   Label: LAB_005a4028
// 005a4029: PUSH 0x1
// 005a402b: PUSH 0x8
// 005a402d: LEA EAX,[ESP + 0x7c]
//   XREF to: Stack[-0x18] (DATA)
// 005a4031: PUSH EAX
// 005a4032: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 005a4037: ADD ESP,0x10
// 005a403a: CMP EAX,0x1
// 005a403d: JNZ 0x005a4007
//   XREF to: 005a4007 (CONDITIONAL_JUMP)
// 005a403f: CMP byte ptr [ESP + 0x70],0x52
//   XREF to: Stack[-0x18] (READ)
// 005a4044: JZ 0x005a405b
//   XREF to: 005a405b (CONDITIONAL_JUMP)
// 005a4046: MOV EAX,0x64f3d0
//   Label: LAB_005a4046
//   XREF to: 0064f3d0 (PARAM)
// 005a404b: PUSH EAX
//   XREF to: 0064f3d0 (DATA)
// 005a404c: PUSH 0x64f3f8
//   XREF to: 0064f3f8 (DATA)
// 005a4051: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005a4056: ADD ESP,0x8
// 005a4059: JMP 0x005a4007
//   XREF to: 005a4007 (UNCONDITIONAL_JUMP)
// 005a405b: CMP byte ptr [ESP + 0x71],0x49
//   Label: LAB_005a405b
//   XREF to: Stack[-0x17] (READ)
// 005a4060: JNZ 0x005a4046
//   XREF to: 005a4046 (CONDITIONAL_JUMP)
// 005a4062: MOV DH,byte ptr [ESP + 0x72]
//   XREF to: Stack[-0x16] (READ)
// 005a4066: CMP DH,0x46
// 005a4069: JNZ 0x005a4046
//   XREF to: 005a4046 (CONDITIONAL_JUMP)
// 005a406b: CMP DH,byte ptr [ESP + 0x73]
//   XREF to: Stack[-0x15] (READ)
// 005a406f: JNZ 0x005a4046
//   XREF to: 005a4046 (CONDITIONAL_JUMP)
// 005a4071: PUSH ESI
// 005a4072: PUSH 0x1
// 005a4074: PUSH 0x4
// 005a4076: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x88] (DATA)
// 005a407a: MOV EBP,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x14] (READ)
// 005a4081: PUSH EAX
// 005a4082: ADD EBP,0x8
// 005a4085: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 005a408a: ADD ESP,0x10
// 005a408d: CMP EAX,0x1
// 005a4090: JNZ 0x005a4007
//   XREF to: 005a4007 (CONDITIONAL_JUMP)
// 005a4096: CMP byte ptr [ESP],0x57
//   XREF to: Stack[-0x88] (DATA)
// 005a409a: JZ 0x005a40b4
//   XREF to: 005a40b4 (CONDITIONAL_JUMP)
// 005a409c: MOV EAX,0x64f411
//   Label: LAB_005a409c
//   XREF to: 0064f411 (PARAM)
// 005a40a1: PUSH EAX
//   XREF to: 0064f411 (DATA)
// 005a40a2: PUSH 0x64f3f8
//   XREF to: 0064f3f8 (DATA)
// 005a40a7: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005a40ac: ADD ESP,0x8
// 005a40af: JMP 0x005a4007
//   XREF to: 005a4007 (UNCONDITIONAL_JUMP)
// 005a40b4: CMP byte ptr [ESP + 0x1],0x41
//   Label: LAB_005a40b4
//   XREF to: Stack[-0x87] (READ)
// 005a40b9: JNZ 0x005a409c
//   XREF to: 005a409c (CONDITIONAL_JUMP)
// 005a40bb: CMP byte ptr [ESP + 0x2],0x56
//   XREF to: Stack[-0x86] (READ)
// 005a40c0: JNZ 0x005a409c
//   XREF to: 005a409c (CONDITIONAL_JUMP)
// 005a40c2: CMP byte ptr [ESP + 0x3],0x45
//   XREF to: Stack[-0x85] (READ)
// 005a40c7: JNZ 0x005a409c
//   XREF to: 005a409c (CONDITIONAL_JUMP)
// 005a40c9: MOV EBX,0xc
// 005a40ce: MOV EAX,dword ptr [EDI]
//   Label: LAB_005a40ce
// 005a40d0: PUSH 0x0
// 005a40d2: ADD EAX,EBX
// 005a40d4: PUSH EAX
// 005a40d5: PUSH ESI
// 005a40d6: CALL crt_stdio.c_fseek_FUN_005ffacc
//   XREF to: 005ffacc (UNCONDITIONAL_CALL)
// 005a40db: ADD ESP,0xc
// 005a40de: TEST EAX,EAX
// 005a40e0: JNZ 0x005a4007
//   XREF to: 005a4007 (CONDITIONAL_JUMP)
// 005a40e6: PUSH ESI
// 005a40e7: PUSH 0x1
// 005a40e9: PUSH 0x8
// 005a40eb: LEA EAX,[ESP + 0x7c]
//   XREF to: Stack[-0x18] (DATA)
// 005a40ef: PUSH EAX
// 005a40f0: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 005a40f5: ADD ESP,0x10
// 005a40f8: CMP EAX,0x1
// 005a40fb: JNZ 0x005a4007
//   XREF to: 005a4007 (CONDITIONAL_JUMP)
// 005a4101: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x14] (READ)
// 005a4105: ADD EAX,0x8
// 005a4108: ADD EBX,EAX
// 005a410a: CMP byte ptr [ESP + 0x70],0x64
//   XREF to: Stack[-0x18] (READ)
// 005a410f: JNZ 0x005a413f
//   XREF to: 005a413f (CONDITIONAL_JUMP)
// 005a4111: MOV DL,byte ptr [ESP + 0x71]
//   XREF to: Stack[-0x17] (READ)
// 005a4115: CMP DL,0x61
// 005a4118: JNZ 0x005a413f
//   XREF to: 005a413f (CONDITIONAL_JUMP)
// 005a411a: CMP byte ptr [ESP + 0x72],0x74
//   XREF to: Stack[-0x16] (READ)
// 005a411f: JNZ 0x005a413f
//   XREF to: 005a413f (CONDITIONAL_JUMP)
// 005a4121: CMP DL,byte ptr [ESP + 0x73]
//   XREF to: Stack[-0x15] (READ)
// 005a4125: JNZ 0x005a413f
//   XREF to: 005a413f (CONDITIONAL_JUMP)
// 005a4127: MOV EAX,0x64f439
//   XREF to: 0064f439 (PARAM)
// 005a412c: PUSH EAX
//   XREF to: 0064f439 (DATA)
// 005a412d: PUSH 0x64f3f8
//   XREF to: 0064f3f8 (DATA)
// 005a4132: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005a4137: ADD ESP,0x8
// 005a413a: JMP 0x005a4007
//   XREF to: 005a4007 (UNCONDITIONAL_JUMP)
// 005a413f: CMP byte ptr [ESP + 0x70],0x66
//   Label: LAB_005a413f
//   XREF to: Stack[-0x18] (READ)
// 005a4144: JNZ 0x005a4173
//   XREF to: 005a4173 (CONDITIONAL_JUMP)
// 005a4146: CMP byte ptr [ESP + 0x71],0x6d
//   XREF to: Stack[-0x17] (READ)
// 005a414b: JNZ 0x005a4173
//   XREF to: 005a4173 (CONDITIONAL_JUMP)
// 005a414d: CMP byte ptr [ESP + 0x72],0x74
//   XREF to: Stack[-0x16] (READ)
// 005a4152: JNZ 0x005a4173
//   XREF to: 005a4173 (CONDITIONAL_JUMP)
// 005a4154: CMP dword ptr [ESP + 0x74],0xa
//   XREF to: Stack[-0x14] (READ)
// 005a4159: JNC 0x005a4193
//   XREF to: 005a4193 (CONDITIONAL_JUMP)
// 005a415b: MOV EAX,0x64f47a
//   XREF to: 0064f47a (PARAM)
// 005a4160: PUSH EAX
//   XREF to: 0064f47a (DATA)
// 005a4161: PUSH 0x64f3f8
//   XREF to: 0064f3f8 (DATA)
// 005a4166: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005a416b: ADD ESP,0x8
// 005a416e: JMP 0x005a4007
//   XREF to: 005a4007 (UNCONDITIONAL_JUMP)
// 005a4173: CMP EBX,EBP
//   Label: LAB_005a4173
// 005a4175: JLE 0x005a40ce
//   XREF to: 005a40ce (CONDITIONAL_JUMP)
// 005a417b: MOV EAX,0x64f45b
//   XREF to: 0064f45b (PARAM)
// 005a4180: PUSH EAX
//   XREF to: 0064f45b (DATA)
// 005a4181: PUSH 0x64f3f8
//   XREF to: 0064f3f8 (DATA)
// 005a4186: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005a418b: ADD ESP,0x8
// 005a418e: JMP 0x005a4007
//   XREF to: 005a4007 (UNCONDITIONAL_JUMP)
// 005a4193: PUSH ESI
//   Label: LAB_005a4193
// 005a4194: PUSH 0x1
// 005a4196: PUSH 0xa
// 005a4198: LEA EAX,[ESP + 0x70]
//   XREF to: Stack[-0x24] (DATA)
// 005a419c: PUSH EAX
// 005a419d: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 005a41a2: ADD ESP,0x10
// 005a41a5: CMP EAX,0x1
// 005a41a8: JNZ 0x005a4007
//   XREF to: 005a4007 (CONDITIONAL_JUMP)
// 005a41ae: MOV EDX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x24] (READ)
// 005a41b2: CMP DX,0x1
// 005a41b6: JNZ 0x005a4271
//   XREF to: 005a4271 (CONDITIONAL_JUMP)
// 005a41bc: XOR EAX,EAX
// 005a41be: MOV AX,word ptr [ESP + 0x66]
//   XREF to: Stack[-0x22] (READ)
// 005a41c3: CMP EAX,0x1
// 005a41c6: JL 0x005a42a0
//   XREF to: 005a42a0 (CONDITIONAL_JUMP)
// 005a41cc: CMP EAX,0x2
// 005a41cf: JG 0x005a42a0
//   XREF to: 005a42a0 (CONDITIONAL_JUMP)
// 005a41d5: IMUL EAX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x20] (READ)
// 005a41da: MOV EDX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x1c] (READ)
// 005a41de: CMP AX,DX
// 005a41e1: JNZ 0x005a42d1
//   XREF to: 005a42d1 (CONDITIONAL_JUMP)
// 005a41e7: MOV EAX,dword ptr [ESP + 0x94]
//   XREF to: Stack[0xc] (READ)
// 005a41ee: MOV dword ptr [EAX + 0x104],0x8
// 005a41f8: MOV EAX,dword ptr [EDI]
//   Label: LAB_005a41f8
// 005a41fa: PUSH 0x0
// 005a41fc: ADD EAX,EBX
// 005a41fe: PUSH EAX
// 005a41ff: PUSH ESI
// 005a4200: CALL crt_stdio.c_fseek_FUN_005ffacc
//   XREF to: 005ffacc (UNCONDITIONAL_CALL)
// 005a4205: ADD ESP,0xc
// 005a4208: TEST EAX,EAX
// 005a420a: JNZ 0x005a4007
//   XREF to: 005a4007 (CONDITIONAL_JUMP)
// 005a4210: PUSH ESI
// 005a4211: PUSH 0x1
// 005a4213: PUSH 0x8
// 005a4215: LEA EAX,[ESP + 0x7c]
//   XREF to: Stack[-0x18] (DATA)
// 005a4219: PUSH EAX
// 005a421a: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 005a421f: ADD ESP,0x10
// 005a4222: CMP EAX,0x1
// 005a4225: JNZ 0x005a4007
//   XREF to: 005a4007 (CONDITIONAL_JUMP)
// 005a422b: MOV DL,byte ptr [ESP + 0x70]
//   XREF to: Stack[-0x18] (READ)
// 005a422f: ADD EBX,0x8
// 005a4232: CMP DL,0x64
// 005a4235: JNZ 0x005a4251
//   XREF to: 005a4251 (CONDITIONAL_JUMP)
// 005a4237: MOV DH,byte ptr [ESP + 0x71]
//   XREF to: Stack[-0x17] (READ)
// 005a423b: CMP DH,0x61
// 005a423e: JNZ 0x005a4251
//   XREF to: 005a4251 (CONDITIONAL_JUMP)
// 005a4240: CMP byte ptr [ESP + 0x72],0x74
//   XREF to: Stack[-0x16] (READ)
// 005a4245: JNZ 0x005a4251
//   XREF to: 005a4251 (CONDITIONAL_JUMP)
// 005a4247: CMP DH,byte ptr [ESP + 0x73]
//   XREF to: Stack[-0x15] (READ)
// 005a424b: JZ 0x005a431e
//   XREF to: 005a431e (CONDITIONAL_JUMP)
// 005a4251: ADD EBX,dword ptr [ESP + 0x74]
//   Label: LAB_005a4251
//   XREF to: Stack[-0x14] (READ)
// 005a4255: CMP EBX,EBP
// 005a4257: JLE 0x005a41f8
//   XREF to: 005a41f8 (CONDITIONAL_JUMP)
// 005a4259: MOV EAX,0x64f538
//   XREF to: 0064f538 (PARAM)
// 005a425e: PUSH EAX
//   XREF to: 0064f538 (DATA)
// 005a425f: PUSH 0x64f3f8
//   XREF to: 0064f3f8 (DATA)
// 005a4264: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005a4269: ADD ESP,0x8
// 005a426c: JMP 0x005a4007
//   XREF to: 005a4007 (UNCONDITIONAL_JUMP)
// 005a4271: XOR EAX,EAX
//   Label: LAB_005a4271
// 005a4273: MOV AX,DX
// 005a4276: PUSH EAX
// 005a4277: PUSH 0x64f49c
//   XREF to: 0064f49c (DATA)
// 005a427c: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x88] (DATA)
// 005a4280: PUSH EAX
// 005a4281: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005a4286: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x88] (DATA)
// 005a428a: ADD ESP,0xc
// 005a428d: PUSH EAX
// 005a428e: PUSH 0x64f3f8
//   XREF to: 0064f3f8 (DATA)
// 005a4293: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005a4298: ADD ESP,0x8
// 005a429b: JMP 0x005a4007
//   XREF to: 005a4007 (UNCONDITIONAL_JUMP)
// 005a42a0: XOR EAX,EAX
//   Label: LAB_005a42a0
// 005a42a2: MOV AX,word ptr [ESP + 0x66]
//   XREF to: Stack[-0x22] (READ)
// 005a42a7: PUSH EAX
// 005a42a8: PUSH 0x64f4e3
//   XREF to: 0064f4e3 (DATA)
// 005a42ad: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x88] (DATA)
// 005a42b1: PUSH EAX
// 005a42b2: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005a42b7: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x88] (DATA)
// 005a42bb: ADD ESP,0xc
// 005a42be: PUSH EAX
// 005a42bf: PUSH 0x64f3f8
//   XREF to: 0064f3f8 (DATA)
// 005a42c4: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005a42c9: ADD ESP,0x8
// 005a42cc: JMP 0x005a4007
//   XREF to: 005a4007 (UNCONDITIONAL_JUMP)
// 005a42d1: ADD EAX,EAX
//   Label: LAB_005a42d1
// 005a42d3: CMP AX,DX
// 005a42d6: JNZ 0x005a42ee
//   XREF to: 005a42ee (CONDITIONAL_JUMP)
// 005a42d8: MOV EAX,dword ptr [ESP + 0x94]
//   XREF to: Stack[0xc] (READ)
// 005a42df: MOV dword ptr [EAX + 0x104],0x10
// 005a42e9: JMP 0x005a41f8
//   XREF to: 005a41f8 (UNCONDITIONAL_JUMP)
// 005a42ee: XOR EAX,EAX
//   Label: LAB_005a42ee
// 005a42f0: MOV AX,DX
// 005a42f3: PUSH EAX
// 005a42f4: PUSH EAX
// 005a42f5: PUSH 0x64f514
//   XREF to: 0064f514 (DATA)
// 005a42fa: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x88] (DATA)
// 005a42fe: PUSH EAX
// 005a42ff: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005a4304: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x88] (DATA)
// 005a4308: ADD ESP,0x10
// 005a430b: PUSH EAX
// 005a430c: PUSH 0x64f3f8
//   XREF to: 0064f3f8 (DATA)
// 005a4311: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005a4316: ADD ESP,0x8
// 005a4319: JMP 0x005a4007
//   XREF to: 005a4007 (UNCONDITIONAL_JUMP)
// 005a431e: MOV EDX,dword ptr [EDI]
//   Label: LAB_005a431e
// 005a4320: ADD EDX,EBX
// 005a4322: XOR EAX,EAX
// 005a4324: MOV dword ptr [EDI],EDX
// 005a4326: MOV EDX,dword ptr [ESP + 0x94]
//   XREF to: Stack[0xc] (READ)
// 005a432d: MOV AX,word ptr [ESP + 0x66]
//   XREF to: Stack[-0x22] (READ)
// 005a4332: XOR EBX,EBX
// 005a4334: MOV dword ptr [EDX + 0x108],EAX
// 005a433a: MOV BX,AX
// 005a433d: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x14] (READ)
// 005a4341: XOR EDX,EDX
// 005a4343: DIV EBX
// 005a4345: MOV EDX,dword ptr [ESP + 0x94]
//   XREF to: Stack[0xc] (READ)
// 005a434c: MOV EBX,EAX
// 005a434e: MOV EDX,dword ptr [EDX + 0x104]
// 005a4354: MOV EAX,dword ptr [ESP + 0x94]
//   XREF to: Stack[0xc] (READ)
// 005a435b: SAR EDX,0x1f
// 005a435e: MOV EAX,dword ptr [EAX + 0x104]
// 005a4364: SHL EDX,0x3
// 005a4367: SBB EAX,EDX
// 005a4369: SAR EAX,0x3
// 005a436c: MOV ESI,EAX
// 005a436e: XOR EDX,EDX
// 005a4370: MOV EAX,EBX
// 005a4372: DIV ESI
// 005a4374: MOV EDX,dword ptr [ESP + 0x94]
//   XREF to: Stack[0xc] (READ)
// 005a437b: MOV dword ptr [EDX + 0x110],EAX
// 005a4381: XOR EAX,EAX
// 005a4383: MOV AX,word ptr [ESP + 0x68]
//   XREF to: Stack[-0x20] (READ)
// 005a4388: MOV dword ptr [EDX + 0x10c],EAX
// 005a438e: MOV EAX,0x1
// 005a4393: ADD ESP,0x78
// 005a4396: POP EBP
// 005a4397: POP EDI
// 005a4398: POP ESI
// 005a4399: POP EBX
// 005a439a: RET
