// Name: core_sound.cpp_CSound_set3DListenerOrientRight_FUN_005b3c90
// Address: 005b3c90
// Address Range: [[005b3c90, 005b3cbc]]
// Convention: __cdecl
// Signature: void core_sound.cpp_CSound_set3DListenerOrientRight_FUN_005b3c90(CSound * this_ptr, float listener_orient_x, float listener_orient_y, float listener_orient_z)
// Cross-references:
//   core_sound.cpp_CSound_setReverbPreset_FUN_005b3cc0 (005b3cc0) at 005b3cea [UNCONDITIONAL_CALL]
// Globals:
//   CVector3f g_SoundListenerOrient
//   undefined4 g_SoundListenerOrient.y
//   undefined4 g_SoundListenerOrient.z
// Function calls:
//   sound_sndmain.cpp_set3DListenerOrientRight_FUN_005ab6e0

#include "nocturne.h"

void __cdecl
core_sound_cpp_CSound_set3DListenerOrientRight_FUN_005b3c90
          (CSound *this_ptr,float listener_orient_x,float listener_orient_y,float listener_orient_z)

{
  g_SoundListenerOrient.x = listener_orient_x;
  g_SoundListenerOrient.y = listener_orient_y;
  g_SoundListenerOrient.z = listener_orient_z;
  sound_sndmain_cpp_set3DListenerOrientRight_FUN_005ab6e0
            (listener_orient_x,listener_orient_y,listener_orient_z);
  return;
}


// Assembly code:
// 005b3c90: MOV EAX,dword ptr [ESP + 0x8]
//   Label: core_sound.cpp_CSound_set3DListenerOrientRight_FUN_005b3c90
//   XREF to: Stack[0x8] (READ)
// 005b3c94: MOV [0x03f6af88],EAX
//   XREF to: 03f6af88 (WRITE)
// 005b3c99: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 005b3c9d: MOV [0x03f6af8c],EAX
//   XREF to: 03f6af8c (WRITE)
// 005b3ca2: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x10] (READ)
// 005b3ca6: PUSH EAX
// 005b3ca7: PUSH dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 005b3cab: PUSH dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005b3caf: MOV [0x03f6af90],EAX
//   XREF to: 03f6af90 (WRITE)
// 005b3cb4: CALL sound_sndmain.cpp_set3DListenerOrientRight_FUN_005ab6e0
//   XREF to: 005ab6e0 (UNCONDITIONAL_CALL)
// 005b3cb9: ADD ESP,0xc
// 005b3cbc: RET
