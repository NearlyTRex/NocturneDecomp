// Name: core_litecone.cpp_FUN_00506ad0
// Address: 00506ad0
// Address Range: [[00506ad0, 00506af2]]
// Convention: unknown
// Signature: undefined core_litecone.cpp_FUN_00506ad0()

#include "nocturne.h"

void core_litecone_cpp_FUN_00506ad0(void)

{
  CLightCone *this_ptr;
  
  this_ptr = (CLightCone *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x22c,"..\\core\\litecone.cpp",0x26);
  if (this_ptr == (CLightCone *)0x0) {
    return;
  }
  core_litecone_cpp_FUN_00506b10(this_ptr);
  return;
}
