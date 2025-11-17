// Name: sound_sndmain_cpp_convertMixBufToOutput_FUN_005a5b80
// Address: 005a5b80
// Address Range: [[005a5b80, 005a5cf7]]
// Convention: __cdecl
// Signature: void sound_sndmain_cpp_convertMixBufToOutput_FUN_005a5b80(float * input_samples, void * output_buffer, int bits_per_sample, int num_samples, int output_stride)
// Cross-references:
//   sound_sndmain.cpp_pollAndMixSfx_FUN_005aca90 (005aca90) at 005acd01 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_0064fc18
//   TerminatedCString s_convertMixBufToOutput_in_0064fc2d
//   float FLOAT_0064fc57 = 32766
//   float FLOAT_0064fc5b = 127
//   double DOUBLE_0064fc5f = -1
//   float FLOAT_0064fc67 = 128
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl
sound_sndmain_cpp_convertMixBufToOutput_FUN_005a5b80
          (float *input_samples,void *output_buffer,int bits_per_sample,int num_samples,
          int output_stride)

{
  float fVar1;
  undefined2 *local_30;
  undefined1 local_28;
  undefined2 local_20;
  int local_18;
  int local_14;
  
  local_30 = (undefined2 *)output_buffer;
  if ((uint)bits_per_sample < 8) {
LAB_005a5ccd:
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x55a;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("convertMixBufToOutput - invalid bits: %d",bits_per_sample);
    return;
  }
  if ((uint)bits_per_sample < 9) {
    local_18 = 0;
    if (0 < num_samples) {
      do {
        fVar1 = *input_samples;
        if (fVar1 <= (float)DOUBLE_0064fc5f) {
          *(undefined1 *)local_30 = 0;
        }
        else if (fVar1 < 1.0) {
          local_28 = (undefined1)(int)ROUND(fVar1 * FLOAT_0064fc5b + FLOAT_0064fc67);
          *(undefined1 *)local_30 = local_28;
        }
        else {
          *(undefined1 *)local_30 = 0xff;
        }
        local_30 = (undefined2 *)((int)local_30 + output_stride);
        input_samples = input_samples + 1;
        local_18 = local_18 + 1;
      } while (local_18 < num_samples);
    }
  }
  else {
    if (bits_per_sample != 0x10) goto LAB_005a5ccd;
    local_14 = 0;
    if (0 < num_samples) {
      do {
        fVar1 = *input_samples;
        if (fVar1 <= (float)DOUBLE_0064fc5f) {
          *local_30 = 0x8001;
        }
        else if (fVar1 < 1.0) {
          local_20 = (undefined2)(int)ROUND(fVar1 * FLOAT_0064fc57);
          *local_30 = local_20;
        }
        else {
          *local_30 = 0x7fff;
        }
        local_30 = (undefined2 *)((int)local_30 + output_stride);
        input_samples = input_samples + 1;
        local_14 = local_14 + 1;
      } while (local_14 < num_samples);
    }
  }
  return;
}


// Assembly code:
// 005a5b80: PUSH EBX
//   Label: sound_sndmain_cpp_convertMixBufToOutput_FUN_005a5b80
// 005a5b81: PUSH ESI
// 005a5b82: PUSH EDI
// 005a5b83: PUSH EBP
// 005a5b84: MOV EBP,ESP
// 005a5b86: SUB ESP,0x34
// 005a5b89: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005a5b8c: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005a5b8f: MOV dword ptr [EBP + -0x20],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 005a5b92: CMP EAX,0x8
// 005a5b95: JC 0x005a5ccd
//   XREF to: 005a5ccd (CONDITIONAL_JUMP)
// 005a5b9b: JBE 0x005a5c09
//   XREF to: 005a5c09 (CONDITIONAL_JUMP)
// 005a5b9d: CMP EAX,0x10
// 005a5ba0: JNZ 0x005a5ccd
//   XREF to: 005a5ccd (CONDITIONAL_JUMP)
// 005a5ba6: XOR EDX,EDX
// 005a5ba8: MOV ECX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005a5bab: MOV dword ptr [EBP + -0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005a5bae: TEST ECX,ECX
// 005a5bb0: JLE 0x005a5c02
//   XREF to: 005a5c02 (CONDITIONAL_JUMP)
// 005a5bb2: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005a5bb2
//   XREF to: Stack[0x4] (READ)
// 005a5bb5: MOV EAX,dword ptr [EAX]
// 005a5bb7: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005a5bba: FLD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 005a5bbd: FST double ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (WRITE)
// 005a5bc0: FCOMP double ptr [0x0064fc5f]
//   XREF to: 0064fc5f (READ)
// 005a5bc6: FNSTSW AX
// 005a5bc8: SAHF
// 005a5bc9: JBE 0x005a5c93
//   XREF to: 005a5c93 (CONDITIONAL_JUMP)
// 005a5bcf: FLD1
// 005a5bd1: FCOMP double ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 005a5bd4: FNSTSW AX
// 005a5bd6: SAHF
// 005a5bd7: JA 0x005a5ca0
//   XREF to: 005a5ca0 (CONDITIONAL_JUMP)
// 005a5bdd: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 005a5be0: MOV word ptr [EAX],0x7fff
// 005a5be5: MOV EAX,dword ptr [EBP + 0x24]
//   Label: LAB_005a5be5
//   XREF to: Stack[0x14] (READ)
// 005a5be8: ADD dword ptr [EBP + -0x20],EAX
//   XREF to: Stack[-0x30] (READ_WRITE)
// 005a5beb: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a5bee: MOV ESI,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 005a5bf1: MOV EDI,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005a5bf4: ADD EBX,0x4
// 005a5bf7: INC ESI
// 005a5bf8: MOV dword ptr [EBP + 0x14],EBX
//   XREF to: Stack[0x4] (WRITE)
// 005a5bfb: MOV dword ptr [EBP + -0x4],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 005a5bfe: CMP ESI,EDI
// 005a5c00: JL 0x005a5bb2
//   XREF to: 005a5bb2 (CONDITIONAL_JUMP)
// 005a5c02: MOV ESP,EBP
//   Label: LAB_005a5c02
// 005a5c04: POP EBP
// 005a5c05: POP EDI
// 005a5c06: POP ESI
// 005a5c07: POP EBX
// 005a5c08: RET
// 005a5c09: XOR EBX,EBX
//   Label: LAB_005a5c09
// 005a5c0b: MOV ESI,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005a5c0e: MOV dword ptr [EBP + -0x8],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 005a5c11: TEST ESI,ESI
// 005a5c13: JLE 0x005a5c02
//   XREF to: 005a5c02 (CONDITIONAL_JUMP)
// 005a5c15: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005a5c15
//   XREF to: Stack[0x4] (READ)
// 005a5c18: MOV EAX,dword ptr [EAX]
// 005a5c1a: MOV dword ptr [EBP + -0x24],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005a5c1d: FLD float ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 005a5c20: FST double ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (WRITE)
// 005a5c23: FCOMP double ptr [0x0064fc5f]
//   XREF to: 0064fc5f (READ)
// 005a5c29: FNSTSW AX
// 005a5c2b: SAHF
// 005a5c2c: JBE 0x005a5c5d
//   XREF to: 005a5c5d (CONDITIONAL_JUMP)
// 005a5c2e: FLD1
// 005a5c30: FCOMP double ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 005a5c33: FNSTSW AX
// 005a5c35: SAHF
// 005a5c36: JA 0x005a5c65
//   XREF to: 005a5c65 (CONDITIONAL_JUMP)
// 005a5c38: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 005a5c3b: MOV byte ptr [EAX],0xff
// 005a5c3e: MOV EAX,dword ptr [EBP + 0x24]
//   Label: LAB_005a5c3e
//   XREF to: Stack[0x14] (READ)
// 005a5c41: ADD dword ptr [EBP + -0x20],EAX
//   XREF to: Stack[-0x30] (READ_WRITE)
// 005a5c44: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a5c47: MOV EBX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 005a5c4a: MOV ESI,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005a5c4d: ADD ECX,0x4
// 005a5c50: INC EBX
// 005a5c51: MOV dword ptr [EBP + 0x14],ECX
//   XREF to: Stack[0x4] (WRITE)
// 005a5c54: MOV dword ptr [EBP + -0x8],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 005a5c57: CMP EBX,ESI
// 005a5c59: JGE 0x005a5c02
//   XREF to: 005a5c02 (CONDITIONAL_JUMP)
// 005a5c5b: JMP 0x005a5c15
//   XREF to: 005a5c15 (UNCONDITIONAL_JUMP)
// 005a5c5d: MOV EAX,dword ptr [EBP + -0x20]
//   Label: LAB_005a5c5d
//   XREF to: Stack[-0x30] (READ)
// 005a5c60: MOV byte ptr [EAX],0x0
// 005a5c63: JMP 0x005a5c3e
//   XREF to: 005a5c3e (UNCONDITIONAL_JUMP)
// 005a5c65: FLD float ptr [EBP + -0x24]
//   Label: LAB_005a5c65
//   XREF to: Stack[-0x34] (READ)
// 005a5c68: FMUL float ptr [0x0064fc5b]
//   XREF to: 0064fc5b (READ)
// 005a5c6e: FADD float ptr [0x0064fc67]
//   XREF to: 0064fc67 (READ)
// 005a5c74: FSTP float ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (WRITE)
// 005a5c77: FLD float ptr [EBP + 0xffffffe4]
//   XREF to: Stack[-0x2c] (READ)
// 005a5c7d: FISTP dword ptr [EBP + 0xffffffe8]
//   XREF to: Stack[-0x28] (WRITE)
// 005a5c83: MOV ECX,dword ptr [EBP + 0xffffffe0]
//   XREF to: Stack[-0x30] (READ)
// 005a5c89: MOV AL,byte ptr [EBP + 0xffffffe8]
//   XREF to: Stack[-0x28] (READ)
// 005a5c8f: MOV byte ptr [ECX],AL
// 005a5c91: JMP 0x005a5c3e
//   XREF to: 005a5c3e (UNCONDITIONAL_JUMP)
// 005a5c93: MOV EAX,dword ptr [EBP + -0x20]
//   Label: LAB_005a5c93
//   XREF to: Stack[-0x30] (READ)
// 005a5c96: MOV word ptr [EAX],0x8001
// 005a5c9b: JMP 0x005a5be5
//   XREF to: 005a5be5 (UNCONDITIONAL_JUMP)
// 005a5ca0: FLD float ptr [EBP + -0xc]
//   Label: LAB_005a5ca0
//   XREF to: Stack[-0x1c] (READ)
// 005a5ca3: FMUL float ptr [0x0064fc57]
//   XREF to: 0064fc57 (READ)
// 005a5ca9: FSTP float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (WRITE)
// 005a5cac: FLD float ptr [EBP + 0xffffffec]
//   XREF to: Stack[-0x24] (READ)
// 005a5cb2: FISTP dword ptr [EBP + 0xfffffff0]
//   XREF to: Stack[-0x20] (WRITE)
// 005a5cb8: MOV ECX,dword ptr [EBP + 0xffffffe0]
//   XREF to: Stack[-0x30] (READ)
// 005a5cbe: MOV AX,word ptr [EBP + 0xfffffff0]
//   XREF to: Stack[-0x20] (READ)
// 005a5cc5: MOV word ptr [ECX],AX
// 005a5cc8: JMP 0x005a5be5
//   XREF to: 005a5be5 (UNCONDITIONAL_JUMP)
// 005a5ccd: PUSH EAX
//   Label: LAB_005a5ccd
// 005a5cce: MOV EDI,0x64fc18
//   XREF to: 0064fc18 (DATA)
// 005a5cd3: MOV EDX,0x55a
// 005a5cd8: PUSH 0x64fc2d
//   XREF to: 0064fc2d (DATA)
// 005a5cdd: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 005a5ce3: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 005a5ce9: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a5cee: ADD ESP,0x8
// 005a5cf1: MOV ESP,EBP
// 005a5cf3: POP EBP
// 005a5cf4: POP EDI
// 005a5cf5: POP ESI
// 005a5cf6: POP EBX
// 005a5cf7: RET
