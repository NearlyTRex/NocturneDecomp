// Name: crt_unknown.c_fflush_FUN_005c1f9c
// Address: 005c1f9c
// Address Range: [[005c1f9c, 005c1fd6]]
// Convention: __cdecl
// Signature: void __cdecl crt_unknown_c_fflush_FUN_005c1f9c(_FILE *stream)

#include "nocturne.h"

void __cdecl _fflush(_FILE *stream)

{
  _FILE *p_Var1;
  int iVar2;
  
  p_Var1 = stream + *(int *)(*(int *)stream + 4);
  if (*(int *)(p_Var1 + 4) != 0) {
    iVar2 = FUN_005c8dfc(*(int *)(p_Var1 + 4));
    if (iVar2 != 0) {
      return;
    }
    p_Var1 = stream + *(int *)(*(int *)stream + 4);
  }
  FUN_005c8e45(p_Var1,2);
  return;
}
