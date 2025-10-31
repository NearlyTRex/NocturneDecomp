// Name: shape_multicrm.cpp_CMultiCram_getModelCount_FUN_0053ee40
// Address: 0053ee40
// Address Range: [[0053ee40, 0053ee4e]]
// Convention: __cdecl
// Signature: CMultiCram * shape_multicrm.cpp_CMultiCram_getModelCount_FUN_0053ee40(CMultiCram * this_ptr, int * model_count_ptr)

#include "nocturne.h"

CMultiCram * __cdecl
shape_multicrm_cpp_CMultiCram_getModelCount_FUN_0053ee40(CMultiCram *this_ptr,int *model_count_ptr)

{
  this_ptr->model_count = *model_count_ptr;
  return this_ptr;
}


// Assembly code:
// 0053ee40: MOV EDX,dword ptr [ESP + 0x4]
//   Label: shape_multicrm.cpp_CMultiCram_getModelCount_FUN_0053ee40
//   XREF to: Stack[0x4] (READ)
// 0053ee44: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0053ee48: MOV EAX,dword ptr [EAX]
// 0053ee4a: MOV dword ptr [EDX],EAX
// 0053ee4c: MOV EAX,EDX
// 0053ee4e: RET
