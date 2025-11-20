// Name: core_sound.cpp_resetTrainSounds_FUN_005b26f0
// Address: 005b26f0
// Address Range: [[005b26f0, 005b2759]]
// Convention: __cdecl
// Signature: void core_sound.cpp_resetTrainSounds_FUN_005b26f0(void)
// Globals:
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 DAT_0326eed8
//   undefined4 DAT_0326eedc
//   undefined4 DAT_0326eee0
//   CVector3f g_TrainVelocityVector
//   undefined4 g_TrainVelocityVector.y
//   undefined4 g_TrainVelocityVector.z
//   int g_TrainLastCameraIndex

#include "nocturne.h"

void __cdecl core_sound_cpp_resetTrainSounds_FUN_005b26f0(void)

{
  BADSPACEBASE *in_ESP;
  
  if ((float *)&stack0x00000000 == &g_TrainNoiseCooldown) {
    g_TrainLastCameraIndex = -1;
    return;
  }
  g_TrainVelocityVector.x = -*(float *)(g_CDemonSetPtr->field19_0x14f0a0 + 0xbbc0);
  g_TrainVelocityVector.y = -*(float *)(g_CDemonSetPtr->field19_0x14f0a0 + 0xbbc4);
  g_TrainVelocityVector.z = -*(float *)(g_CDemonSetPtr->field19_0x14f0a0 + 0xbbc8);
  g_TrainLastCameraIndex = -1;
  return;
}


// Assembly code:
// 005b26f0: SUB ESP,0xc
//   Label: core_sound.cpp_resetTrainSounds_FUN_005b26f0
// 005b26f3: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 005b26f8: FLD float ptr [EAX + 0x15ac60]
//   XREF to: 0326eed8 (READ)
// 005b26fe: FCHS
// 005b2700: FSTP float ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 005b2703: FLD float ptr [EAX + 0x15ac64]
//   XREF to: 0326eedc (READ)
// 005b2709: FCHS
// 005b270b: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x8] (WRITE)
// 005b270f: FLD float ptr [EAX + 0x15ac68]
//   XREF to: 0326eee0 (READ)
// 005b2715: FCHS
// 005b2717: MOV EAX,ESP
// 005b2719: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x4] (WRITE)
// 005b271d: CMP EAX,0x3f6b85c
//   XREF to: 03f6b85c (DATA)
// 005b2722: JNZ 0x005b2732
//   XREF to: 005b2732 (CONDITIONAL_JUMP)
// 005b2724: MOV dword ptr [0x03f6b86c],0xffffffff
//   XREF to: 03f6b86c (WRITE)
// 005b272e: ADD ESP,0xc
// 005b2731: RET
// 005b2732: MOV EAX,dword ptr [ESP]
//   Label: LAB_005b2732
//   XREF to: Stack[-0xc] (DATA)
// 005b2735: MOV [0x03f6b85c],EAX
//   XREF to: 03f6b85c (WRITE)
// 005b273a: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x8] (READ)
// 005b273e: MOV [0x03f6b860],EAX
//   XREF to: 03f6b860 (WRITE)
// 005b2743: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x4] (READ)
// 005b2747: MOV [0x03f6b864],EAX
//   XREF to: 03f6b864 (WRITE)
// 005b274c: MOV dword ptr [0x03f6b86c],0xffffffff
//   XREF to: 03f6b86c (WRITE)
// 005b2756: ADD ESP,0xc
// 005b2759: RET
