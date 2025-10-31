// Name: core_actor.cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0
// Address: 00408fd0
// Address Range: [[00408fd0, 00408ff3]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0(CDemonActor * this_ptr, char * sound_name, float volume)
// Globals:
//   CSound* g_CSoundPtr = 03f6af64
//   CSound g_CSoundInstance
// Function calls:
//   core_sound.cpp_CSound_FUN_005b3b30

#include "nocturne.h"

void __cdecl
core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0
          (CDemonActor *this_ptr,char *sound_name,float volume)

{
  core_sound_cpp_CSound_FUN_005b3b30(g_CSoundPtr,this_ptr->actor_name,sound_name);
  return;
}


// Assembly code:
// 00408fd0: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0
// 00408fd1: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00408fd5: LEA EAX,[EDX + 0x20]
// 00408fd8: PUSH dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 00408fdc: PUSH EAX
// 00408fdd: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00408fe1: PUSH ECX
// 00408fe2: PUSH EDX
// 00408fe3: MOV EBX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 00408fe9: PUSH EBX
//   XREF to: 03f6af64 (DATA)
// 00408fea: CALL core_sound.cpp_CSound_FUN_005b3b30
//   XREF to: 005b3b30 (UNCONDITIONAL_CALL)
// 00408fef: ADD ESP,0x14
// 00408ff2: POP EBX
// 00408ff3: RET
