// Name: core_crossbow.cpp_CCrossbow_renderTransparent_FUN_004499c0
// Address: 004499c0
// Address Range: [[004499c0, 004499e3]]
// Convention: __cdecl
// Signature: int __cdecl core_crossbow_cpp_CCrossbow_renderTransparent_FUN_004499c0(CCrossbow *this_ptr)

#include "nocturne.h"

int __cdecl core_crossbow_cpp_CCrossbow_renderTransparent_FUN_004499c0(CCrossbow *this_ptr)

{
  if (this_ptr->flame_active == 0) {
    return 0;
  }
  core_flame_cpp_CFlame_renderTransparent_FUN_004b8100(&this_ptr->bolt_flame);
  return 1;
}
