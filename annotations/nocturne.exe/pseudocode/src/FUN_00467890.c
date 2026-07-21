// Name: FUN_00467890
// Address: 00467890
// Address Range: [[00467890, 004678cd]]
// Convention: unknown
// Signature: undefined4 FUN_00467890(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00467890(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = engine_dosio_cpp_getFile_FUN_00456a60(&DAT_0057e1d5,param_2,&DAT_0057e1d2);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_004676c0(param_1,iVar1);
  _fclose(iVar1);
  return 1;
}
