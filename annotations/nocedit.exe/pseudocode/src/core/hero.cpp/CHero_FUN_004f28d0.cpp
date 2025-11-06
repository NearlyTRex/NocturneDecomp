// Name: core_hero.cpp_CHero_FUN_004f28d0
// Address: 004f28d0
// Address Range: [[004f28d0, 004f29a5]]
// Convention: __cdecl
// Signature: int core_hero.cpp_CHero_FUN_004f28d0(CHero * this_ptr)
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005c66a0 (005c66a0) at 005c66db [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_GETGRABBED_0062eb80
//   TerminatedCString s_GETGRABBED_FRONT_0062eb8b
//   TerminatedCString s_GETGRABBED_FRONT_0062eb9c
//   TerminatedCString s_GETGRABBED_BACK_0062ebad
//   TerminatedCString s_GETGRABBED_0062ebbd
// Function calls:
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   core_motion.cpp_CMotionController_setDesiredStateByName_FUN_0052db90
//   core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_FUN_004f28d0(CHero *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CMotionList *pCVar1;
  int iVar2;
  CVector3f *pCVar3;
  BADSPACEBASE *in_ESP;
  int in_stack_0000000c;
  int in_stack_00000018;
  CDemonActor *in_stack_0000001c;
  int in_stack_00000020;
  
  if (in_stack_0000000c == 0) {
    this_ptr_00 = &(this_ptr->base_character).model;
    pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                       (&this_ptr_00->motion_controller);
    iVar2 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0(pCVar1);
    if (iVar2 < 0) {
      return 0;
    }
    pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                       (&this_ptr_00->motion_controller);
    iVar2 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0(pCVar1);
    if (iVar2 < 0) {
      core_motion_cpp_CMotionController_setDesiredStateByName_FUN_0052db90
                (&this_ptr_00->motion_controller,"GETGRABBED",1);
    }
    else {
      pCVar3 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         ((CDemonActor *)this_ptr,(CVector3f *)&stack0xfffffffc,
                          (CVector3f *)(in_stack_00000018 + 0x20));
      if (pCVar3->z <= 0.0) {
        core_motion_cpp_CMotionController_setDesiredStateByName_FUN_0052db90
                  (&this_ptr_00->motion_controller,"GETGRABBED_BACK",1);
      }
      else {
        core_motion_cpp_CMotionController_setDesiredStateByName_FUN_0052db90
                  (&this_ptr_00->motion_controller,"GETGRABBED_FRONT",1);
      }
    }
  }
  (this_ptr->base_character).grabbed_by = in_stack_0000001c;
  (this_ptr->base_character).grabbed_type = in_stack_00000020;
  return 1;
}


// Assembly code:
// 004f28d0: PUSH EBX
//   Label: core_hero.cpp_CHero_FUN_004f28d0
// 004f28d1: PUSH ESI
// 004f28d2: SUB ESP,0xc
// 004f28d5: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 004f28d9: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 004f28dd: TEST EDX,EDX
// 004f28df: JZ 0x004f2900
//   XREF to: 004f2900 (CONDITIONAL_JUMP)
// 004f28e1: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_004f28e1
//   XREF to: Stack[0x8] (READ)
// 004f28e5: MOV dword ptr [ESI + 0x2598],EAX
// 004f28eb: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 004f28ef: MOV dword ptr [ESI + 0x259c],EAX
// 004f28f5: MOV EAX,0x1
// 004f28fa: ADD ESP,0xc
// 004f28fd: POP ESI
// 004f28fe: POP EBX
// 004f28ff: RET
// 004f2900: PUSH EDX
//   Label: LAB_004f2900
// 004f2901: PUSH 0x62eb80
//   XREF to: 0062eb80 (DATA)
// 004f2906: LEA EBX,[ESI + 0x158]
// 004f290c: PUSH EBX
// 004f290d: CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
// 004f2912: ADD ESP,0x4
// 004f2915: PUSH EAX
// 004f2916: CALL core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0
//   XREF to: 0052d4f0 (UNCONDITIONAL_CALL)
// 004f291b: ADD ESP,0xc
// 004f291e: TEST EAX,EAX
// 004f2920: JGE 0x004f292a
//   XREF to: 004f292a (CONDITIONAL_JUMP)
// 004f2922: XOR EAX,EAX
// 004f2924: ADD ESP,0xc
// 004f2927: POP ESI
// 004f2928: POP EBX
// 004f2929: RET
// 004f292a: PUSH 0x0
//   Label: LAB_004f292a
// 004f292c: PUSH 0x62eb8b
//   XREF to: 0062eb8b (DATA)
// 004f2931: PUSH EBX
// 004f2932: CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
// 004f2937: ADD ESP,0x4
// 004f293a: PUSH EAX
// 004f293b: CALL core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0
//   XREF to: 0052d4f0 (UNCONDITIONAL_CALL)
// 004f2940: ADD ESP,0xc
// 004f2943: TEST EAX,EAX
// 004f2945: JL 0x004f2991
//   XREF to: 004f2991 (CONDITIONAL_JUMP)
// 004f2947: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 004f294b: ADD EAX,0x20
// 004f294e: PUSH EAX
// 004f294f: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x14] (DATA)
// 004f2953: PUSH EAX
// 004f2954: PUSH ESI
// 004f2955: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 004f295a: FLDZ
// 004f295c: ADD ESP,0xc
// 004f295f: FCOMP float ptr [EAX + 0x8]
// 004f2962: FNSTSW AX
// 004f2964: SAHF
// 004f2965: JNC 0x004f297c
//   XREF to: 004f297c (CONDITIONAL_JUMP)
// 004f2967: PUSH 0x1
// 004f2969: PUSH 0x62eb9c
//   XREF to: 0062eb9c (DATA)
// 004f296e: PUSH EBX
// 004f296f: CALL core_motion.cpp_CMotionController_setDesiredStateByName_FUN_0052db90
//   XREF to: 0052db90 (UNCONDITIONAL_CALL)
// 004f2974: ADD ESP,0xc
// 004f2977: JMP 0x004f28e1
//   XREF to: 004f28e1 (UNCONDITIONAL_JUMP)
// 004f297c: PUSH 0x1
//   Label: LAB_004f297c
// 004f297e: PUSH 0x62ebad
//   XREF to: 0062ebad (DATA)
// 004f2983: PUSH EBX
// 004f2984: CALL core_motion.cpp_CMotionController_setDesiredStateByName_FUN_0052db90
//   XREF to: 0052db90 (UNCONDITIONAL_CALL)
// 004f2989: ADD ESP,0xc
// 004f298c: JMP 0x004f28e1
//   XREF to: 004f28e1 (UNCONDITIONAL_JUMP)
// 004f2991: PUSH 0x1
//   Label: LAB_004f2991
// 004f2993: PUSH 0x62ebbd
//   XREF to: 0062ebbd (DATA)
// 004f2998: PUSH EBX
// 004f2999: CALL core_motion.cpp_CMotionController_setDesiredStateByName_FUN_0052db90
//   XREF to: 0052db90 (UNCONDITIONAL_CALL)
// 004f299e: ADD ESP,0xc
// 004f29a1: JMP 0x004f28e1
//   XREF to: 004f28e1 (UNCONDITIONAL_JUMP)
