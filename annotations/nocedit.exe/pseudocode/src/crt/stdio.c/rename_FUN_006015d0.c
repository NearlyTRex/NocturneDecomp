// Name: crt_stdio.c_rename_FUN_006015d0
// Address: 006015d0
// Address Range: [[006015d0, 006015f0]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_stdio_c_rename_FUN_006015d0(char *old_filename,char *new_filename)

#include "nocturne.h"

int __watcallStack rename(char *old_filename,char *new_filename)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = (*g_MoveFileAFunc)(old_filename,new_filename);
  if (BVar1 == 0) {
    DVar2 = __set_errno();
    return DVar2;
  }
  return 0;
}
