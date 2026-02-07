// Name: core_gore.cpp_CGore_FUN_004ee1e0
// Address: 004ee1e0
// Address Range: [[004ee1e0, 004ee28a]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CGore_FUN_004ee1e0(CGore *this_ptr)

#include "nocturne.h"

int __cdecl core_gore_cpp_CGore_FUN_004ee1e0(CGore *this_ptr)

{
  int extraout_EAX;
  int iVar1;
  int iVar2;
  _FILE *in_stack_00000008;
  char local_110 [256];
  
  _fgets(local_110,0xff,in_stack_00000008);
  iVar1 = 0;
  _fscanf(in_stack_00000008,"%d\n",&DAT_02da8720);
  if (0 < DAT_02da8720) {
    do {
      iVar1 = iVar1 + 1;
      core_gore_cpp_FUN_004ed160();
    } while (iVar1 < DAT_02da8720);
  }
  iVar2 = 0;
  iVar1 = _fscanf(in_stack_00000008,"%d\n",&DAT_02d873d8);
  if (0 < DAT_02d873d8) {
    do {
      iVar2 = iVar2 + 1;
      core_gore_cpp_FUN_004ecb00();
      iVar1 = extraout_EAX;
    } while (iVar2 < DAT_02d873d8);
  }
  return iVar1;
}
