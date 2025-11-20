// Name: core_actor.cpp_CDemonActor_playSound_FUN_00408f60
// Address: 00408f60
// Address Range: [[00408f60, 00408f7f]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_playSound_FUN_00408f60(CDemonActor * this_ptr, char * sound_name)
// Globals:
//   CSound* g_CSoundPtr = 03f6af64
//   CSound g_CSoundInstance
// Function calls:
//   core_sound.cpp_CSound_playActorSound_FUN_005b3a40

#include "nocturne.h"

void __cdecl
core_actor_cpp_CDemonActor_playSound_FUN_00408f60(CDemonActor *this_ptr,char *sound_name)

{
  core_sound_cpp_CSound_playActorSound_FUN_005b3a40
            (g_CSoundPtr,this_ptr,sound_name,&(this_ptr->location).position);
  return;
}


// Assembly code:
// 00408f60: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_playSound_FUN_00408f60
// 00408f61: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00408f65: LEA EAX,[EDX + 0x20]
// 00408f68: PUSH EAX
// 00408f69: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00408f6d: PUSH ECX
// 00408f6e: PUSH EDX
// 00408f6f: MOV EBX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 00408f75: PUSH EBX
//   XREF to: 03f6af64 (DATA)
// 00408f76: CALL core_sound.cpp_CSound_playActorSound_FUN_005b3a40
//   XREF to: 005b3a40 (UNCONDITIONAL_CALL)
// 00408f7b: ADD ESP,0x10
// 00408f7e: POP EBX
// 00408f7f: RET
