// Name: crt_unknown.c_fflush_FUN_005b9bbc
// Address: 005b9bbc
// Address Range: [[005b9bbc, 005b9bf6]]
// Convention: __cdecl
// Signature: void __cdecl crt_unknown_c_fflush_FUN_005b9bbc(_FILE *stream)

#include "nocturne.h"

void __cdecl _fflush(_FILE *stream)

{
  _FILE *p_Var1;
  int iVar2;
  
  p_Var1 = stream + *(int *)(*(int *)stream + 4);
  if (*(int *)(p_Var1 + 4) != 0) {
    iVar2 = FUN_005c0b3c(*(int *)(p_Var1 + 4));
    if (iVar2 != 0) {
      return;
    }
    p_Var1 = stream + *(int *)(*(int *)stream + 4);
  }
  FUN_005c0b85(p_Var1,2);
  return;
}
