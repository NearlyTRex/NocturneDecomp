// Name: sound_sndmain.cpp_CSfxSample_FUN_005a8520
// Address: 005a8520
// Address Range: [[005a8520, 005a8549]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_CSfxSample_FUN_005a8520(CSfxSample * this_ptr)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_CSfxSample_FUN_005a8520(CSfxSample *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (this_ptr->sample_info).bit_depth * (this_ptr->sample_info).num_channels;
  iVar2 = iVar1 >> 0x1f;
  return ((int)((iVar1 + iVar2 * -8) - (uint)(iVar2 << 2 < 0)) >> 3) *
         (this_ptr->sample_info).total_bytes;
}


// Assembly code:
// 005a8520: PUSH EBX
//   Label: sound_sndmain.cpp_CSfxSample_FUN_005a8520
// 005a8521: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005a8525: MOV EBX,dword ptr [ECX + 0x108]
// 005a852b: MOV EDX,dword ptr [ECX + 0x104]
// 005a8531: IMUL EDX,EBX
// 005a8534: MOV EAX,EDX
// 005a8536: SAR EDX,0x1f
// 005a8539: SHL EDX,0x3
// 005a853c: SBB EAX,EDX
// 005a853e: SAR EAX,0x3
// 005a8541: IMUL EAX,dword ptr [ECX + 0x110]
// 005a8548: POP EBX
// 005a8549: RET
