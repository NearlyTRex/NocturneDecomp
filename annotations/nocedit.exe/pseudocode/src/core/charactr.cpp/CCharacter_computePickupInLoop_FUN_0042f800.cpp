// Name: core_charactr.cpp_CCharacter_computePickupInLoop_FUN_0042f800
// Address: 0042f800
// Address Range: [[0042f800, 0042f893]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_computePickupInLoop_FUN_0042f800(CCharacter * this_ptr)
// Cross-references:
//   core_bugs.cpp_FUN_004278d0 (004278d0) at 004278f8 [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_FUN_005e5260 (005e5260) at 005e53ea [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0065b834
// Function calls:
//   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   core_charactr.cpp_CCharacter_computePickup_FUN_0042ce80
//   core_charactr.cpp_CCharacter_FUN_0042d090
//   core_charactr.cpp_CCharacter_FUN_0042d530

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_computePickupInLoop_FUN_0042f800(CCharacter *this_ptr)

{
  float fVar1;
  int iVar2;
  CCharacter *pCVar3;
  undefined4 uStack0000000c;
  undefined4 uStack00000014;
  
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base_actor);
  if (*(float *)(this_ptr->field2_0x240c + 8) == _DAT_0065b834) {
    iVar2 = 0;
    pCVar3 = this_ptr;
    do {
      if (pCVar3->carry_hands[0].carry_actor != (CDemonActor *)0x0) {
        core_charactr_cpp_CCharacter_computePickup_FUN_0042ce80(this_ptr);
      }
      iVar2 = iVar2 + 1;
      pCVar3 = (CCharacter *)&(pCVar3->base_actor).orient_matrix.m[0].z;
    } while (iVar2 < 2);
    fVar1 = (*((this_ptr->base_actor).vtable)->cylinderGroundCheck)
                      (&this_ptr->base_actor,*(float *)(this_ptr->cloth_data + 0x344),
                       (CVector3f *)0x0);
    *(float *)(this_ptr->field2_0x240c + 8) = fVar1;
  }
  uStack00000014 = 0;
  uStack0000000c = 0x42f82a;
  core_charactr_cpp_CCharacter_FUN_0042d090(this_ptr);
  uStack00000014 = 0x42f833;
  core_charactr_cpp_CCharacter_FUN_0042d530(this_ptr);
  this_ptr->max_hit_points = this_ptr->hit_points;
  return;
}


// Assembly code:
// 0042f800: PUSH EDI
//   Label: core_charactr.cpp_CCharacter_computePickupInLoop_FUN_0042f800
// 0042f801: SUB ESP,0x4
// 0042f804: MOV EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0042f808: PUSH EDI
// 0042f809: CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   XREF to: 0040d040 (UNCONDITIONAL_CALL)
// 0042f80e: FLD float ptr [EDI + 0x2414]
// 0042f814: ADD ESP,0x4
// 0042f817: FCOMP float ptr [0x0065b834]
//   XREF to: 0065b834 (READ)
// 0042f81d: FNSTSW AX
// 0042f81f: SAHF
// 0042f820: JZ 0x0042f847
//   XREF to: 0042f847 (CONDITIONAL_JUMP)
// 0042f822: PUSH 0x0
//   Label: LAB_0042f822
// 0042f824: PUSH EDI
// 0042f825: CALL core_charactr.cpp_CCharacter_FUN_0042d090
//   XREF to: 0042d090 (UNCONDITIONAL_CALL)
// 0042f82a: ADD ESP,0x8
// 0042f82d: PUSH EDI
// 0042f82e: CALL core_charactr.cpp_CCharacter_FUN_0042d530
//   XREF to: 0042d530 (UNCONDITIONAL_CALL)
// 0042f833: FLD float ptr [EDI + 0x243c]
// 0042f839: ADD ESP,0x4
// 0042f83c: FSTP float ptr [EDI + 0x2440]
// 0042f842: ADD ESP,0x4
// 0042f845: POP EDI
// 0042f846: RET
// 0042f847: PUSH ESI
//   Label: LAB_0042f847
// 0042f848: PUSH EBX
// 0042f849: MOV ESI,EDI
// 0042f84b: XOR EBX,EBX
// 0042f84d: CMP dword ptr [ESI + 0x24b4],0x0
//   Label: LAB_0042f84d
// 0042f854: JNZ 0x0042f886
//   XREF to: 0042f886 (CONDITIONAL_JUMP)
// 0042f856: INC EBX
//   Label: LAB_0042f856
// 0042f857: ADD ESI,0x44
// 0042f85a: CMP EBX,0x2
// 0042f85d: JL 0x0042f84d
//   XREF to: 0042f84d (CONDITIONAL_JUMP)
// 0042f85f: PUSH 0x0
// 0042f861: MOV EAX,dword ptr [EDI + 0x154]
// 0042f867: PUSH dword ptr [EDI + 0x2ddc]
// 0042f86d: PUSH EDI
// 0042f86e: CALL dword ptr [EAX + 0x38]
// 0042f871: MOV dword ptr [ESP + 0x14],EAX
// 0042f875: MOV EAX,dword ptr [ESP + 0x14]
// 0042f879: MOV dword ptr [EDI + 0x2414],EAX
// 0042f87f: ADD ESP,0xc
// 0042f882: POP EBX
// 0042f883: POP ESI
// 0042f884: JMP 0x0042f822
//   XREF to: 0042f822 (UNCONDITIONAL_JUMP)
// 0042f886: PUSH 0x0
//   Label: LAB_0042f886
// 0042f888: PUSH EBX
// 0042f889: PUSH EDI
// 0042f88a: CALL core_charactr.cpp_CCharacter_computePickup_FUN_0042ce80
//   XREF to: 0042ce80 (UNCONDITIONAL_CALL)
// 0042f88f: ADD ESP,0xc
// 0042f892: JMP 0x0042f856
//   XREF to: 0042f856 (UNCONDITIONAL_JUMP)
