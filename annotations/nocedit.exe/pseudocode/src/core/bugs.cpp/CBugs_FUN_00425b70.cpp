// Name: core_bugs.cpp_CBugs_FUN_00425b70
// Address: 00425b70
// Address Range: [[00425b70, 00425cbc]]
// Convention: __cdecl
// Signature: int __cdecl core_bugs_cpp_CBugs_FUN_00425b70(CBugs *this_ptr)

#include "nocturne.h"

int __cdecl core_bugs_cpp_CBugs_FUN_00425b70(CBugs *this_ptr)

{
  float fVar1;
  float fVar2;
  double dVar3;
  float in_stack_00000008;
  float in_stack_0000000c;
  
  fVar1 = 1.0 / 0.5f;
  fVar2 = *(float *)(this_ptr->unk5 + 0x24);
  round
            ((double)((in_stack_00000008 - *(float *)(this_ptr->unk5 + 0x20)) * fVar1));
  dVar3 = round((double)((in_stack_0000000c - fVar2) * fVar1));
  if ((-1 < (int)ROUND(dVar3)) && ((int)ROUND(dVar3) < 0xb)) {
    core_bugs_cpp_FUN_00427ba0();
    core_bugs_cpp_FUN_00427ba0();
    fVar2 = core_bugs_cpp_FUN_00427ba0();
    return (int)fVar2;
  }
  fVar2 = core_bugs_cpp_FUN_00427ba0();
  return (int)fVar2;
}
