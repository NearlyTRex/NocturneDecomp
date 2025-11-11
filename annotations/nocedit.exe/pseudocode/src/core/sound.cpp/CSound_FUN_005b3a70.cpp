// Name: core_sound.cpp_CSound_FUN_005b3a70
// Address: 005b3a70
// Address Range: [[005b3a70, 005b3a91]]
// Convention: __cdecl
// Signature: void core_sound.cpp_CSound_FUN_005b3a70(CSound * this_ptr, char * actor_name, char * sound_name)
// Cross-references:
//   core_actor.cpp_CDemonActor_playAmbientSound_FUN_00408f80 (00408f80) at 00408f96 [UNCONDITIONAL_CALL]
//   core_chain.cpp_FUN_004300d0 (004300d0) at 00430853 [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_FUN_00549b90 (00549b90) at 0054a0a2 [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_FUN_005b2fd0 (005b2fd0) at 005b3762 [UNCONDITIONAL_CALL]
//   core_sound.cpp_FUN_005b2770 (005b2770) at 005b2bc9 [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_FUN_005e8b50 (005e8b50) at 005e8b84 [UNCONDITIONAL_CALL]
// Function calls:
//   core_sound.cpp_FUN_005b1fd0

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_FUN_005b3a70(CSound *this_ptr,char *actor_name,char *sound_name)

{
  core_sound_cpp_FUN_005b1fd0();
  return;
}


// Assembly code:
// 005b3a70: PUSH EBX
//   Label: core_sound.cpp_CSound_FUN_005b3a70
// 005b3a71: PUSH 0x0
// 005b3a73: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x10] (READ)
// 005b3a77: PUSH EDX
// 005b3a78: PUSH 0x0
// 005b3a7a: PUSH 0x0
// 005b3a7c: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 005b3a80: PUSH 0x0
// 005b3a82: PUSH ECX
// 005b3a83: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 005b3a87: PUSH EBX
// 005b3a88: CALL core_sound.cpp_FUN_005b1fd0
//   XREF to: 005b1fd0 (UNCONDITIONAL_CALL)
// 005b3a8d: ADD ESP,0x1c
// 005b3a90: POP EBX
// 005b3a91: RET
