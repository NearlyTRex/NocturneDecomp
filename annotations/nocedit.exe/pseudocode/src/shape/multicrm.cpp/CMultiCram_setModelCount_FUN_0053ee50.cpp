// Name: shape_multicrm.cpp_CMultiCram_setModelCount_FUN_0053ee50
// Address: 0053ee50
// Address Range: [[0053ee50, 0053ee5e]]
// Convention: __cdecl
// Signature: CMultiCram * shape_multicrm.cpp_CMultiCram_setModelCount_FUN_0053ee50(CMultiCram * this_ptr, int * model_count)

#include "nocturne.h"

CMultiCram * __cdecl
shape_multicrm_cpp_CMultiCram_setModelCount_FUN_0053ee50(CMultiCram *this_ptr,int *model_count)

{
  this_ptr->model_count = *model_count;
  return this_ptr;
}


// Assembly code:
// 0053ee50: MOV EDX,dword ptr [ESP + 0x4]
//   Label: shape_multicrm.cpp_CMultiCram_setModelCount_FUN_0053ee50
//   XREF to: Stack[0x4] (READ)
// 0053ee54: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0053ee58: MOV EAX,dword ptr [EAX]
// 0053ee5a: MOV dword ptr [EDX],EAX
// 0053ee5c: MOV EAX,EDX
// 0053ee5e: RET
