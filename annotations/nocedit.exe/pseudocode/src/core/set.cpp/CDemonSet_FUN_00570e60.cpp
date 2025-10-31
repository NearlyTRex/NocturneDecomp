// Name: core_set.cpp_CDemonSet_FUN_00570e60
// Address: 00570e60
// Address Range: [[00570e60, 00570e9f]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_00570e60(CDemonSet * this_ptr)
// Cross-references:
//   core_event.cpp_LargeEventHandler_FUN_004aacc0 (004aacc0) at 004aca33 [UNCONDITIONAL_CALL]
// Function calls:
//   core_set.cpp_CDemonSet_FUN_00570e20

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_00570e60(CDemonSet *this_ptr)

{
  int iVar1;
  CDemonSet *pCVar2;
  int in_stack_00000008;
  
  iVar1 = 0;
  pCVar2 = this_ptr;
  if (0 < this_ptr->camera_count) {
    do {
      if (in_stack_00000008 == pCVar2->cameras[0].field8_0x14c) {
        core_set_cpp_CDemonSet_FUN_00570e20(this_ptr);
      }
      iVar1 = iVar1 + 1;
      pCVar2 = (CDemonSet *)&pCVar2->cameras[0].field17_0x1a0;
    } while (iVar1 < this_ptr->camera_count);
  }
  return;
}


// Assembly code:
// 00570e60: PUSH EBX
//   Label: core_set.cpp_CDemonSet_FUN_00570e60
// 00570e61: PUSH ESI
// 00570e62: PUSH EDI
// 00570e63: PUSH EBP
// 00570e64: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00570e68: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00570e6c: MOV EDX,dword ptr [EDI]
// 00570e6e: XOR EBX,EBX
// 00570e70: TEST EDX,EDX
// 00570e72: JLE 0x00570e8b
//   XREF to: 00570e8b (CONDITIONAL_JUMP)
// 00570e74: MOV ESI,EDI
// 00570e76: CMP EBP,dword ptr [ESI + 0x150]
//   Label: LAB_00570e76
// 00570e7c: JZ 0x00570e90
//   XREF to: 00570e90 (CONDITIONAL_JUMP)
// 00570e7e: INC EBX
//   Label: LAB_00570e7e
// 00570e7f: MOV ECX,dword ptr [EDI]
// 00570e81: ADD ESI,0x1a4
// 00570e87: CMP EBX,ECX
// 00570e89: JL 0x00570e76
//   XREF to: 00570e76 (CONDITIONAL_JUMP)
// 00570e8b: POP EBP
//   Label: LAB_00570e8b
// 00570e8c: POP EDI
// 00570e8d: POP ESI
// 00570e8e: POP EBX
// 00570e8f: RET
// 00570e90: PUSH dword ptr [ESP + 0x1c]
//   Label: LAB_00570e90
//   XREF to: Stack[0xc] (READ)
// 00570e94: PUSH EBX
// 00570e95: PUSH EDI
// 00570e96: CALL core_set.cpp_CDemonSet_FUN_00570e20
//   XREF to: 00570e20 (UNCONDITIONAL_CALL)
// 00570e9b: ADD ESP,0xc
// 00570e9e: JMP 0x00570e7e
//   XREF to: 00570e7e (UNCONDITIONAL_JUMP)
