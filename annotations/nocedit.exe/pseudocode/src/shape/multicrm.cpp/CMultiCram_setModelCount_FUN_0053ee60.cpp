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
