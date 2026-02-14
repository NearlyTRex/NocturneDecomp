// Name: shape_multicrm.cpp_CMultiCram_getModels_FUN_0053ee00
// Address: 0053ee00
// Address Range: [[0053ee00, 0053ee23]]
// Convention: __cdecl
// Signature: void * __cdecl shape_multicrm_cpp_CMultiCram_getModels_FUN_0053ee00(CMultiCram *this_ptr,CDSEModel **dest_array)

#include "nocturne.h"

void * __cdecl shape_multicrm_cpp_CMultiCram_getModels_FUN_0053ee00(CMultiCram *this_ptr,CDSEModel **dest_array)

{
  *dest_array = this_ptr->models[0];
  dest_array[1] = this_ptr->models[1];
  dest_array[2] = this_ptr->models[2];
  return dest_array;
}
