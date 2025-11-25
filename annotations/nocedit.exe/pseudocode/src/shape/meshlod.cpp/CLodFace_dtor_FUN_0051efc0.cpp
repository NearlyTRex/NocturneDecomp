// Name: shape_meshlod.cpp_CLodFace_dtor_FUN_0051efc0
// Address: 0051efc0
// Address Range: [[0051efc0, 0051efd5]]
// Convention: __cdecl
// Signature: CLodFace * shape_meshlod.cpp_CLodFace_dtor_FUN_0051efc0(CLodFace * this_ptr)
// Function calls:
//   core_cloth.cpp_freeVectors_FUN_0043e460

#include "nocturne.h"

CLodFace * __cdecl shape_meshlod_cpp_CLodFace_dtor_FUN_0051efc0(CLodFace *this_ptr)

{
  int iVar1;
  
  iVar1 = core_cloth_cpp_freeVectors_FUN_0043e460((CVector3f **)this_ptr->edge_perpendiculars);
  return (CLodFace *)(iVar1 + -0x54);
}


// Assembly code:
// 0051efc0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_meshlod.cpp_CLodFace_dtor_FUN_0051efc0
//   XREF to: Stack[0x4] (READ)
// 0051efc4: PUSH 0x0
// 0051efc6: ADD EAX,0x54
// 0051efc9: PUSH EAX
// 0051efca: CALL core_cloth.cpp_freeVectors_FUN_0043e460
//   XREF to: 0043e460 (UNCONDITIONAL_CALL)
// 0051efcf: ADD ESP,0x8
// 0051efd2: SUB EAX,0x54
// 0051efd5: RET
