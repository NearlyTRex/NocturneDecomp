// Name: sound_sndmain.cpp_CSampleInfo_getStreamingFlag_FUN_005addc0
// Address: 005addc0
// Address Range: [[005addc0, 005addca]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_CSampleInfo_getStreamingFlag_FUN_005addc0(CSampleInfo * this_ptr)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_CSampleInfo_getStreamingFlag_FUN_005addc0(CSampleInfo *this_ptr)

{
  return this_ptr->streaming_flag;
}


// Assembly code:
// 005addc0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: sound_sndmain.cpp_CSampleInfo_getStreamingFlag_FUN_005addc0
//   XREF to: Stack[0x4] (READ)
// 005addc4: MOV EAX,dword ptr [EAX + 0x100]
// 005addca: RET
