// Name: core_werewolf.cpp_FUN_005f1ac0
// Address: 005f1ac0
// Address Range: [[005f1ac0, 005f1da4]]
// Convention: unknown
// Signature: undefined core_werewolf.cpp_FUN_005f1ac0()
// Globals:
//   TerminatedCString s_werewolf_die_wav_00657e2f
//   TerminatedCString s_werewolf_hurt_wav_00657e41
//   undefined4 DAT_00657e54
//   undefined4 DAT_00657e5c
//   undefined4 DAT_00657e64
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CFireEffect g_CFireEffectInstance
//   CDemonSet g_CDemonSetInstance
//   undefined4 DAT_0326f0c0
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_getRandomInt_FUN_0040cc70
//   core_enemy.cpp_FUN_004a9f10
//   core_fire.cpp_CFireEffect_FUN_004c79d0
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_werewolf.cpp_FUN_005f11e0
//   sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_werewolf.cpp_FUN_005f1ac0(undefined4 param_1, undefined4
   param_2) */

void core_werewolf_cpp_FUN_005f1ac0(void)

{
  CDemonActor *this_ptr;
  float fVar1;
  CDemonActor *pCVar2;
  int iVar3;
  undefined4 uVar4;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  
  sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
  if (*(int *)(in_stack_00000008 + 0x30) == 0x6c) {
    core_werewolf_cpp_FUN_005f11e0();
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              ((CMotionController *)(in_stack_00000004 + 1),0x16,1);
    core_enemy_cpp_FUN_004a9f10();
    return;
  }
  if (*(int *)(in_stack_00000008 + 0x28) == 3) {
    iVar3 = 0;
    *(float *)(in_stack_00000008 + 4) = *(float *)(in_stack_00000008 + 4) * (float)_DAT_00657e54;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (in_stack_00000004,(CVector3f *)&stack0xffffffdc,
               (CVector3f *)(in_stack_00000008 + 0x1c));
    do {
      iVar3 = iVar3 + 1;
      core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
    } while (iVar3 < 5);
  }
  pCVar2 = (CDemonActor *)
           ((float)in_stack_00000004[0x1a].next_actor - *(float *)(in_stack_00000008 + 4));
  this_ptr = in_stack_00000004 + 1;
  in_stack_00000004[0x1a].next_actor = pCVar2;
  if ((float)pCVar2 <= 0.0) {
    in_stack_00000004[0x1a].next_actor = (CDemonActor *)0x0;
    iVar3 = core_motion_cpp_CMotionController_FUN_0052dab0((CMotionController *)this_ptr);
    if ((*(int *)(iVar3 + 0x24) != 0xd) && (*(int *)(iVar3 + 0x24) != 0xc)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                ((CMotionController *)this_ptr,0xc,1);
      if ((in_stack_00000004[0x8d].field25_0x144 == 0) &&
         (g_CDemonSetPtr->last_switch_area_invalid != 0)) {
        fVar1 = (in_stack_00000004->location).position.x;
        if (fVar1 <= (float)_DAT_00657e5c) {
          if ((double)fVar1 < _DAT_00657e64) {
            (in_stack_00000004->orient).bank = 1.5707964;
          }
        }
        else {
          (in_stack_00000004->orient).bank = -1.5707964;
        }
      }
      sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
      uVar4 = (*in_stack_00000004->vtable->playSound)(in_stack_00000004,"werewolf-die?.wav")
      ;
      *(undefined4 *)(in_stack_00000004[0x8e].actor_name + 0x10) = uVar4;
      (*in_stack_00000004->vtable->spawnFlies)(in_stack_00000004,0x32,25.0);
    }
    goto LAB_005f1bc9;
  }
  if (in_stack_00000004[0x8d].field25_0x144 != 2) {
    iVar3 = core_motion_cpp_CMotionController_FUN_0052dab0((CMotionController *)this_ptr);
    iVar3 = *(int *)(iVar3 + 0x24);
    if ((iVar3 == 0xe) || (iVar3 == 0xf)) {
      iVar3 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
      if (iVar3 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  ((CMotionController *)(in_stack_00000004 + 1),9,1);
      }
      if (iVar3 == 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  ((CMotionController *)(in_stack_00000004 + 1),10,1);
      }
      if (iVar3 == 2) {
        iVar3 = 0xb;
LAB_005f1cdd:
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  ((CMotionController *)(in_stack_00000004 + 1),iVar3,1);
      }
    }
    else if ((((iVar3 == 0) || (iVar3 == 1)) || (iVar3 == 2)) ||
            (((iVar3 == 0x13 || (iVar3 == 3)) || (iVar3 == 4)))) {
      iVar3 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
      if (iVar3 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  ((CMotionController *)(in_stack_00000004 + 1),0x10,1);
      }
      if (iVar3 == 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  ((CMotionController *)(in_stack_00000004 + 1),0x11,1);
      }
      if (iVar3 == 2) {
        iVar3 = 0x12;
        goto LAB_005f1cdd;
      }
    }
  }
  iVar3 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660();
  if (iVar3 == 0) {
    uVar4 = (*in_stack_00000004->vtable->playSound)(in_stack_00000004,"werewolf-hurt?.wav");
    *(undefined4 *)(in_stack_00000004[0x8e].actor_name + 0x10) = uVar4;
    core_enemy_cpp_FUN_004a9f10();
    return;
  }
LAB_005f1bc9:
  core_enemy_cpp_FUN_004a9f10();
  return;
}


// Assembly code:
// 005f1ac0: PUSH EBX
//   Label: core_werewolf.cpp_FUN_005f1ac0
// 005f1ac1: PUSH ESI
// 005f1ac2: PUSH EDI
// 005f1ac3: PUSH EBP
// 005f1ac4: MOV EBP,ESP
// 005f1ac6: SUB ESP,0x1c
// 005f1ac9: AND ESP,0xfffffff8
// 005f1acc: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005f1acf: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005f1ad2: MOV EDX,dword ptr [ESI + 0xbed8]
// 005f1ad8: PUSH EDX
// 005f1ad9: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 005f1ade: MOV ECX,dword ptr [EDI + 0x30]
// 005f1ae1: ADD ESP,0x4
// 005f1ae4: CMP ECX,0x6c
// 005f1ae7: JZ 0x005f1bda
//   XREF to: 005f1bda (CONDITIONAL_JUMP)
// 005f1aed: CMP dword ptr [EDI + 0x28],0x3
// 005f1af1: JZ 0x005f1c07
//   XREF to: 005f1c07 (CONDITIONAL_JUMP)
// 005f1af7: LEA EAX,[EAX]
// 005f1afd: LEA EDX,[EDX]
// 005f1b00: FLD float ptr [EDI + 0x4]
//   Label: LAB_005f1b00
// 005f1b03: FSUBR float ptr [ESI + 0x243c]
// 005f1b09: LEA EBX,[ESI + 0x158]
// 005f1b0f: FST float ptr [ESI + 0x243c]
// 005f1b15: FLDZ
// 005f1b17: FCOMPP
// 005f1b19: FNSTSW AX
// 005f1b1b: SAHF
// 005f1b1c: JC 0x005f1c7a
//   XREF to: 005f1c7a (CONDITIONAL_JUMP)
// 005f1b22: PUSH EBX
// 005f1b23: MOV dword ptr [ESI + 0x243c],0x0
// 005f1b2d: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005f1b32: MOV EAX,dword ptr [EAX + 0x24]
// 005f1b35: ADD ESP,0x4
// 005f1b38: CMP EAX,0xd
// 005f1b3b: JZ 0x005f1bc9
//   XREF to: 005f1bc9 (CONDITIONAL_JUMP)
// 005f1b41: CMP EAX,0xc
// 005f1b44: JZ 0x005f1bc9
//   XREF to: 005f1bc9 (CONDITIONAL_JUMP)
// 005f1b4a: PUSH 0x1
// 005f1b4c: PUSH 0xc
// 005f1b4e: PUSH EBX
// 005f1b4f: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005f1b54: MOV EBX,dword ptr [ESI + 0xbebc]
// 005f1b5a: ADD ESP,0xc
// 005f1b5d: TEST EBX,EBX
// 005f1b5f: JNZ 0x005f1b8b
//   XREF to: 005f1b8b (CONDITIONAL_JUMP)
// 005f1b61: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005f1b66: CMP dword ptr [EAX + 0x15ae48],0x0
//   XREF to: 0326f0c0 (READ)
// 005f1b6d: JZ 0x005f1b8b
//   XREF to: 005f1b8b (CONDITIONAL_JUMP)
// 005f1b6f: FLD float ptr [ESI + 0x20]
// 005f1b72: FST double ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 005f1b75: FCOMP double ptr [0x00657e5c]
//   XREF to: 00657e5c (READ)
// 005f1b7b: FNSTSW AX
// 005f1b7d: SAHF
// 005f1b7e: JBE 0x005f1c5c
//   XREF to: 005f1c5c (CONDITIONAL_JUMP)
// 005f1b84: MOV dword ptr [ESI + 0x34],0xbfc90fdb
// 005f1b8b: MOV ECX,dword ptr [ESI + 0xbee0]
//   Label: LAB_005f1b8b
// 005f1b91: PUSH ECX
// 005f1b92: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 005f1b97: ADD ESP,0x4
// 005f1b9a: PUSH 0x657e2f
//   XREF to: 00657e2f (DATA)
// 005f1b9f: MOV EAX,dword ptr [ESI + 0x154]
// 005f1ba5: PUSH ESI
// 005f1ba6: CALL dword ptr [EAX + 0x24]
// 005f1ba9: ADD ESP,0x8
// 005f1bac: PUSH 0x41c80000
// 005f1bb1: MOV dword ptr [ESI + 0xbee0],EAX
// 005f1bb7: PUSH 0x32
// 005f1bb9: MOV EAX,dword ptr [ESI + 0x154]
// 005f1bbf: PUSH ESI
// 005f1bc0: CALL dword ptr [EAX + 0xa0]
// 005f1bc6: ADD ESP,0xc
// 005f1bc9: PUSH EDI
//   Label: LAB_005f1bc9
// 005f1bca: PUSH ESI
// 005f1bcb: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 005f1bd0: ADD ESP,0x8
// 005f1bd3: MOV ESP,EBP
// 005f1bd5: POP EBP
// 005f1bd6: POP EDI
// 005f1bd7: POP ESI
// 005f1bd8: POP EBX
// 005f1bd9: RET
// 005f1bda: PUSH ESI
//   Label: LAB_005f1bda
// 005f1bdb: CALL core_werewolf.cpp_FUN_005f11e0
//   XREF to: 005f11e0 (UNCONDITIONAL_CALL)
// 005f1be0: ADD ESP,0x4
// 005f1be3: PUSH 0x1
// 005f1be5: PUSH 0x16
// 005f1be7: LEA EAX,[ESI + 0x158]
// 005f1bed: PUSH EAX
// 005f1bee: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005f1bf3: ADD ESP,0xc
// 005f1bf6: PUSH EDI
// 005f1bf7: PUSH ESI
// 005f1bf8: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 005f1bfd: ADD ESP,0x8
// 005f1c00: MOV ESP,EBP
// 005f1c02: POP EBP
// 005f1c03: POP EDI
// 005f1c04: POP ESI
// 005f1c05: POP EBX
// 005f1c06: RET
// 005f1c07: FLD float ptr [EDI + 0x4]
//   Label: LAB_005f1c07
// 005f1c0a: LEA EAX,[EDI + 0x1c]
// 005f1c0d: FLD ST0
// 005f1c0f: FMUL double ptr [0x00657e54]
//   XREF to: 00657e54 (READ)
// 005f1c15: PUSH EAX
// 005f1c16: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x28] (DATA)
// 005f1c1a: XOR EBX,EBX
// 005f1c1c: PUSH EAX
// 005f1c1d: FSTP ST1
// 005f1c1f: PUSH ESI
// 005f1c20: FSTP float ptr [EDI + 0x4]
// 005f1c23: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005f1c28: ADD ESP,0xc
// 005f1c2b: PUSH 0xffff
//   Label: LAB_005f1c2b
// 005f1c30: PUSH 0x0
// 005f1c32: PUSH 0x4000
// 005f1c37: PUSH 0x4000
// 005f1c3c: PUSH 0x0
// 005f1c3e: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x28] (DATA)
// 005f1c42: PUSH EAX
// 005f1c43: MOV EAX,[0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 005f1c48: PUSH EAX
//   XREF to: 02d12db0 (DATA)
// 005f1c49: INC EBX
// 005f1c4a: CALL core_fire.cpp_CFireEffect_FUN_004c79d0
//   XREF to: 004c79d0 (UNCONDITIONAL_CALL)
// 005f1c4f: ADD ESP,0x1c
// 005f1c52: CMP EBX,0x5
// 005f1c55: JL 0x005f1c2b
//   XREF to: 005f1c2b (CONDITIONAL_JUMP)
// 005f1c57: JMP 0x005f1b00
//   XREF to: 005f1b00 (UNCONDITIONAL_JUMP)
// 005f1c5c: FLD double ptr [ESP]
//   Label: LAB_005f1c5c
//   XREF to: Stack[-0x30] (DATA)
// 005f1c5f: FCOMP double ptr [0x00657e64]
//   XREF to: 00657e64 (READ)
// 005f1c65: FNSTSW AX
// 005f1c67: SAHF
// 005f1c68: JNC 0x005f1b8b
//   XREF to: 005f1b8b (CONDITIONAL_JUMP)
// 005f1c6e: MOV dword ptr [ESI + 0x34],0x3fc90fdb
// 005f1c75: JMP 0x005f1b8b
//   XREF to: 005f1b8b (UNCONDITIONAL_JUMP)
// 005f1c7a: CMP dword ptr [ESI + 0xbebc],0x2
//   Label: LAB_005f1c7a
// 005f1c81: JZ 0x005f1cec
//   XREF to: 005f1cec (CONDITIONAL_JUMP)
// 005f1c83: PUSH EBX
// 005f1c84: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005f1c89: MOV EAX,dword ptr [EAX + 0x24]
// 005f1c8c: ADD ESP,0x4
// 005f1c8f: CMP EAX,0xe
// 005f1c92: JNZ 0x005f1d2c
//   XREF to: 005f1d2c (CONDITIONAL_JUMP)
// 005f1c98: PUSH 0x2
//   Label: LAB_005f1c98
// 005f1c9a: PUSH 0x0
// 005f1c9c: CALL core_actor.cpp_getRandomInt_FUN_0040cc70
//   XREF to: 0040cc70 (UNCONDITIONAL_CALL)
// 005f1ca1: ADD ESP,0x8
// 005f1ca4: MOV EBX,EAX
// 005f1ca6: TEST EAX,EAX
// 005f1ca8: JNZ 0x005f1cbd
//   XREF to: 005f1cbd (CONDITIONAL_JUMP)
// 005f1caa: PUSH 0x1
// 005f1cac: PUSH 0x9
// 005f1cae: LEA EAX,[ESI + 0x158]
// 005f1cb4: PUSH EAX
// 005f1cb5: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005f1cba: ADD ESP,0xc
// 005f1cbd: CMP EBX,0x1
//   Label: LAB_005f1cbd
// 005f1cc0: JNZ 0x005f1cd4
//   XREF to: 005f1cd4 (CONDITIONAL_JUMP)
// 005f1cc2: PUSH EBX
// 005f1cc3: PUSH 0xa
// 005f1cc5: LEA EAX,[ESI + 0x158]
// 005f1ccb: PUSH EAX
// 005f1ccc: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005f1cd1: ADD ESP,0xc
// 005f1cd4: CMP EBX,0x2
//   Label: LAB_005f1cd4
// 005f1cd7: JNZ 0x005f1cec
//   XREF to: 005f1cec (CONDITIONAL_JUMP)
// 005f1cd9: PUSH 0x1
// 005f1cdb: PUSH 0xb
// 005f1cdd: LEA EAX,[ESI + 0x158]
//   Label: LAB_005f1cdd
// 005f1ce3: PUSH EAX
// 005f1ce4: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005f1ce9: ADD ESP,0xc
// 005f1cec: MOV ECX,dword ptr [ESI + 0xbee0]
//   Label: LAB_005f1cec
// 005f1cf2: PUSH ECX
// 005f1cf3: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 005f1cf8: ADD ESP,0x4
// 005f1cfb: TEST EAX,EAX
// 005f1cfd: JNZ 0x005f1bc9
//   XREF to: 005f1bc9 (CONDITIONAL_JUMP)
// 005f1d03: PUSH 0x657e41
//   XREF to: 00657e41 (DATA)
// 005f1d08: MOV EAX,dword ptr [ESI + 0x154]
// 005f1d0e: PUSH ESI
// 005f1d0f: CALL dword ptr [EAX + 0x24]
// 005f1d12: ADD ESP,0x8
// 005f1d15: MOV dword ptr [ESI + 0xbee0],EAX
// 005f1d1b: PUSH EDI
// 005f1d1c: PUSH ESI
// 005f1d1d: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 005f1d22: ADD ESP,0x8
// 005f1d25: MOV ESP,EBP
// 005f1d27: POP EBP
// 005f1d28: POP EDI
// 005f1d29: POP ESI
// 005f1d2a: POP EBX
// 005f1d2b: RET
// 005f1d2c: CMP EAX,0xf
//   Label: LAB_005f1d2c
// 005f1d2f: JZ 0x005f1c98
//   XREF to: 005f1c98 (CONDITIONAL_JUMP)
// 005f1d35: TEST EAX,EAX
// 005f1d37: JNZ 0x005f1d87
//   XREF to: 005f1d87 (CONDITIONAL_JUMP)
// 005f1d39: PUSH 0x2
//   Label: LAB_005f1d39
// 005f1d3b: PUSH 0x0
// 005f1d3d: CALL core_actor.cpp_getRandomInt_FUN_0040cc70
//   XREF to: 0040cc70 (UNCONDITIONAL_CALL)
// 005f1d42: ADD ESP,0x8
// 005f1d45: MOV EBX,EAX
// 005f1d47: TEST EAX,EAX
// 005f1d49: JNZ 0x005f1d5e
//   XREF to: 005f1d5e (CONDITIONAL_JUMP)
// 005f1d4b: PUSH 0x1
// 005f1d4d: PUSH 0x10
// 005f1d4f: LEA EAX,[ESI + 0x158]
// 005f1d55: PUSH EAX
// 005f1d56: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005f1d5b: ADD ESP,0xc
// 005f1d5e: CMP EBX,0x1
//   Label: LAB_005f1d5e
// 005f1d61: JNZ 0x005f1d75
//   XREF to: 005f1d75 (CONDITIONAL_JUMP)
// 005f1d63: PUSH EBX
// 005f1d64: PUSH 0x11
// 005f1d66: LEA EAX,[ESI + 0x158]
// 005f1d6c: PUSH EAX
// 005f1d6d: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005f1d72: ADD ESP,0xc
// 005f1d75: CMP EBX,0x2
//   Label: LAB_005f1d75
// 005f1d78: JNZ 0x005f1cec
//   XREF to: 005f1cec (CONDITIONAL_JUMP)
// 005f1d7e: PUSH 0x1
// 005f1d80: PUSH 0x12
// 005f1d82: JMP 0x005f1cdd
//   XREF to: 005f1cdd (UNCONDITIONAL_JUMP)
// 005f1d87: CMP EAX,0x1
//   Label: LAB_005f1d87
// 005f1d8a: JZ 0x005f1d39
//   XREF to: 005f1d39 (CONDITIONAL_JUMP)
// 005f1d8c: CMP EAX,0x2
// 005f1d8f: JZ 0x005f1d39
//   XREF to: 005f1d39 (CONDITIONAL_JUMP)
// 005f1d91: CMP EAX,0x13
// 005f1d94: JZ 0x005f1d39
//   XREF to: 005f1d39 (CONDITIONAL_JUMP)
// 005f1d96: CMP EAX,0x3
// 005f1d99: JZ 0x005f1d39
//   XREF to: 005f1d39 (CONDITIONAL_JUMP)
// 005f1d9b: CMP EAX,0x4
// 005f1d9e: JZ 0x005f1d39
//   XREF to: 005f1d39 (CONDITIONAL_JUMP)
// 005f1da0: JMP 0x005f1cec
//   XREF to: 005f1cec (UNCONDITIONAL_JUMP)
