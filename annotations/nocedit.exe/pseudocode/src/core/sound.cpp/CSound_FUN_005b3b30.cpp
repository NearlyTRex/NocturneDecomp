// Name: core_sound.cpp_CSound_FUN_005b3b30
// Address: 005b3b30
// Address Range: [[005b3b30, 005b3b71]]
// Convention: __cdecl
// Signature: int core_sound.cpp_CSound_FUN_005b3b30(CSound * this_ptr, char * actor_name, char * sound_name)
// Cross-references:
//   core_actor.cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0 (00408fd0) at 00408fea [UNCONDITIONAL_CALL]
// Function calls:
//   core_sound.cpp_FUN_005b1fd0
//   sound_sndmain.cpp_FUN_005a8b40
//   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30

#include "nocturne.h"

int __cdecl core_sound_cpp_CSound_FUN_005b3b30(CSound *this_ptr,char *actor_name,char *sound_name)

{
  int iVar1;
  
  sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
  sound_sndmain_cpp_FUN_005a8b40();
  iVar1 = core_sound_cpp_FUN_005b1fd0();
  sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  return iVar1;
}


// Assembly code:
// 005b3b30: PUSH EBX
//   Label: core_sound.cpp_CSound_FUN_005b3b30
// 005b3b31: CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
// 005b3b36: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 005b3b3a: SUB ESP,0x8
// 005b3b3d: FSTP double ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 005b3b40: CALL sound_sndmain.cpp_FUN_005a8b40
//   XREF to: 005a8b40 (UNCONDITIONAL_CALL)
// 005b3b45: ADD ESP,0x8
// 005b3b48: PUSH 0x0
// 005b3b4a: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x10] (READ)
// 005b3b4e: PUSH EDX
// 005b3b4f: PUSH 0x0
// 005b3b51: PUSH 0x0
// 005b3b53: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 005b3b57: PUSH 0x0
// 005b3b59: PUSH ECX
// 005b3b5a: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 005b3b5e: PUSH EBX
// 005b3b5f: CALL core_sound.cpp_FUN_005b1fd0
//   XREF to: 005b1fd0 (UNCONDITIONAL_CALL)
// 005b3b64: ADD ESP,0x1c
// 005b3b67: MOV EBX,EAX
// 005b3b69: CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
// 005b3b6e: MOV EAX,EBX
// 005b3b70: POP EBX
// 005b3b71: RET
