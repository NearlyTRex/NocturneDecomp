// Name: crt_stdio.c_rename_FUN_005a5f20
// Address: 005a5f20
// Address Range: [[005a5f20, 005a5f40]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_stdio_c_rename_FUN_005a5f20(char *old_filename,char *new_filename)

#include "nocturne.h"

int __watcallStack _rename(char *old_filename,char *new_filename)

{
  BOOL BVar1;
  int iVar2;
  
  BVar1 = MoveFileA(old_filename,new_filename);
  if (BVar1 == 0) {
    iVar2 = FUN_005ab46c();
    return iVar2;
  }
  return 0;
}
