// Name: core_morph.cpp_CMorphModel_FUN_0052af30
// Address: 0052af30
// Address Range: [[0052af30, 0052af69]]
// Convention: __cdecl
// Signature: void core_morph.cpp_CMorphModel_FUN_0052af30(CMorphModel * this_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_FUN_0052af30(CMorphModel *this_ptr)

{
  float in_stack_00000008;
  
  if (in_stack_00000008 < (float)0.01) {
    return;
  }
  core_morph_cpp_CMorphModel_rotatePoints_FUN_0052af70(this_ptr);
  core_morph_cpp_FUN_0052b160();
  return;
}
