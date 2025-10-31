// Name: core_charactr.cpp_CCharacter_FUN_0042d360
// Address: 0042d360
// Address Range: [[0042d360, 0042d38f]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_0042d360(CCharacter * this_ptr)
// Cross-references:
//   core_hero.cpp_FUN_004f3120 (004f3120) at 004f3130 [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f33b0 (004f33b0) at 004f33c0 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042d360(CCharacter *this_ptr)

{
  CDemonActor *pCVar1;
  int iVar2;
  
  pCVar1 = this_ptr->carry_hands[0].carry_actor;
  iVar2 = 0;
  while( true ) {
    if (pCVar1 != (CDemonActor *)0x0) {
      return 1;
    }
    iVar2 = iVar2 + 1;
    if (1 < iVar2) break;
    pCVar1 = this_ptr->carry_hands[1].carry_actor;
    this_ptr = (CCharacter *)&(this_ptr->base_actor).orient_matrix.m[0].z;
  }
  return 0;
}


// Assembly code:
// 0042d360: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042d360
// 0042d361: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0042d365: MOV EDX,ECX
// 0042d367: MOV EBX,dword ptr [ECX + 0x24b4]
// 0042d36d: XOR EAX,EAX
// 0042d36f: TEST EBX,EBX
// 0042d371: JNZ 0x0042d385
//   XREF to: 0042d385 (CONDITIONAL_JUMP)
// 0042d373: INC EAX
//   Label: LAB_0042d373
// 0042d374: ADD EDX,0x44
// 0042d377: CMP EAX,0x2
// 0042d37a: JGE 0x0042d38c
//   XREF to: 0042d38c (CONDITIONAL_JUMP)
// 0042d37c: CMP dword ptr [EDX + 0x24b4],0x0
// 0042d383: JZ 0x0042d373
//   XREF to: 0042d373 (CONDITIONAL_JUMP)
// 0042d385: MOV EAX,0x1
//   Label: LAB_0042d385
// 0042d38a: POP EBX
// 0042d38b: RET
// 0042d38c: XOR EAX,EAX
//   Label: LAB_0042d38c
// 0042d38e: POP EBX
// 0042d38f: RET
