// Name: crt_unknown.c_FUN_005cda60
// Address: 005cda60
// Address Range: [[005cda60, 005cdaac]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005cda60(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_005cda60(int param_1,uint param_2)

{
  _FILE *file;
  
  file = (_FILE *)FUN_005ce120(2);
  FUN_005ce150(*(uint *)(&DAT_00626b50 + param_1 * 4),file);
  FUN_005ce150(&DAT_005fb299,file);
  FUN_005ce150(param_2,file);
  _fputc(10,file);
  return;
}
