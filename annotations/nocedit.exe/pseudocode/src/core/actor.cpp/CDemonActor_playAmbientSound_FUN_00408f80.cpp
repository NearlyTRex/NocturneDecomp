// Name: core_actor.cpp_CDemonActor_playAmbientSound_FUN_00408f80
// Address: 00408f80
// Address Range: [[00408f80, 00408f9f]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_playAmbientSound_FUN_00408f80(CDemonActor * this_ptr, char * sound_name)
// Globals:
//   CSound* g_CSoundPtr = 03f6af64
//   CSound g_CSoundInstance
// Function calls:
//   core_sound.cpp_CSound_FUN_005b3a70

#include "nocturne.h"

void __cdecl
core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80(CDemonActor *this_ptr,char *sound_name)

{
  core_sound_cpp_CSound_FUN_005b3a70(g_CSoundPtr,this_ptr->actor_name,sound_name);
  return;
}


// Assembly code:
// 00408f80: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_playAmbientSound_FUN_00408f80
// 00408f81: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00408f85: LEA EAX,[EDX + 0x20]
// 00408f88: PUSH EAX
// 00408f89: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00408f8d: PUSH ECX
// 00408f8e: PUSH EDX
// 00408f8f: MOV EBX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 00408f95: PUSH EBX
//   XREF to: 03f6af64 (DATA)
// 00408f96: CALL core_sound.cpp_CSound_FUN_005b3a70
//   XREF to: 005b3a70 (UNCONDITIONAL_CALL)
// 00408f9b: ADD ESP,0x10
// 00408f9e: POP EBX
// 00408f9f: RET
