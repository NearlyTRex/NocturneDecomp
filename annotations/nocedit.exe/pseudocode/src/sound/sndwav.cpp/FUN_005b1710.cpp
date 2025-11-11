// Name: sound_sndwav.cpp_FUN_005b1710
// Address: 005b1710
// Address Range: [[005b1710, 005b1728]]
// Convention: unknown
// Signature: undefined sound_sndwav.cpp_FUN_005b1710()

#include "nocturne.h"

undefined8 sound_sndwav_cpp_FUN_005b1710(void)

{
  return 0xbff0000000000000;
}


// Assembly code:
// 005b1710: SUB ESP,0x8
//   Label: sound_sndwav.cpp_FUN_005b1710
// 005b1713: XOR EDX,EDX
// 005b1715: MOV ECX,0xbff00000
// 005b171a: MOV EAX,EDX
// 005b171c: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x8] (DATA)
// 005b171f: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x4] (WRITE)
// 005b1723: MOV EDX,ECX
// 005b1725: ADD ESP,0x8
// 005b1728: RET
