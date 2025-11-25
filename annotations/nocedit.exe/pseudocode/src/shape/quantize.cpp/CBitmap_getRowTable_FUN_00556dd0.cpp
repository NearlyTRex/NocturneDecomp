// Name: shape_quantize.cpp_CBitmap_getRowTable_FUN_00556dd0
// Address: 00556dd0
// Address Range: [[00556dd0, 00556dd7]]
// Convention: __cdecl
// Signature: void * * shape_quantize.cpp_CBitmap_getRowTable_FUN_00556dd0(CBitmap * this_ptr)

#include "nocturne.h"

void ** __cdecl shape_quantize_cpp_CBitmap_getRowTable_FUN_00556dd0(CBitmap *this_ptr)

{
  return this_ptr->row_table;
}


// Assembly code:
// 00556dd0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_quantize.cpp_CBitmap_getRowTable_FUN_00556dd0
//   XREF to: Stack[0x4] (READ)
// 00556dd4: MOV EAX,dword ptr [EAX + 0x20]
// 00556dd7: RET
