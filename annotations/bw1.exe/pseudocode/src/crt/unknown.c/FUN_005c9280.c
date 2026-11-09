// Name: crt_unknown.c_FUN_005c9280
// Address: 005c9280
// Address Range: [[005c9280, 005c9296]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c9280(LPCSTR param_1)

#include "nocturne.h"

uint FUN_005c9280(LPCSTR param_1)

{
  DWORD DVar1;
  uint uVar2;
  BOOL BVar3;
  
  BVar3 = DeleteFileA(param_1);
  if (BVar3 != 0) {
    return 0;
  }
  DVar1 = GetLastError();
  uVar2 = FUN_005c85c0(DVar1);
  return uVar2;
}
