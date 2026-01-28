// Name: shape_multicrm.cpp_CMultiCram_getModelCount_FUN_0053ee40
// Address: 0053ee40
// Address Range: [[0053ee40, 0053ee4e]]
// Convention: __cdecl
// Signature: CMultiCram * __cdecl shape_multicrm_cpp_CMultiCram_getModelCount_FUN_0053ee40(CMultiCram *this_ptr,int *model_count_ptr)

#include "nocturne.h"

CMultiCram * __cdecl
shape_multicrm_cpp_CMultiCram_getModelCount_FUN_0053ee40(CMultiCram *this_ptr,int *model_count_ptr)

{
  this_ptr->model_count = *model_count_ptr;
  return this_ptr;
}
