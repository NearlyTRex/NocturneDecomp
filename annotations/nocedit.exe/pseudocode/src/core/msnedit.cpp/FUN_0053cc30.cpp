// Name: core_msnedit.cpp_FUN_0053cc30
// Address: 0053cc30
// Address Range: [[0053cc30, 0053ccb0]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_0053cc30()
// Cross-references:
//   core_msnedit.cpp_RunNoneFunctorForCancelAndElse_FUN_0053cad0 (0053cad0) at 0053cb2c [UNCONDITIONAL_CALL]
//   core_teleport.cpp_CTeleportDest_FUN_005da870 (005da870) at 005da8bb [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_isOfClass_FUN_0040c6d0
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80

#include "nocturne.h"

/* Signature: undefined1 core_msnedit.cpp_FUN_0053cc30(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4, undefined4 param_5) */

void core_msnedit_cpp_FUN_0053cc30(void)

{
  int sort_type;
  CDemonActor *actor_ptr;
  int iVar1;
  int in_stack_00000004;
  CStrList *in_stack_00000008;
  char *in_stack_00000010;
  code *in_stack_00000014;
  
  sort_type = in_stack_00000008->item_count;
  for (actor_ptr = *(CDemonActor **)(in_stack_00000004 + 0x548); actor_ptr != (CDemonActor *)0x0;
      actor_ptr = actor_ptr->next_actor) {
    if ((((in_stack_00000010 == (char *)0x0) || (*in_stack_00000010 == '\0')) ||
        (iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,in_stack_00000010), iVar1 != 0)) &&
       ((in_stack_00000014 == (code *)0x0 || (iVar1 = (*in_stack_00000014)(), iVar1 != 0)))) {
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(in_stack_00000008,actor_ptr->actor_name);
    }
  }
  (*in_stack_00000008->vtable->sort)(in_stack_00000008,sort_type,in_stack_00000008->item_count + -1)
  ;
  return;
}


// Assembly code:
// 0053cc30: PUSH EBX
//   Label: core_msnedit.cpp_FUN_0053cc30
// 0053cc31: PUSH ESI
// 0053cc32: PUSH EDI
// 0053cc33: PUSH EBP
// 0053cc34: SUB ESP,0x4
// 0053cc37: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0053cc3b: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 0053cc3f: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x14] (READ)
// 0053cc43: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0053cc47: MOV EAX,dword ptr [EBP]
// 0053cc4a: MOV EBX,dword ptr [EBX + 0x548]
// 0053cc50: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 0053cc53: TEST EBX,EBX
// 0053cc55: JZ 0x0053cc95
//   XREF to: 0053cc95 (CONDITIONAL_JUMP)
// 0053cc57: TEST ESI,ESI
//   Label: LAB_0053cc57
// 0053cc59: JZ 0x0053cc6e
//   XREF to: 0053cc6e (CONDITIONAL_JUMP)
// 0053cc5b: CMP byte ptr [ESI],0x0
// 0053cc5e: JZ 0x0053cc6e
//   XREF to: 0053cc6e (CONDITIONAL_JUMP)
// 0053cc60: PUSH ESI
// 0053cc61: PUSH EBX
// 0053cc62: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 0053cc67: ADD ESP,0x8
// 0053cc6a: TEST EAX,EAX
// 0053cc6c: JZ 0x0053cc8b
//   XREF to: 0053cc8b (CONDITIONAL_JUMP)
// 0053cc6e: TEST EDI,EDI
//   Label: LAB_0053cc6e
// 0053cc70: JZ 0x0053cc81
//   XREF to: 0053cc81 (CONDITIONAL_JUMP)
// 0053cc72: PUSH EBX
// 0053cc73: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 0053cc77: PUSH EDX
// 0053cc78: CALL EDI
// 0053cc7a: ADD ESP,0x8
// 0053cc7d: TEST EAX,EAX
// 0053cc7f: JZ 0x0053cc8b
//   XREF to: 0053cc8b (CONDITIONAL_JUMP)
// 0053cc81: PUSH EBX
//   Label: LAB_0053cc81
// 0053cc82: PUSH EBP
// 0053cc83: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0053cc88: ADD ESP,0x8
// 0053cc8b: MOV EBX,dword ptr [EBX + 0x14c]
//   Label: LAB_0053cc8b
// 0053cc91: TEST EBX,EBX
// 0053cc93: JNZ 0x0053cc57
//   XREF to: 0053cc57 (CONDITIONAL_JUMP)
// 0053cc95: MOV EAX,dword ptr [EBP]
//   Label: LAB_0053cc95
// 0053cc98: DEC EAX
// 0053cc99: PUSH EAX
// 0053cc9a: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 0053cc9e: PUSH ECX
// 0053cc9f: MOV EBX,dword ptr [EBP + 0xc]
// 0053cca2: PUSH EBP
// 0053cca3: CALL dword ptr [EBX + 0x8]
// 0053cca6: ADD ESP,0xc
// 0053cca9: ADD ESP,0x4
// 0053ccac: POP EBP
// 0053ccad: POP EDI
// 0053ccae: POP ESI
// 0053ccaf: POP EBX
// 0053ccb0: RET
