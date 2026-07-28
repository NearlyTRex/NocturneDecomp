// Name: engine_dosio.cpp_setFileAttributes_FUN_00456a30
// Address: 00456a30
// Address Range: [[00456a30, 00456a5b]]
// Convention: unknown
// Signature: bool engine_dosio_cpp_setFileAttributes_FUN_00456a30(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool engine_dosio_cpp_setFileAttributes_FUN_00456a30(void)

{
  DWORD DVar1;
  char *in_stack_00000004;
  byte in_stack_00000008;
  
  DVar1 = 0x180;
  if ((in_stack_00000008 & 8) != 0) {
    DVar1 = 0x100;
  }
  DVar1 = engine_dosio_cpp_setReadonlyAttribute_FUN_00565dd0(in_stack_00000004,DVar1);
  return DVar1 == 0;
}
