// Name: sound_snddx.cpp_FUN_005b0c90
// Address: 005b0c90
// Address Range: [[005b0c90, 005b0cb3]]
// Convention: unknown
// Signature: undefined sound_snddx.cpp_FUN_005b0c90()
// Globals:
//   undefined4 DAT_03f6af10
//   undefined4 DAT_03f6af14
//   undefined4 DAT_03f6af20

#include "nocturne.h"

int sound_snddx_cpp_FUN_005b0c90(void)

{
  return ((int)((DAT_03f6af10 + (DAT_03f6af10 >> 0x1f) * -8) -
               (uint)((DAT_03f6af10 >> 0x1f) << 2 < 0)) >> 3) * DAT_03f6af20 * DAT_03f6af14;
}


// Assembly code:
// 005b0c90: MOV ECX,dword ptr [0x03f6af10]
//   Label: sound_snddx.cpp_FUN_005b0c90
//   XREF to: 03f6af10 (READ)
// 005b0c96: MOV EDX,ECX
// 005b0c98: MOV EAX,ECX
// 005b0c9a: SAR EDX,0x1f
// 005b0c9d: SHL EDX,0x3
// 005b0ca0: SBB EAX,EDX
// 005b0ca2: SAR EAX,0x3
// 005b0ca5: IMUL EAX,dword ptr [0x03f6af20]
//   XREF to: 03f6af20 (READ)
// 005b0cac: IMUL EAX,dword ptr [0x03f6af14]
//   XREF to: 03f6af14 (READ)
// 005b0cb3: RET
