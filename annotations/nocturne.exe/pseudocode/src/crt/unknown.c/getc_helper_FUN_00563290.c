// Name: crt_unknown.c_getc_helper_FUN_00563290
// Address: 00563290
// Address Range: [[00563290, 005632af]]
// Convention: unknown
// Signature: int crt_unknown_c_getc_helper_FUN_00563290(int param_1)

#include "nocturne.h"

int getc_helper(int param_1)

{
  int iVar1;
  
  iVar1 = _fgetc(*(_FILE **)(param_1 + 8));
  if (iVar1 == -1) {
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
  }
  return iVar1;
}
