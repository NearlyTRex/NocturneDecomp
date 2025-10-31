// Name: sound_mp3.cpp_FUN_00533ba0
// Address: 00533ba0
// Address Range: [[00533ba0, 00533c4a]]
// Convention: unknown
// Signature: undefined sound_mp3.cpp_FUN_00533ba0()
// Cross-references:
//   sound_mp3.cpp_MpegLoadMaybe_FUN_00534d40 (00534d40) at 005359c7 [UNCONDITIONAL_CALL]
// Function calls:
//   sound_mp3.cpp_FUN_00533690

#include "nocturne.h"

/* Signature: undefined1 sound_mp3.cpp_FUN_00533ba0(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6) */

void sound_mp3_cpp_FUN_00533ba0(void)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  BADSPACEBASE *in_ESP;
  int in_stack_00000008;
  float *in_stack_00000010;
  int in_stack_00000018;
  float afStack_90 [18];
  float afStack_48 [17];
  
  sound_mp3_cpp_FUN_00533690();
  iVar1 = 0;
  pfVar3 = (float *)(in_stack_00000008 + 0x7430 + in_stack_00000018 * 0x900 +
                    (int)in_stack_00000010 * 0x48);
  do {
    iVar2 = iVar1 + 1;
    *in_stack_00000010 = afStack_90[iVar1] + *pfVar3;
    *pfVar3 = afStack_90[iVar1 + 0x12];
    iVar1 = iVar2;
    in_stack_00000010 = in_stack_00000010 + 1;
    pfVar3 = pfVar3 + 1;
  } while (iVar2 < 0x12);
  return;
}


// Assembly code:
// 00533ba0: PUSH EBX
//   Label: sound_mp3.cpp_FUN_00533ba0
// 00533ba1: SUB ESP,0x90
// 00533ba7: MOV EBX,dword ptr [ESP + 0xa4]
//   XREF to: Stack[0x10] (READ)
// 00533bae: MOV EAX,dword ptr [ESP + 0xac]
//   XREF to: Stack[0x18] (READ)
// 00533bb5: CMP dword ptr [EAX + 0x10],0x0
// 00533bb9: JZ 0x00533c46
//   XREF to: 00533c46 (CONDITIONAL_JUMP)
// 00533bbf: CMP dword ptr [EAX + 0x18],0x0
// 00533bc3: JZ 0x00533c46
//   XREF to: 00533c46 (CONDITIONAL_JUMP)
// 00533bc9: CMP EBX,0x2
// 00533bcc: JGE 0x00533c46
//   XREF to: 00533c46 (CONDITIONAL_JUMP)
// 00533bce: XOR EAX,EAX
// 00533bd0: PUSH ESI
//   Label: LAB_00533bd0
// 00533bd1: PUSH EAX
// 00533bd2: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x94] (DATA)
// 00533bd6: PUSH EAX
// 00533bd7: MOV ESI,dword ptr [ESP + 0xa8]
//   XREF to: Stack[0x8] (READ)
// 00533bde: PUSH ESI
// 00533bdf: CALL sound_mp3.cpp_FUN_00533690
//   XREF to: 00533690 (UNCONDITIONAL_CALL)
// 00533be4: ADD ESP,0xc
// 00533be7: MOV EDX,dword ptr [ESP + 0xac]
//   XREF to: Stack[0x14] (READ)
// 00533bee: LEA EAX,[EDX*0x8 + 0x0]
// 00533bf5: MOV ECX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[0x4] (READ)
// 00533bfc: ADD EAX,EDX
// 00533bfe: ADD ECX,0x7430
// 00533c04: SHL EAX,0x8
// 00533c07: ADD ECX,EAX
// 00533c09: LEA EAX,[EBX*0x8 + 0x0]
// 00533c10: ADD EAX,EBX
// 00533c12: SHL EAX,0x3
// 00533c15: LEA EDX,[ECX + EAX*0x1]
// 00533c18: MOV ECX,dword ptr [ESP + 0xa4]
//   XREF to: Stack[0xc] (READ)
// 00533c1f: XOR EAX,EAX
// 00533c21: POP ESI
// 00533c22: ADD EDX,0x4
//   Label: LAB_00533c22
// 00533c25: FLD float ptr [ESP + EAX*0x4]
//   XREF to: Stack[-0x94] (DATA)
// 00533c28: ADD ECX,0x4
// 00533c2b: FADD float ptr [EDX + -0x4]
// 00533c2e: INC EAX
// 00533c2f: FSTP float ptr [ECX + -0x4]
// 00533c32: MOV EBX,dword ptr [ESP + EAX*0x4 + 0x44]
//   XREF to: Stack[-0x4c] (DATA)
// 00533c36: MOV dword ptr [EDX + -0x4],EBX
// 00533c39: CMP EAX,0x12
// 00533c3c: JL 0x00533c22
//   XREF to: 00533c22 (CONDITIONAL_JUMP)
// 00533c3e: ADD ESP,0x90
// 00533c44: POP EBX
// 00533c45: RET
// 00533c46: MOV EAX,dword ptr [EAX + 0x14]
//   Label: LAB_00533c46
// 00533c49: JMP 0x00533bd0
//   XREF to: 00533bd0 (UNCONDITIONAL_JUMP)
