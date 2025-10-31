// Name: core_game.cpp_CGame_FUN_004e0bf0
// Address: 004e0bf0
// Address Range: [[004e0bf0, 004e0ccc]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_FUN_004e0bf0(CGame * this_ptr)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_00429870 (00429870) at 0042994a [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042c3c0 (0042c3c0) at 0042c4ea [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 (005e5970) at 005e6b6d [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_FUN_004e0bf0(CGame *this_ptr)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *in_stack_00000008;
  undefined4 in_stack_0000000c;
  float in_stack_00000010;
  
  if (((0.0 < in_stack_00000010) && (in_stack_00000008 != (char *)0x0)) &&
     (*in_stack_00000008 != '\0')) {
    iVar3 = 0;
    pcVar4 = this_ptr->field101_0x38c;
    if (0 < this_ptr->status_display_count) {
      do {
        iVar2 = crt_string_c_stricmp_FUN_005fe7f0(pcVar4,in_stack_00000008);
        if (iVar2 == 0) {
          *(undefined4 *)(this_ptr->field101_0x38c + iVar3 * 4 + 0x500) = in_stack_0000000c;
          *(float *)(this_ptr->field101_0x38c + iVar3 * 4 + 0x514) = in_stack_00000010;
          return;
        }
        iVar3 = iVar3 + 1;
        pcVar4 = pcVar4 + 0x100;
      } while (iVar3 < this_ptr->status_display_count);
    }
    if (this_ptr->status_display_count < 5) {
      pcVar4 = this_ptr->field101_0x38c + this_ptr->status_display_count * 0x100;
      do {
        cVar1 = *in_stack_00000008;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = in_stack_00000008[1];
        in_stack_00000008 = in_stack_00000008 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      *(undefined4 *)(this_ptr->field101_0x38c + this_ptr->status_display_count * 4 + 0x500) =
           in_stack_0000000c;
      *(float *)(this_ptr->field101_0x38c + this_ptr->status_display_count * 4 + 0x514) =
           in_stack_00000010;
      this_ptr->status_display_count = this_ptr->status_display_count + 1;
      return;
    }
  }
  return;
}


// Assembly code:
// 004e0bf0: PUSH EBX
//   Label: core_game.cpp_CGame_FUN_004e0bf0
// 004e0bf1: PUSH ESI
// 004e0bf2: PUSH EDI
// 004e0bf3: PUSH EBP
// 004e0bf4: SUB ESP,0x4
// 004e0bf7: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 004e0bfb: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 004e0bff: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 004e0c03: FLDZ
// 004e0c05: FCOMPP
// 004e0c07: FNSTSW AX
// 004e0c09: SAHF
// 004e0c0a: JNC 0x004e0c57
//   XREF to: 004e0c57 (CONDITIONAL_JUMP)
// 004e0c0c: TEST EBP,EBP
// 004e0c0e: JZ 0x004e0c57
//   XREF to: 004e0c57 (CONDITIONAL_JUMP)
// 004e0c10: CMP byte ptr [EBP],0x0
// 004e0c14: JZ 0x004e0c57
//   XREF to: 004e0c57 (CONDITIONAL_JUMP)
// 004e0c16: LEA EAX,[EBX + 0x38c]
// 004e0c1c: MOV EDX,dword ptr [EBX + 0x388]
// 004e0c22: XOR ESI,ESI
// 004e0c24: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 004e0c27: MOV EDI,EAX
// 004e0c29: TEST EDX,EDX
// 004e0c2b: JLE 0x004e0c4c
//   XREF to: 004e0c4c (CONDITIONAL_JUMP)
// 004e0c2d: PUSH EBP
//   Label: LAB_004e0c2d
// 004e0c2e: PUSH EDI
// 004e0c2f: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004e0c34: ADD ESP,0x8
// 004e0c37: TEST EAX,EAX
// 004e0c39: JZ 0x004e0c5f
//   XREF to: 004e0c5f (CONDITIONAL_JUMP)
// 004e0c3b: INC ESI
// 004e0c3c: MOV ECX,dword ptr [EBX + 0x388]
// 004e0c42: ADD EDI,0x100
// 004e0c48: CMP ESI,ECX
// 004e0c4a: JL 0x004e0c2d
//   XREF to: 004e0c2d (CONDITIONAL_JUMP)
// 004e0c4c: MOV ESI,dword ptr [EBX + 0x388]
//   Label: LAB_004e0c4c
// 004e0c52: CMP ESI,0x5
// 004e0c55: JL 0x004e0c77
//   XREF to: 004e0c77 (CONDITIONAL_JUMP)
// 004e0c57: ADD ESP,0x4
//   Label: LAB_004e0c57
// 004e0c5a: POP EBP
// 004e0c5b: POP EDI
// 004e0c5c: POP ESI
// 004e0c5d: POP EBX
// 004e0c5e: RET
// 004e0c5f: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_004e0c5f
//   XREF to: Stack[0xc] (READ)
// 004e0c63: MOV dword ptr [EBX + ESI*0x4 + 0x88c],EAX
// 004e0c6a: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 004e0c6e: MOV dword ptr [EBX + ESI*0x4 + 0x8a0],EAX
// 004e0c75: JMP 0x004e0c57
//   XREF to: 004e0c57 (UNCONDITIONAL_JUMP)
// 004e0c77: MOV EDI,ESI
//   Label: LAB_004e0c77
// 004e0c79: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 004e0c7c: SHL EDI,0x8
// 004e0c7f: MOV ESI,EBP
// 004e0c81: ADD EDI,EAX
// 004e0c83: PUSH EDI
// 004e0c84: MOV AL,byte ptr [ESI]
//   Label: LAB_004e0c84
// 004e0c86: MOV byte ptr [EDI],AL
// 004e0c88: CMP AL,0x0
// 004e0c8a: JZ 0x004e0c9c
//   XREF to: 004e0c9c (CONDITIONAL_JUMP)
// 004e0c8c: MOV AL,byte ptr [ESI + 0x1]
// 004e0c8f: ADD ESI,0x2
// 004e0c92: MOV byte ptr [EDI + 0x1],AL
// 004e0c95: ADD EDI,0x2
// 004e0c98: CMP AL,0x0
// 004e0c9a: JNZ 0x004e0c84
//   XREF to: 004e0c84 (CONDITIONAL_JUMP)
// 004e0c9c: POP EDI
//   Label: LAB_004e0c9c
// 004e0c9d: MOV EAX,dword ptr [EBX + 0x388]
// 004e0ca3: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 004e0ca7: MOV dword ptr [EBX + EAX*0x4 + 0x88c],ESI
// 004e0cae: MOV EAX,dword ptr [EBX + 0x388]
// 004e0cb4: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 004e0cb8: MOV dword ptr [EBX + EAX*0x4 + 0x8a0],ESI
// 004e0cbf: INC dword ptr [EBX + 0x388]
// 004e0cc5: ADD ESP,0x4
// 004e0cc8: POP EBP
// 004e0cc9: POP EDI
// 004e0cca: POP ESI
// 004e0ccb: POP EBX
// 004e0ccc: RET
