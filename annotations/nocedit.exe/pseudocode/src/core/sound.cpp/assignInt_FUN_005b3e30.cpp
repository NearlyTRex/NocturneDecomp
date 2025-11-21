// Name: core_sound.cpp_assignInt_FUN_005b3e30
// Address: 005b3e30
// Address Range: [[005b3e30, 005b3e3e]]
// Convention: __cdecl
// Signature: int * core_sound.cpp_assignInt_FUN_005b3e30(int * dest_ptr, int * src_ptr)

#include "nocturne.h"

int * __cdecl core_sound_cpp_assignInt_FUN_005b3e30(int *dest_ptr,int *src_ptr)

{
  *dest_ptr = *src_ptr;
  return dest_ptr;
}


// Assembly code:
// 005b3e30: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_sound.cpp_assignInt_FUN_005b3e30
//   XREF to: Stack[0x4] (READ)
// 005b3e34: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005b3e38: MOV EAX,dword ptr [EAX]
// 005b3e3a: MOV dword ptr [EDX],EAX
// 005b3e3c: MOV EAX,EDX
// 005b3e3e: RET
