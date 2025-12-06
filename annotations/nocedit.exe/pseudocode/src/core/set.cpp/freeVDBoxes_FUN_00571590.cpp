// Name: core_set.cpp_freeVDBoxes_FUN_00571590
// Address: 00571590
// Address Range: [[00571590, 005715a7]]
// Convention: __cdecl
// Signature: void core_set.cpp_freeVDBoxes_FUN_00571590(SVDBox * * array)

#include "nocturne.h"

void __cdecl core_set_cpp_freeVDBoxes_FUN_00571590(SVDBox **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0xfa,&g_SVDBoxTypeInfo);
  return;
}
