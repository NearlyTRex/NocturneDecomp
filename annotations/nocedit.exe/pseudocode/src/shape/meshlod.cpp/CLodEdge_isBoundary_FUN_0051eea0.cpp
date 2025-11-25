// Name: shape_meshlod.cpp_CLodEdge_isBoundary_FUN_0051eea0
// Address: 0051eea0
// Address Range: [[0051eea0, 0051eeb0]]
// Convention: __cdecl
// Signature: int shape_meshlod.cpp_CLodEdge_isBoundary_FUN_0051eea0(CLodEdge * this_ptr)

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_CLodEdge_isBoundary_FUN_0051eea0(CLodEdge *this_ptr)

{
  return (uint)(this_ptr->adjacent_tri_count < 2);
}


// Assembly code:
// 0051eea0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_meshlod.cpp_CLodEdge_isBoundary_FUN_0051eea0
//   XREF to: Stack[0x4] (READ)
// 0051eea4: CMP dword ptr [EAX + 0x24],0x2
// 0051eea8: SETL AL
// 0051eeab: AND EAX,0xff
// 0051eeb0: RET
