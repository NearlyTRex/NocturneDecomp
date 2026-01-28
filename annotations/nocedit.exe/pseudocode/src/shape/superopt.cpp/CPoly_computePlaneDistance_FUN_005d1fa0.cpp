// Name: shape_superopt.cpp_CPoly_computePlaneDistance_FUN_005d1fa0
// Address: 005d1fa0
// Address Range: [[005d1fa0, 005d1fe2]]
// Convention: __cdecl
// Signature: double __cdecl shape_superopt_cpp_CPoly_computePlaneDistance_FUN_005d1fa0(CPoly *this_ptr)

#include "nocturne.h"

double __cdecl shape_superopt_cpp_CPoly_computePlaneDistance_FUN_005d1fa0(CPoly *this_ptr)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000004;
  
  iVar2 = in_stack_00000004[1] * 0x38;
  iVar1 = *(int *)(*in_stack_00000004 + 4);
  return -(*(double *)(iVar2 + 0x10 + iVar1) * *(double *)(in_stack_00000004 + 0x14) +
          *(double *)(iVar2 + iVar1) * *(double *)(in_stack_00000004 + 0x10) +
          *(double *)(iVar2 + 8 + iVar1) * *(double *)(in_stack_00000004 + 0x12));
}
