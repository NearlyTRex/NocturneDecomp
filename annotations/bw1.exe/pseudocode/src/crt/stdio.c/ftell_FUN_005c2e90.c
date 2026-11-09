// Name: crt_stdio.c_ftell_FUN_005c2e90
// Address: 005c2e90
// Address Range: [[005c2e90, 005c2ef6]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_ftell_FUN_005c2e90(int param_1)

#include "nocturne.h"

int __cdecl _ftell(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (((*(byte *)(param_1 + 0xc) & 0x80) != 0) && ((*(byte *)(param_1 + 0xd) & 0x10) != 0)) {
    FUN_005c9e80(param_1);
  }
  iVar2 = FUN_005c7510(*(uint *)(param_1 + 0x10));
  if (iVar2 != -1) {
    (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626600)(*(uint *)(param_1 + 0x10));
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 != 0) {
      if ((*(byte *)(param_1 + 0xd) & 0x10) == 0) {
        iVar2 = iVar2 - iVar1;
      }
      else {
        iVar2 = iVar2 + iVar1;
      }
    }
    (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626604)(*(uint *)(param_1 + 0x10));
  }
  return iVar2;
}
