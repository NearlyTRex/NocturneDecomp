// Name: core_dfilter.cpp_CDemonFilter_dtor_FUN_00470240
// Address: 00470240
// Address Range: [[00470240, 00470251]]
// Convention: __cdecl
// Signature: CDemonFilter * __cdecl core_dfilter_cpp_CDemonFilter_dtor_FUN_00470240(CDemonFilter *this_ptr,uint flags)

#include "nocturne.h"

CDemonFilter * __cdecl
core_dfilter_cpp_CDemonFilter_dtor_FUN_00470240(CDemonFilter *this_ptr,uint flags)

{
  core_dfilter_cpp_CDemonFilter_freeMemory_FUN_004702c0(this_ptr);
  return this_ptr;
}
