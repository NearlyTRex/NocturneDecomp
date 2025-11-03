// Name: core_npc.cpp_CNPC_FUN_00544d30
// Address: 00544d30
// Address Range: [[00544d30, 00544e0c]]
// Convention: __cdecl
// Signature: void core_npc.cpp_CNPC_FUN_00544d30(CNPC * this_ptr)
// Cross-references:
//   core_hostage.cpp_CHostage_FUN_004f6450 (004f6450) at 004f6544 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_DIE_0063e3b8
//   TerminatedCString s_HURT_0063e3bc
//   TerminatedCString s_DAMAGE_0063e3c1
//   TerminatedCString s_SHOT_0063e3c8
//   CDemonActorType g_CNPCClassInfo
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042c3c0
//   core_charactr.cpp_CCharacter_FUN_0042d060
//   core_npc.cpp_FUN_00544c50

#include "nocturne.h"

void __cdecl core_npc_cpp_CNPC_FUN_00544d30(CNPC *this_ptr)

{
  CDemonActor_vtable *pCVar1;
  float fVar2;
  CDemonActorType *pCVar3;
  int iVar4;
  int in_stack_00000008;
  
  pCVar3 = (*((this_ptr->base_character).base_actor.vtable)->getActorType)((CDemonActor *)this_ptr);
  if (pCVar3 == &g_CNPCClassInfo) {
    fVar2 = (this_ptr->base_character).hit_points - *(float *)(in_stack_00000008 + 4);
    (this_ptr->base_character).hit_points = fVar2;
    if (fVar2 <= 0.0) {
      pCVar1 = (this_ptr->base_character).base_actor.vtable;
      (this_ptr->base_character).hit_points = 0.0;
      (*pCVar1->spawnFlies)((CDemonActor *)this_ptr,0x32,25.0);
      core_charactr_cpp_CCharacter_FUN_0042d060(&this_ptr->base_character);
      core_npc_cpp_FUN_00544c50();
    }
    else if ((0.0 < *(float *)(in_stack_00000008 + 4)) &&
            ((this_ptr->base_character).grabbed_by == (CDemonActor *)0x0)) {
      iVar4 = core_npc_cpp_FUN_00544c50();
      if (iVar4 == 0) {
        iVar4 = core_npc_cpp_FUN_00544c50();
        if (iVar4 == 0) {
          core_npc_cpp_FUN_00544c50();
          core_charactr_cpp_CCharacter_FUN_0042c3c0(&this_ptr->base_character);
          return;
        }
      }
    }
  }
  core_charactr_cpp_CCharacter_FUN_0042c3c0(&this_ptr->base_character);
  return;
}


// Assembly code:
// 00544d30: PUSH EBX
//   Label: core_npc.cpp_CNPC_FUN_00544d30
// 00544d31: PUSH ESI
// 00544d32: PUSH EDI
// 00544d33: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00544d37: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00544d3b: PUSH EBX
// 00544d3c: MOV EAX,dword ptr [EBX + 0x154]
// 00544d42: CALL dword ptr [EAX + 0xc4]
// 00544d48: ADD ESP,0x4
// 00544d4b: CMP EAX,0x2fd8ce0
//   XREF to: 02fd8ce0 (DATA)
// 00544d50: JNZ 0x00544da9
//   XREF to: 00544da9 (CONDITIONAL_JUMP)
// 00544d52: FLD float ptr [EDI + 0x4]
// 00544d55: FSUBR float ptr [EBX + 0x243c]
// 00544d5b: LEA ESI,[EBX + 0x158]
// 00544d61: FST float ptr [EBX + 0x243c]
// 00544d67: FLDZ
// 00544d69: FCOMPP
// 00544d6b: FNSTSW AX
// 00544d6d: SAHF
// 00544d6e: JNC 0x00544db7
//   XREF to: 00544db7 (CONDITIONAL_JUMP)
// 00544d70: FLD float ptr [EDI + 0x4]
// 00544d73: FLDZ
// 00544d75: FCOMPP
// 00544d77: FNSTSW AX
// 00544d79: SAHF
// 00544d7a: JNC 0x00544da9
//   XREF to: 00544da9 (CONDITIONAL_JUMP)
// 00544d7c: CMP dword ptr [EBX + 0x2598],0x0
// 00544d83: JNZ 0x00544da9
//   XREF to: 00544da9 (CONDITIONAL_JUMP)
// 00544d85: PUSH 0x63e3bc
//   XREF to: 0063e3bc (DATA)
// 00544d8a: PUSH ESI
// 00544d8b: CALL core_npc.cpp_FUN_00544c50
//   XREF to: 00544c50 (UNCONDITIONAL_CALL)
// 00544d90: ADD ESP,0x8
// 00544d93: TEST EAX,EAX
// 00544d95: JNZ 0x00544da9
//   XREF to: 00544da9 (CONDITIONAL_JUMP)
// 00544d97: PUSH 0x63e3c1
//   XREF to: 0063e3c1 (DATA)
// 00544d9c: PUSH ESI
// 00544d9d: CALL core_npc.cpp_FUN_00544c50
//   XREF to: 00544c50 (UNCONDITIONAL_CALL)
// 00544da2: ADD ESP,0x8
// 00544da5: TEST EAX,EAX
// 00544da7: JZ 0x00544df1
//   XREF to: 00544df1 (CONDITIONAL_JUMP)
// 00544da9: PUSH EDI
//   Label: LAB_00544da9
// 00544daa: PUSH EBX
// 00544dab: CALL core_charactr.cpp_CCharacter_FUN_0042c3c0
//   XREF to: 0042c3c0 (UNCONDITIONAL_CALL)
// 00544db0: ADD ESP,0x8
// 00544db3: POP EDI
// 00544db4: POP ESI
// 00544db5: POP EBX
// 00544db6: RET
// 00544db7: PUSH 0x41c80000
//   Label: LAB_00544db7
// 00544dbc: PUSH 0x32
// 00544dbe: MOV EAX,dword ptr [EBX + 0x154]
// 00544dc4: PUSH EBX
// 00544dc5: MOV dword ptr [EBX + 0x243c],0x0
// 00544dcf: CALL dword ptr [EAX + 0xa0]
// 00544dd5: ADD ESP,0xc
// 00544dd8: PUSH EBX
// 00544dd9: CALL core_charactr.cpp_CCharacter_FUN_0042d060
//   XREF to: 0042d060 (UNCONDITIONAL_CALL)
// 00544dde: ADD ESP,0x4
// 00544de1: PUSH 0x63e3b8
//   XREF to: 0063e3b8 (DATA)
// 00544de6: PUSH ESI
// 00544de7: CALL core_npc.cpp_FUN_00544c50
//   XREF to: 00544c50 (UNCONDITIONAL_CALL)
// 00544dec: ADD ESP,0x8
// 00544def: JMP 0x00544da9
//   XREF to: 00544da9 (UNCONDITIONAL_JUMP)
// 00544df1: PUSH 0x63e3c8
//   Label: LAB_00544df1
//   XREF to: 0063e3c8 (DATA)
// 00544df6: PUSH ESI
// 00544df7: CALL core_npc.cpp_FUN_00544c50
//   XREF to: 00544c50 (UNCONDITIONAL_CALL)
// 00544dfc: ADD ESP,0x8
// 00544dff: PUSH EDI
// 00544e00: PUSH EBX
// 00544e01: CALL core_charactr.cpp_CCharacter_FUN_0042c3c0
//   XREF to: 0042c3c0 (UNCONDITIONAL_CALL)
// 00544e06: ADD ESP,0x8
// 00544e09: POP EDI
// 00544e0a: POP ESI
// 00544e0b: POP EBX
// 00544e0c: RET
