// Name: core_beast.cpp_FUN_004182a0
// Address: 004182a0
// Address Range: [[004182a0, 00418325]]
// Convention: unknown
// Signature: undefined core_beast.cpp_FUN_004182a0()
// Function calls:
//   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   core_charactr.cpp_CCharacter_FUN_00429820
//   core_charactr.cpp_CCharacter_FUN_00429870
//   core_motion.cpp_CMotionController_advance_FUN_0052d610
//   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_beast.cpp_FUN_004182a0(undefined4 param_1, undefined4 param_2)
    */

void core_beast_cpp_FUN_004182a0(void)

{
  int iVar1;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  
  iVar1 = core_charactr_cpp_CCharacter_FUN_00429870(in_stack_00000004);
  if (iVar1 != 0) {
    (in_stack_00000004->model).field17_0x2254[8] = '\0';
    (in_stack_00000004->model).field17_0x2254[9] = '\0';
    (in_stack_00000004->model).field17_0x2254[10] = '\0';
    (in_stack_00000004->model).field17_0x2254[0xb] = '\0';
    *(undefined4 *)((in_stack_00000004->model).field17_0x2254 + 4) =
         *(undefined4 *)((in_stack_00000004->model).field17_0x2254 + 8);
    *(undefined4 *)(in_stack_00000004->model).field17_0x2254 =
         *(undefined4 *)((in_stack_00000004->model).field17_0x2254 + 4);
    in_stack_00000008 = in_stack_00000008 * *(float *)in_stack_00000004[1].base_actor.actor_name;
    while (0.0 < in_stack_00000008) {
      core_motion_cpp_CMotionController_advance_FUN_0052d610
                (&(in_stack_00000004->model).motion_controller);
    }
    core_charactr_cpp_CCharacter_FUN_00429820(in_stack_00000004);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
              (&in_stack_00000004->model);
    core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(in_stack_00000004);
  }
  return;
}


// Assembly code:
// 004182a0: PUSH EBX
//   Label: core_beast.cpp_FUN_004182a0
// 004182a1: PUSH ESI
// 004182a2: PUSH EBP
// 004182a3: MOV EBP,ESP
// 004182a5: SUB ESP,0x4
// 004182a8: AND ESP,0xfffffff8
// 004182ab: MOV ESI,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004182ae: PUSH dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004182b1: PUSH ESI
// 004182b2: CALL core_charactr.cpp_CCharacter_FUN_00429870
//   XREF to: 00429870 (UNCONDITIONAL_CALL)
// 004182b7: ADD ESP,0x8
// 004182ba: TEST EAX,EAX
// 004182bc: JZ 0x00418320
//   XREF to: 00418320 (CONDITIONAL_JUMP)
// 004182be: LEA EAX,[ESI + 0x23ac]
// 004182c4: MOV dword ptr [EAX + 0x8],0x0
// 004182cb: FLD float ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004182ce: MOV EDX,dword ptr [EAX + 0x8]
// 004182d1: MOV dword ptr [EAX + 0x4],EDX
// 004182d4: MOV EDX,dword ptr [EAX + 0x4]
// 004182d7: MOV dword ptr [EAX],EDX
// 004182d9: FMUL float ptr [ESI + 0xbe24]
// 004182df: LEA EBX,[ESI + 0x158]
// 004182e5: FSTP float ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 004182e8: FLD float ptr [ESP]
//   Label: LAB_004182e8
//   XREF to: Stack[-0x10] (DATA)
// 004182eb: FLDZ
// 004182ed: FCOMPP
// 004182ef: FNSTSW AX
// 004182f1: SAHF
// 004182f2: JNC 0x00418302
//   XREF to: 00418302 (CONDITIONAL_JUMP)
// 004182f4: MOV EAX,ESP
// 004182f6: PUSH EAX
// 004182f7: PUSH EBX
// 004182f8: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 004182fd: ADD ESP,0x8
// 00418300: JMP 0x004182e8
//   XREF to: 004182e8 (UNCONDITIONAL_JUMP)
// 00418302: PUSH ESI
//   Label: LAB_00418302
// 00418303: CALL core_charactr.cpp_CCharacter_FUN_00429820
//   XREF to: 00429820 (UNCONDITIONAL_CALL)
// 00418308: ADD ESP,0x4
// 0041830b: PUSH EBX
// 0041830c: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 00418311: ADD ESP,0x4
// 00418314: PUSH dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00418317: PUSH ESI
// 00418318: CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
// 0041831d: ADD ESP,0x8
// 00418320: MOV ESP,EBP
//   Label: LAB_00418320
// 00418322: POP EBP
// 00418323: POP ESI
// 00418324: POP EBX
// 00418325: RET
