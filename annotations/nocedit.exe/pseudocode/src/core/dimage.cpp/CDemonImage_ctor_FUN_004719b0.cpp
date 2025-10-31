// Name: core_dimage.cpp_CDemonImage_ctor_FUN_004719b0
// Address: 004719b0
// Address Range: [[004719b0, 004719be]]
// Convention: __cdecl
// Signature: CDemonImage * core_dimage.cpp_CDemonImage_ctor_FUN_004719b0(CDemonImage * this_ptr)

#include "nocturne.h"

CDemonImage * __cdecl core_dimage_cpp_CDemonImage_ctor_FUN_004719b0(CDemonImage *this_ptr)

{
  this_ptr->data = (void *)0x0;
  return this_ptr;
}


// Assembly code:
// 004719b0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_dimage.cpp_CDemonImage_ctor_FUN_004719b0
//   XREF to: Stack[0x4] (READ)
// 004719b4: MOV dword ptr [EAX + 0x300],0x0
// 004719be: RET
