// Name: core_setedit.cpp_incrementTrailingNumber_FUN_00576950
// Address: 00576950
// MANUAL RECONSTRUCTION
// Address Range: [[00576950, 0057699c]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_incrementTrailingNumber_FUN_00576950(char *name)

#include "nocturne.h"

void __cdecl core_setedit_cpp_incrementTrailingNumber_FUN_00576950(char *name)

{
  byte *pbVar2;
  int iVar3;
  int iVar5;

  iVar5 = (int)strlen(name) - 1;
  if (0 < iVar5) {
    pbVar2 = (byte *)(name + iVar5);
    do {
      if ((*pbVar2 < 0x30) || (0x39 < *pbVar2)) break;
      iVar5 = iVar5 + -1;
      pbVar2 = pbVar2 + -1;
    } while (0 < iVar5);
  }
  iVar3 = atoi(name + iVar5 + 1);
  _sprintf(name + iVar5 + 1,"%d",iVar3 + 1);
  return;
}
