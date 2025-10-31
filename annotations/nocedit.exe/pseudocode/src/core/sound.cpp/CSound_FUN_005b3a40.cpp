// Name: core_sound.cpp_CSound_FUN_005b3a40
// Address: 005b3a40
// Address Range: [[005b3a40, 005b3a62]]
// Convention: __cdecl
// Signature: void core_sound.cpp_CSound_FUN_005b3a40(CSound * this_ptr, char * actor_name, char * sound_name)
// Cross-references:
//   core_actor.cpp_CDemonActor_handleFootstep_FUN_0040ca10 (0040ca10) at 0040cb45 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_playSound_FUN_00408f60 (00408f60) at 00408f76 [UNCONDITIONAL_CALL]
//   core_crossbow.cpp_FUN_00448f20 (00448f20) at 00449193 [UNCONDITIONAL_CALL]
//   core_elephant.cpp_FUN_004a7160 (004a7160) at 004a7461 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireEffect_FUN_004c8c10 (004c8c10) at 004c8c6b [UNCONDITIONAL_CALL]
//   core_gun.cpp_FUN_004f0350 (004f0350) at 004f05b3 [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_FUN_00505c70 (00505c70) at 00506406 [UNCONDITIONAL_CALL]
//   core_shotgun.cpp_FUN_00588060 (00588060) at 0058837a [UNCONDITIONAL_CALL]
// Function calls:
//   core_sound.cpp_PlaySfxByStringMaybe_FUN_005b1fd0

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_FUN_005b3a40(CSound *this_ptr,char *actor_name,char *sound_name)

{
  core_sound_cpp_PlaySfxByStringMaybe_FUN_005b1fd0();
  return;
}


// Assembly code:
// 005b3a40: MOV EAX,dword ptr [ESP + 0x10]
//   Label: core_sound.cpp_CSound_FUN_005b3a40
//   XREF to: Stack[0x10] (READ)
// 005b3a44: PUSH 0x0
// 005b3a46: PUSH 0x0
// 005b3a48: PUSH dword ptr [EAX + 0x8]
// 005b3a4b: PUSH dword ptr [EAX + 0x4]
// 005b3a4e: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005b3a52: PUSH dword ptr [EAX]
// 005b3a54: PUSH EDX
// 005b3a55: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 005b3a59: PUSH ECX
// 005b3a5a: CALL core_sound.cpp_PlaySfxByStringMaybe_FUN_005b1fd0
//   XREF to: 005b1fd0 (UNCONDITIONAL_CALL)
// 005b3a5f: ADD ESP,0x1c
// 005b3a62: RET
