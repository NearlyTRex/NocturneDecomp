// Name: crt_stdio.c_rename_FUN_00566f00
// Address: 00566f00
// Address Range: [[00566f00, 00566f20]]
// Convention: unknown
// Signature: DWORD crt_stdio_c_rename_FUN_00566f00(LPCSTR param_1,LPCSTR param_2)

#include "nocturne.h"

DWORD rename(LPCSTR param_1,LPCSTR param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = MoveFileA(param_1,param_2);
  if (BVar1 == 0) {
    DVar2 = __set_errno();
    return DVar2;
  }
  return 0;
}
