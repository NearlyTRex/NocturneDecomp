// Name: core_mobster.cpp_FUN_00527740
// Address: 00527740
// Address Range: [[00527740, 005278c5]]
// Convention: unknown
// Signature: undefined core_mobster.cpp_FUN_00527740()
// Globals:
//   TerminatedCString s_mobster_die_wav_006399d6
//   TerminatedCString s_mobster_hit_wav_006399e8
//   undefined4 g_CTommyGunClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_randomChance_FUN_0040cd10
//   core_enemy.cpp_FUN_004a9f10
//   core_mobster.cpp_FUN_00527380
//   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   sound_sndmain.cpp_FUN_005a9660
//   sound_sndmain.cpp_FUN_005a9c40

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_mobster.cpp_FUN_00527740(undefined4 param_1, undefined4
   param_2) */

void core_mobster_cpp_FUN_00527740(void)

{
  CMotionController *this_ptr;
  float fVar1;
  CDemonActor *pCVar2;
  int iVar3;
  SMotion *pSVar4;
  undefined4 uVar5;
  int in_stack_00000004;
  int in_stack_00000008;
  
  sound_sndmain_cpp_FUN_005a9c40();
  sound_sndmain_cpp_FUN_005a9c40();
  core_mobster_cpp_FUN_00527380();
  if ((*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbf64) * 4) == 0) &&
     (*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbf6c) * 4) == 0)) {
    *(undefined4 *)(in_stack_00000008 + 4) = 0x461c3f9a;
  }
  fVar1 = *(float *)(in_stack_00000004 + 0x243c) - *(float *)(in_stack_00000008 + 4);
  this_ptr = (CMotionController *)(in_stack_00000004 + 0x158);
  *(float *)(in_stack_00000004 + 0x243c) = fVar1;
  if (fVar1 <= 0.0) {
    *(undefined4 *)(in_stack_00000004 + 0x243c) = 0;
    pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(this_ptr);
    if ((pSVar4->state_index != 5) && (pSVar4->state_index != 4)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(this_ptr,4,1);
      (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x13c))();
      if (*(int *)(in_stack_00000004 + 0xbf58) == 0) {
        sound_sndmain_cpp_FUN_005a9c40();
        uVar5 = (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
        *(undefined4 *)(in_stack_00000004 + 0xbf58) = 1;
        *(undefined4 *)(in_stack_00000004 + 0xbf50) = uVar5;
        core_enemy_cpp_FUN_004a9f10();
        return;
      }
    }
    goto LAB_00527805;
  }
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (*(CDemonActor **)(in_stack_00000008 + 0x34),g_CTommyGunClassInfo.name_hash);
  if (pCVar2 == (CDemonActor *)0x0) {
LAB_005277e1:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(this_ptr,3,1);
  }
  else {
    iVar3 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
    if (iVar3 != 0) goto LAB_005277e1;
  }
  iVar3 = sound_sndmain_cpp_FUN_005a9660();
  if (iVar3 == 0) {
    uVar5 = (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
    *(undefined4 *)(in_stack_00000004 + 0xbf50) = uVar5;
    core_enemy_cpp_FUN_004a9f10();
    return;
  }
LAB_00527805:
  core_enemy_cpp_FUN_004a9f10();
  return;
}


// Assembly code:
// 00527740: PUSH EBX
//   Label: core_mobster.cpp_FUN_00527740
// 00527741: PUSH ESI
// 00527742: PUSH EDI
// 00527743: PUSH EBP
// 00527744: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00527748: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0052774c: MOV EDX,dword ptr [EBX + 0xbf5c]
// 00527752: PUSH EDX
// 00527753: CALL sound_sndmain.cpp_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 00527758: ADD ESP,0x4
// 0052775b: MOV ECX,dword ptr [EBX + 0xbf54]
// 00527761: PUSH ECX
// 00527762: CALL sound_sndmain.cpp_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 00527767: ADD ESP,0x4
// 0052776a: PUSH EDI
// 0052776b: PUSH EBX
// 0052776c: CALL core_mobster.cpp_FUN_00527380
//   XREF to: 00527380 (UNCONDITIONAL_CALL)
// 00527771: MOV EAX,dword ptr [EBX + 0xbf64]
// 00527777: MOV ESI,dword ptr [EBX + EAX*0x4 + 0x2298]
// 0052777e: ADD ESP,0x8
// 00527781: TEST ESI,ESI
// 00527783: JNZ 0x0052779c
//   XREF to: 0052779c (CONDITIONAL_JUMP)
// 00527785: MOV EAX,dword ptr [EBX + 0xbf6c]
// 0052778b: CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0
// 00527793: JNZ 0x0052779c
//   XREF to: 0052779c (CONDITIONAL_JUMP)
// 00527795: MOV dword ptr [EDI + 0x4],0x461c3f9a
// 0052779c: FLD float ptr [EDI + 0x4]
//   Label: LAB_0052779c
// 0052779f: FSUBR float ptr [EBX + 0x243c]
// 005277a5: LEA ESI,[EBX + 0x158]
// 005277ab: FST float ptr [EBX + 0x243c]
// 005277b1: FLDZ
// 005277b3: FCOMPP
// 005277b5: FNSTSW AX
// 005277b7: SAHF
// 005277b8: JNC 0x00527814
//   XREF to: 00527814 (CONDITIONAL_JUMP)
// 005277ba: MOV EAX,[0x03f873dc]
//   XREF to: 03f873dc (READ)
// 005277bf: PUSH EAX
// 005277c0: MOV EDX,dword ptr [EDI + 0x34]
// 005277c3: PUSH EDX
// 005277c4: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005277c9: ADD ESP,0x8
// 005277cc: TEST EAX,EAX
// 005277ce: JZ 0x005277e1
//   XREF to: 005277e1 (CONDITIONAL_JUMP)
// 005277d0: PUSH 0x3f000000
// 005277d5: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 005277da: ADD ESP,0x4
// 005277dd: TEST EAX,EAX
// 005277df: JZ 0x005277ee
//   XREF to: 005277ee (CONDITIONAL_JUMP)
// 005277e1: PUSH 0x1
//   Label: LAB_005277e1
// 005277e3: PUSH 0x3
// 005277e5: PUSH ESI
// 005277e6: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005277eb: ADD ESP,0xc
// 005277ee: MOV ECX,dword ptr [EBX + 0xbf50]
//   Label: LAB_005277ee
// 005277f4: PUSH ECX
// 005277f5: CALL sound_sndmain.cpp_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 005277fa: ADD ESP,0x4
// 005277fd: TEST EAX,EAX
// 005277ff: JZ 0x0052789f
//   XREF to: 0052789f (CONDITIONAL_JUMP)
// 00527805: PUSH EDI
//   Label: LAB_00527805
// 00527806: PUSH EBX
// 00527807: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 0052780c: ADD ESP,0x8
// 0052780f: POP EBP
// 00527810: POP EDI
// 00527811: POP ESI
// 00527812: POP EBX
// 00527813: RET
// 00527814: PUSH ESI
//   Label: LAB_00527814
// 00527815: MOV dword ptr [EBX + 0x243c],0x0
// 0052781f: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 00527824: MOV EAX,dword ptr [EAX + 0x24]
// 00527827: ADD ESP,0x4
// 0052782a: CMP EAX,0x5
// 0052782d: JZ 0x00527805
//   XREF to: 00527805 (CONDITIONAL_JUMP)
// 0052782f: CMP EAX,0x4
// 00527832: JZ 0x00527805
//   XREF to: 00527805 (CONDITIONAL_JUMP)
// 00527834: PUSH 0x1
// 00527836: PUSH 0x4
// 00527838: PUSH ESI
// 00527839: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0052783e: ADD ESP,0xc
// 00527841: PUSH 0x0
// 00527843: PUSH 0x1
// 00527845: MOV EAX,dword ptr [EBX + 0x154]
// 0052784b: PUSH EBX
// 0052784c: CALL dword ptr [EAX + 0x13c]
// 00527852: MOV ESI,dword ptr [EBX + 0xbf58]
// 00527858: ADD ESP,0xc
// 0052785b: TEST ESI,ESI
// 0052785d: JNZ 0x00527805
//   XREF to: 00527805 (CONDITIONAL_JUMP)
// 0052785f: MOV EBP,dword ptr [EBX + 0xbf50]
// 00527865: PUSH EBP
// 00527866: CALL sound_sndmain.cpp_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 0052786b: ADD ESP,0x4
// 0052786e: PUSH 0x6399d6
//   XREF to: 006399d6 (DATA)
// 00527873: MOV EAX,dword ptr [EBX + 0x154]
// 00527879: PUSH EBX
// 0052787a: CALL dword ptr [EAX + 0x24]
// 0052787d: MOV dword ptr [EBX + 0xbf58],0x1
// 00527887: ADD ESP,0x8
// 0052788a: MOV dword ptr [EBX + 0xbf50],EAX
// 00527890: PUSH EDI
// 00527891: PUSH EBX
// 00527892: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 00527897: ADD ESP,0x8
// 0052789a: POP EBP
// 0052789b: POP EDI
// 0052789c: POP ESI
// 0052789d: POP EBX
// 0052789e: RET
// 0052789f: PUSH 0x6399e8
//   Label: LAB_0052789f
//   XREF to: 006399e8 (DATA)
// 005278a4: MOV EAX,dword ptr [EBX + 0x154]
// 005278aa: PUSH EBX
// 005278ab: CALL dword ptr [EAX + 0x24]
// 005278ae: ADD ESP,0x8
// 005278b1: MOV dword ptr [EBX + 0xbf50],EAX
// 005278b7: PUSH EDI
// 005278b8: PUSH EBX
// 005278b9: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 005278be: ADD ESP,0x8
// 005278c1: POP EBP
// 005278c2: POP EDI
// 005278c3: POP ESI
// 005278c4: POP EBX
// 005278c5: RET
