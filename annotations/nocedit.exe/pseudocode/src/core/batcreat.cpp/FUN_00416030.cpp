// Name: core_batcreat.cpp_FUN_00416030
// Address: 00416030
// Address Range: [[00416030, 0041623c]]
// Convention: unknown
// Signature: undefined core_batcreat.cpp_FUN_00416030()
// Globals:
//   TerminatedCString s_batman_die_wav_00615691
//   TerminatedCString s_batman_hurt_wav_006156a0
//   double DOUBLE_006156b1 = 2
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CFireEffect g_CFireEffectInstance
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_getRandomInt_FUN_0040cc70
//   core_batcreat.cpp_FUN_00415dd0
//   core_charactr.cpp_CCharacter_FUN_0042b5b0
//   core_enemy.cpp_FUN_004a9f10
//   core_fire.cpp_CFireEffect_FUN_004c79d0
//   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_batcreature.cpp_FUN_00416030(undefined4 param_1, undefined4
   param_2) */

void core_batcreat_cpp_FUN_00416030(void)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  CVector3f *input_local_point;
  int iVar2;
  SMotion *pSVar3;
  undefined4 uVar4;
  BADSPACEBASE *in_ESP;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  CVector3f CStack_20;
  CCharacter *pCStack_14;
  
  sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
  sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
  if (*(int *)((int)in_stack_00000008 + 0x28) == 7) {
    iVar2 = 0;
    *(float *)((int)in_stack_00000008 + 4) =
         *(float *)((int)in_stack_00000008 + 4) * (float)DOUBLE_006156b1;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (&in_stack_00000004->base_actor,(CVector3f *)&stack0xffffffd8,
               (CVector3f *)((int)in_stack_00000008 + 0x1c));
    do {
      iVar2 = iVar2 + 1;
      core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
    } while (iVar2 < 5);
  }
  if (*(int *)((int)in_stack_00000008 + 0x30) == 0x6c) {
    input_local_point =
         core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                   (&in_stack_00000004->model,(CVector3f *)&stack0xffffffd0,0);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (&in_stack_00000004->base_actor,&CStack_20,input_local_point);
    core_charactr_cpp_CCharacter_FUN_0042b5b0(in_stack_00000004);
  }
  core_batcreat_cpp_FUN_00415dd0();
  fVar1 = in_stack_00000004->hit_points - *(float *)((int)in_stack_00000008 + 4);
  this_ptr = &in_stack_00000004->model;
  in_stack_00000004->hit_points = fVar1;
  if (fVar1 <= 0.0) {
    in_stack_00000004->hit_points = 0.0;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr->motion_controller);
    if ((pSVar3->state_index != 7) && (pSVar3->state_index != 8)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&this_ptr->motion_controller,7,1);
      sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
      uVar4 = (*((in_stack_00000004->base_actor).vtable)->playSound)
                        (&in_stack_00000004->base_actor,"batman-die.wav");
      *(undefined4 *)(in_stack_00000004[1].base_actor.create_event + 0x5c) = uVar4;
      pCStack_14 = in_stack_00000004;
      CStack_20.z = 6.004474e-39;
      core_enemy_cpp_FUN_004a9f10();
      return;
    }
  }
  else {
    iVar2 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
    if (iVar2 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&this_ptr->motion_controller,4,1);
    }
    if (iVar2 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->model).motion_controller,5,1);
    }
    if (iVar2 == 2) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->model).motion_controller,6,1);
    }
    iVar2 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660();
    if (iVar2 == 0) {
      uVar4 = (*((in_stack_00000004->base_actor).vtable)->playSound)
                        (&in_stack_00000004->base_actor,"batman-hurt?.wav");
      *(undefined4 *)(in_stack_00000004[1].base_actor.create_event + 0x5c) = uVar4;
      CStack_20.z = in_stack_00000008;
      CStack_20.y = (float)in_stack_00000004;
      CStack_20.x = 6.004533e-39;
      core_enemy_cpp_FUN_004a9f10();
      return;
    }
  }
  core_enemy_cpp_FUN_004a9f10();
  return;
}


// Assembly code:
// 00416030: PUSH EBX
//   Label: core_batcreat.cpp_FUN_00416030
// 00416031: PUSH ESI
// 00416032: PUSH EDI
// 00416033: PUSH EBP
// 00416034: SUB ESP,0x2c
// 00416037: MOV ESI,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 0041603b: MOV EDI,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x8] (READ)
// 0041603f: MOV EDX,dword ptr [ESI + 0xbefc]
// 00416045: PUSH EDX
// 00416046: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 0041604b: ADD ESP,0x4
// 0041604e: MOV ECX,dword ptr [ESI + 0xbef4]
// 00416054: PUSH ECX
// 00416055: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 0041605a: MOV EBX,dword ptr [EDI + 0x28]
// 0041605d: ADD ESP,0x4
// 00416060: CMP EBX,0x7
// 00416063: JZ 0x00416157
//   XREF to: 00416157 (CONDITIONAL_JUMP)
// 00416069: LEA EAX,[EAX]
// 0041606f: NOP
// 00416070: CMP dword ptr [EDI + 0x30],0x6c
//   Label: LAB_00416070
// 00416074: JNZ 0x004160b4
//   XREF to: 004160b4 (CONDITIONAL_JUMP)
// 00416076: PUSH 0x0
// 00416078: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3c] (DATA)
// 0041607c: PUSH EAX
// 0041607d: LEA EAX,[ESI + 0x158]
// 00416083: PUSH EAX
// 00416084: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 00416089: ADD ESP,0xc
// 0041608c: PUSH EAX
// 0041608d: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x24] (DATA)
// 00416091: PUSH EAX
// 00416092: PUSH ESI
// 00416093: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00416098: ADD ESP,0xc
// 0041609b: PUSH 0x0
// 0041609d: PUSH 0x41200000
// 004160a2: PUSH 0x0
// 004160a4: PUSH 0x0
// 004160a6: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x24] (DATA)
// 004160aa: PUSH EAX
// 004160ab: PUSH ESI
// 004160ac: CALL core_charactr.cpp_CCharacter_FUN_0042b5b0
//   XREF to: 0042b5b0 (UNCONDITIONAL_CALL)
// 004160b1: ADD ESP,0x18
// 004160b4: PUSH EDI
//   Label: LAB_004160b4
// 004160b5: PUSH ESI
// 004160b6: CALL core_batcreat.cpp_FUN_00415dd0
//   XREF to: 00415dd0 (UNCONDITIONAL_CALL)
// 004160bb: FLD float ptr [EDI + 0x4]
// 004160be: ADD ESP,0x8
// 004160c1: FSUBR float ptr [ESI + 0x243c]
// 004160c7: LEA EBX,[ESI + 0x158]
// 004160cd: FST float ptr [ESI + 0x243c]
// 004160d3: FLDZ
// 004160d5: FCOMPP
// 004160d7: FNSTSW AX
// 004160d9: SAHF
// 004160da: JNC 0x004161a9
//   XREF to: 004161a9 (CONDITIONAL_JUMP)
// 004160e0: PUSH 0x2
// 004160e2: PUSH 0x0
// 004160e4: CALL core_actor.cpp_getRandomInt_FUN_0040cc70
//   XREF to: 0040cc70 (UNCONDITIONAL_CALL)
// 004160e9: ADD ESP,0x8
// 004160ec: MOV EBP,EAX
// 004160ee: TEST EAX,EAX
// 004160f0: JNZ 0x004160ff
//   XREF to: 004160ff (CONDITIONAL_JUMP)
// 004160f2: PUSH 0x1
// 004160f4: PUSH 0x4
// 004160f6: PUSH EBX
// 004160f7: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004160fc: ADD ESP,0xc
// 004160ff: CMP EBP,0x1
//   Label: LAB_004160ff
// 00416102: JNZ 0x00416116
//   XREF to: 00416116 (CONDITIONAL_JUMP)
// 00416104: PUSH EBP
// 00416105: PUSH 0x5
// 00416107: LEA EAX,[ESI + 0x158]
// 0041610d: PUSH EAX
// 0041610e: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00416113: ADD ESP,0xc
// 00416116: CMP EBP,0x2
//   Label: LAB_00416116
// 00416119: JNZ 0x0041612e
//   XREF to: 0041612e (CONDITIONAL_JUMP)
// 0041611b: PUSH 0x1
// 0041611d: PUSH 0x6
// 0041611f: LEA EAX,[ESI + 0x158]
// 00416125: PUSH EAX
// 00416126: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0041612b: ADD ESP,0xc
// 0041612e: MOV ECX,dword ptr [ESI + 0xbef8]
//   Label: LAB_0041612e
// 00416134: PUSH ECX
// 00416135: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 0041613a: ADD ESP,0x4
// 0041613d: TEST EAX,EAX
// 0041613f: JZ 0x00416213
//   XREF to: 00416213 (CONDITIONAL_JUMP)
// 00416145: PUSH EDI
//   Label: LAB_00416145
// 00416146: PUSH ESI
// 00416147: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 0041614c: ADD ESP,0x8
// 0041614f: ADD ESP,0x2c
// 00416152: POP EBP
// 00416153: POP EDI
// 00416154: POP ESI
// 00416155: POP EBX
// 00416156: RET
// 00416157: FLD float ptr [EDI + 0x4]
//   Label: LAB_00416157
// 0041615a: LEA EAX,[EDI + 0x1c]
// 0041615d: FLD ST0
// 0041615f: FMUL double ptr [0x006156b1]
//   XREF to: 006156b1 (READ)
// 00416165: PUSH EAX
// 00416166: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x30] (DATA)
// 0041616a: XOR EBX,EBX
// 0041616c: PUSH EAX
// 0041616d: FSTP ST1
// 0041616f: PUSH ESI
// 00416170: FSTP float ptr [EDI + 0x4]
// 00416173: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00416178: ADD ESP,0xc
// 0041617b: MOV EBP,0x4000
// 00416180: PUSH 0xffff
//   Label: LAB_00416180
// 00416185: PUSH 0x0
// 00416187: PUSH EBP
// 00416188: PUSH EBP
// 00416189: PUSH 0x0
// 0041618b: LEA EAX,[ESP + 0x20]
//   XREF to: Stack[-0x30] (DATA)
// 0041618f: PUSH EAX
// 00416190: MOV EAX,[0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 00416195: PUSH EAX
//   XREF to: 02d12db0 (DATA)
// 00416196: INC EBX
// 00416197: CALL core_fire.cpp_CFireEffect_FUN_004c79d0
//   XREF to: 004c79d0 (UNCONDITIONAL_CALL)
// 0041619c: ADD ESP,0x1c
// 0041619f: CMP EBX,0x5
// 004161a2: JL 0x00416180
//   XREF to: 00416180 (CONDITIONAL_JUMP)
// 004161a4: JMP 0x00416070
//   XREF to: 00416070 (UNCONDITIONAL_JUMP)
// 004161a9: PUSH EBX
//   Label: LAB_004161a9
// 004161aa: MOV dword ptr [ESI + 0x243c],0x0
// 004161b4: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004161b9: MOV EAX,dword ptr [EAX + 0x24]
// 004161bc: ADD ESP,0x4
// 004161bf: CMP EAX,0x7
// 004161c2: JZ 0x00416145
//   XREF to: 00416145 (CONDITIONAL_JUMP)
// 004161c4: CMP EAX,0x8
// 004161c7: JZ 0x00416145
//   XREF to: 00416145 (CONDITIONAL_JUMP)
// 004161cd: PUSH 0x1
// 004161cf: PUSH 0x7
// 004161d1: PUSH EBX
// 004161d2: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004161d7: ADD ESP,0xc
// 004161da: MOV EBX,dword ptr [ESI + 0xbef8]
// 004161e0: PUSH EBX
// 004161e1: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 004161e6: ADD ESP,0x4
// 004161e9: PUSH 0x615691
//   XREF to: 00615691 (DATA)
// 004161ee: MOV EAX,dword ptr [ESI + 0x154]
// 004161f4: PUSH ESI
// 004161f5: CALL dword ptr [EAX + 0x24]
// 004161f8: ADD ESP,0x8
// 004161fb: MOV dword ptr [ESI + 0xbef8],EAX
// 00416201: PUSH EDI
// 00416202: PUSH ESI
// 00416203: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 00416208: ADD ESP,0x8
// 0041620b: ADD ESP,0x2c
// 0041620e: POP EBP
// 0041620f: POP EDI
// 00416210: POP ESI
// 00416211: POP EBX
// 00416212: RET
// 00416213: PUSH 0x6156a0
//   Label: LAB_00416213
//   XREF to: 006156a0 (DATA)
// 00416218: MOV EAX,dword ptr [ESI + 0x154]
// 0041621e: PUSH ESI
// 0041621f: CALL dword ptr [EAX + 0x24]
// 00416222: ADD ESP,0x8
// 00416225: MOV dword ptr [ESI + 0xbef8],EAX
// 0041622b: PUSH EDI
// 0041622c: PUSH ESI
// 0041622d: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 00416232: ADD ESP,0x8
// 00416235: ADD ESP,0x2c
// 00416238: POP EBP
// 00416239: POP EDI
// 0041623a: POP ESI
// 0041623b: POP EBX
// 0041623c: RET
