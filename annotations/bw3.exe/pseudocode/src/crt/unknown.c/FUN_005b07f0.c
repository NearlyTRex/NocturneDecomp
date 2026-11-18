// Name: crt_unknown.c_FUN_005b07f0
// Address: 005b07f0
// Address Range: [[005b07f0, 005b083c]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005b07f0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_005b07f0(int param_1,uint param_2)

{
  _FILE *file;
  
  file = (_FILE *)FUN_005b0eb0(2);
  FUN_005b0ee0(g_MathErrorMessages[param_1],file);
  FUN_005b0ee0(&g_SpaceCharacter,file);
  FUN_005b0ee0(param_2,file);
  _fputc(10,file);
  return;
}
