// Name: crt_stdio.c_rename_FUN_00566f00
// Address: 00566f00
// Address Range: [[00566f00, 00566f20]]
// Convention: unknown
// Signature: undefined4 crt_stdio_c_rename_FUN_00566f00(LPCSTR param_1,LPCSTR param_2)

#include "nocturne.h"

uint rename(LPCSTR param_1,LPCSTR param_2)

{
  BOOL BVar1;
  uint uVar2;
  
  BVar1 = MoveFileA(param_1,param_2);
  if (BVar1 == 0) {
    uVar2 = __set_errno();
    return uVar2;
  }
  return 0;
}
