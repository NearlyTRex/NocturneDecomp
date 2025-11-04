// Name: core_bride.cpp_FUN_00424830
// Address: 00424830
// Address Range: [[00424830, 00424a0a]]
// Convention: unknown
// Signature: undefined core_bride.cpp_FUN_00424830()
// Globals:
//   TerminatedCString s_ub_die_wav_00616c95
//   TerminatedCString s_ub_hurt_wav_00616ca1
//   double DOUBLE_00616cb5 = 2
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CFireEffect g_CFireEffectInstance
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_randomChance_FUN_0040cd10
//   core_bride.cpp_FUN_00424600
//   core_charactr.cpp_CCharacter_FUN_0042b5b0
//   core_enemy.cpp_FUN_004a9f10
//   core_fire.cpp_CFireEffect_FUN_004c79d0
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_bride.cpp_FUN_00424830(undefined4 param_1, undefined4 param_2)
    */

void core_bride_cpp_FUN_00424830(void)

{
  CDeformableModelInstance *this_ptr;
  CVector3f *input_local_point;
  int iVar1;
  undefined4 uVar2;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  CCharacter *in_stack_00000004;
  int in_stack_00000008;
  float in_stack_ffffffd0;
  char *sound_name;
  CVector3f local_24;
  
  sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
  if (*(int *)(in_stack_00000008 + 0x28) == 7) {
    iVar1 = 0;
    *(float *)(in_stack_00000008 + 4) = *(float *)(in_stack_00000008 + 4) * (float)DOUBLE_00616cb5;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (&in_stack_00000004->base_actor,(CVector3f *)&stack0xffffffc4,
               (CVector3f *)(in_stack_00000008 + 0x1c));
    do {
      iVar1 = iVar1 + 1;
      core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
    } while (iVar1 < 5);
  }
  if (*(int *)(in_stack_00000008 + 0x30) == 0x6c) {
    input_local_point =
         core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                   (&in_stack_00000004->model,&local_24,0);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (&in_stack_00000004->base_actor,(CVector3f *)&stack0xffffffd0,input_local_point);
    core_charactr_cpp_CCharacter_FUN_0042b5b0(in_stack_00000004);
  }
  core_bride_cpp_FUN_00424600();
  iVar1 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x40);
  in_stack_00000004->hit_points = in_stack_00000004->hit_points - *(float *)(in_stack_00000008 + 4);
  if ((in_stack_00000004->model).part_visibility_flags[iVar1] == 0) {
    in_stack_00000004->hit_points = 0.0;
  }
  this_ptr = &in_stack_00000004->model;
  if (0.0 < in_stack_00000004->hit_points) {
    iVar1 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr->motion_controller,(iVar1 == 0) + 7,(int)in_stack_ffffffd0);
    iVar1 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660();
    if (iVar1 != 0) goto LAB_00424955;
    sound_name = "ub-hurt?.wav";
  }
  else {
    in_stack_00000004->hit_points = 0.0;
    iVar1 = core_motion_cpp_CMotionController_FUN_0052dab0(&this_ptr->motion_controller);
    if ((*(int *)(iVar1 + 0x24) == 0xe) || (*(int *)(iVar1 + 0x24) == 0xd)) goto LAB_00424955;
    local_24.z = 6.087358e-39;
    iVar1 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
    local_24.z = 6.08739e-39;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr->motion_controller,(iVar1 == 0) + 0xb,unaff_EBP);
    sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
    sound_name = "ub-die?.wav";
  }
  uVar2 = (*((in_stack_00000004->base_actor).vtable)->playSound)
                    (&in_stack_00000004->base_actor,sound_name);
  *(undefined4 *)(in_stack_00000004[1].base_actor.create_event + 0x48) = uVar2;
LAB_00424955:
  local_24.z = 6.087459e-39;
  core_enemy_cpp_FUN_004a9f10();
  return;
}


// Assembly code:
// 00424830: PUSH EBX
//   Label: core_bride.cpp_FUN_00424830
// 00424831: PUSH ESI
// 00424832: PUSH EDI
// 00424833: PUSH EBP
// 00424834: MOV EBP,ESP
// 00424836: SUB ESP,0x2c
// 00424839: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0042483c: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0042483f: MOV EDX,dword ptr [ESI + 0xbee8]
// 00424845: PUSH EDX
// 00424846: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 0042484b: MOV ECX,dword ptr [EDI + 0x28]
// 0042484e: ADD ESP,0x4
// 00424851: CMP ECX,0x7
// 00424854: JZ 0x00424966
//   XREF to: 00424966 (CONDITIONAL_JUMP)
// 0042485a: LEA EAX,[EAX]
// 00424860: CMP dword ptr [EDI + 0x30],0x6c
//   Label: LAB_00424860
// 00424864: JNZ 0x004248a1
//   XREF to: 004248a1 (CONDITIONAL_JUMP)
// 00424866: PUSH 0x0
// 00424868: LEA EAX,[EBP + -0x14]
//   XREF to: Stack[-0x24] (DATA)
// 0042486b: PUSH EAX
// 0042486c: LEA EAX,[ESI + 0x158]
// 00424872: PUSH EAX
// 00424873: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 00424878: ADD ESP,0xc
// 0042487b: PUSH EAX
// 0042487c: LEA EAX,[EBP + -0x20]
//   XREF to: Stack[-0x30] (DATA)
// 0042487f: PUSH EAX
// 00424880: PUSH ESI
// 00424881: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00424886: ADD ESP,0xc
// 00424889: PUSH 0x0
// 0042488b: PUSH 0x41200000
// 00424890: PUSH 0x0
// 00424892: PUSH 0x0
// 00424894: LEA EAX,[EBP + -0x20]
//   XREF to: Stack[-0x30] (DATA)
// 00424897: PUSH EAX
// 00424898: PUSH ESI
// 00424899: CALL core_charactr.cpp_CCharacter_FUN_0042b5b0
//   XREF to: 0042b5b0 (UNCONDITIONAL_CALL)
// 0042489e: ADD ESP,0x18
// 004248a1: PUSH EDI
//   Label: LAB_004248a1
// 004248a2: PUSH ESI
// 004248a3: CALL core_bride.cpp_FUN_00424600
//   XREF to: 00424600 (UNCONDITIONAL_CALL)
// 004248a8: FLD float ptr [EDI + 0x4]
// 004248ab: FSUBR float ptr [ESI + 0x243c]
// 004248b1: MOV EAX,dword ptr [ESI + 0xbedc]
// 004248b7: FSTP float ptr [ESI + 0x243c]
// 004248bd: MOV ECX,dword ptr [ESI + EAX*0x4 + 0x2298]
// 004248c4: ADD ESP,0x8
// 004248c7: TEST ECX,ECX
// 004248c9: JZ 0x004249b9
//   XREF to: 004249b9 (CONDITIONAL_JUMP)
// 004248cf: FLD float ptr [ESI + 0x243c]
//   Label: LAB_004248cf
// 004248d5: FLDZ
// 004248d7: LEA EBX,[ESI + 0x158]
// 004248dd: FCOMPP
// 004248df: FNSTSW AX
// 004248e1: SAHF
// 004248e2: JC 0x004249c4
//   XREF to: 004249c4 (CONDITIONAL_JUMP)
// 004248e8: PUSH EBX
// 004248e9: MOV dword ptr [ESI + 0x243c],0x0
// 004248f3: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004248f8: MOV EAX,dword ptr [EAX + 0x24]
// 004248fb: ADD ESP,0x4
// 004248fe: CMP EAX,0xe
// 00424901: JZ 0x00424955
//   XREF to: 00424955 (CONDITIONAL_JUMP)
// 00424903: CMP EAX,0xd
// 00424906: JZ 0x00424955
//   XREF to: 00424955 (CONDITIONAL_JUMP)
// 00424908: PUSH 0x1
// 0042490a: PUSH 0x3f000000
// 0042490f: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 00424914: ADD ESP,0x4
// 00424917: TEST EAX,EAX
// 00424919: SETZ AL
// 0042491c: AND EAX,0xff
// 00424921: ADD EAX,0xb
// 00424924: PUSH EAX
// 00424925: PUSH EBX
// 00424926: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0042492b: ADD ESP,0xc
// 0042492e: MOV EAX,dword ptr [ESI + 0xbee4]
// 00424934: PUSH EAX
// 00424935: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 0042493a: ADD ESP,0x4
// 0042493d: PUSH 0x616c95
//   XREF to: 00616c95 (DATA)
// 00424942: MOV EAX,dword ptr [ESI + 0x154]
//   Label: LAB_00424942
// 00424948: PUSH ESI
// 00424949: CALL dword ptr [EAX + 0x24]
// 0042494c: ADD ESP,0x8
// 0042494f: MOV dword ptr [ESI + 0xbee4],EAX
// 00424955: PUSH EDI
//   Label: LAB_00424955
// 00424956: PUSH ESI
// 00424957: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 0042495c: ADD ESP,0x8
// 0042495f: MOV ESP,EBP
// 00424961: POP EBP
// 00424962: POP EDI
// 00424963: POP ESI
// 00424964: POP EBX
// 00424965: RET
// 00424966: FLD float ptr [EDI + 0x4]
//   Label: LAB_00424966
// 00424969: LEA EAX,[EDI + 0x1c]
// 0042496c: FLD ST0
// 0042496e: FMUL double ptr [0x00616cb5]
//   XREF to: 00616cb5 (READ)
// 00424974: PUSH EAX
// 00424975: LEA EAX,[EBP + -0x2c]
//   XREF to: Stack[-0x3c] (DATA)
// 00424978: XOR EBX,EBX
// 0042497a: PUSH EAX
// 0042497b: FSTP ST1
// 0042497d: PUSH ESI
// 0042497e: FSTP float ptr [EDI + 0x4]
// 00424981: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00424986: ADD ESP,0xc
// 00424989: PUSH 0xffff
//   Label: LAB_00424989
// 0042498e: PUSH 0x0
// 00424990: PUSH 0x4000
// 00424995: PUSH 0x4000
// 0042499a: PUSH 0x0
// 0042499c: LEA EAX,[EBP + -0x2c]
//   XREF to: Stack[-0x3c] (DATA)
// 0042499f: PUSH EAX
// 004249a0: MOV EAX,[0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 004249a5: PUSH EAX
//   XREF to: 02d12db0 (DATA)
// 004249a6: INC EBX
// 004249a7: CALL core_fire.cpp_CFireEffect_FUN_004c79d0
//   XREF to: 004c79d0 (UNCONDITIONAL_CALL)
// 004249ac: ADD ESP,0x1c
// 004249af: CMP EBX,0x5
// 004249b2: JL 0x00424989
//   XREF to: 00424989 (CONDITIONAL_JUMP)
// 004249b4: JMP 0x00424860
//   XREF to: 00424860 (UNCONDITIONAL_JUMP)
// 004249b9: MOV dword ptr [ESI + 0x243c],ECX
//   Label: LAB_004249b9
// 004249bf: JMP 0x004248cf
//   XREF to: 004248cf (UNCONDITIONAL_JUMP)
// 004249c4: PUSH 0x1
//   Label: LAB_004249c4
// 004249c6: PUSH 0x3f000000
// 004249cb: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 004249d0: ADD ESP,0x4
// 004249d3: TEST EAX,EAX
// 004249d5: SETZ AL
// 004249d8: AND EAX,0xff
// 004249dd: ADD EAX,0x7
// 004249e0: PUSH EAX
// 004249e1: PUSH EBX
// 004249e2: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004249e7: ADD ESP,0xc
// 004249ea: MOV EBX,dword ptr [ESI + 0xbee4]
// 004249f0: PUSH EBX
// 004249f1: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 004249f6: ADD ESP,0x4
// 004249f9: TEST EAX,EAX
// 004249fb: JNZ 0x00424955
//   XREF to: 00424955 (CONDITIONAL_JUMP)
// 00424a01: PUSH 0x616ca1
//   XREF to: 00616ca1 (DATA)
// 00424a06: JMP 0x00424942
//   XREF to: 00424942 (UNCONDITIONAL_JUMP)
