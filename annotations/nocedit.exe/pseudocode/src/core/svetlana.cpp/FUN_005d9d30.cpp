// Name: core_svetlana.cpp_FUN_005d9d30
// Address: 005d9d30
// Address Range: [[005d9d30, 005d9eba]]
// Convention: unknown
// Signature: undefined core_svetlana.cpp_FUN_005d9d30()
// Globals:
//   TerminatedCString s_svet_die_wav_00654b69
//   TerminatedCString s_svet_hurt_wav_00654b76
//   undefined4 DAT_00663d58
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
//   sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660

#include "nocturne.h"

/* Signature: undefined1 actors_hero_svetlana.cpp_FUN_005d9d30(undefined4 param_1, undefined4
   param_2) */

void core_svetlana_cpp_FUN_005d9d30(void)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  int iVar2;
  undefined4 uVar3;
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
  *(undefined4 *)in_stack_00000004[1].base_actor.actor_name = DAT_00663d58;
  fVar1 = in_stack_00000004->hit_points - *(float *)(in_stack_00000008 + 4);
  this_ptr = &in_stack_00000004->model;
  in_stack_00000004->hit_points = fVar1;
  if (fVar1 <= 0.0) {
    in_stack_00000004->hit_points = 0.0;
    iVar2 = core_motion_cpp_CMotionController_FUN_0052dab0(&this_ptr->motion_controller);
    if ((*(int *)(iVar2 + 0x24) != 9) &&
       (iVar2 = core_motion_cpp_CMotionController_FUN_0052dab0(&this_ptr->motion_controller),
       *(int *)(iVar2 + 0x24) != 8)) {
      in_stack_00000004->grabbed_by = (CDemonActor *)0x0;
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&this_ptr->motion_controller);
      core_gore_cpp_CGore_FUN_004ee030(g_CGorePtr,&in_stack_00000004->base_actor);
      sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
      uVar3 = (*((in_stack_00000004->base_actor).vtable)->playSound)
                        (&in_stack_00000004->base_actor,"svet-die.wav");
      *(undefined4 *)(in_stack_00000004[0xd].cloth_data + 0x2650) = uVar3;
      core_charactr_cpp_CCharacter_FUN_0042c3c0(in_stack_00000004);
      return;
    }
  }
  else if (0.0 < *(float *)(in_stack_00000008 + 4)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&this_ptr->motion_controller);
    iVar2 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660();
    if (iVar2 == 0) {
      uVar3 = (*((in_stack_00000004->base_actor).vtable)->playSound)
                        (&in_stack_00000004->base_actor,"svet-hurt?.wav");
      *(undefined4 *)(in_stack_00000004[0xd].cloth_data + 0x2650) = uVar3;
      core_charactr_cpp_CCharacter_FUN_0042c3c0(in_stack_00000004);
      return;
    }
  }
  core_charactr_cpp_CCharacter_FUN_0042c3c0(in_stack_00000004);
  return;
}


// Assembly code:
// 005d9d30: PUSH EBX
//   Label: core_svetlana.cpp_FUN_005d9d30
// 005d9d31: PUSH ESI
// 005d9d32: PUSH EDI
// 005d9d33: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005d9d37: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005d9d3b: TEST dword ptr [EBX + 0xbe24],0x7fffffff
// 005d9d45: JNZ 0x005d9de7
//   XREF to: 005d9de7 (CONDITIONAL_JUMP)
// 005d9d4b: MOV EAX,[0x0067b654]
//   Label: LAB_005d9d4b
//   XREF to: 0067b654 (READ)
// 005d9d50: CMP dword ptr [EAX + 0x1d0],0x0
//   XREF to: 02d81c6c (READ)
// 005d9d57: JZ 0x005d9d60
//   XREF to: 005d9d60 (CONDITIONAL_JUMP)
// 005d9d59: MOV dword ptr [EDI + 0x4],0x0
// 005d9d60: MOV EAX,[0x0067b654]
//   Label: LAB_005d9d60
//   XREF to: 0067b654 (READ)
// 005d9d65: MOV ESI,dword ptr [EAX + 0x22c]
//   XREF to: 02d81cc8 (READ)
// 005d9d6b: TEST ESI,ESI
// 005d9d6d: JZ 0x005d9df3
//   XREF to: 005d9df3 (CONDITIONAL_JUMP)
// 005d9d73: MOV EAX,[0x00663d58]
//   Label: LAB_005d9d73
//   XREF to: 00663d58 (READ)
// 005d9d78: MOV dword ptr [EBX + 0xbe24],EAX
// 005d9d7e: FLD float ptr [EDI + 0x4]
// 005d9d81: FSUBR float ptr [EBX + 0x243c]
// 005d9d87: LEA ESI,[EBX + 0x158]
// 005d9d8d: FST float ptr [EBX + 0x243c]
// 005d9d93: FLDZ
// 005d9d95: FCOMPP
// 005d9d97: FNSTSW AX
// 005d9d99: SAHF
// 005d9d9a: JNC 0x005d9dfb
//   XREF to: 005d9dfb (CONDITIONAL_JUMP)
// 005d9d9c: FLD float ptr [EDI + 0x4]
// 005d9d9f: FLDZ
// 005d9da1: FCOMPP
// 005d9da3: FNSTSW AX
// 005d9da5: SAHF
// 005d9da6: JNC 0x005d9dd9
//   XREF to: 005d9dd9 (CONDITIONAL_JUMP)
// 005d9da8: CMP dword ptr [EBX + 0x1fbd4],0x0
// 005d9daf: JNZ 0x005d9e8c
//   XREF to: 005d9e8c (CONDITIONAL_JUMP)
// 005d9db5: PUSH 0x1
// 005d9db7: PUSH 0x4
// 005d9db9: PUSH ESI
//   Label: LAB_005d9db9
// 005d9dba: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005d9dbf: ADD ESP,0xc
// 005d9dc2: MOV EAX,dword ptr [EBX + 0x9f8bc]
// 005d9dc8: PUSH EAX
// 005d9dc9: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 005d9dce: ADD ESP,0x4
// 005d9dd1: TEST EAX,EAX
// 005d9dd3: JZ 0x005d9e95
//   XREF to: 005d9e95 (CONDITIONAL_JUMP)
// 005d9dd9: PUSH EDI
//   Label: LAB_005d9dd9
// 005d9dda: PUSH EBX
// 005d9ddb: CALL core_charactr.cpp_CCharacter_FUN_0042c3c0
//   XREF to: 0042c3c0 (UNCONDITIONAL_CALL)
// 005d9de0: ADD ESP,0x8
// 005d9de3: POP EDI
// 005d9de4: POP ESI
// 005d9de5: POP EBX
// 005d9de6: RET
// 005d9de7: MOV dword ptr [EDI + 0x4],0x0
//   Label: LAB_005d9de7
// 005d9dee: JMP 0x005d9d4b
//   XREF to: 005d9d4b (UNCONDITIONAL_JUMP)
// 005d9df3: MOV dword ptr [EDI + 0x4],ESI
//   Label: LAB_005d9df3
// 005d9df6: JMP 0x005d9d73
//   XREF to: 005d9d73 (UNCONDITIONAL_JUMP)
// 005d9dfb: PUSH ESI
//   Label: LAB_005d9dfb
// 005d9dfc: MOV dword ptr [EBX + 0x243c],0x0
// 005d9e06: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005d9e0b: MOV EAX,dword ptr [EAX + 0x24]
// 005d9e0e: ADD ESP,0x4
// 005d9e11: CMP EAX,0x9
// 005d9e14: JZ 0x005d9dd9
//   XREF to: 005d9dd9 (CONDITIONAL_JUMP)
// 005d9e16: PUSH ESI
// 005d9e17: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005d9e1c: MOV EAX,dword ptr [EAX + 0x24]
// 005d9e1f: ADD ESP,0x4
// 005d9e22: CMP EAX,0x8
// 005d9e25: JZ 0x005d9dd9
//   XREF to: 005d9dd9 (CONDITIONAL_JUMP)
// 005d9e27: PUSH 0x1
// 005d9e29: PUSH 0x8
// 005d9e2b: PUSH ESI
// 005d9e2c: MOV dword ptr [EBX + 0x2598],0x0
// 005d9e36: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005d9e3b: ADD ESP,0xc
// 005d9e3e: PUSH 0x0
// 005d9e40: PUSH 0x42480000
// 005d9e45: PUSH 0x32
// 005d9e47: PUSH EBX
// 005d9e48: MOV EDX,dword ptr [0x0067b9a0]
//   XREF to: 02d83364 (PARAM)
//   XREF to: 0067b9a0 (READ)
// 005d9e4e: PUSH EDX
//   XREF to: 02d83364 (DATA)
// 005d9e4f: CALL core_gore.cpp_CGore_FUN_004ee030
//   XREF to: 004ee030 (UNCONDITIONAL_CALL)
// 005d9e54: ADD ESP,0x14
// 005d9e57: MOV ECX,dword ptr [EBX + 0x9f8bc]
// 005d9e5d: PUSH ECX
// 005d9e5e: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 005d9e63: ADD ESP,0x4
// 005d9e66: PUSH 0x654b69
//   XREF to: 00654b69 (DATA)
// 005d9e6b: MOV EAX,dword ptr [EBX + 0x154]
// 005d9e71: PUSH EBX
// 005d9e72: CALL dword ptr [EAX + 0x24]
// 005d9e75: ADD ESP,0x8
// 005d9e78: MOV dword ptr [EBX + 0x9f8bc],EAX
// 005d9e7e: PUSH EDI
// 005d9e7f: PUSH EBX
// 005d9e80: CALL core_charactr.cpp_CCharacter_FUN_0042c3c0
//   XREF to: 0042c3c0 (UNCONDITIONAL_CALL)
// 005d9e85: ADD ESP,0x8
// 005d9e88: POP EDI
// 005d9e89: POP ESI
// 005d9e8a: POP EBX
// 005d9e8b: RET
// 005d9e8c: PUSH 0x1
//   Label: LAB_005d9e8c
// 005d9e8e: PUSH 0xb
// 005d9e90: JMP 0x005d9db9
//   XREF to: 005d9db9 (UNCONDITIONAL_JUMP)
// 005d9e95: PUSH 0x654b76
//   Label: LAB_005d9e95
//   XREF to: 00654b76 (DATA)
// 005d9e9a: MOV EAX,dword ptr [EBX + 0x154]
// 005d9ea0: PUSH EBX
// 005d9ea1: CALL dword ptr [EAX + 0x24]
// 005d9ea4: ADD ESP,0x8
// 005d9ea7: MOV dword ptr [EBX + 0x9f8bc],EAX
// 005d9ead: PUSH EDI
// 005d9eae: PUSH EBX
// 005d9eaf: CALL core_charactr.cpp_CCharacter_FUN_0042c3c0
//   XREF to: 0042c3c0 (UNCONDITIONAL_CALL)
// 005d9eb4: ADD ESP,0x8
// 005d9eb7: POP EDI
// 005d9eb8: POP ESI
// 005d9eb9: POP EBX
// 005d9eba: RET
