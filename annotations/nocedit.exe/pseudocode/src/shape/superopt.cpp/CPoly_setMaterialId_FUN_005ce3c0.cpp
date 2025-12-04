// Name: shape_superopt.cpp_CPoly_setMaterialId_FUN_005ce3c0
// Address: 005ce3c0
// Address Range: [[005ce3c0, 005ce3cb]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CPoly_setMaterialId_FUN_005ce3c0(CPoly * this_ptr, int material_id)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CPoly_setMaterialId_FUN_005ce3c0(CPoly *this_ptr,int material_id)

{
  this_ptr->material_id = material_id;
  return;
}


// Assembly code:
// 005ce3c0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: shape_superopt.cpp_CPoly_setMaterialId_FUN_005ce3c0
//   XREF to: Stack[0x4] (READ)
// 005ce3c4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005ce3c8: MOV dword ptr [EDX + 0x5c],EAX
// 005ce3cb: RET
