// Name: sound_sndwav.cpp_FUN_005b0690
// Address: 005b0690
// Address Range: [[005b0690, 005b06b3]]
// Convention: unknown
// Signature: undefined sound_sndwav.cpp_FUN_005b0690()
// Globals:
//   undefined4 DAT_03f6adb8
//   undefined4 DAT_03f6adbc
//   undefined4 DAT_03f6adc4

#include "nocturne.h"

int sound_sndwav_cpp_FUN_005b0690(void)

{
  return ((int)((DAT_03f6adb8 + (DAT_03f6adb8 >> 0x1f) * -8) -
               (uint)((DAT_03f6adb8 >> 0x1f) << 2 < 0)) >> 3) * DAT_03f6adc4 * DAT_03f6adbc;
}


// Assembly code:
// 005b0690: MOV ECX,dword ptr [0x03f6adb8]
//   Label: sound_sndwav.cpp_FUN_005b0690
//   XREF to: 03f6adb8 (READ)
// 005b0696: MOV EDX,ECX
// 005b0698: MOV EAX,ECX
// 005b069a: SAR EDX,0x1f
// 005b069d: SHL EDX,0x3
// 005b06a0: SBB EAX,EDX
// 005b06a2: SAR EAX,0x3
// 005b06a5: IMUL EAX,dword ptr [0x03f6adc4]
//   XREF to: 03f6adc4 (READ)
// 005b06ac: IMUL EAX,dword ptr [0x03f6adbc]
//   XREF to: 03f6adbc (READ)
// 005b06b3: RET
