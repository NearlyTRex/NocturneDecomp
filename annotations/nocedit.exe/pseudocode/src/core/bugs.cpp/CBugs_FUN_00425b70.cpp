// Name: core_bugs.cpp_CBugs_FUN_00425b70
// Address: 00425b70
// Address Range: [[00425b70, 00425cbc]]
// Convention: __cdecl
// Signature: int __cdecl core_bugs_cpp_CBugs_FUN_00425b70(CBugs *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

int __cdecl core_bugs_cpp_CBugs_FUN_00425b70(CBugs *this_ptr)

{
  int iVar1;
  float fVar2;
  float in_stack_0000000c;
  
  iVar1 = (int)ROUND(ROUND((in_stack_0000000c - this_ptr->grid_origin_z) * (1.0 / 0.5f)));
  if ((-1 < iVar1) && (iVar1 < 0xb)) {
    core_bugs_cpp_FUN_00427ba0();
    core_bugs_cpp_FUN_00427ba0();
    fVar2 = core_bugs_cpp_FUN_00427ba0();
    return (int)fVar2;
  }
  fVar2 = core_bugs_cpp_FUN_00427ba0();
  return (int)fVar2;
}
