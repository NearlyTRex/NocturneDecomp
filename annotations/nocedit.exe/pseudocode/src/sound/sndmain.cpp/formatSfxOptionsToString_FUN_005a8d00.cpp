// Name: sound_sndmain.cpp_formatSfxOptionsToString_FUN_005a8d00
// Address: 005a8d00
// Address Range: [[005a8d00, 005a8e86]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_formatSfxOptionsToString_FUN_005a8d00(char * output_buffer, char * prefix_string, CSfxOptions * options, uint format_flags)
// Globals:
//   TerminatedCString s_s_006508fd
//   TerminatedCString s_channel_d_s_00650900
//   TerminatedCString s_pos_lg_lg_lg_0065090e
//   TerminatedCString s_posPtrFloat_p_0065091f
//   TerminatedCString s_posPtrDouble_p_0065092f
//   TerminatedCString s_vel_lg_lg_lg_00650940
//   TerminatedCString s_velPtrFloat_p_00650951
//   TerminatedCString s_velPtrDouble_p_00650961
//   TerminatedCString s_vol_g_00650972
//   TerminatedCString s_freq_g_0065097a
//   TerminatedCString s_delay_lg_00650983
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0

#include "nocturne.h"

void __cdecl
sound_sndmain_cpp_formatSfxOptionsToString_FUN_005a8d00
          (char *output_buffer,char *prefix_string,CSfxOptions *options,uint format_flags)

{
  int iVar1;
  byte in_stack_00000014;
  
  if (prefix_string == (char *)0x0) {
    *output_buffer = '\0';
  }
  else {
    iVar1 = crt_stdio_c_sprintf_FUN_005fdbd0(output_buffer,"%s",prefix_string);
    output_buffer = output_buffer + iVar1;
  }
  if ((in_stack_00000014 & 1) != 0) {
    iVar1 = crt_stdio_c_sprintf_FUN_005fdbd0(output_buffer," channel=%d%s");
    output_buffer = output_buffer + iVar1;
  }
  if ((in_stack_00000014 & 2) != 0) {
    if (options->position_format == 0) {
      iVar1 = crt_stdio_c_sprintf_FUN_005fdbd0
                        (output_buffer," pos=%lg,%lg,%lg",*(undefined4 *)&(options->position).x
                         ,*(undefined4 *)((int)&(options->position).x + 4),
                         *(undefined4 *)&(options->position).y,
                         *(undefined4 *)((int)&(options->position).y + 4),
                         *(undefined4 *)&(options->position).z);
      output_buffer = output_buffer + iVar1;
    }
    if (options->position_format == 1) {
      iVar1 = crt_stdio_c_sprintf_FUN_005fdbd0(output_buffer," posPtrFloat=%p");
      output_buffer = output_buffer + iVar1;
    }
    if (options->position_format == 2) {
      iVar1 = crt_stdio_c_sprintf_FUN_005fdbd0(output_buffer," posPtrDouble=%p");
      output_buffer = output_buffer + iVar1;
    }
  }
  if ((in_stack_00000014 & 4) != 0) {
    if (options->velocity_format == 0) {
      iVar1 = crt_stdio_c_sprintf_FUN_005fdbd0
                        (output_buffer," vel=%lg,%lg,%lg",*(undefined4 *)&(options->velocity).x
                         ,*(undefined4 *)((int)&(options->velocity).x + 4),
                         *(undefined4 *)&(options->velocity).y,
                         *(undefined4 *)((int)&(options->velocity).y + 4),
                         *(undefined4 *)&(options->velocity).z);
      output_buffer = output_buffer + iVar1;
    }
    if (options->velocity_format == 1) {
      iVar1 = crt_stdio_c_sprintf_FUN_005fdbd0(output_buffer," velPtrFloat=%p");
      output_buffer = output_buffer + iVar1;
    }
    if (options->velocity_format == 2) {
      iVar1 = crt_stdio_c_sprintf_FUN_005fdbd0(output_buffer," velPtrDouble=%p");
      output_buffer = output_buffer + iVar1;
    }
  }
  if ((in_stack_00000014 & 8) != 0) {
    iVar1 = crt_stdio_c_sprintf_FUN_005fdbd0
                      (output_buffer," vol=%g",(double)options->current_volume);
    output_buffer = output_buffer + iVar1;
  }
  if ((in_stack_00000014 & 0x10) != 0) {
    iVar1 = crt_stdio_c_sprintf_FUN_005fdbd0
                      (output_buffer," freq=%g",(double)options->base_frequency);
    output_buffer = output_buffer + iVar1;
  }
  if ((in_stack_00000014 & 0x20) == 0) {
    return;
  }
  crt_stdio_c_sprintf_FUN_005fdbd0
            (output_buffer," delay=%lg",*(undefined4 *)&options->delay_remaining,
             *(undefined4 *)((int)&options->delay_remaining + 4));
  return;
}


// Assembly code:
// 005a8d00: PUSH EBX
//   Label: sound_sndmain.cpp_formatSfxOptionsToString_FUN_005a8d00
// 005a8d01: PUSH ESI
// 005a8d02: PUSH EDI
// 005a8d03: PUSH EBP
// 005a8d04: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a8d08: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005a8d0c: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005a8d10: MOV EBX,EDI
// 005a8d12: TEST EAX,EAX
// 005a8d14: JNZ 0x005a8e55
//   XREF to: 005a8e55 (CONDITIONAL_JUMP)
// 005a8d1a: MOV byte ptr [EDI],0x0
// 005a8d1d: TEST byte ptr [ESP + 0x20],0x1
//   Label: LAB_005a8d1d
//   XREF to: Stack[0x10] (READ)
// 005a8d22: JZ 0x005a8d37
//   XREF to: 005a8d37 (CONDITIONAL_JUMP)
// 005a8d24: MOV EDX,dword ptr [ESI]
// 005a8d26: PUSH EDX
// 005a8d27: PUSH 0x650900
//   XREF to: 00650900 (DATA)
// 005a8d2c: PUSH EBX
// 005a8d2d: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005a8d32: ADD ESP,0xc
// 005a8d35: ADD EBX,EAX
// 005a8d37: TEST byte ptr [ESP + 0x20],0x2
//   Label: LAB_005a8d37
//   XREF to: Stack[0x10] (READ)
// 005a8d3c: JZ 0x005a8da0
//   XREF to: 005a8da0 (CONDITIONAL_JUMP)
// 005a8d3e: CMP dword ptr [ESI + 0x20],0x0
// 005a8d42: JNZ 0x005a8d6c
//   XREF to: 005a8d6c (CONDITIONAL_JUMP)
// 005a8d44: MOV EDI,dword ptr [ESI + 0x18]
// 005a8d47: PUSH EDI
// 005a8d48: MOV EBP,dword ptr [ESI + 0x14]
// 005a8d4b: PUSH EBP
// 005a8d4c: MOV EAX,dword ptr [ESI + 0x10]
// 005a8d4f: PUSH EAX
// 005a8d50: MOV EDX,dword ptr [ESI + 0xc]
// 005a8d53: PUSH EDX
// 005a8d54: MOV ECX,dword ptr [ESI + 0x8]
// 005a8d57: PUSH ECX
// 005a8d58: MOV EDI,dword ptr [ESI + 0x4]
// 005a8d5b: PUSH EDI
// 005a8d5c: PUSH 0x65090e
//   XREF to: 0065090e (DATA)
// 005a8d61: PUSH EBX
// 005a8d62: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005a8d67: ADD ESP,0x20
// 005a8d6a: ADD EBX,EAX
// 005a8d6c: CMP dword ptr [ESI + 0x20],0x1
//   Label: LAB_005a8d6c
// 005a8d70: JNZ 0x005a8d86
//   XREF to: 005a8d86 (CONDITIONAL_JUMP)
// 005a8d72: MOV EAX,dword ptr [ESI + 0x1c]
// 005a8d75: PUSH EAX
// 005a8d76: PUSH 0x65091f
//   XREF to: 0065091f (DATA)
// 005a8d7b: PUSH EBX
// 005a8d7c: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005a8d81: ADD ESP,0xc
// 005a8d84: ADD EBX,EAX
// 005a8d86: CMP dword ptr [ESI + 0x20],0x2
//   Label: LAB_005a8d86
// 005a8d8a: JNZ 0x005a8da0
//   XREF to: 005a8da0 (CONDITIONAL_JUMP)
// 005a8d8c: MOV ECX,dword ptr [ESI + 0x1c]
// 005a8d8f: PUSH ECX
// 005a8d90: PUSH 0x65092f
//   XREF to: 0065092f (DATA)
// 005a8d95: PUSH EBX
// 005a8d96: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005a8d9b: ADD ESP,0xc
// 005a8d9e: ADD EBX,EAX
// 005a8da0: TEST byte ptr [ESP + 0x20],0x4
//   Label: LAB_005a8da0
//   XREF to: Stack[0x10] (READ)
// 005a8da5: JZ 0x005a8e09
//   XREF to: 005a8e09 (CONDITIONAL_JUMP)
// 005a8da7: CMP dword ptr [ESI + 0x40],0x0
// 005a8dab: JNZ 0x005a8dd5
//   XREF to: 005a8dd5 (CONDITIONAL_JUMP)
// 005a8dad: MOV EBP,dword ptr [ESI + 0x38]
// 005a8db0: PUSH EBP
// 005a8db1: MOV EAX,dword ptr [ESI + 0x34]
// 005a8db4: PUSH EAX
// 005a8db5: MOV EDX,dword ptr [ESI + 0x30]
// 005a8db8: PUSH EDX
// 005a8db9: MOV ECX,dword ptr [ESI + 0x2c]
// 005a8dbc: PUSH ECX
// 005a8dbd: MOV EDI,dword ptr [ESI + 0x28]
// 005a8dc0: PUSH EDI
// 005a8dc1: MOV EBP,dword ptr [ESI + 0x24]
// 005a8dc4: PUSH EBP
// 005a8dc5: PUSH 0x650940
//   XREF to: 00650940 (DATA)
// 005a8dca: PUSH EBX
// 005a8dcb: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005a8dd0: ADD ESP,0x20
// 005a8dd3: ADD EBX,EAX
// 005a8dd5: CMP dword ptr [ESI + 0x40],0x1
//   Label: LAB_005a8dd5
// 005a8dd9: JNZ 0x005a8def
//   XREF to: 005a8def (CONDITIONAL_JUMP)
// 005a8ddb: MOV EDX,dword ptr [ESI + 0x3c]
// 005a8dde: PUSH EDX
// 005a8ddf: PUSH 0x650951
//   XREF to: 00650951 (DATA)
// 005a8de4: PUSH EBX
// 005a8de5: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005a8dea: ADD ESP,0xc
// 005a8ded: ADD EBX,EAX
// 005a8def: CMP dword ptr [ESI + 0x40],0x2
//   Label: LAB_005a8def
// 005a8df3: JNZ 0x005a8e09
//   XREF to: 005a8e09 (CONDITIONAL_JUMP)
// 005a8df5: MOV EDI,dword ptr [ESI + 0x3c]
// 005a8df8: PUSH EDI
// 005a8df9: PUSH 0x650961
//   XREF to: 00650961 (DATA)
// 005a8dfe: PUSH EBX
// 005a8dff: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005a8e04: ADD ESP,0xc
// 005a8e07: ADD EBX,EAX
// 005a8e09: TEST byte ptr [ESP + 0x20],0x8
//   Label: LAB_005a8e09
//   XREF to: Stack[0x10] (READ)
// 005a8e0e: JZ 0x005a8e29
//   XREF to: 005a8e29 (CONDITIONAL_JUMP)
// 005a8e10: SUB ESP,0x8
// 005a8e13: FLD float ptr [ESI + 0x44]
// 005a8e16: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 005a8e19: PUSH 0x650972
//   XREF to: 00650972 (DATA)
// 005a8e1e: PUSH EBX
// 005a8e1f: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005a8e24: ADD ESP,0x10
// 005a8e27: ADD EBX,EAX
// 005a8e29: TEST byte ptr [ESP + 0x20],0x10
//   Label: LAB_005a8e29
//   XREF to: Stack[0x10] (READ)
// 005a8e2e: JZ 0x005a8e49
//   XREF to: 005a8e49 (CONDITIONAL_JUMP)
// 005a8e30: SUB ESP,0x8
// 005a8e33: FLD float ptr [ESI + 0x48]
// 005a8e36: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 005a8e39: PUSH 0x65097a
//   XREF to: 0065097a (DATA)
// 005a8e3e: PUSH EBX
// 005a8e3f: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005a8e44: ADD ESP,0x10
// 005a8e47: ADD EBX,EAX
// 005a8e49: TEST byte ptr [ESP + 0x20],0x20
//   Label: LAB_005a8e49
//   XREF to: Stack[0x10] (READ)
// 005a8e4e: JNZ 0x005a8e6c
//   XREF to: 005a8e6c (CONDITIONAL_JUMP)
// 005a8e50: POP EBP
// 005a8e51: POP EDI
// 005a8e52: POP ESI
// 005a8e53: POP EBX
// 005a8e54: RET
// 005a8e55: PUSH EAX
//   Label: LAB_005a8e55
// 005a8e56: PUSH 0x6508fd
//   XREF to: 006508fd (DATA)
// 005a8e5b: PUSH EDI
// 005a8e5c: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005a8e61: ADD ESP,0xc
// 005a8e64: LEA EBX,[EDI + EAX*0x1]
// 005a8e67: JMP 0x005a8d1d
//   XREF to: 005a8d1d (UNCONDITIONAL_JUMP)
// 005a8e6c: MOV EBP,dword ptr [ESI + 0x50]
//   Label: LAB_005a8e6c
// 005a8e6f: PUSH EBP
// 005a8e70: MOV EAX,dword ptr [ESI + 0x4c]
// 005a8e73: PUSH EAX
// 005a8e74: PUSH 0x650983
//   XREF to: 00650983 (DATA)
// 005a8e79: PUSH EBX
// 005a8e7a: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005a8e7f: ADD ESP,0x10
// 005a8e82: POP EBP
// 005a8e83: POP EDI
// 005a8e84: POP ESI
// 005a8e85: POP EBX
// 005a8e86: RET
