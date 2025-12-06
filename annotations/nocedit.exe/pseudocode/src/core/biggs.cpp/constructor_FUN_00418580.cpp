// Name: core_biggs.cpp_constructor_FUN_00418580
// Address: 00418580
// Address Range: [[00418580, 004185a2]]
// Convention: unknown
// Signature: undefined core_biggs.cpp_constructor_FUN_00418580()

#include "nocturne.h"

void core_biggs_cpp_constructor_FUN_00418580(void)

{
  CBiggs *this_ptr;
  
  this_ptr = (CBiggs *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xccd0,"..\\core\\biggs.cpp",0x52);
  if (this_ptr == (CBiggs *)0x0) {
    return;
  }
  core_biggs_cpp_CBiggs_ctor_FUN_004185c0(this_ptr);
  return;
}
