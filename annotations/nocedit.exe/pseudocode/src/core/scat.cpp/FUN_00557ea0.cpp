// Name: core_scat.cpp_FUN_00557ea0
// Address: 00557ea0
// Address Range: [[00557ea0, 00557fef]]
// Convention: unknown
// Signature: undefined core_scat.cpp_FUN_00557ea0()
// Globals:
//   TerminatedCString s_scat_die_wav_00641424
//   TerminatedCString s_scat_hurt_wav_00641433
//   undefined4 DAT_00662458
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
//   core_scat.cpp_FUN_00558010

#include "nocturne.h"

/* Signature: undefined1 actors_hero_scat.cpp_FUN_00557ea0(undefined4 param_1, undefined4 param_2)
    */

void core_scat_cpp_FUN_00557ea0(void)

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
  *(undefined4 *)in_stack_00000004[1].base_actor.actor_name = DAT_00662458;
  fVar1 = in_stack_00000004->hit_points - *(float *)(in_stack_00000008 + 4);
  this_ptr = &in_stack_00000004->model;
  in_stack_00000004->hit_points = fVar1;
  if (0.0 < fVar1) {
    if (*(float *)(in_stack_00000008 + 4) <= 0.0) {
      core_charactr_cpp_CCharacter_FUN_0042c3c0(in_stack_00000004);
      return;
    }
    iVar2 = core_scat_cpp_FUN_00558010();
    if (iVar2 == 0) {
      iVar2 = 0xc;
    }
    else {
      iVar2 = 0xd;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr->motion_controller,iVar2,1);
    (*((in_stack_00000004->base_actor).vtable)->playSound)
              (&in_stack_00000004->base_actor,"scat-hurt-?.wav");
    core_charactr_cpp_CCharacter_FUN_0042c3c0(in_stack_00000004);
    return;
  }
  in_stack_00000004->hit_points = 0.0;
  iVar2 = core_motion_cpp_CMotionController_FUN_0052dab0(&this_ptr->motion_controller);
  if (*(int *)(iVar2 + 0x24) != 5) {
    iVar2 = core_motion_cpp_CMotionController_FUN_0052dab0(&this_ptr->motion_controller);
    if (*(int *)(iVar2 + 0x24) != 4) {
      in_stack_00000004->grabbed_by = (CDemonActor *)0x0;
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&this_ptr->motion_controller,4,1);
      core_gore_cpp_CGore_FUN_004ee030(g_CGorePtr,&in_stack_00000004->base_actor);
    }
  }
  (*((in_stack_00000004->base_actor).vtable)->playSound)
            (&in_stack_00000004->base_actor,"scat-die-?.wav");
  core_charactr_cpp_CCharacter_FUN_0042c3c0(in_stack_00000004);
  return;
}


// Assembly code:
// 00557ea0: PUSH EBX
//   Label: core_scat.cpp_FUN_00557ea0
// 00557ea1: PUSH ESI
// 00557ea2: PUSH EDI
// 00557ea3: PUSH EBP
// 00557ea4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00557ea8: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00557eac: TEST dword ptr [EBX + 0xbe24],0x7fffffff
// 00557eb6: JNZ 0x00557f24
//   XREF to: 00557f24 (CONDITIONAL_JUMP)
// 00557eb8: MOV EAX,[0x0067b654]
//   Label: LAB_00557eb8
//   XREF to: 0067b654 (READ)
// 00557ebd: CMP dword ptr [EAX + 0x1d0],0x0
//   XREF to: 02d81c6c (READ)
// 00557ec4: JZ 0x00557ecd
//   XREF to: 00557ecd (CONDITIONAL_JUMP)
// 00557ec6: MOV dword ptr [EDI + 0x4],0x0
// 00557ecd: MOV EAX,[0x0067b654]
//   Label: LAB_00557ecd
//   XREF to: 0067b654 (READ)
// 00557ed2: MOV ESI,dword ptr [EAX + 0x22c]
//   XREF to: 02d81cc8 (READ)
// 00557ed8: TEST ESI,ESI
// 00557eda: JZ 0x00557f2d
//   XREF to: 00557f2d (CONDITIONAL_JUMP)
// 00557edc: MOV EAX,[0x00662458]
//   Label: LAB_00557edc
//   XREF to: 00662458 (READ)
// 00557ee1: MOV dword ptr [EBX + 0xbe24],EAX
// 00557ee7: FLD float ptr [EDI + 0x4]
// 00557eea: FSUBR float ptr [EBX + 0x243c]
// 00557ef0: LEA ESI,[EBX + 0x158]
// 00557ef6: FST float ptr [EBX + 0x243c]
// 00557efc: FLDZ
// 00557efe: FCOMPP
// 00557f00: FNSTSW AX
// 00557f02: SAHF
// 00557f03: JNC 0x00557f32
//   XREF to: 00557f32 (CONDITIONAL_JUMP)
// 00557f05: FLD float ptr [EDI + 0x4]
// 00557f08: FLDZ
// 00557f0a: FCOMPP
// 00557f0c: FNSTSW AX
// 00557f0e: SAHF
// 00557f0f: JC 0x00557faf
//   XREF to: 00557faf (CONDITIONAL_JUMP)
// 00557f15: PUSH EDI
// 00557f16: PUSH EBX
// 00557f17: CALL core_charactr.cpp_CCharacter_FUN_0042c3c0
//   XREF to: 0042c3c0 (UNCONDITIONAL_CALL)
// 00557f1c: ADD ESP,0x8
// 00557f1f: POP EBP
// 00557f20: POP EDI
// 00557f21: POP ESI
// 00557f22: POP EBX
// 00557f23: RET
// 00557f24: MOV dword ptr [EDI + 0x4],0x0
//   Label: LAB_00557f24
// 00557f2b: JMP 0x00557eb8
//   XREF to: 00557eb8 (UNCONDITIONAL_JUMP)
// 00557f2d: MOV dword ptr [EDI + 0x4],ESI
//   Label: LAB_00557f2d
// 00557f30: JMP 0x00557edc
//   XREF to: 00557edc (UNCONDITIONAL_JUMP)
// 00557f32: PUSH ESI
//   Label: LAB_00557f32
// 00557f33: MOV dword ptr [EBX + 0x243c],0x0
// 00557f3d: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 00557f42: MOV EAX,dword ptr [EAX + 0x24]
// 00557f45: ADD ESP,0x4
// 00557f48: CMP EAX,0x5
// 00557f4b: JZ 0x00557f8e
//   XREF to: 00557f8e (CONDITIONAL_JUMP)
// 00557f4d: PUSH ESI
// 00557f4e: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 00557f53: MOV EAX,dword ptr [EAX + 0x24]
// 00557f56: ADD ESP,0x4
// 00557f59: CMP EAX,0x4
// 00557f5c: JZ 0x00557f8e
//   XREF to: 00557f8e (CONDITIONAL_JUMP)
// 00557f5e: PUSH 0x1
// 00557f60: PUSH 0x4
// 00557f62: PUSH ESI
// 00557f63: MOV dword ptr [EBX + 0x2598],0x0
// 00557f6d: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00557f72: ADD ESP,0xc
// 00557f75: PUSH 0x0
// 00557f77: PUSH 0x42480000
// 00557f7c: PUSH 0x32
// 00557f7e: PUSH EBX
// 00557f7f: MOV EBP,dword ptr [0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
// 00557f85: PUSH EBP
//   XREF to: 02d83364 (DATA)
// 00557f86: CALL core_gore.cpp_CGore_FUN_004ee030
//   XREF to: 004ee030 (UNCONDITIONAL_CALL)
// 00557f8b: ADD ESP,0x14
// 00557f8e: PUSH 0x641424
//   Label: LAB_00557f8e
//   XREF to: 00641424 (DATA)
// 00557f93: MOV EAX,dword ptr [EBX + 0x154]
// 00557f99: PUSH EBX
// 00557f9a: CALL dword ptr [EAX + 0x24]
// 00557f9d: ADD ESP,0x8
// 00557fa0: PUSH EDI
// 00557fa1: PUSH EBX
// 00557fa2: CALL core_charactr.cpp_CCharacter_FUN_0042c3c0
//   XREF to: 0042c3c0 (UNCONDITIONAL_CALL)
// 00557fa7: ADD ESP,0x8
// 00557faa: POP EBP
// 00557fab: POP EDI
// 00557fac: POP ESI
// 00557fad: POP EBX
// 00557fae: RET
// 00557faf: PUSH EBX
//   Label: LAB_00557faf
// 00557fb0: CALL core_scat.cpp_FUN_00558010
//   XREF to: 00558010 (UNCONDITIONAL_CALL)
// 00557fb5: ADD ESP,0x4
// 00557fb8: TEST EAX,EAX
// 00557fba: JZ 0x00557fea
//   XREF to: 00557fea (CONDITIONAL_JUMP)
// 00557fbc: PUSH 0x1
// 00557fbe: PUSH 0xd
// 00557fc0: PUSH ESI
//   Label: LAB_00557fc0
// 00557fc1: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00557fc6: ADD ESP,0xc
// 00557fc9: PUSH 0x641433
//   XREF to: 00641433 (DATA)
// 00557fce: MOV EAX,dword ptr [EBX + 0x154]
// 00557fd4: PUSH EBX
// 00557fd5: CALL dword ptr [EAX + 0x24]
// 00557fd8: ADD ESP,0x8
// 00557fdb: PUSH EDI
// 00557fdc: PUSH EBX
// 00557fdd: CALL core_charactr.cpp_CCharacter_FUN_0042c3c0
//   XREF to: 0042c3c0 (UNCONDITIONAL_CALL)
// 00557fe2: ADD ESP,0x8
// 00557fe5: POP EBP
// 00557fe6: POP EDI
// 00557fe7: POP ESI
// 00557fe8: POP EBX
// 00557fe9: RET
// 00557fea: PUSH 0x1
//   Label: LAB_00557fea
// 00557fec: PUSH 0xc
// 00557fee: JMP 0x00557fc0
//   XREF to: 00557fc0 (UNCONDITIONAL_JUMP)
