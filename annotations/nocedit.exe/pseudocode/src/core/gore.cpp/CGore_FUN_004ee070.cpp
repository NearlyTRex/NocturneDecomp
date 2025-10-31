// Name: core_gore.cpp_CGore_FUN_004ee070
// Address: 004ee070
// Address Range: [[004ee070, 004ee0e6]]
// Convention: __cdecl
// Signature: void core_gore.cpp_CGore_FUN_004ee070(CGore * this_ptr)
// Cross-references:
//   core_actor.cpp_CDemonActor_handleFootstep_FUN_0040ca10 (0040ca10) at 0040cae0 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_02da8c24
//   undefined4 DAT_02da8c28
//   CFootstep[1000] DAT_02da8c2c
// Function calls:
//   core_gore.cpp_FUN_004ed240

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_FUN_004ee070(CGore *this_ptr)

{
  DAT_02da8c24 = DAT_02da8c24 + 1;
  if (999 < DAT_02da8c24) {
    DAT_02da8c24 = 0;
  }
  if (DAT_02da8c28 < 1000) {
    DAT_02da8c28 = DAT_02da8c28 + 1;
  }
  core_gore_cpp_FUN_004ed240();
  return;
}


// Assembly code:
// 004ee070: PUSH EBX
//   Label: core_gore.cpp_CGore_FUN_004ee070
// 004ee071: PUSH ESI
// 004ee072: PUSH EDI
// 004ee073: PUSH EBP
// 004ee074: MOV EBP,ESP
// 004ee076: MOV EDX,0x2da8c2c
//   XREF to: 02da8c2c (DATA)
// 004ee07b: MOV ECX,dword ptr [0x02da8c24]
//   XREF to: 02da8c24 (READ)
// 004ee081: MOV EAX,[0x02da8c24]
//   XREF to: 02da8c24 (READ)
// 004ee086: INC ECX
// 004ee087: SHL EAX,0x6
// 004ee08a: MOV dword ptr [0x02da8c24],ECX
//   XREF to: 02da8c24 (WRITE)
// 004ee090: ADD EDX,EAX
// 004ee092: CMP ECX,0x3e8
// 004ee098: JGE 0x004ee0dd
//   XREF to: 004ee0dd (CONDITIONAL_JUMP)
// 004ee09a: MOV EDI,dword ptr [0x02da8c28]
//   Label: LAB_004ee09a
//   XREF to: 02da8c28 (READ)
// 004ee0a0: CMP EDI,0x3e8
// 004ee0a6: JGE 0x004ee0b0
//   XREF to: 004ee0b0 (CONDITIONAL_JUMP)
// 004ee0a8: LEA EAX,[EDI + 0x1]
// 004ee0ab: MOV [0x02da8c28],EAX
//   XREF to: 02da8c28 (WRITE)
// 004ee0b0: MOV ECX,dword ptr [EBP + 0x28]
//   Label: LAB_004ee0b0
//   XREF to: Stack[0x18] (READ)
// 004ee0b3: PUSH ECX
// 004ee0b4: MOV EBX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 004ee0b7: MOV ESI,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004ee0ba: PUSH EBX
// 004ee0bb: CMP ESI,0xb
// 004ee0be: SETZ AL
// 004ee0c1: AND EAX,0xff
// 004ee0c6: PUSH EAX
// 004ee0c7: MOV EDI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004ee0ca: PUSH EDI
// 004ee0cb: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004ee0ce: PUSH EAX
// 004ee0cf: PUSH EDX
// 004ee0d0: CALL core_gore.cpp_FUN_004ed240
//   XREF to: 004ed240 (UNCONDITIONAL_CALL)
// 004ee0d5: ADD ESP,0x18
// 004ee0d8: POP EBP
// 004ee0d9: POP EDI
// 004ee0da: POP ESI
// 004ee0db: POP EBX
// 004ee0dc: RET
// 004ee0dd: XOR ESI,ESI
//   Label: LAB_004ee0dd
// 004ee0df: MOV dword ptr [0x02da8c24],ESI
//   XREF to: 02da8c24 (WRITE)
// 004ee0e5: JMP 0x004ee09a
//   XREF to: 004ee09a (UNCONDITIONAL_JUMP)
