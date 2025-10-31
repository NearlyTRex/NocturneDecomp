// Name: engine_fileio.cpp_CCheckOutList_ctor_FUN_004bd710
// Address: 004bd710
// Address Range: [[004bd710, 004bd721]]
// Convention: __cdecl
// Signature: CCheckOutList * engine_fileio.cpp_CCheckOutList_ctor_FUN_004bd710(CCheckOutList * this_ptr)

#include "nocturne.h"

CCheckOutList * __cdecl engine_fileio_cpp_CCheckOutList_ctor_FUN_004bd710(CCheckOutList *this_ptr)

{
  this_ptr->items = (CCheckOutItem *)0x0;
  this_ptr->count = 0;
  return this_ptr;
}


// Assembly code:
// 004bd710: MOV EAX,dword ptr [ESP + 0x4]
//   Label: engine_fileio.cpp_CCheckOutList_ctor_FUN_004bd710
//   XREF to: Stack[0x4] (READ)
// 004bd714: MOV dword ptr [EAX + 0x4],0x0
// 004bd71b: MOV dword ptr [EAX],0x0
// 004bd721: RET
