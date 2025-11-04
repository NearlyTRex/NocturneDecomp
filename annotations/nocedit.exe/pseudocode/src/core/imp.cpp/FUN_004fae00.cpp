// Name: core_imp.cpp_FUN_004fae00
// Address: 004fae00
// Address Range: [[004fae00, 004faf34]]
// Convention: unknown
// Signature: undefined core_imp.cpp_FUN_004fae00()
// Globals:
//   TerminatedCString s_imp_die_wav_0062fa6e
//   TerminatedCString s_imp_hurt_wav_0062fa7b
//   double DOUBLE_0062fa8e = 2
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CFireEffect g_CFireEffectInstance
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_enemy.cpp_FUN_004a9f10
//   core_fire.cpp_CFireEffect_FUN_004c79d0
//   core_imp.cpp_FUN_004fab60
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_imp.cpp_FUN_004fae00(undefined4 param_1, undefined4 param_2)
    */

void core_imp_cpp_FUN_004fae00(void)

{
  CDemonActor *this_ptr;
  CDemonActor *pCVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  char *sound_name;
  
  sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
  if (*(int *)(in_stack_00000008 + 0x28) == 8) {
    iVar2 = 0;
    *(float *)(in_stack_00000008 + 4) = *(float *)(in_stack_00000008 + 4) * (float)DOUBLE_0062fa8e;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (in_stack_00000004,(CVector3f *)&stack0xffffffe0,
               (CVector3f *)(in_stack_00000008 + 0x1c));
    do {
      iVar2 = iVar2 + 1;
      core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
    } while (iVar2 < 5);
  }
  core_imp_cpp_FUN_004fab60();
  pCVar1 = (CDemonActor *)
           ((float)in_stack_00000004[0x1a].next_actor - *(float *)(in_stack_00000008 + 4));
  this_ptr = in_stack_00000004 + 1;
  in_stack_00000004[0x1a].next_actor = pCVar1;
  if (0.0 < (float)pCVar1) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              ((CMotionController *)this_ptr,5,1);
    iVar2 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660();
    if (iVar2 != 0) goto LAB_004faefc;
    sound_name = "imp-hurt?.wav";
  }
  else {
    in_stack_00000004[0x1a].next_actor = (CDemonActor *)0x0;
    iVar2 = core_motion_cpp_CMotionController_FUN_0052dab0((CMotionController *)this_ptr);
    if ((*(int *)(iVar2 + 0x24) == 6) || (*(int *)(iVar2 + 0x24) == 7)) goto LAB_004faefc;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              ((CMotionController *)this_ptr,6,1);
    sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
    sound_name = "imp-die?.wav";
  }
  iVar2 = (*in_stack_00000004->vtable->playSound)(in_stack_00000004,sound_name);
  in_stack_00000004[0x8d].field26_0x148 = iVar2;
LAB_004faefc:
  core_enemy_cpp_FUN_004a9f10();
  return;
}


// Assembly code:
// 004fae00: PUSH EBX
//   Label: core_imp.cpp_FUN_004fae00
// 004fae01: PUSH ESI
// 004fae02: PUSH EDI
// 004fae03: PUSH EBP
// 004fae04: SUB ESP,0x14
// 004fae07: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 004fae0b: MOV EDI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 004fae0f: MOV EDX,dword ptr [ESI + 0xbebc]
// 004fae15: PUSH EDX
// 004fae16: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 004fae1b: MOV ECX,dword ptr [EDI + 0x28]
// 004fae1e: ADD ESP,0x4
// 004fae21: CMP ECX,0x8
// 004fae24: JNZ 0x004fae80
//   XREF to: 004fae80 (CONDITIONAL_JUMP)
// 004fae26: FLD float ptr [EDI + 0x4]
// 004fae29: LEA EAX,[EDI + 0x1c]
// 004fae2c: FLD ST0
// 004fae2e: FMUL double ptr [0x0062fa8e]
//   XREF to: 0062fa8e (READ)
// 004fae34: PUSH EAX
// 004fae35: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x24] (DATA)
// 004fae39: XOR EBX,EBX
// 004fae3b: PUSH EAX
// 004fae3c: FSTP ST1
// 004fae3e: PUSH ESI
// 004fae3f: FSTP float ptr [EDI + 0x4]
// 004fae42: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004fae47: ADD ESP,0xc
// 004fae4a: PUSH 0xffff
//   Label: LAB_004fae4a
// 004fae4f: PUSH 0x0
// 004fae51: PUSH 0x4000
// 004fae56: PUSH 0x4000
// 004fae5b: PUSH 0x0
// 004fae5d: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x24] (DATA)
// 004fae61: PUSH EAX
// 004fae62: MOV EBP,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
// 004fae68: PUSH EBP
//   XREF to: 02d12db0 (DATA)
// 004fae69: INC EBX
// 004fae6a: CALL core_fire.cpp_CFireEffect_FUN_004c79d0
//   XREF to: 004c79d0 (UNCONDITIONAL_CALL)
// 004fae6f: ADD ESP,0x1c
// 004fae72: CMP EBX,0x5
// 004fae75: JL 0x004fae4a
//   XREF to: 004fae4a (CONDITIONAL_JUMP)
// 004fae77: LEA EAX,[EAX]
// 004fae7d: LEA EDX,[EDX]
// 004fae80: PUSH EDI
//   Label: LAB_004fae80
// 004fae81: PUSH ESI
// 004fae82: CALL core_imp.cpp_FUN_004fab60
//   XREF to: 004fab60 (UNCONDITIONAL_CALL)
// 004fae87: FLD float ptr [EDI + 0x4]
// 004fae8a: ADD ESP,0x8
// 004fae8d: FSUBR float ptr [ESI + 0x243c]
// 004fae93: LEA EBX,[ESI + 0x158]
// 004fae99: FST float ptr [ESI + 0x243c]
// 004fae9f: FLDZ
// 004faea1: FCOMPP
// 004faea3: FNSTSW AX
// 004faea5: SAHF
// 004faea6: JC 0x004faf0e
//   XREF to: 004faf0e (CONDITIONAL_JUMP)
// 004faea8: PUSH EBX
// 004faea9: MOV dword ptr [ESI + 0x243c],0x0
// 004faeb3: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004faeb8: MOV EAX,dword ptr [EAX + 0x24]
// 004faebb: ADD ESP,0x4
// 004faebe: CMP EAX,0x6
// 004faec1: JZ 0x004faefc
//   XREF to: 004faefc (CONDITIONAL_JUMP)
// 004faec3: CMP EAX,0x7
// 004faec6: JZ 0x004faefc
//   XREF to: 004faefc (CONDITIONAL_JUMP)
// 004faec8: PUSH 0x1
// 004faeca: PUSH 0x6
// 004faecc: PUSH EBX
// 004faecd: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004faed2: ADD ESP,0xc
// 004faed5: MOV EDX,dword ptr [ESI + 0xbec0]
// 004faedb: PUSH EDX
// 004faedc: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 004faee1: ADD ESP,0x4
// 004faee4: PUSH 0x62fa6e
//   XREF to: 0062fa6e (DATA)
// 004faee9: MOV EAX,dword ptr [ESI + 0x154]
//   Label: LAB_004faee9
// 004faeef: PUSH ESI
// 004faef0: CALL dword ptr [EAX + 0x24]
// 004faef3: ADD ESP,0x8
// 004faef6: MOV dword ptr [ESI + 0xbec0],EAX
// 004faefc: PUSH EDI
//   Label: LAB_004faefc
// 004faefd: PUSH ESI
// 004faefe: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 004faf03: ADD ESP,0x8
// 004faf06: ADD ESP,0x14
// 004faf09: POP EBP
// 004faf0a: POP EDI
// 004faf0b: POP ESI
// 004faf0c: POP EBX
// 004faf0d: RET
// 004faf0e: PUSH 0x1
//   Label: LAB_004faf0e
// 004faf10: PUSH 0x5
// 004faf12: PUSH EBX
// 004faf13: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004faf18: ADD ESP,0xc
// 004faf1b: MOV EAX,dword ptr [ESI + 0xbec0]
// 004faf21: PUSH EAX
// 004faf22: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 004faf27: ADD ESP,0x4
// 004faf2a: TEST EAX,EAX
// 004faf2c: JNZ 0x004faefc
//   XREF to: 004faefc (CONDITIONAL_JUMP)
// 004faf2e: PUSH 0x62fa7b
//   XREF to: 0062fa7b (DATA)
// 004faf33: JMP 0x004faee9
//   XREF to: 004faee9 (UNCONDITIONAL_JUMP)
