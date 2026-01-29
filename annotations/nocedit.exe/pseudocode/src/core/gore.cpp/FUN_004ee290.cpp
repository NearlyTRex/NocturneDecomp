// Name: core_gore.cpp_FUN_004ee290
// Address: 004ee290
// Address Range: [[004ee290, 004ee334]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_FUN_004ee290(CGore *this_ptr)

#include "nocturne.h"

int __cdecl core_gore_cpp_FUN_004ee290(CGore *this_ptr)

{
  int iVar1;
  int iVar2;
  _FILE *in_stack_00000008;
  
  _fprintf(in_stack_00000008,"--- Gore ---\n");
  iVar2 = 0;
  _fprintf(in_stack_00000008,"%d\n",DAT_02da8720);
  if (0 < DAT_02da8720) {
    do {
      iVar2 = iVar2 + 1;
      core_gore_cpp_FUN_004ed1c0();
    } while (iVar2 < DAT_02da8720);
  }
  iVar1 = 0;
  iVar2 = _fprintf(in_stack_00000008,"%d\n",DAT_02d873d8);
  if (0 < DAT_02d873d8) {
    do {
      iVar1 = iVar1 + 1;
      iVar2 = core_gore_cpp_FUN_004ecb90();
    } while (iVar1 < DAT_02d873d8);
  }
  return iVar2;
}
