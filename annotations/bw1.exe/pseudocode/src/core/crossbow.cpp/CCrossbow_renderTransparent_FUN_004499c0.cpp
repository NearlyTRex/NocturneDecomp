// Name: core_crossbow.cpp_CCrossbow_renderTransparent_FUN_004499c0
// Address: 004499c0
// Address Range: [[004499c0, 004499e3]]
// Convention: __cdecl
// Signature: int __cdecl core_crossbow_cpp_CCrossbow_renderTransparent_FUN_004499c0(CCrossbow *this_ptr)

#include "nocturne.h"

int __cdecl core_crossbow_cpp_CCrossbow_renderTransparent_FUN_004499c0(CCrossbow *this_ptr)

{
  if (*(int *)&this_ptr->field_0x578 == 0) {
    return 0;
  }
  core_flame_cpp_CFlame_renderTransparent_FUN_004b8100((CFlame *)&this_ptr->field_0x57c);
  return 1;
}
