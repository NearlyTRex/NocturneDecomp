// Name: core_sentinel.cpp_FUN_00567d70
// Address: 00567d70
// Address Range: [[00567d70, 00567d92]]
// Convention: unknown
// Signature: undefined core_sentinel.cpp_FUN_00567d70()

#include "nocturne.h"

void core_sentinel_cpp_FUN_00567d70(void)

{
  CSentinel *this_ptr;
  
  this_ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xbec4,"..\\core\\sentinel.cpp",0x5f);
  if (this_ptr == (CSentinel *)0x0) {
    return;
  }
  core_sentinel_cpp_CSentinel_ctor_FUN_00567db0(this_ptr);
  return;
}
