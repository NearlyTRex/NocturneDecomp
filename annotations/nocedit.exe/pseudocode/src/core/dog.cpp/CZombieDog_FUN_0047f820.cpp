// Name: core_dog.cpp_CZombieDog_FUN_0047f820
// Address: 0047f820
// Address Range: [[0047f820, 0047f8ce]]
// Convention: __cdecl
// Signature: void core_dog.cpp_CZombieDog_FUN_0047f820(CZombieDog * this_ptr)
// Globals:
//   TerminatedCString s_dog2_wav_00621064
//   CSound* g_CSoundPtr = 03f6af64
//   CSound g_CSoundInstance
// Function calls:
//   core_enemy.cpp_FUN_004a9f10
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_sound.cpp_FUN_005b3b80

#include "nocturne.h"

void __cdecl core_dog_cpp_CZombieDog_FUN_0047f820(CZombieDog *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  undefined4 uVar2;
  int unaff_ESI;
  int in_stack_00000008;
  CZombieDog *pCStack0000000c;
  int iVar3;
  
  fVar1 = (this_ptr->base_enemy).base_character.hit_points - *(float *)(in_stack_00000008 + 4);
  this_ptr_00 = &(this_ptr->base_enemy).base_character.model;
  (this_ptr->base_enemy).base_character.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base_enemy).base_character.hit_points = 0.0;
    iVar3 = core_motion_cpp_CMotionController_FUN_0052dab0(&this_ptr_00->motion_controller);
    if ((*(int *)(iVar3 + 0x24) == 7) || (*(int *)(iVar3 + 0x24) == 6)) goto LAB_0047f855;
    unaff_ESI = 1;
    iVar3 = 6;
  }
  else {
    iVar3 = 1;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&this_ptr_00->motion_controller,iVar3,unaff_ESI);
LAB_0047f855:
  iVar3 = core_sound_cpp_FUN_005b3b80();
  if (iVar3 != 0) {
    core_enemy_cpp_FUN_004a9f10();
    return;
  }
  uVar2 = (*((this_ptr->base_enemy).base_character.base_actor.vtable)->playSound)
                    ((CDemonActor *)this_ptr,"dog2.wav");
  *(undefined4 *)(this_ptr->field1_0xbeb4 + 0x10) = uVar2;
  pCStack0000000c = this_ptr;
  core_enemy_cpp_FUN_004a9f10();
  return;
}


// Assembly code:
// 0047f820: PUSH EBX
//   Label: core_dog.cpp_CZombieDog_FUN_0047f820
// 0047f821: PUSH ESI
// 0047f822: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0047f826: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0047f82a: FLD float ptr [EAX + 0x4]
// 0047f82d: FSUBR float ptr [EBX + 0x243c]
// 0047f833: LEA ESI,[EBX + 0x158]
// 0047f839: FST float ptr [EBX + 0x243c]
// 0047f83f: FLDZ
// 0047f841: FCOMPP
// 0047f843: FNSTSW AX
// 0047f845: SAHF
// 0047f846: JNC 0x0047f880
//   XREF to: 0047f880 (CONDITIONAL_JUMP)
// 0047f848: PUSH 0x1
// 0047f84a: PUSH 0x5
// 0047f84c: PUSH ESI
//   Label: LAB_0047f84c
// 0047f84d: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0047f852: ADD ESP,0xc
// 0047f855: MOV EDX,dword ptr [EBX + 0xbec4]
//   Label: LAB_0047f855
// 0047f85b: PUSH EDX
// 0047f85c: MOV ECX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 0047f862: PUSH ECX
//   XREF to: 03f6af64 (DATA)
// 0047f863: CALL core_sound.cpp_FUN_005b3b80
//   XREF to: 005b3b80 (UNCONDITIONAL_CALL)
// 0047f868: ADD ESP,0x8
// 0047f86b: TEST EAX,EAX
// 0047f86d: JZ 0x0047f8a6
//   XREF to: 0047f8a6 (CONDITIONAL_JUMP)
// 0047f86f: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0047f873: PUSH ESI
// 0047f874: PUSH EBX
// 0047f875: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 0047f87a: ADD ESP,0x8
// 0047f87d: POP ESI
// 0047f87e: POP EBX
// 0047f87f: RET
// 0047f880: PUSH ESI
//   Label: LAB_0047f880
// 0047f881: MOV dword ptr [EBX + 0x243c],0x0
// 0047f88b: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 0047f890: MOV EAX,dword ptr [EAX + 0x24]
// 0047f893: ADD ESP,0x4
// 0047f896: CMP EAX,0x7
// 0047f899: JZ 0x0047f855
//   XREF to: 0047f855 (CONDITIONAL_JUMP)
// 0047f89b: CMP EAX,0x6
// 0047f89e: JZ 0x0047f855
//   XREF to: 0047f855 (CONDITIONAL_JUMP)
// 0047f8a0: PUSH 0x1
// 0047f8a2: PUSH 0x6
// 0047f8a4: JMP 0x0047f84c
//   XREF to: 0047f84c (UNCONDITIONAL_JUMP)
// 0047f8a6: PUSH 0x621064
//   Label: LAB_0047f8a6
//   XREF to: 00621064 (DATA)
// 0047f8ab: MOV EAX,dword ptr [EBX + 0x154]
// 0047f8b1: PUSH EBX
// 0047f8b2: CALL dword ptr [EAX + 0x24]
// 0047f8b5: ADD ESP,0x8
// 0047f8b8: MOV dword ptr [EBX + 0xbec4],EAX
// 0047f8be: MOV ESI,dword ptr [ESP + 0x10]
// 0047f8c2: PUSH ESI
// 0047f8c3: PUSH EBX
// 0047f8c4: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 0047f8c9: ADD ESP,0x8
// 0047f8cc: POP ESI
// 0047f8cd: POP EBX
// 0047f8ce: RET
