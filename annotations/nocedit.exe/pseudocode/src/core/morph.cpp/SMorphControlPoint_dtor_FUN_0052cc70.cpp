// Name: core_morph.cpp_SMorphControlPoint_dtor_FUN_0052cc70
// Address: 0052cc70
// Address Range: [[0052cc70, 0052cc85]]
// Convention: __cdecl
// Signature: SMorphControlPoint * core_morph.cpp_SMorphControlPoint_dtor_FUN_0052cc70(SMorphControlPoint * this_ptr)

#include "nocturne.h"

SMorphControlPoint * __cdecl
core_morph_cpp_SMorphControlPoint_dtor_FUN_0052cc70(SMorphControlPoint *this_ptr)

{
  int extraout_EAX;
  
  core_morph_cpp_freeVectors_FUN_0052cc90((CVector3f **)(this_ptr->field0_0x0 + 8));
  return (SMorphControlPoint *)(extraout_EAX + -8);
}
