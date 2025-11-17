// Name: core_gargoyle.cpp_CGargoyle_unk3_FUN_004e57d0
// Address: 004e57d0
// Address Range: [[004e57d0, 004e5923]]
// Convention: unknown
// Signature: undefined core_gargoyle.cpp_CGargoyle_unk3_FUN_004e57d0()
// Globals:
//   TerminatedCString s_gargoyle_shatter_wav_0062da1f
//   TerminatedCString s_gargoyle_hurt_wav_0062da34
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CFireEffect g_CFireEffectInstance
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_charactr.cpp_CCharacter_FUN_0042b9e0
//   core_enemy.cpp_FUN_004a9f10
//   core_fire.cpp_CFireEffect_FUN_004c79d0
//   core_gargoyle.cpp_CGargoyle_unk4_FUN_004e5530
//   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   sound_sndmain.cpp_FUN_005a9660
//   sound_sndmain.cpp_FUN_005a9c40

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_gargoyle.cpp_CGargoyle_unk3(undefined4 param_1, undefined4
   param_2) */

void core_gargoyle_cpp_CGargoyle_unk3_FUN_004e57d0(void)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  SMotion *pSVar2;
  undefined4 uVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  CCharacter *in_stack_00000004;
  int in_stack_00000008;
  
  iVar4 = 0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (&in_stack_00000004->base_actor,(CVector3f *)&stack0xffffffe4,
             (CVector3f *)(in_stack_00000008 + 0x1c));
  do {
    iVar4 = iVar4 + 1;
    core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
  } while (iVar4 < 3);
  this_ptr = &in_stack_00000004->model;
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&this_ptr->motion_controller);
  if (pSVar2->state_index != 5) {
    core_gargoyle_cpp_CGargoyle_unk4_FUN_004e5530();
    fVar1 = in_stack_00000004->hit_points - *(float *)(in_stack_00000008 + 4);
    in_stack_00000004->hit_points = fVar1;
    if (0.0 < fVar1) {
      iVar4 = sound_sndmain_cpp_FUN_005a9660();
      if (iVar4 == 0) {
        uVar3 = (*((in_stack_00000004->base_actor).vtable)->playSound)
                          (&in_stack_00000004->base_actor,"gargoyle-hurt?.wav");
        *(undefined4 *)(in_stack_00000004[1].base_actor.create_event + 0x60) = uVar3;
        core_enemy_cpp_FUN_004a9f10();
        return;
      }
    }
    else {
      sound_sndmain_cpp_FUN_005a9c40();
      in_stack_00000004->hit_points = 0.0;
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&this_ptr->motion_controller);
      if (pSVar2->state_index != 8) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&this_ptr->motion_controller,8,1);
        (*((in_stack_00000004->base_actor).vtable)->playSound)
                  (&in_stack_00000004->base_actor,"gargoyle-shatter.wav");
        core_charactr_cpp_CCharacter_FUN_0042b9e0(in_stack_00000004);
      }
    }
    core_enemy_cpp_FUN_004a9f10();
    return;
  }
  *(undefined4 *)(in_stack_00000008 + 4) = 0;
  core_enemy_cpp_FUN_004a9f10();
  return;
}


// Assembly code:
// 004e57d0: PUSH EBX
//   Label: core_gargoyle.cpp_CGargoyle_unk3_FUN_004e57d0
// 004e57d1: PUSH ESI
// 004e57d2: PUSH EDI
// 004e57d3: PUSH EBP
// 004e57d4: SUB ESP,0xc
// 004e57d7: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 004e57db: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 004e57df: LEA EAX,[EDI + 0x1c]
// 004e57e2: PUSH EAX
// 004e57e3: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x1c] (DATA)
// 004e57e7: PUSH EAX
// 004e57e8: PUSH ESI
// 004e57e9: XOR EBX,EBX
// 004e57eb: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004e57f0: ADD ESP,0xc
// 004e57f3: PUSH 0xffff
//   Label: LAB_004e57f3
// 004e57f8: PUSH 0x0
// 004e57fa: PUSH 0x8000
// 004e57ff: PUSH 0x10000
// 004e5804: PUSH 0x0
// 004e5806: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x1c] (DATA)
// 004e580a: PUSH EAX
// 004e580b: MOV EDX,dword ptr [0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 004e5811: PUSH EDX
//   XREF to: 02d12db0 (DATA)
// 004e5812: INC EBX
// 004e5813: CALL core_fire.cpp_CFireEffect_FUN_004c79d0
//   XREF to: 004c79d0 (UNCONDITIONAL_CALL)
// 004e5818: ADD ESP,0x1c
// 004e581b: CMP EBX,0x3
// 004e581e: JL 0x004e57f3
//   XREF to: 004e57f3 (CONDITIONAL_JUMP)
// 004e5820: LEA EBX,[ESI + 0x158]
// 004e5826: PUSH EBX
// 004e5827: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004e582c: MOV EAX,dword ptr [EAX + 0x24]
// 004e582f: ADD ESP,0x4
// 004e5832: CMP EAX,0x5
// 004e5835: JZ 0x004e58ce
//   XREF to: 004e58ce (CONDITIONAL_JUMP)
// 004e583b: PUSH EDI
// 004e583c: PUSH ESI
// 004e583d: CALL core_gargoyle.cpp_CGargoyle_unk4_FUN_004e5530
//   XREF to: 004e5530 (UNCONDITIONAL_CALL)
// 004e5842: FLD float ptr [EDI + 0x4]
// 004e5845: FSUBR float ptr [ESI + 0x243c]
// 004e584b: ADD ESP,0x8
// 004e584e: FST float ptr [ESI + 0x243c]
// 004e5854: FLDZ
// 004e5856: FCOMPP
// 004e5858: FNSTSW AX
// 004e585a: SAHF
// 004e585b: JC 0x004e58e7
//   XREF to: 004e58e7 (CONDITIONAL_JUMP)
// 004e5861: MOV EBP,dword ptr [ESI + 0xbefc]
// 004e5867: PUSH EBP
// 004e5868: CALL sound_sndmain.cpp_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 004e586d: ADD ESP,0x4
// 004e5870: PUSH EBX
// 004e5871: MOV dword ptr [ESI + 0x243c],0x0
// 004e587b: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004e5880: MOV EAX,dword ptr [EAX + 0x24]
// 004e5883: ADD ESP,0x4
// 004e5886: CMP EAX,0x8
// 004e5889: JZ 0x004e58bc
//   XREF to: 004e58bc (CONDITIONAL_JUMP)
// 004e588b: PUSH 0x1
// 004e588d: PUSH 0x8
// 004e588f: PUSH EBX
// 004e5890: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e5895: ADD ESP,0xc
// 004e5898: PUSH 0x62da1f
//   XREF to: 0062da1f (DATA)
// 004e589d: MOV EAX,dword ptr [ESI + 0x154]
// 004e58a3: PUSH ESI
// 004e58a4: CALL dword ptr [EAX + 0x24]
// 004e58a7: ADD ESP,0x8
// 004e58aa: PUSH 0x1
// 004e58ac: PUSH 0xbf800000
// 004e58b1: PUSH 0x0
// 004e58b3: PUSH ESI
// 004e58b4: CALL core_charactr.cpp_CCharacter_FUN_0042b9e0
//   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)
// 004e58b9: ADD ESP,0x10
// 004e58bc: PUSH EDI
//   Label: LAB_004e58bc
// 004e58bd: PUSH ESI
// 004e58be: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 004e58c3: ADD ESP,0x8
// 004e58c6: ADD ESP,0xc
// 004e58c9: POP EBP
// 004e58ca: POP EDI
// 004e58cb: POP ESI
// 004e58cc: POP EBX
// 004e58cd: RET
// 004e58ce: PUSH EDI
//   Label: LAB_004e58ce
// 004e58cf: PUSH ESI
// 004e58d0: MOV dword ptr [EDI + 0x4],0x0
// 004e58d7: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 004e58dc: ADD ESP,0x8
// 004e58df: ADD ESP,0xc
// 004e58e2: POP EBP
// 004e58e3: POP EDI
// 004e58e4: POP ESI
// 004e58e5: POP EBX
// 004e58e6: RET
// 004e58e7: MOV ECX,dword ptr [ESI + 0xbefc]
//   Label: LAB_004e58e7
// 004e58ed: PUSH ECX
// 004e58ee: CALL sound_sndmain.cpp_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 004e58f3: ADD ESP,0x4
// 004e58f6: TEST EAX,EAX
// 004e58f8: JNZ 0x004e58bc
//   XREF to: 004e58bc (CONDITIONAL_JUMP)
// 004e58fa: PUSH 0x62da34
//   XREF to: 0062da34 (DATA)
// 004e58ff: MOV EAX,dword ptr [ESI + 0x154]
// 004e5905: PUSH ESI
// 004e5906: CALL dword ptr [EAX + 0x24]
// 004e5909: ADD ESP,0x8
// 004e590c: MOV dword ptr [ESI + 0xbefc],EAX
// 004e5912: PUSH EDI
// 004e5913: PUSH ESI
// 004e5914: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 004e5919: ADD ESP,0x8
// 004e591c: ADD ESP,0xc
// 004e591f: POP EBP
// 004e5920: POP EDI
// 004e5921: POP ESI
// 004e5922: POP EBX
// 004e5923: RET
