// Name: core_msnedit.cpp_FUN_00536bf0
// Address: 00536bf0
// Address Range: [[00536bf0, 00536cc6]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_00536bf0()
// Globals:
//   TerminatedCString s_none_0063b6e0
//   TerminatedCString s_true_0063b6e5
//   char[256] g_CharacterClassificationTable
// Function calls:
//   crt_string.c_stricmp_FUN_005fe7f0
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80

#include "nocturne.h"
// Decompilation failed or timed out

// Assembly code:
// 00536bf0: PUSH EBX
//   Label: core_msnedit.cpp_FUN_00536bf0
// 00536bf1: PUSH ESI
// 00536bf2: PUSH EDI
// 00536bf3: SUB ESP,0xcc
// 00536bf9: MOV EBX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[0x4] (READ)
// 00536c00: MOV AH,byte ptr [EBX]
// 00536c02: MOV EDI,dword ptr [ESP + 0xe0]
//   XREF to: Stack[0x8] (READ)
// 00536c09: TEST AH,AH
// 00536c0b: JZ 0x00536c7b
//   XREF to: 00536c7b (CONDITIONAL_JUMP)
// 00536c11: XOR EAX,EAX
//   Label: LAB_00536c11
// 00536c13: MOV AL,byte ptr [EBX]
// 00536c15: MOV EDX,EAX
// 00536c17: INC DL
// 00536c19: AND EDX,0xff
// 00536c1f: TEST byte ptr [EDX + 0x6849c4],0xe0
//   XREF to: 006849c4 (DATA)
// 00536c26: JZ 0x00536c85
//   XREF to: 00536c85 (CONDITIONAL_JUMP)
// 00536c28: MOV EDX,ESP
//   Label: LAB_00536c28
// 00536c2a: MOV AL,byte ptr [EBX]
//   Label: LAB_00536c2a
// 00536c2c: MOV byte ptr [EDX],AL
//   XREF to: Stack[-0xd8] (DATA)
// 00536c2e: XOR EAX,EAX
// 00536c30: MOV AL,byte ptr [EBX + 0x1]
// 00536c33: MOV dword ptr [ESP + 0xc8],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 00536c3a: MOV CL,byte ptr [ESP + 0xc8]
//   XREF to: Stack[-0x10] (READ)
// 00536c41: INC CL
// 00536c43: MOVZX ESI,CL
// 00536c46: INC EBX
// 00536c47: MOV CH,byte ptr [ESI + 0x6849c4]
//   XREF to: 006849c4 (DATA)
// 00536c4d: INC EDX
// 00536c4e: TEST CH,0xe0
// 00536c51: JNZ 0x00536c2a
//   XREF to: 00536c2a (CONDITIONAL_JUMP)
// 00536c53: CMP EAX,0x2d
// 00536c56: JZ 0x00536c2a
//   XREF to: 00536c2a (CONDITIONAL_JUMP)
// 00536c58: CMP EAX,0x5f
// 00536c5b: JZ 0x00536c2a
//   XREF to: 00536c2a (CONDITIONAL_JUMP)
// 00536c5d: PUSH 0x63b6e0
//   XREF to: 0063b6e0 (DATA)
// 00536c62: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xd8] (DATA)
// 00536c66: PUSH EAX
// 00536c67: MOV byte ptr [EDX],0x0
//   XREF to: Stack[-0xd7] (DATA)
// 00536c6a: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 00536c6f: ADD ESP,0x8
// 00536c72: TEST EAX,EAX
// 00536c74: JNZ 0x00536c92
//   XREF to: 00536c92 (CONDITIONAL_JUMP)
// 00536c76: CMP byte ptr [EBX],0x0
//   Label: LAB_00536c76
// 00536c79: JNZ 0x00536c11
//   XREF to: 00536c11 (CONDITIONAL_JUMP)
// 00536c7b: ADD ESP,0xcc
//   Label: LAB_00536c7b
// 00536c81: POP EDI
// 00536c82: POP ESI
// 00536c83: POP EBX
// 00536c84: RET
// 00536c85: CMP EAX,0x2d
//   Label: LAB_00536c85
// 00536c88: JZ 0x00536c28
//   XREF to: 00536c28 (CONDITIONAL_JUMP)
// 00536c8a: CMP EAX,0x5f
// 00536c8d: JZ 0x00536c28
//   XREF to: 00536c28 (CONDITIONAL_JUMP)
// 00536c8f: INC EBX
// 00536c90: JMP 0x00536c76
//   XREF to: 00536c76 (UNCONDITIONAL_JUMP)
// 00536c92: PUSH 0x63b6e5
//   Label: LAB_00536c92
//   XREF to: 0063b6e5 (DATA)
// 00536c97: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xd8] (DATA)
// 00536c9b: PUSH EAX
// 00536c9c: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 00536ca1: ADD ESP,0x8
// 00536ca4: TEST EAX,EAX
// 00536ca6: JZ 0x00536c76
//   XREF to: 00536c76 (CONDITIONAL_JUMP)
// 00536ca8: MOV EAX,ESP
// 00536caa: PUSH EAX
// 00536cab: PUSH EDI
// 00536cac: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00536cb1: ADD ESP,0x8
// 00536cb4: CMP byte ptr [EBX],0x0
// 00536cb7: JNZ 0x00536c11
//   XREF to: 00536c11 (CONDITIONAL_JUMP)
// 00536cbd: ADD ESP,0xcc
// 00536cc3: POP EDI
// 00536cc4: POP ESI
// 00536cc5: POP EBX
// 00536cc6: RET
