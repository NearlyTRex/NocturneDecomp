// Name: core_vehicle.cpp_FUN_005e8b50
// Address: 005e8b50
// Address Range: [[005e8b50, 005e8b97]]
// Convention: unknown
// Signature: undefined core_vehicle.cpp_FUN_005e8b50()
// Cross-references:
//   core_vehicle.cpp_CVehicle_process_FUN_005e7e80 (005e7e80) at 005e830d [UNCONDITIONAL_CALL]
// Globals:
//   CSound* g_CSoundPtr = 03f6af64
//   CSound g_CSoundInstance
// Function calls:
//   core_sound.cpp_CSound_playTrackedActorSound_FUN_005b3a70
//   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_005a8940
//   sound_sndmain.cpp_setNextSfxTrackedVelocity_FUN_005a8a00

#include "nocturne.h"

/* Signature: undefined1 actors_other_vehicle.cpp_FUN_005e8b50(undefined4 param_1, undefined4
   param_2) */

uint core_vehicle_cpp_FUN_005e8b50(void)

{
  uint uVar1;
  CDemonActor *in_stack_00000004;
  char *in_stack_00000014;
  
  sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
  sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_005a8940
            (&(in_stack_00000004->location).position);
  sound_sndmain_cpp_setNextSfxTrackedVelocity_FUN_005a8a00
            ((CVector3f *)&in_stack_00000004[0xc].orient_matrix.m[0].y);
  uVar1 = core_sound_cpp_CSound_playTrackedActorSound_FUN_005b3a70
                    (g_CSoundPtr,in_stack_00000004,in_stack_00000014,
                     &(in_stack_00000004->location).position);
  sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  return uVar1;
}


// Assembly code:
// 005e8b50: PUSH EBX
//   Label: core_vehicle.cpp_FUN_005e8b50
// 005e8b51: PUSH ESI
// 005e8b52: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005e8b56: LEA EBX,[ESI + 0x20]
// 005e8b59: CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
// 005e8b5e: PUSH EBX
// 005e8b5f: CALL sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_005a8940
//   XREF to: 005a8940 (UNCONDITIONAL_CALL)
// 005e8b64: ADD ESP,0x4
// 005e8b67: LEA EAX,[ESI + 0x1060]
// 005e8b6d: PUSH EAX
// 005e8b6e: CALL sound_sndmain.cpp_setNextSfxTrackedVelocity_FUN_005a8a00
//   XREF to: 005a8a00 (UNCONDITIONAL_CALL)
// 005e8b73: ADD ESP,0x4
// 005e8b76: PUSH EBX
// 005e8b77: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005e8b7b: PUSH EDX
// 005e8b7c: PUSH ESI
// 005e8b7d: MOV ECX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 005e8b83: PUSH ECX
//   XREF to: 03f6af64 (DATA)
// 005e8b84: CALL core_sound.cpp_CSound_playTrackedActorSound_FUN_005b3a70
//   XREF to: 005b3a70 (UNCONDITIONAL_CALL)
// 005e8b89: ADD ESP,0x10
// 005e8b8c: MOV EBX,EAX
// 005e8b8e: CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
// 005e8b93: MOV EAX,EBX
// 005e8b95: POP ESI
// 005e8b96: POP EBX
// 005e8b97: RET
