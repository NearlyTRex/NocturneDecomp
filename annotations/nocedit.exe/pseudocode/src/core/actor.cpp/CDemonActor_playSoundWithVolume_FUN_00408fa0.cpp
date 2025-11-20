// Name: core_actor.cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0
// Address: 00408fa0
// Address Range: [[00408fa0, 00408fc3]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0(CDemonActor * this_ptr, char * sound_name, float volume)
// Globals:
//   CSound* g_CSoundPtr = 03f6af64
//   CSound g_CSoundInstance
// Function calls:
//   core_sound.cpp_CSound_playActorSoundWithDelay_FUN_005b3ae0

#include "nocturne.h"

void __cdecl
core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0
          (CDemonActor *this_ptr,char *sound_name,float volume)

{
  core_sound_cpp_CSound_playActorSoundWithDelay_FUN_005b3ae0
            (g_CSoundPtr,this_ptr,sound_name,&(this_ptr->location).position,volume);
  return;
}


// Assembly code:
// 00408fa0: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0
// 00408fa1: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00408fa5: LEA EAX,[EDX + 0x20]
// 00408fa8: PUSH dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 00408fac: PUSH EAX
// 00408fad: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00408fb1: PUSH ECX
// 00408fb2: PUSH EDX
// 00408fb3: MOV EBX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 00408fb9: PUSH EBX
//   XREF to: 03f6af64 (DATA)
// 00408fba: CALL core_sound.cpp_CSound_playActorSoundWithDelay_FUN_005b3ae0
//   XREF to: 005b3ae0 (UNCONDITIONAL_CALL)
// 00408fbf: ADD ESP,0x14
// 00408fc2: POP EBX
// 00408fc3: RET
