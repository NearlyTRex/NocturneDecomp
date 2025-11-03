// Name: core_larva.cpp_FUN_00503a20
// Address: 00503a20
// Address Range: [[00503a20, 00503bfe]]
// Convention: unknown
// Signature: undefined core_larva.cpp_FUN_00503a20()
// Globals:
//   TerminatedCString s_sml_00630fbe
//   TerminatedCString s_med_00630fc2
//   TerminatedCString s_big_00630fc6
//   double DOUBLE_00630ffb = 0.300000000000000
//   double DOUBLE_00631003 = 0.700000000000000
//   CGore* g_CGorePtr = 02d83364
//   CGore g_CGoreInstance
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_enemy.cpp_FUN_004a9f10
//   core_gore.cpp_FUN_004edbb0
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_larva.cpp_FUN_00503a20(undefined4 param_1, undefined4 param_2)
    */

void core_larva_cpp_FUN_00503a20(void)

{
  CDemonActor *pCVar1;
  CDemonActor *this_ptr;
  float fVar2;
  int iVar3;
  char *pcVar4;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  CDemonActor *pCStack_dc;
  float afStack_d8 [23];
  char acStack_7c [4];
  char acStack_78 [104];
  
  fVar2 = in_stack_00000008;
  this_ptr = in_stack_00000004;
  pCVar1 = (CDemonActor *)
           ((float)in_stack_00000004[0x1a].next_actor - *(float *)((int)in_stack_00000008 + 4));
  in_stack_00000004[0x1a].next_actor = pCVar1;
  if (0.0 < (float)pCVar1) {
    sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
    iVar3 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660();
    if (iVar3 == 0) {
      if ((float)DOUBLE_00630ffb <= *(float *)(this_ptr[0x1c].create_event + 4)) {
        if (DOUBLE_00631003 <= (double)*(float *)(this_ptr[0x1c].create_event + 4)) {
          pcVar4 = "big";
        }
        else {
          pcVar4 = "med";
        }
      }
      else {
        pcVar4 = "sml";
      }
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_7c,"l%s-shot?.wav",pcVar4);
      iVar3 = (*this_ptr->vtable->playSound)(this_ptr,acStack_78);
      this_ptr[0x8d].field26_0x148 = iVar3;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              ((CMotionController *)(this_ptr + 1));
  }
  else {
    pCVar1 = in_stack_00000004 + 1;
    in_stack_00000004[0x1a].next_actor = (CDemonActor *)0x0;
    iVar3 = core_motion_cpp_CMotionController_FUN_0052dab0((CMotionController *)pCVar1);
    if ((*(int *)(iVar3 + 0x24) != 5) && (*(int *)(iVar3 + 0x24) != 4)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00((CMotionController *)pCVar1);
    }
    sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
    sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
    if ((float)DOUBLE_00630ffb <= *(float *)(this_ptr[0x1c].create_event + 4)) {
      if (DOUBLE_00631003 <= (double)*(float *)(this_ptr[0x1c].create_event + 4)) {
        pcVar4 = "big";
      }
      else {
        pcVar4 = "med";
      }
    }
    else {
      pcVar4 = "sml";
    }
    crt_stdio_c_sprintf_FUN_005fdbd0((char *)&pCStack_dc,"l%s-die?.wav",pcVar4);
    iVar3 = (*this_ptr->vtable->playSound)(this_ptr,(char *)afStack_d8);
    this_ptr[0x8d].field26_0x148 = iVar3;
  }
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (this_ptr,(CVector3f *)&stack0x00000004,(CVector3f *)((int)fVar2 + 0x1c));
  pCStack_dc = (CDemonActor *)this_ptr[0x1c].was_created;
  core_gore_cpp_FUN_004edbb0();
  afStack_d8[0] = fVar2;
  pCStack_dc = this_ptr;
  core_enemy_cpp_FUN_004a9f10();
  return;
}


// Assembly code:
// 00503a20: PUSH EBX
//   Label: core_larva.cpp_FUN_00503a20
// 00503a21: PUSH ESI
// 00503a22: PUSH EDI
// 00503a23: PUSH EBP
// 00503a24: MOV EBP,ESP
// 00503a26: SUB ESP,0xec
// 00503a2c: AND ESP,0xfffffff8
// 00503a2f: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00503a32: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00503a35: FLD float ptr [EDI + 0x4]
// 00503a38: FSUBR float ptr [EBX + 0x243c]
// 00503a3e: FST float ptr [EBX + 0x243c]
// 00503a44: FLDZ
// 00503a46: FCOMPP
// 00503a48: FNSTSW AX
// 00503a4a: SAHF
// 00503a4b: JC 0x00503b58
//   XREF to: 00503b58 (CONDITIONAL_JUMP)
// 00503a51: LEA ESI,[EBX + 0x158]
// 00503a57: PUSH ESI
// 00503a58: MOV dword ptr [EBX + 0x243c],0x0
// 00503a62: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 00503a67: MOV EAX,dword ptr [EAX + 0x24]
// 00503a6a: ADD ESP,0x4
// 00503a6d: CMP EAX,0x5
// 00503a70: JZ 0x00503a84
//   XREF to: 00503a84 (CONDITIONAL_JUMP)
// 00503a72: CMP EAX,0x4
// 00503a75: JZ 0x00503a84
//   XREF to: 00503a84 (CONDITIONAL_JUMP)
// 00503a77: PUSH 0x1
// 00503a79: PUSH 0x4
// 00503a7b: PUSH ESI
// 00503a7c: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00503a81: ADD ESP,0xc
// 00503a84: MOV ESI,dword ptr [EBX + 0xbec0]
//   Label: LAB_00503a84
// 00503a8a: PUSH ESI
// 00503a8b: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 00503a90: ADD ESP,0x4
// 00503a93: MOV EAX,dword ptr [EBX + 0xbec4]
// 00503a99: PUSH EAX
// 00503a9a: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 00503a9f: ADD ESP,0x4
// 00503aa2: MOV EAX,dword ptr [EBX + 0x261c]
// 00503aa8: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0xec] (WRITE)
// 00503aac: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0xec] (READ)
// 00503ab0: FST double ptr [ESP]
//   XREF to: Stack[-0x100] (DATA)
// 00503ab3: FCOMP double ptr [0x00630ffb]
//   XREF to: 00630ffb (READ)
// 00503ab9: FNSTSW AX
// 00503abb: SAHF
// 00503abc: JNC 0x00503b36
//   XREF to: 00503b36 (CONDITIONAL_JUMP)
// 00503abe: MOV EAX,0x630fbe
//   XREF to: 00630fbe (DATA)
// 00503ac3: PUSH EAX
//   Label: LAB_00503ac3
//   XREF to: 00630fbe (DATA)
//   XREF to: 00630fc2 (DATA)
//   XREF to: 00630fc6 (DATA)
// 00503ac4: PUSH 0x630fdb
//   XREF to: 00630fdb (DATA)
// 00503ac9: LEA EAX,[ESP + 0x20]
//   XREF to: Stack[-0xe8] (DATA)
// 00503acd: PUSH EAX
// 00503ace: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00503ad3: ADD ESP,0xc
// 00503ad6: LEA ESI,[ESP + 0x18]
//   XREF to: Stack[-0xe8] (DATA)
// 00503ada: PUSH ESI
// 00503adb: MOV EAX,dword ptr [EBX + 0x154]
// 00503ae1: PUSH EBX
// 00503ae2: CALL dword ptr [EAX + 0x24]
// 00503ae5: ADD ESP,0x8
// 00503ae8: MOV dword ptr [EBX + 0xbec0],EAX
// 00503aee: LEA EAX,[EDI + 0x1c]
//   Label: LAB_00503aee
// 00503af1: PUSH EAX
// 00503af2: LEA EAX,[ESP + 0xe4]
// 00503af9: PUSH EAX
// 00503afa: PUSH EBX
// 00503afb: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00503b00: ADD ESP,0xc
// 00503b03: MOV EDX,dword ptr [EBX + 0x2610]
// 00503b09: PUSH EDX
// 00503b0a: PUSH 0xa
// 00503b0c: PUSH 0x0
// 00503b0e: LEA EAX,[ESP + 0xec]
// 00503b15: PUSH EAX
// 00503b16: MOV ECX,dword ptr [0x0067b9a0]
//   XREF to: 02d83364 (PARAM)
//   XREF to: 0067b9a0 (READ)
// 00503b1c: PUSH ECX
//   XREF to: 02d83364 (DATA)
// 00503b1d: CALL core_gore.cpp_FUN_004edbb0
//   XREF to: 004edbb0 (UNCONDITIONAL_CALL)
// 00503b22: ADD ESP,0x14
// 00503b25: PUSH EDI
// 00503b26: PUSH EBX
// 00503b27: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 00503b2c: ADD ESP,0x8
// 00503b2f: MOV ESP,EBP
// 00503b31: POP EBP
// 00503b32: POP EDI
// 00503b33: POP ESI
// 00503b34: POP EBX
// 00503b35: RET
// 00503b36: FLD double ptr [ESP]
//   Label: LAB_00503b36
//   XREF to: Stack[-0x100] (DATA)
// 00503b39: FCOMP double ptr [0x00631003]
//   XREF to: 00631003 (READ)
// 00503b3f: FNSTSW AX
// 00503b41: SAHF
// 00503b42: JNC 0x00503b4e
//   XREF to: 00503b4e (CONDITIONAL_JUMP)
// 00503b44: MOV EAX,0x630fc2
//   XREF to: 00630fc2 (DATA)
// 00503b49: JMP 0x00503ac3
//   XREF to: 00503ac3 (UNCONDITIONAL_JUMP)
// 00503b4e: MOV EAX,0x630fc6
//   Label: LAB_00503b4e
//   XREF to: 00630fc6 (DATA)
// 00503b53: JMP 0x00503ac3
//   XREF to: 00503ac3 (UNCONDITIONAL_JUMP)
// 00503b58: MOV EDX,dword ptr [EBX + 0xbec4]
//   Label: LAB_00503b58
// 00503b5e: PUSH EDX
// 00503b5f: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 00503b64: ADD ESP,0x4
// 00503b67: MOV ECX,dword ptr [EBX + 0xbec0]
// 00503b6d: PUSH ECX
// 00503b6e: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 00503b73: ADD ESP,0x4
// 00503b76: TEST EAX,EAX
// 00503b78: JNZ 0x00503bca
//   XREF to: 00503bca (CONDITIONAL_JUMP)
// 00503b7a: MOV EAX,dword ptr [EBX + 0x261c]
// 00503b80: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0xf0] (WRITE)
// 00503b84: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0xf0] (READ)
// 00503b88: FST double ptr [ESP + 0x8]
//   XREF to: Stack[-0xf8] (WRITE)
// 00503b8c: FCOMP double ptr [0x00630ffb]
//   XREF to: 00630ffb (READ)
// 00503b92: FNSTSW AX
// 00503b94: SAHF
// 00503b95: JNC 0x00503be2
//   XREF to: 00503be2 (CONDITIONAL_JUMP)
// 00503b97: MOV EAX,0x630fbe
//   XREF to: 00630fbe (DATA)
// 00503b9c: PUSH EAX
//   Label: LAB_00503b9c
//   XREF to: 00630fbe (DATA)
//   XREF to: 00630fc2 (DATA)
//   XREF to: 00630fc6 (DATA)
// 00503b9d: PUSH 0x630fe8
//   XREF to: 00630fe8 (DATA)
// 00503ba2: LEA EAX,[ESP + 0x84]
//   XREF to: Stack[-0x84] (DATA)
// 00503ba9: PUSH EAX
// 00503baa: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00503baf: ADD ESP,0xc
// 00503bb2: LEA ESI,[ESP + 0x7c]
//   XREF to: Stack[-0x84] (DATA)
// 00503bb6: PUSH ESI
// 00503bb7: MOV EAX,dword ptr [EBX + 0x154]
// 00503bbd: PUSH EBX
// 00503bbe: CALL dword ptr [EAX + 0x24]
// 00503bc1: ADD ESP,0x8
// 00503bc4: MOV dword ptr [EBX + 0xbec0],EAX
// 00503bca: PUSH 0x1
//   Label: LAB_00503bca
// 00503bcc: PUSH 0x3
// 00503bce: LEA EAX,[EBX + 0x158]
// 00503bd4: PUSH EAX
// 00503bd5: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00503bda: ADD ESP,0xc
// 00503bdd: JMP 0x00503aee
//   XREF to: 00503aee (UNCONDITIONAL_JUMP)
// 00503be2: FLD double ptr [ESP + 0x8]
//   Label: LAB_00503be2
//   XREF to: Stack[-0xf8] (READ)
// 00503be6: FCOMP double ptr [0x00631003]
//   XREF to: 00631003 (READ)
// 00503bec: FNSTSW AX
// 00503bee: SAHF
// 00503bef: JNC 0x00503bf8
//   XREF to: 00503bf8 (CONDITIONAL_JUMP)
// 00503bf1: MOV EAX,0x630fc2
//   XREF to: 00630fc2 (DATA)
// 00503bf6: JMP 0x00503b9c
//   XREF to: 00503b9c (UNCONDITIONAL_JUMP)
// 00503bf8: MOV EAX,0x630fc6
//   Label: LAB_00503bf8
//   XREF to: 00630fc6 (DATA)
// 00503bfd: JMP 0x00503b9c
//   XREF to: 00503b9c (UNCONDITIONAL_JUMP)
