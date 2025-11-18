// Name: core_icepick.cpp_CIcePick_FUN_004f95b0
// Address: 004f95b0
// Address Range: [[004f95b0, 004f975d]]
// Convention: unknown
// Signature: undefined core_icepick.cpp_CIcePick_FUN_004f95b0()
// Globals:
//   TerminatedCString s_icepick_die01_wav_0062f7f6
//   TerminatedCString s_icepick_injured_wav_0062f808
//   undefined4 DAT_00660028
//   CGame* g_CGamePtr = 02d81a9c
//   CGore* g_CGorePtr = 02d83364
//   undefined4 DAT_02d81c6c
//   undefined4 DAT_02d81cc8
//   CGore g_CGoreInstance
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042c3c0
//   core_gore.cpp_CGore_FUN_004ee030
//   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
//   sound_sndmain.cpp_killSfx_FUN_005a9c40

#include "nocturne.h"

/* Signature: undefined1 actors_hero_icepick.cpp_CIcePick_FUN_004f95b0(CIcePick* param_1, undefined4
   param_2) */

void core_icepick_cpp_CIcePick_FUN_004f95b0(void)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  SMotion *pSVar2;
  undefined4 uVar3;
  CCharacter *in_stack_00000004;
  int in_stack_00000008;
  int iVar4;
  
  sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(in_stack_00000004[2].cloth_data + 0x54fc));
  if ((*(uint *)in_stack_00000004[1].base_actor.actor_name & 0x7fffffff) != 0) {
    *(undefined4 *)(in_stack_00000008 + 4) = 0;
  }
  if (g_CGamePtr->field53_0x1d0 != 0) {
    *(undefined4 *)(in_stack_00000008 + 4) = 0;
  }
  if (g_CGamePtr->allow_damage_flag == 0) {
    *(undefined4 *)(in_stack_00000008 + 4) = 0;
  }
  *(undefined4 *)in_stack_00000004[1].base_actor.actor_name = DAT_00660028;
  fVar1 = in_stack_00000004->hit_points - *(float *)(in_stack_00000008 + 4);
  this_ptr = &in_stack_00000004->model;
  in_stack_00000004->hit_points = fVar1;
  if (fVar1 <= 0.0) {
    in_stack_00000004->hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr->motion_controller);
    if (pSVar2->state_index != 9) {
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&this_ptr->motion_controller);
      if (pSVar2->state_index != 8) {
        in_stack_00000004->grabbed_by = (CDemonActor *)0x0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&this_ptr->motion_controller,8,1);
        (*(in_stack_00000004->base_actor).vtable[1].renderTargetPoints)
                  (&in_stack_00000004->base_actor);
        core_gore_cpp_CGore_FUN_004ee030(g_CGorePtr,&in_stack_00000004->base_actor);
        sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(in_stack_00000004[2].cloth_data + 0x5500));
        (*((in_stack_00000004->base_actor).vtable)->playSound)
                  (&in_stack_00000004->base_actor,"icepick_die01.wav");
        core_charactr_cpp_CCharacter_FUN_0042c3c0(in_stack_00000004);
        return;
      }
    }
  }
  else if (0.0 < *(float *)(in_stack_00000008 + 4)) {
    if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) == 0) {
      iVar4 = 4;
    }
    else {
      iVar4 = 0xb;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr->motion_controller,iVar4,1);
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                      (*(uint *)(in_stack_00000004[2].cloth_data + 0x5500));
    if (iVar4 == 0) {
      uVar3 = (*((in_stack_00000004->base_actor).vtable)->playSound)
                        (&in_stack_00000004->base_actor,"icepick_injured??.wav");
      *(undefined4 *)(in_stack_00000004[2].cloth_data + 0x5500) = uVar3;
      core_charactr_cpp_CCharacter_FUN_0042c3c0(in_stack_00000004);
      return;
    }
  }
  core_charactr_cpp_CCharacter_FUN_0042c3c0(in_stack_00000004);
  return;
}


// Assembly code:
// 004f95b0: PUSH EBX
//   Label: core_icepick.cpp_CIcePick_FUN_004f95b0
// 004f95b1: PUSH ESI
// 004f95b2: PUSH EDI
// 004f95b3: PUSH EBP
// 004f95b4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004f95b8: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004f95bc: MOV EDX,dword ptr [EBX + 0x1fbdc]
// 004f95c2: PUSH EDX
// 004f95c3: CALL sound_sndmain.cpp_killSfx_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 004f95c8: MOV ECX,dword ptr [EBX + 0xbe24]
// 004f95ce: ADD ESP,0x4
// 004f95d1: TEST ECX,0x7fffffff
// 004f95d7: JNZ 0x004f967a
//   XREF to: 004f967a (CONDITIONAL_JUMP)
// 004f95dd: MOV EAX,[0x0067b654]
//   Label: LAB_004f95dd
//   XREF to: 0067b654 (READ)
// 004f95e2: CMP dword ptr [EAX + 0x1d0],0x0
//   XREF to: 02d81c6c (READ)
// 004f95e9: JZ 0x004f95f2
//   XREF to: 004f95f2 (CONDITIONAL_JUMP)
// 004f95eb: MOV dword ptr [EDI + 0x4],0x0
// 004f95f2: MOV EAX,[0x0067b654]
//   Label: LAB_004f95f2
//   XREF to: 0067b654 (READ)
// 004f95f7: MOV EBP,dword ptr [EAX + 0x22c]
//   XREF to: 02d81cc8 (READ)
// 004f95fd: TEST EBP,EBP
// 004f95ff: JZ 0x004f9686
//   XREF to: 004f9686 (CONDITIONAL_JUMP)
// 004f9605: MOV EAX,[0x00660028]
//   Label: LAB_004f9605
//   XREF to: 00660028 (READ)
// 004f960a: MOV dword ptr [EBX + 0xbe24],EAX
// 004f9610: FLD float ptr [EDI + 0x4]
// 004f9613: FSUBR float ptr [EBX + 0x243c]
// 004f9619: LEA ESI,[EBX + 0x158]
// 004f961f: FST float ptr [EBX + 0x243c]
// 004f9625: FLDZ
// 004f9627: FCOMPP
// 004f9629: FNSTSW AX
// 004f962b: SAHF
// 004f962c: JNC 0x004f968e
//   XREF to: 004f968e (CONDITIONAL_JUMP)
// 004f962e: FLD float ptr [EDI + 0x4]
// 004f9631: FLDZ
// 004f9633: FCOMPP
// 004f9635: FNSTSW AX
// 004f9637: SAHF
// 004f9638: JNC 0x004f966b
//   XREF to: 004f966b (CONDITIONAL_JUMP)
// 004f963a: CMP dword ptr [EBX + 0x1fbd4],0x0
// 004f9641: JNZ 0x004f972e
//   XREF to: 004f972e (CONDITIONAL_JUMP)
// 004f9647: PUSH 0x1
// 004f9649: PUSH 0x4
// 004f964b: PUSH ESI
//   Label: LAB_004f964b
// 004f964c: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f9651: ADD ESP,0xc
// 004f9654: MOV EDX,dword ptr [EBX + 0x1fbe0]
// 004f965a: PUSH EDX
// 004f965b: CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 004f9660: ADD ESP,0x4
// 004f9663: TEST EAX,EAX
// 004f9665: JZ 0x004f9737
//   XREF to: 004f9737 (CONDITIONAL_JUMP)
// 004f966b: PUSH EDI
//   Label: LAB_004f966b
// 004f966c: PUSH EBX
// 004f966d: CALL core_charactr.cpp_CCharacter_FUN_0042c3c0
//   XREF to: 0042c3c0 (UNCONDITIONAL_CALL)
// 004f9672: ADD ESP,0x8
// 004f9675: POP EBP
// 004f9676: POP EDI
// 004f9677: POP ESI
// 004f9678: POP EBX
// 004f9679: RET
// 004f967a: MOV dword ptr [EDI + 0x4],0x0
//   Label: LAB_004f967a
// 004f9681: JMP 0x004f95dd
//   XREF to: 004f95dd (UNCONDITIONAL_JUMP)
// 004f9686: MOV dword ptr [EDI + 0x4],EBP
//   Label: LAB_004f9686
// 004f9689: JMP 0x004f9605
//   XREF to: 004f9605 (UNCONDITIONAL_JUMP)
// 004f968e: PUSH ESI
//   Label: LAB_004f968e
// 004f968f: MOV dword ptr [EBX + 0x243c],0x0
// 004f9699: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004f969e: MOV EAX,dword ptr [EAX + 0x24]
// 004f96a1: ADD ESP,0x4
// 004f96a4: CMP EAX,0x9
// 004f96a7: JZ 0x004f966b
//   XREF to: 004f966b (CONDITIONAL_JUMP)
// 004f96a9: PUSH ESI
// 004f96aa: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004f96af: MOV EAX,dword ptr [EAX + 0x24]
// 004f96b2: ADD ESP,0x4
// 004f96b5: CMP EAX,0x8
// 004f96b8: JZ 0x004f966b
//   XREF to: 004f966b (CONDITIONAL_JUMP)
// 004f96ba: PUSH 0x1
// 004f96bc: PUSH 0x8
// 004f96be: PUSH ESI
// 004f96bf: MOV dword ptr [EBX + 0x2598],0x0
// 004f96c9: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f96ce: ADD ESP,0xc
// 004f96d1: PUSH 0x0
// 004f96d3: PUSH 0x1
// 004f96d5: MOV EAX,dword ptr [EBX + 0x154]
// 004f96db: PUSH EBX
// 004f96dc: CALL dword ptr [EAX + 0x13c]
// 004f96e2: ADD ESP,0xc
// 004f96e5: PUSH 0x0
// 004f96e7: PUSH 0x42480000
// 004f96ec: PUSH 0x32
// 004f96ee: PUSH EBX
// 004f96ef: MOV ECX,dword ptr [0x0067b9a0]
//   XREF to: 02d83364 (PARAM)
//   XREF to: 0067b9a0 (READ)
// 004f96f5: PUSH ECX
//   XREF to: 02d83364 (DATA)
// 004f96f6: CALL core_gore.cpp_CGore_FUN_004ee030
//   XREF to: 004ee030 (UNCONDITIONAL_CALL)
// 004f96fb: ADD ESP,0x14
// 004f96fe: MOV ESI,dword ptr [EBX + 0x1fbe0]
// 004f9704: PUSH ESI
// 004f9705: CALL sound_sndmain.cpp_killSfx_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 004f970a: ADD ESP,0x4
// 004f970d: PUSH 0x62f7f6
//   XREF to: 0062f7f6 (DATA)
// 004f9712: MOV EAX,dword ptr [EBX + 0x154]
// 004f9718: PUSH EBX
// 004f9719: CALL dword ptr [EAX + 0x24]
// 004f971c: ADD ESP,0x8
// 004f971f: PUSH EDI
// 004f9720: PUSH EBX
// 004f9721: CALL core_charactr.cpp_CCharacter_FUN_0042c3c0
//   XREF to: 0042c3c0 (UNCONDITIONAL_CALL)
// 004f9726: ADD ESP,0x8
// 004f9729: POP EBP
// 004f972a: POP EDI
// 004f972b: POP ESI
// 004f972c: POP EBX
// 004f972d: RET
// 004f972e: PUSH 0x1
//   Label: LAB_004f972e
// 004f9730: PUSH 0xb
// 004f9732: JMP 0x004f964b
//   XREF to: 004f964b (UNCONDITIONAL_JUMP)
// 004f9737: PUSH 0x62f808
//   Label: LAB_004f9737
//   XREF to: 0062f808 (DATA)
// 004f973c: MOV EAX,dword ptr [EBX + 0x154]
// 004f9742: PUSH EBX
// 004f9743: CALL dword ptr [EAX + 0x24]
// 004f9746: ADD ESP,0x8
// 004f9749: MOV dword ptr [EBX + 0x1fbe0],EAX
// 004f974f: PUSH EDI
// 004f9750: PUSH EBX
// 004f9751: CALL core_charactr.cpp_CCharacter_FUN_0042c3c0
//   XREF to: 0042c3c0 (UNCONDITIONAL_CALL)
// 004f9756: ADD ESP,0x8
// 004f9759: POP EBP
// 004f975a: POP EDI
// 004f975b: POP ESI
// 004f975c: POP EBX
// 004f975d: RET
