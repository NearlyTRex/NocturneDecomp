// Name: core_colonel.cpp_FUN_004404b0
// Address: 004404b0
// Address Range: [[004404b0, 004405c8]]
// Convention: unknown
// Signature: undefined core_colonel.cpp_FUN_004404b0()
// Globals:
//   undefined4 DAT_0065bd48
//   CGame* g_CGamePtr = 02d81a9c
//   CGore* g_CGorePtr = 02d83364
//   undefined4 DAT_02d81c6c
//   undefined4 DAT_02d81cc8
//   CGore g_CGoreInstance
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042c3c0
//   core_gore.cpp_CGore_FUN_004ee030
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00

#include "nocturne.h"

/* Signature: undefined1 actors_hero_colonel.cpp_FUN_004404b0(undefined4 param_1, undefined4
   param_2) */

void core_colonel_cpp_FUN_004404b0(void)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  int iVar2;
  CCharacter *in_stack_00000004;
  int in_stack_00000008;
  
  if ((*(uint *)in_stack_00000004[1].base_actor.actor_name & 0x7fffffff) != 0) {
    *(undefined4 *)(in_stack_00000008 + 4) = 0;
  }
  if (g_CGamePtr->field53_0x1d0 != 0) {
    *(undefined4 *)(in_stack_00000008 + 4) = 0;
  }
  if (g_CGamePtr->allow_damage_flag == 0) {
    *(undefined4 *)(in_stack_00000008 + 4) = 0;
  }
  *(undefined4 *)in_stack_00000004[1].base_actor.actor_name = DAT_0065bd48;
  fVar1 = in_stack_00000004->hit_points - *(float *)(in_stack_00000008 + 4);
  this_ptr = &in_stack_00000004->model;
  in_stack_00000004->hit_points = fVar1;
  if (fVar1 <= 0.0) {
    in_stack_00000004->hit_points = 0.0;
    iVar2 = core_motion_cpp_CMotionController_FUN_0052dab0(&this_ptr->motion_controller);
    if (*(int *)(iVar2 + 0x24) != 6) {
      iVar2 = core_motion_cpp_CMotionController_FUN_0052dab0(&this_ptr->motion_controller);
      if (*(int *)(iVar2 + 0x24) != 5) {
        in_stack_00000004->grabbed_by = (CDemonActor *)0x0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&this_ptr->motion_controller,5,1);
        core_gore_cpp_CGore_FUN_004ee030(g_CGorePtr,&in_stack_00000004->base_actor);
        core_charactr_cpp_CCharacter_FUN_0042c3c0(in_stack_00000004);
        return;
      }
    }
  }
  else if (0.0 < *(float *)(in_stack_00000008 + 4)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&this_ptr->motion_controller,4,1)
    ;
    core_charactr_cpp_CCharacter_FUN_0042c3c0(in_stack_00000004);
    return;
  }
  core_charactr_cpp_CCharacter_FUN_0042c3c0(in_stack_00000004);
  return;
}


// Assembly code:
// 004404b0: PUSH EBX
//   Label: core_colonel.cpp_FUN_004404b0
// 004404b1: PUSH ESI
// 004404b2: PUSH EDI
// 004404b3: PUSH EBP
// 004404b4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004404b8: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004404bc: TEST dword ptr [EBX + 0xbe24],0x7fffffff
// 004404c6: JNZ 0x00440534
//   XREF to: 00440534 (CONDITIONAL_JUMP)
// 004404c8: MOV EAX,[0x0067b654]
//   Label: LAB_004404c8
//   XREF to: 0067b654 (READ)
// 004404cd: CMP dword ptr [EAX + 0x1d0],0x0
//   XREF to: 02d81c6c (READ)
// 004404d4: JZ 0x004404dd
//   XREF to: 004404dd (CONDITIONAL_JUMP)
// 004404d6: MOV dword ptr [ESI + 0x4],0x0
// 004404dd: MOV EAX,[0x0067b654]
//   Label: LAB_004404dd
//   XREF to: 0067b654 (READ)
// 004404e2: MOV EDI,dword ptr [EAX + 0x22c]
//   XREF to: 02d81cc8 (READ)
// 004404e8: TEST EDI,EDI
// 004404ea: JZ 0x0044053d
//   XREF to: 0044053d (CONDITIONAL_JUMP)
// 004404ec: MOV EAX,[0x0065bd48]
//   Label: LAB_004404ec
//   XREF to: 0065bd48 (READ)
// 004404f1: MOV dword ptr [EBX + 0xbe24],EAX
// 004404f7: FLD float ptr [ESI + 0x4]
// 004404fa: FSUBR float ptr [EBX + 0x243c]
// 00440500: LEA EDI,[EBX + 0x158]
// 00440506: FST float ptr [EBX + 0x243c]
// 0044050c: FLDZ
// 0044050e: FCOMPP
// 00440510: FNSTSW AX
// 00440512: SAHF
// 00440513: JNC 0x00440542
//   XREF to: 00440542 (CONDITIONAL_JUMP)
// 00440515: FLD float ptr [ESI + 0x4]
// 00440518: FLDZ
// 0044051a: FCOMPP
// 0044051c: FNSTSW AX
// 0044051e: SAHF
// 0044051f: JC 0x004405ad
//   XREF to: 004405ad (CONDITIONAL_JUMP)
// 00440525: PUSH ESI
//   Label: LAB_00440525
// 00440526: PUSH EBX
// 00440527: CALL core_charactr.cpp_CCharacter_FUN_0042c3c0
//   XREF to: 0042c3c0 (UNCONDITIONAL_CALL)
// 0044052c: ADD ESP,0x8
// 0044052f: POP EBP
// 00440530: POP EDI
// 00440531: POP ESI
// 00440532: POP EBX
// 00440533: RET
// 00440534: MOV dword ptr [ESI + 0x4],0x0
//   Label: LAB_00440534
// 0044053b: JMP 0x004404c8
//   XREF to: 004404c8 (UNCONDITIONAL_JUMP)
// 0044053d: MOV dword ptr [ESI + 0x4],EDI
//   Label: LAB_0044053d
// 00440540: JMP 0x004404ec
//   XREF to: 004404ec (UNCONDITIONAL_JUMP)
// 00440542: PUSH EDI
//   Label: LAB_00440542
// 00440543: MOV dword ptr [EBX + 0x243c],0x0
// 0044054d: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 00440552: MOV EAX,dword ptr [EAX + 0x24]
// 00440555: ADD ESP,0x4
// 00440558: CMP EAX,0x6
// 0044055b: JZ 0x00440525
//   XREF to: 00440525 (CONDITIONAL_JUMP)
// 0044055d: PUSH EDI
// 0044055e: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 00440563: MOV EAX,dword ptr [EAX + 0x24]
// 00440566: ADD ESP,0x4
// 00440569: CMP EAX,0x5
// 0044056c: JZ 0x00440525
//   XREF to: 00440525 (CONDITIONAL_JUMP)
// 0044056e: PUSH 0x1
// 00440570: PUSH 0x5
// 00440572: PUSH EDI
// 00440573: MOV dword ptr [EBX + 0x2598],0x0
// 0044057d: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00440582: ADD ESP,0xc
// 00440585: PUSH 0x0
// 00440587: PUSH 0x42480000
// 0044058c: PUSH 0x32
// 0044058e: PUSH EBX
// 0044058f: MOV EBP,dword ptr [0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
// 00440595: PUSH EBP
//   XREF to: 02d83364 (DATA)
// 00440596: CALL core_gore.cpp_CGore_FUN_004ee030
//   XREF to: 004ee030 (UNCONDITIONAL_CALL)
// 0044059b: ADD ESP,0x14
// 0044059e: PUSH ESI
// 0044059f: PUSH EBX
// 004405a0: CALL core_charactr.cpp_CCharacter_FUN_0042c3c0
//   XREF to: 0042c3c0 (UNCONDITIONAL_CALL)
// 004405a5: ADD ESP,0x8
// 004405a8: POP EBP
// 004405a9: POP EDI
// 004405aa: POP ESI
// 004405ab: POP EBX
// 004405ac: RET
// 004405ad: PUSH 0x1
//   Label: LAB_004405ad
// 004405af: PUSH 0x4
// 004405b1: PUSH EDI
// 004405b2: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004405b7: ADD ESP,0xc
// 004405ba: PUSH ESI
// 004405bb: PUSH EBX
// 004405bc: CALL core_charactr.cpp_CCharacter_FUN_0042c3c0
//   XREF to: 0042c3c0 (UNCONDITIONAL_CALL)
// 004405c1: ADD ESP,0x8
// 004405c4: POP EBP
// 004405c5: POP EDI
// 004405c6: POP ESI
// 004405c7: POP EBX
// 004405c8: RET
