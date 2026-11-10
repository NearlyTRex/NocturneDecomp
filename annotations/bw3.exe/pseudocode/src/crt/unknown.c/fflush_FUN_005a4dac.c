// Name: crt_unknown.c_fflush_FUN_005a4dac
// Address: 005a4dac
// Address Range: [[005a4dac, 005a4de6]]
// Convention: __cdecl
// Signature: void __cdecl crt_unknown_c_fflush_FUN_005a4dac(_FILE *stream)

#include "nocturne.h"

void __cdecl _fflush(_FILE *stream)

{
  _FILE *p_Var1;
  int iVar2;
  
  p_Var1 = stream + *(int *)(*(int *)stream + 4);
  if (*(int *)(p_Var1 + 4) != 0) {
    iVar2 = FUN_005abc3c(*(int *)(p_Var1 + 4));
    if (iVar2 != 0) {
      return;
    }
    p_Var1 = stream + *(int *)(*(int *)stream + 4);
  }
  FUN_005abc85(p_Var1,2);
  return;
}
