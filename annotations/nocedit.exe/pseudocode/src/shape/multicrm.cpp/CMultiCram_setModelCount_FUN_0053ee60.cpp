// Name: shape_multicrm.cpp_CMultiCram_setModelCount_FUN_0053ee60
// Address: 0053ee60
// Address Range: [[0053ee60, 0053ee6e]]
// Convention: __cdecl
// Signature: int * shape_multicrm.cpp_CMultiCram_setModelCount_FUN_0053ee60(CMultiCram * this_ptr, int * model_count)

#include "nocturne.h"

int * __cdecl
shape_multicrm_cpp_CMultiCram_setModelCount_FUN_0053ee60(CMultiCram *this_ptr,int *model_count)

{
  this_ptr->model_count = *model_count;
  return &this_ptr->model_count;
}


// Assembly code:
// 0053ee60: MOV EDX,dword ptr [ESP + 0x4]
//   Label: shape_multicrm.cpp_CMultiCram_setModelCount_FUN_0053ee60
//   XREF to: Stack[0x4] (READ)
// 0053ee64: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0053ee68: MOV EAX,dword ptr [EAX]
// 0053ee6a: MOV dword ptr [EDX],EAX
// 0053ee6c: MOV EAX,EDX
// 0053ee6e: RET
