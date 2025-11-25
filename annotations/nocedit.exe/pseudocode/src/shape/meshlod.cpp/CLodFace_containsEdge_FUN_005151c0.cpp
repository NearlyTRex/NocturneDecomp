// Name: shape_meshlod.cpp_CLodFace_containsEdge_FUN_005151c0
// Address: 005151c0
// Address Range: [[005151c0, 005151df]]
// Convention: __cdecl
// Signature: int shape_meshlod.cpp_CLodFace_containsEdge_FUN_005151c0(CLodFace * this_ptr, int edge_index)

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_CLodFace_containsEdge_FUN_005151c0(CLodFace *this_ptr,int edge_index)

{
  if (((edge_index != this_ptr->edge_idx_0) && (edge_index != this_ptr->edge_idx_1)) &&
     (edge_index != this_ptr->edge_idx_2)) {
    return 0;
  }
  return 1;
}


// Assembly code:
// 005151c0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_meshlod.cpp_CLodFace_containsEdge_FUN_005151c0
//   XREF to: Stack[0x4] (READ)
// 005151c4: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005151c8: CMP EDX,dword ptr [EAX + 0x34]
// 005151cb: JZ 0x005151d7
//   XREF to: 005151d7 (CONDITIONAL_JUMP)
// 005151cd: CMP EDX,dword ptr [EAX + 0x38]
// 005151d0: JZ 0x005151d7
//   XREF to: 005151d7 (CONDITIONAL_JUMP)
// 005151d2: CMP EDX,dword ptr [EAX + 0x3c]
// 005151d5: JNZ 0x005151dd
//   XREF to: 005151dd (CONDITIONAL_JUMP)
// 005151d7: MOV EAX,0x1
//   Label: LAB_005151d7
// 005151dc: RET
// 005151dd: XOR EAX,EAX
//   Label: LAB_005151dd
// 005151df: RET
