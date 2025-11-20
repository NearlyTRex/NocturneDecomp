// Name: core_sound.cpp_CSound_playActorSoundWithDelay_FUN_005b3ae0
// Address: 005b3ae0
// Address Range: [[005b3ae0, 005b3b24]]
// Convention: __cdecl
// Signature: uint core_sound.cpp_CSound_playActorSoundWithDelay_FUN_005b3ae0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position, float delay)
// Cross-references:
//   core_actor.cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0 (00408fa0) at 00408fba [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireEffect_FUN_004c76a0 (004c76a0) at 004c79b3 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireEffect_createStake_FUN_004c7bb0 (004c7bb0) at 004c7cb3 [UNCONDITIONAL_CALL]
// Function calls:
//   core_sound.cpp_playSfxInternal_FUN_005b1fd0
//   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   sound_sndmain.cpp_setNextSfxDelay_FUN_005a8b40

#include "nocturne.h"

uint __cdecl
core_sound_cpp_CSound_playActorSoundWithDelay_FUN_005b3ae0
          (CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position,float delay)

{
  uint uVar1;
  float in_stack_00000018;
  
  sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
  sound_sndmain_cpp_setNextSfxDelay_FUN_005a8b40((double)in_stack_00000018);
  uVar1 = core_sound_cpp_playSfxInternal_FUN_005b1fd0
                    (position,(char *)delay,position->x,position->y,position->z,(CVector3f *)0x0,0);
  sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  return uVar1;
}


// Assembly code:
// 005b3ae0: PUSH EBX
//   Label: core_sound.cpp_CSound_playActorSoundWithDelay_FUN_005b3ae0
// 005b3ae1: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 005b3ae5: CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
// 005b3aea: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 005b3aee: SUB ESP,0x8
// 005b3af1: FSTP double ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 005b3af4: CALL sound_sndmain.cpp_setNextSfxDelay_FUN_005a8b40
//   XREF to: 005a8b40 (UNCONDITIONAL_CALL)
// 005b3af9: ADD ESP,0x8
// 005b3afc: PUSH 0x0
// 005b3afe: PUSH 0x0
// 005b3b00: PUSH dword ptr [EBX + 0x8]
// 005b3b03: PUSH dword ptr [EBX + 0x4]
// 005b3b06: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 005b3b0a: PUSH dword ptr [EBX]
// 005b3b0c: PUSH EDX
// 005b3b0d: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 005b3b11: PUSH ECX
// 005b3b12: CALL core_sound.cpp_playSfxInternal_FUN_005b1fd0
//   XREF to: 005b1fd0 (UNCONDITIONAL_CALL)
// 005b3b17: ADD ESP,0x1c
// 005b3b1a: MOV EBX,EAX
// 005b3b1c: CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
// 005b3b21: MOV EAX,EBX
// 005b3b23: POP EBX
// 005b3b24: RET
