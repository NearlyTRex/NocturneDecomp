// Name: sound_mp3.cpp_CFileBitStream_getErrorFlag_FUN_0052f0d0
// Address: 0052f0d0
// Address Range: [[0052f0d0, 0052f0d7]]
// Convention: __cdecl
// Signature: int sound_mp3.cpp_CFileBitStream_getErrorFlag_FUN_0052f0d0(CFileBitStream * this_ptr)

#include "nocturne.h"

int __cdecl sound_mp3_cpp_CFileBitStream_getErrorFlag_FUN_0052f0d0(CFileBitStream *this_ptr)

{
  return this_ptr->error_flag;
}


// Assembly code:
// 0052f0d0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: sound_mp3.cpp_CFileBitStream_getErrorFlag_FUN_0052f0d0
//   XREF to: Stack[0x4] (READ)
// 0052f0d4: MOV EAX,dword ptr [EAX + 0x1c]
// 0052f0d7: RET
