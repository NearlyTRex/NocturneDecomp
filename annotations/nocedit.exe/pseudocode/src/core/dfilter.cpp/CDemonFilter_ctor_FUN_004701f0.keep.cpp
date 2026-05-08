// Name: core_dfilter.cpp_CDemonFilter_ctor_FUN_004701f0
// Address: 004701f0
// MANUAL RECONSTRUCTION
// Address Range: [[004701f0, 00470230]]
// Convention: __cdecl
// Signature: CDemonFilter * __cdecl core_dfilter_cpp_CDemonFilter_ctor_FUN_004701f0(CDemonFilter *this_ptr)

#include "nocturne.h"

CDemonFilter * __cdecl core_dfilter_cpp_CDemonFilter_ctor_FUN_004701f0(CDemonFilter *this_ptr)

{
  this_ptr->data_buffer = (void *)0x0;
  this_ptr->size = 0x40;
  this_ptr->count = 0x40;
  strcpy(this_ptr->name, "unnamed");
  return this_ptr;
}
