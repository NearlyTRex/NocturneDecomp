// Name: crt_unknown.c_FUN_005c5760
// Address: 005c5760
// Address Range: [[005c5760, 005c57ac]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c5760(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_005c5760(int param_1,uint param_2)

{
  _FILE *file;
  
  file = (_FILE *)FUN_005c5e20(2);
  FUN_005c5e50(*(uint *)(&DAT_0061f7d0 + param_1 * 4),file);
  FUN_005c5e50(&DAT_005f20f1,file);
  FUN_005c5e50(param_2,file);
  _fputc(10,file);
  return;
}
