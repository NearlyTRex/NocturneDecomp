// Name: core_crossbow.cpp_CCrossbow_renderTransparent_FUN_00448e80
// Address: 00448e80
// Address Range: [[00448e80, 00448ea3]]
// Convention: __cdecl
// Signature: int __cdecl core_crossbow_cpp_CCrossbow_renderTransparent_FUN_00448e80(CCrossbow *this_ptr)

#include "nocturne.h"

int __cdecl core_crossbow_cpp_CCrossbow_renderTransparent_FUN_00448e80(CCrossbow *this_ptr)

{
  if (*(int *)this_ptr->unk == 0) {
    return 0;
  }
  core_flame_cpp_FUN_004ca110();
  return 1;
}
