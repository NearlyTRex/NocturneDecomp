// Name: core_union.cpp_factoryFuncUnion_FUN_005a4a50
// Address: 005a4a50
// Address Range: [[005a4a50, 005a4a6b]]
// Convention: unknown
// Signature: void core_union_cpp_factoryFuncUnion_FUN_005a4a50(void)

#include "nocturne.h"

void core_union_cpp_factoryFuncUnion_FUN_005a4a50(void)

{
  CUnion *this_ptr;
  
  this_ptr = (CUnion *)operator_new(0x11864);
  if (this_ptr == (CUnion *)0x0) {
    return;
  }
  core_union_cpp_CUnion_ctor_FUN_005a4a80(this_ptr);
  return;
}
