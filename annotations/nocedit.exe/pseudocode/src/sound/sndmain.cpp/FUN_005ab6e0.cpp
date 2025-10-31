// Name: sound_sndmain.cpp_FUN_005ab6e0
// Address: 005ab6e0
// Address Range: [[005ab6e0, 005ab71d]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005ab6e0()
// Cross-references:
//   core_sound.cpp_FUN_005b2dd0 (005b2dd0) at 005b2e2b [UNCONDITIONAL_CALL]
//   core_sound.cpp_FUN_005b3c90 (005b3c90) at 005b3cb4 [UNCONDITIONAL_CALL]
//   core_sound.cpp_GetChannelVolumesPlaySplashSfx_FUN_005b3830 (005b3830) at 005b38ce [UNCONDITIONAL_CALL]
// Globals:
//   CSound* g_CSoundInstance
//   undefined4 DAT_03f693e8
//   undefined4 DAT_03f693ec
//   undefined4 DAT_03f693f0

#include "nocturne.h"

/* Signature: undefined1 sound_sndmain.cpp_FUN_005ab6e0(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

void sound_sndmain_cpp_FUN_005ab6e0(void)

{
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  DAT_03f693e8 = in_stack_00000004;
  DAT_03f693ec = in_stack_00000008;
  DAT_03f693f0 = in_stack_0000000c;
  if (g_CSoundInstance == (CSound *)0x0) {
    return;
  }
  (*(code *)g_CSoundInstance->vtable->field_40)();
  return;
}


// Assembly code:
// 005ab6e0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: sound_sndmain.cpp_FUN_005ab6e0
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
