// Name: crt_unknown.c_FUN_005acbc0
// Address: 005acbc0
// Address Range: [[005acbc0, 005acbd6]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005acbc0(LPCSTR param_1)

#include "nocturne.h"

uint FUN_005acbc0(LPCSTR param_1)

{
  DWORD DVar1;
  uint uVar2;
  BOOL BVar3;
  
  BVar3 = DeleteFileA(param_1);
  if (BVar3 != 0) {
    return 0;
  }
  DVar1 = GetLastError();
  uVar2 = FUN_005ab400(DVar1);
  return uVar2;
}
