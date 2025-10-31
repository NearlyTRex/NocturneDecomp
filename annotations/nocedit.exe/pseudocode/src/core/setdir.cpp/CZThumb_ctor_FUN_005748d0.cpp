// Name: core_setdir.cpp_CZThumb_ctor_FUN_005748d0
// Address: 005748d0
// Address Range: [[005748d0, 005748e7]]
// Convention: __cdecl
// Signature: CZThumb * core_setdir.cpp_CZThumb_ctor_FUN_005748d0(CZThumb * this_ptr)

#include "nocturne.h"

CZThumb * __cdecl core_setdir_cpp_CZThumb_ctor_FUN_005748d0(CZThumb *this_ptr)

{
  this_ptr->height = 0;
  this_ptr->zbuffer_data = (void *)0x0;
  this_ptr->width = this_ptr->height;
  return this_ptr;
}


// Assembly code:
// 005748d0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_setdir.cpp_CZThumb_ctor_FUN_005748d0
//   XREF to: Stack[0x4] (READ)
// 005748d4: MOV dword ptr [EAX + 0x4],0x0
// 005748db: MOV dword ptr [EAX + 0x24],0x0
// 005748e2: MOV EDX,dword ptr [EAX + 0x4]
// 005748e5: MOV dword ptr [EAX],EDX
// 005748e7: RET
