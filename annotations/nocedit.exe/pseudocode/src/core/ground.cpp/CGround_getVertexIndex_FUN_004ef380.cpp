// Name: core_ground.cpp_CGround_getVertexIndex_FUN_004ef380
// Address: 004ef380
// Address Range: [[004ef380, 004ef39c]]
// Convention: __cdecl
// Signature: int core_ground.cpp_CGround_getVertexIndex_FUN_004ef380(CGround * this_ptr, int column, int row)
// Cross-references:
//   core_ground.cpp_CGround_renderTerrainQuad_FUN_004ef990 (004ef990) at 004efa05 [UNCONDITIONAL_CALL]
//   core_ground.cpp_CGround_transformAndStoreVertex_FUN_004ef3a0 (004ef3a0) at 004ef3ce [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl
core_ground_cpp_CGround_getVertexIndex_FUN_004ef380(CGround *this_ptr,int column,int row)

{
  return (this_ptr->grid_height * 2 + 2) * row + 0x20 + column;
}


// Assembly code:
// 004ef380: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_ground.cpp_CGround_getVertexIndex_FUN_004ef380
//   XREF to: Stack[0x4] (READ)
// 004ef384: MOV EAX,dword ptr [EAX + 0x14]
// 004ef387: ADD EAX,EAX
// 004ef389: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 004ef38d: ADD EAX,0x2
// 004ef390: IMUL EAX,EDX
// 004ef393: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004ef397: ADD EAX,0x20
// 004ef39a: ADD EAX,ECX
// 004ef39c: RET
