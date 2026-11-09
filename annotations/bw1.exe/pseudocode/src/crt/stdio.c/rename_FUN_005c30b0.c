// Name: crt_stdio.c_rename_FUN_005c30b0
// Address: 005c30b0
// Address Range: [[005c30b0, 005c30d0]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_stdio_c_rename_FUN_005c30b0(char *old_filename,char *new_filename)

#include "nocturne.h"

int __watcallStack _rename(char *old_filename,char *new_filename)

{
  BOOL BVar1;
  int iVar2;
  
  BVar1 = MoveFileA(old_filename,new_filename);
  if (BVar1 == 0) {
    iVar2 = FUN_005c862c();
    return iVar2;
  }
  return 0;
}
