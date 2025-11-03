// Name: core_charactr.cpp_CCharacter_FUN_0042d060
// Address: 0042d060
// Address Range: [[0042d060, 0042d083]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042d060(CCharacter * this_ptr)
// Cross-references:
//   core_boneguy.cpp_CBoneGuy_FUN_0041d680 (0041d680) at 0041d68c [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_00428e30 (00428e30) at 00428ecb [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042c3c0 (0042c3c0) at 0042c56b [UNCONDITIONAL_CALL]
//   core_npc.cpp_CNPC_FUN_00544d30 (00544d30) at 00544dd9 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042d060(CCharacter *this_ptr)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    (*(this_ptr->base_actor).vtable[1].renderTargetPoints)(&this_ptr->base_actor);
  } while (iVar1 < 2);
  return;
}


// Assembly code:
// 0042d060: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042d060
// 0042d061: PUSH ESI
// 0042d062: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0042d066: XOR EBX,EBX
// 0042d068: PUSH 0x0
//   Label: LAB_0042d068
// 0042d06a: PUSH EBX
// 0042d06b: MOV EAX,dword ptr [ESI + 0x154]
// 0042d071: PUSH ESI
// 0042d072: INC EBX
// 0042d073: CALL dword ptr [EAX + 0x13c]
// 0042d079: ADD ESP,0xc
// 0042d07c: CMP EBX,0x2
// 0042d07f: JL 0x0042d068
//   XREF to: 0042d068 (CONDITIONAL_JUMP)
// 0042d081: POP ESI
// 0042d082: POP EBX
// 0042d083: RET
