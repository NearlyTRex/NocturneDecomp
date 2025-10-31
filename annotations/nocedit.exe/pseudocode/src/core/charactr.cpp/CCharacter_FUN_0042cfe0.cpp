// Name: core_charactr.cpp_CCharacter_FUN_0042cfe0
// Address: 0042cfe0
// Address Range: [[0042cfe0, 0042d05c]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042cfe0(CCharacter * this_ptr)
// Cross-references:
//   core_stranger.cpp_FUN_005c67f0 (005c67f0) at 005c681b [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408e80

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042cfe0(CCharacter *this_ptr)

{
  CDemonActor *this_ptr_00;
  CVector3f *pCVar1;
  BADSPACEBASE *in_ESP;
  int in_stack_00000008;
  CVector3f *in_stack_0000000c;
  float local_c;
  float local_8;
  
  if (this_ptr->carry_hands[in_stack_00000008].carry_actor != (CDemonActor *)0x0) {
    if (in_stack_0000000c != (CVector3f *)0x0) {
      pCVar1 = core_actor_cpp_CDemonActor_FUN_00408e80(&this_ptr->base_actor);
      if ((CVector3f *)&local_c != pCVar1) {
        local_c = pCVar1->x;
        local_8 = pCVar1->y;
      }
      in_stack_0000000c = (CVector3f *)&local_c;
    }
    this_ptr_00 = this_ptr->carry_hands[in_stack_00000008].carry_actor;
    (*((this_ptr_00->metadata).vtable)->onDropped)(this_ptr_00,in_stack_0000000c);
    this_ptr->carry_hands[in_stack_00000008].carry_actor = (CDemonActor *)0x0;
  }
  return;
}


// Assembly code:
// 0042cfe0: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042cfe0
// 0042cfe1: SUB ESP,0x18
// 0042cfe4: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0042cfe8: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 0042cfec: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 0042cff0: MOV EAX,EBX
// 0042cff2: SHL EAX,0x4
// 0042cff5: ADD EAX,EBX
// 0042cff7: SHL EAX,0x2
// 0042cffa: LEA EBX,[ECX + 0x24ac]
// 0042d000: ADD EBX,EAX
// 0042d002: CMP dword ptr [EBX + 0x8],0x0
// 0042d006: JZ 0x0042d058
//   XREF to: 0042d058 (CONDITIONAL_JUMP)
// 0042d008: TEST EDX,EDX
// 0042d00a: JZ 0x0042d03d
//   XREF to: 0042d03d (CONDITIONAL_JUMP)
// 0042d00c: PUSH EDX
// 0042d00d: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x1c] (DATA)
// 0042d011: PUSH EAX
// 0042d012: PUSH ECX
// 0042d013: CALL core_actor.cpp_CDemonActor_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 0042d018: MOV EDX,EAX
// 0042d01a: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x10] (DATA)
// 0042d01e: ADD ESP,0xc
// 0042d021: CMP EAX,EDX
// 0042d023: JZ 0x0042d039
//   XREF to: 0042d039 (CONDITIONAL_JUMP)
// 0042d025: MOV EAX,dword ptr [EDX]
// 0042d027: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0042d02b: MOV EAX,dword ptr [EDX + 0x4]
// 0042d02e: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 0042d032: MOV EAX,dword ptr [EDX + 0x8]
// 0042d035: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 0042d039: LEA EDX,[ESP + 0xc]
//   Label: LAB_0042d039
//   XREF to: Stack[-0x10] (DATA)
// 0042d03d: PUSH EDX
//   Label: LAB_0042d03d
// 0042d03e: MOV EAX,dword ptr [EBX + 0x8]
// 0042d041: PUSH EAX
// 0042d042: MOV ECX,dword ptr [EAX + 0x154]
// 0042d048: CALL dword ptr [ECX + 0x84]
// 0042d04e: ADD ESP,0x8
// 0042d051: MOV dword ptr [EBX + 0x8],0x0
// 0042d058: ADD ESP,0x18
//   Label: LAB_0042d058
// 0042d05b: POP EBX
// 0042d05c: RET
