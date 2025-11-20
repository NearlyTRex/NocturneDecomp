// Name: sound_sndmain.cpp_set3DListenerOrientRight_FUN_005ab6e0
// Address: 005ab6e0
// Address Range: [[005ab6e0, 005ab71d]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_set3DListenerOrientRight_FUN_005ab6e0(float orient_right_x, float orient_right_y, float orient_right_z)
// Cross-references:
//   core_sound.cpp_CSound_FUN_005b3830 (005b3830) at 005b38ce [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_initializeAudioFrame_FUN_005b2dd0 (005b2dd0) at 005b2e2b [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_set3DListenerOrientRight_FUN_005b3c90 (005b3c90) at 005b3cb4 [UNCONDITIONAL_CALL]
// Globals:
//   CSoundDevice* g_CSoundDevicePtr
//   CVector3f g_DeferredOrientRight
//   undefined4 g_DeferredOrientRight.y
//   undefined4 g_DeferredOrientRight.z

#include "nocturne.h"

void __cdecl
sound_sndmain_cpp_set3DListenerOrientRight_FUN_005ab6e0
          (float orient_right_x,float orient_right_y,float orient_right_z)

{
  g_DeferredOrientRight.x = orient_right_x;
  g_DeferredOrientRight.y = orient_right_y;
  g_DeferredOrientRight.z = orient_right_z;
  if (g_CSoundDevicePtr == (CSoundDevice *)0x0) {
    return;
  }
  (*g_CSoundDevicePtr->vtable->commitDeferredSettings)(g_CSoundDevicePtr);
  return;
}


// Assembly code:
// 005ab6e0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: sound_sndmain.cpp_set3DListenerOrientRight_FUN_005ab6e0
//   XREF to: Stack[0x4] (READ)
// 005ab6e4: MOV [0x03f693e8],EAX
//   XREF to: 03f693e8 (WRITE)
// 005ab6e9: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005ab6ed: MOV [0x03f693ec],EAX
//   XREF to: 03f693ec (WRITE)
// 005ab6f2: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 005ab6f6: MOV EDX,dword ptr [0x03f69268]
//   XREF to: 03f69268 (READ)
// 005ab6fc: MOV [0x03f693f0],EAX
//   XREF to: 03f693f0 (WRITE)
// 005ab701: TEST EDX,EDX
// 005ab703: JNZ 0x005ab706
//   XREF to: 005ab706 (CONDITIONAL_JUMP)
// 005ab705: RET
// 005ab706: PUSH dword ptr [ESP + 0xc]
//   Label: LAB_005ab706
//   XREF to: Stack[0xc] (READ)
// 005ab70a: PUSH dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005ab70e: MOV EAX,EDX
// 005ab710: PUSH dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005ab714: MOV EDX,dword ptr [EDX]
// 005ab716: PUSH EAX
// 005ab717: CALL dword ptr [EDX + 0x28]
// 005ab71a: ADD ESP,0x10
// 005ab71d: RET
