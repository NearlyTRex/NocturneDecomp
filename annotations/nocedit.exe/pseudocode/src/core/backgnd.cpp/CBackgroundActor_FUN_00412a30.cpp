// Name: core_backgnd.cpp_CBackgroundActor_FUN_00412a30
// Address: 00412a30
// Address Range: [[00412a30, 00412a3a]]
// Convention: __cdecl
// Signature: int core_backgnd.cpp_CBackgroundActor_FUN_00412a30(CBackgroundActor * this_ptr)

#include "nocturne.h"

int __cdecl core_backgnd_cpp_CBackgroundActor_FUN_00412a30(CBackgroundActor *this_ptr)

{
  return this_ptr->ground_type;
}


// Assembly code:
// 00412a30: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_backgnd.cpp_CBackgroundActor_FUN_00412a30
//   XREF to: Stack[0x4] (READ)
// 00412a34: MOV EAX,dword ptr [EAX + 0x2d8]
// 00412a3a: RET
