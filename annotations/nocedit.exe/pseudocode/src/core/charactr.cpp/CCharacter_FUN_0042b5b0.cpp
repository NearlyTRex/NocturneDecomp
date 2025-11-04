// Name: core_charactr.cpp_CCharacter_FUN_0042b5b0
// Address: 0042b5b0
// Address Range: [[0042b5b0, 0042b662]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042b5b0(CCharacter * this_ptr)
// Cross-references:
//   core_batcreat.cpp_FUN_00416030 (00416030) at 004160ac [UNCONDITIONAL_CALL]
//   core_batman.cpp_FUN_004179a0 (004179a0) at 00417a1c [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00424830 (00424830) at 00424899 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042c3c0 (0042c3c0) at 0042c453 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00486070 (00486070) at 004860d4 [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8070 (004a8070) at 004a8526 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CGunFlame_FUN_004c4c00 (004c4c00) at 004c4d2e [UNCONDITIONAL_CALL]
//   core_flame.cpp_FUN_004c9c00 (004c9c00) at 004c9ebd [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_CHero_0061713e
// Function calls:
//   core_actor.cpp_isOfClass_FUN_0040c6d0
//   core_charactr.cpp_CCharacter_FUN_0042a520
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a1160
//   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042b5b0(CCharacter *this_ptr)

{
  int iVar1;
  int iVar2;
  CCharacter *pCVar3;
  int in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  if ((*(int *)(this_ptr->cloth_data + 0x478) < 0x32) &&
     (((in_stack_00000018 != 0 ||
       (iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(&this_ptr->base_actor,"CHero"),
       iVar1 == 0)) && ((this_ptr->model).field18_0x2260[0] != '\0')))) {
    iVar1 = core_skeleton_cpp_CDeformableModelInstance_FUN_005a1160();
    iVar2 = 0;
    pCVar3 = this_ptr;
    if (0 < *(int *)(this_ptr->cloth_data + 0x478)) {
      do {
        if (iVar1 == *(int *)(pCVar3->cloth_data + 0x488)) {
          return;
        }
        iVar2 = iVar2 + 1;
        pCVar3 = (CCharacter *)((pCVar3->base_actor).actor_name + 0x18);
      } while (iVar2 < *(int *)(this_ptr->cloth_data + 0x478));
    }
    *(int *)(this_ptr->cloth_data + 0x47c) = in_stack_00000018;
    *(undefined4 *)(this_ptr->cloth_data + 0x480) = in_stack_0000001c;
    core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(&this_ptr->model);
    core_charactr_cpp_CCharacter_FUN_0042a520(this_ptr);
    (this_ptr->base_actor).is_transparent = 1;
    return;
  }
  return;
}


// Assembly code:
// 0042b5b0: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042b5b0
// 0042b5b1: PUSH ESI
// 0042b5b2: PUSH EDI
// 0042b5b3: PUSH EBP
// 0042b5b4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0042b5b8: CMP dword ptr [EBX + 0x2f10],0x32
// 0042b5bf: JGE 0x0042b5d9
//   XREF to: 0042b5d9 (CONDITIONAL_JUMP)
// 0042b5c1: CMP dword ptr [ESP + 0x28],0x0
//   XREF to: Stack[0x18] (READ)
// 0042b5c6: JZ 0x0042b5de
//   XREF to: 0042b5de (CONDITIONAL_JUMP)
// 0042b5c8: LEA EDX,[EBX + 0x158]
//   Label: LAB_0042b5c8
// 0042b5ce: LEA EAX,[EBX + 0x23b8]
// 0042b5d4: CMP byte ptr [EAX],0x0
// 0042b5d7: JNZ 0x0042b5f2
//   XREF to: 0042b5f2 (CONDITIONAL_JUMP)
// 0042b5d9: POP EBP
//   Label: LAB_0042b5d9
// 0042b5da: POP EDI
// 0042b5db: POP ESI
// 0042b5dc: POP EBX
// 0042b5dd: RET
// 0042b5de: PUSH 0x61713e
//   Label: LAB_0042b5de
//   XREF to: 0061713e (DATA)
// 0042b5e3: PUSH EBX
// 0042b5e4: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 0042b5e9: ADD ESP,0x8
// 0042b5ec: TEST EAX,EAX
// 0042b5ee: JNZ 0x0042b5d9
//   XREF to: 0042b5d9 (CONDITIONAL_JUMP)
// 0042b5f0: JMP 0x0042b5c8
//   XREF to: 0042b5c8 (UNCONDITIONAL_JUMP)
// 0042b5f2: MOV ESI,dword ptr [ESP + 0x18]
//   Label: LAB_0042b5f2
//   XREF to: Stack[0x8] (READ)
// 0042b5f6: PUSH ESI
// 0042b5f7: PUSH EDX
// 0042b5f8: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a1160
//   XREF to: 005a1160 (UNCONDITIONAL_CALL)
// 0042b5fd: ADD ESP,0x8
// 0042b600: MOV ECX,EAX
// 0042b602: MOV EDI,dword ptr [EBX + 0x2f10]
// 0042b608: XOR EAX,EAX
// 0042b60a: TEST EDI,EDI
// 0042b60c: JLE 0x0042b626
//   XREF to: 0042b626 (CONDITIONAL_JUMP)
// 0042b60e: MOV EDX,EBX
// 0042b610: CMP ECX,dword ptr [EDX + 0x2f20]
//   Label: LAB_0042b610
// 0042b616: JZ 0x0042b5d9
//   XREF to: 0042b5d9 (CONDITIONAL_JUMP)
// 0042b618: INC EAX
// 0042b619: MOV EBP,dword ptr [EBX + 0x2f10]
// 0042b61f: ADD EDX,0x18
// 0042b622: CMP EAX,EBP
// 0042b624: JL 0x0042b610
//   XREF to: 0042b610 (CONDITIONAL_JUMP)
// 0042b626: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_0042b626
//   XREF to: Stack[0x10] (READ)
// 0042b62a: MOV dword ptr [EBX + 0x2f14],EAX
// 0042b630: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0042b634: PUSH ECX
// 0042b635: MOV dword ptr [EBX + 0x2f18],EAX
// 0042b63b: LEA EAX,[EBX + 0x158]
// 0042b641: PUSH EAX
// 0042b642: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 0042b647: ADD ESP,0x4
// 0042b64a: PUSH EAX
// 0042b64b: PUSH EBX
// 0042b64c: CALL core_charactr.cpp_CCharacter_FUN_0042a520
//   XREF to: 0042a520 (UNCONDITIONAL_CALL)
// 0042b651: ADD ESP,0xc
// 0042b654: MOV dword ptr [EBX + 0xfc],0x1
// 0042b65e: POP EBP
// 0042b65f: POP EDI
// 0042b660: POP ESI
// 0042b661: POP EBX
// 0042b662: RET
