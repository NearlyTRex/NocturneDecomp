// Name: FUN_0056bbf0
// Address: 0056bbf0
// Address Range: [[0056bbf0, 0056bc06]]
// Convention: unknown
// Signature: undefined4 FUN_0056bbf0(LPCSTR param_1)

#include "nocturne.h"

uint FUN_0056bbf0(LPCSTR param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  
  BVar1 = DeleteFileA(param_1);
  if (BVar1 != 0) {
    return 0;
  }
  DVar2 = GetLastError();
  uVar3 = FUN_0056c6d0(DVar2);
  return uVar3;
}
