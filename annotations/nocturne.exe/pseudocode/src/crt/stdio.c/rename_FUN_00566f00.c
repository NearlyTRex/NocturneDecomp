// Name: crt_stdio.c_rename_FUN_00566f00
// Address: 00566f00
// Address Range: [[00566f00, 00566f20]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_stdio_c_rename_FUN_00566f00(char *old_filename,char *new_filename)

#include "nocturne.h"

int __watcallStack rename(char *old_filename,char *new_filename)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = MoveFileA(old_filename,new_filename);
  if (BVar1 == 0) {
    DVar2 = __set_errno();
    return DVar2;
  }
  return 0;
}
