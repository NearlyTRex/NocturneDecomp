// Name: core_hotdemon.cpp_FUN_004f7720
// Address: 004f7720
// Address Range: [[004f7720, 004f78e0]]
// Convention: unknown
// Signature: undefined core_hotdemon.cpp_FUN_004f7720()
// Globals:
//   TerminatedCString s_hotdemon_die_wav_0062f4f5
//   TerminatedCString s_hotdemon_hurt_wav_0062f506
//   double DOUBLE_0062f520 = 2
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CFireEffect g_CFireEffectInstance
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_enemy.cpp_FUN_004a9f10
//   core_fire.cpp_CFireEffect_FUN_004c79d0
//   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
//   sound_sndmain.cpp_killSfx_FUN_005a9c40

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_hotdemon.cpp_FUN_004f7720(undefined4 param_1, undefined4
   param_2) */

void core_hotdemon_cpp_FUN_004f7720(void)

{
  CDemonActor *this_ptr;
  CDemonActor *pCVar1;
  SMotion *pSVar2;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  int iVar3;
  float desired_state_index;
  
  sound_sndmain_cpp_killSfx_FUN_005a9c40(in_stack_00000004[0x8d].field25_0x144);
  if (*(int *)(in_stack_00000008 + 0x28) == 8) {
    iVar3 = 0;
    *(float *)(in_stack_00000008 + 4) = *(float *)(in_stack_00000008 + 4) * (float)DOUBLE_0062f520;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (in_stack_00000004,(CVector3f *)&stack0xffffffe0,
               (CVector3f *)(in_stack_00000008 + 0x1c));
    do {
      iVar3 = iVar3 + 1;
      core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
    } while (iVar3 < 5);
  }
  pCVar1 = (CDemonActor *)
           ((float)in_stack_00000004[0x1a].next_actor - *(float *)(in_stack_00000008 + 4));
  this_ptr = in_stack_00000004 + 1;
  in_stack_00000004[0x1a].next_actor = pCVar1;
  if ((float)pCVar1 <= 0.0) {
    in_stack_00000004[0x1a].next_actor = (CDemonActor *)0x0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       ((CMotionController *)this_ptr);
    iVar3 = pSVar2->state_index;
    if ((((iVar3 != 4) && (iVar3 != 5)) && (iVar3 != 10)) && (iVar3 != 0xb)) {
      if (iVar3 < 6) {
        desired_state_index = 5.60519e-45;
      }
      else {
        desired_state_index = 1.4013e-44;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                ((CMotionController *)this_ptr,(int)desired_state_index,1);
      sound_sndmain_cpp_killSfx_FUN_005a9c40(in_stack_00000004[0x8d].field26_0x148);
      iVar3 = (*in_stack_00000004->vtable->playSound)(in_stack_00000004,"hotdemon-die.wav")
      ;
      in_stack_00000004[0x8d].field26_0x148 = iVar3;
      core_enemy_cpp_FUN_004a9f10();
      return;
    }
  }
  else {
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       ((CMotionController *)this_ptr);
    if ((pSVar2->state_index < 6) || (pSVar2->state_index == 0xf)) {
      iVar3 = 3;
    }
    else {
      iVar3 = 9;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              ((CMotionController *)(in_stack_00000004 + 1),iVar3,1);
    iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(in_stack_00000004[0x8d].field26_0x148);
    if (iVar3 == 0) {
      iVar3 = (*in_stack_00000004->vtable->playSound)
                        (in_stack_00000004,"hotdemon-hurt?.wav");
      in_stack_00000004[0x8d].field26_0x148 = iVar3;
      core_enemy_cpp_FUN_004a9f10();
      return;
    }
  }
  core_enemy_cpp_FUN_004a9f10();
  return;
}


// Assembly code:
// 004f7720: PUSH EBX
//   Label: core_hotdemon.cpp_FUN_004f7720
// 004f7721: PUSH ESI
// 004f7722: PUSH EDI
// 004f7723: PUSH EBP
// 004f7724: SUB ESP,0x14
// 004f7727: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 004f772b: MOV EDI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 004f772f: MOV EDX,dword ptr [ESI + 0xbebc]
// 004f7735: PUSH EDX
// 004f7736: CALL sound_sndmain.cpp_killSfx_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 004f773b: MOV ECX,dword ptr [EDI + 0x28]
// 004f773e: ADD ESP,0x4
// 004f7741: CMP ECX,0x8
// 004f7744: JZ 0x004f77c3
//   XREF to: 004f77c3 (CONDITIONAL_JUMP)
// 004f774a: LEA EAX,[EAX]
// 004f7750: FLD float ptr [EDI + 0x4]
//   Label: LAB_004f7750
// 004f7753: FSUBR float ptr [ESI + 0x243c]
// 004f7759: LEA EBX,[ESI + 0x158]
// 004f775f: FST float ptr [ESI + 0x243c]
// 004f7765: FLDZ
// 004f7767: FCOMPP
// 004f7769: FNSTSW AX
// 004f776b: SAHF
// 004f776c: JNC 0x004f7819
//   XREF to: 004f7819 (CONDITIONAL_JUMP)
// 004f7772: PUSH EBX
// 004f7773: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004f7778: MOV EAX,dword ptr [EAX + 0x24]
// 004f777b: ADD ESP,0x4
// 004f777e: CMP EAX,0x6
// 004f7781: JGE 0x004f78a4
//   XREF to: 004f78a4 (CONDITIONAL_JUMP)
// 004f7787: PUSH 0x1
//   Label: LAB_004f7787
// 004f7789: PUSH 0x3
// 004f778b: LEA EAX,[ESI + 0x158]
// 004f7791: PUSH EAX
// 004f7792: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   Label: LAB_004f7792
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f7797: ADD ESP,0xc
// 004f779a: MOV EAX,dword ptr [ESI + 0xbec0]
// 004f77a0: PUSH EAX
// 004f77a1: CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 004f77a6: ADD ESP,0x4
// 004f77a9: TEST EAX,EAX
// 004f77ab: JZ 0x004f78b7
//   XREF to: 004f78b7 (CONDITIONAL_JUMP)
// 004f77b1: PUSH EDI
//   Label: LAB_004f77b1
// 004f77b2: PUSH ESI
// 004f77b3: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 004f77b8: ADD ESP,0x8
// 004f77bb: ADD ESP,0x14
// 004f77be: POP EBP
// 004f77bf: POP EDI
// 004f77c0: POP ESI
// 004f77c1: POP EBX
// 004f77c2: RET
// 004f77c3: FLD float ptr [EDI + 0x4]
//   Label: LAB_004f77c3
// 004f77c6: LEA EAX,[EDI + 0x1c]
// 004f77c9: FLD ST0
// 004f77cb: FMUL double ptr [0x0062f520]
//   XREF to: 0062f520 (READ)
// 004f77d1: PUSH EAX
// 004f77d2: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x24] (DATA)
// 004f77d6: XOR EBX,EBX
// 004f77d8: PUSH EAX
// 004f77d9: FSTP ST1
// 004f77db: PUSH ESI
// 004f77dc: FSTP float ptr [EDI + 0x4]
// 004f77df: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004f77e4: ADD ESP,0xc
// 004f77e7: PUSH 0xffff
//   Label: LAB_004f77e7
// 004f77ec: PUSH 0x0
// 004f77ee: PUSH 0x4000
// 004f77f3: PUSH 0x4000
// 004f77f8: PUSH 0x0
// 004f77fa: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x24] (DATA)
// 004f77fe: PUSH EAX
// 004f77ff: MOV EBP,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
// 004f7805: PUSH EBP
//   XREF to: 02d12db0 (DATA)
// 004f7806: INC EBX
// 004f7807: CALL core_fire.cpp_CFireEffect_FUN_004c79d0
//   XREF to: 004c79d0 (UNCONDITIONAL_CALL)
// 004f780c: ADD ESP,0x1c
// 004f780f: CMP EBX,0x5
// 004f7812: JL 0x004f77e7
//   XREF to: 004f77e7 (CONDITIONAL_JUMP)
// 004f7814: JMP 0x004f7750
//   XREF to: 004f7750 (UNCONDITIONAL_JUMP)
// 004f7819: PUSH EBX
//   Label: LAB_004f7819
// 004f781a: MOV dword ptr [ESI + 0x243c],0x0
// 004f7824: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004f7829: MOV EAX,dword ptr [EAX + 0x24]
// 004f782c: ADD ESP,0x4
// 004f782f: CMP EAX,0x4
// 004f7832: JZ 0x004f77b1
//   XREF to: 004f77b1 (CONDITIONAL_JUMP)
// 004f7838: CMP EAX,0x5
// 004f783b: JZ 0x004f77b1
//   XREF to: 004f77b1 (CONDITIONAL_JUMP)
// 004f7841: CMP EAX,0xa
// 004f7844: JZ 0x004f77b1
//   XREF to: 004f77b1 (CONDITIONAL_JUMP)
// 004f784a: CMP EAX,0xb
// 004f784d: JZ 0x004f77b1
//   XREF to: 004f77b1 (CONDITIONAL_JUMP)
// 004f7853: CMP EAX,0x6
// 004f7856: JL 0x004f789e
//   XREF to: 004f789e (CONDITIONAL_JUMP)
// 004f7858: PUSH 0x1
// 004f785a: PUSH 0xa
// 004f785c: PUSH EBX
//   Label: LAB_004f785c
// 004f785d: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f7862: ADD ESP,0xc
// 004f7865: MOV EDX,dword ptr [ESI + 0xbec0]
// 004f786b: PUSH EDX
// 004f786c: CALL sound_sndmain.cpp_killSfx_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 004f7871: ADD ESP,0x4
// 004f7874: PUSH 0x62f4f5
//   XREF to: 0062f4f5 (DATA)
// 004f7879: MOV EAX,dword ptr [ESI + 0x154]
// 004f787f: PUSH ESI
// 004f7880: CALL dword ptr [EAX + 0x24]
// 004f7883: ADD ESP,0x8
// 004f7886: MOV dword ptr [ESI + 0xbec0],EAX
// 004f788c: PUSH EDI
// 004f788d: PUSH ESI
// 004f788e: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 004f7893: ADD ESP,0x8
// 004f7896: ADD ESP,0x14
// 004f7899: POP EBP
// 004f789a: POP EDI
// 004f789b: POP ESI
// 004f789c: POP EBX
// 004f789d: RET
// 004f789e: PUSH 0x1
//   Label: LAB_004f789e
// 004f78a0: PUSH 0x4
// 004f78a2: JMP 0x004f785c
//   XREF to: 004f785c (UNCONDITIONAL_JUMP)
// 004f78a4: CMP EAX,0xf
//   Label: LAB_004f78a4
// 004f78a7: JZ 0x004f7787
//   XREF to: 004f7787 (CONDITIONAL_JUMP)
// 004f78ad: PUSH 0x1
// 004f78af: PUSH 0x9
// 004f78b1: PUSH EBX
// 004f78b2: JMP 0x004f7792
//   XREF to: 004f7792 (UNCONDITIONAL_JUMP)
// 004f78b7: PUSH 0x62f506
//   Label: LAB_004f78b7
//   XREF to: 0062f506 (DATA)
// 004f78bc: MOV EAX,dword ptr [ESI + 0x154]
// 004f78c2: PUSH ESI
// 004f78c3: CALL dword ptr [EAX + 0x24]
// 004f78c6: ADD ESP,0x8
// 004f78c9: MOV dword ptr [ESI + 0xbec0],EAX
// 004f78cf: PUSH EDI
// 004f78d0: PUSH ESI
// 004f78d1: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 004f78d6: ADD ESP,0x8
// 004f78d9: ADD ESP,0x14
// 004f78dc: POP EBP
// 004f78dd: POP EDI
// 004f78de: POP ESI
// 004f78df: POP EBX
// 004f78e0: RET
