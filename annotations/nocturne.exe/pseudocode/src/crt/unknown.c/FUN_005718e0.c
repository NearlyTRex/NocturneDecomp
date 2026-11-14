// Name: crt_unknown.c_FUN_005718e0
// Address: 005718e0
// Address Range: [[005718e0, 00571a47]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005718e0(UINT param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005718e0(UINT param_1)

{
  int iVar1;
  BOOL BVar2;
  uint uVar3;
  int iVar4;
  _cpinfo _Stack_20;
  
  if (param_1 == 0xffffffff) {
    param_1 = GetACP();
  }
  else if (param_1 == 0xfffffffe) {
    param_1 = GetOEMCP();
  }
  else {
    if (param_1 == 0xfffffffd) {
      memset((void *)0x2de5c40,0,0x101);
      DAT_005c2144 = 0;
      _DAT_02de5c30 = 0;
      return 0;
    }
    if (param_1 == 0xfffffffc) {
      memset((void *)0x2de5c40,0,0x101);
      iVar4 = 0x81;
      do {
        iVar1 = iVar4 + 1;
        *(byte *)(iVar4 + 0x2de5c41) = 1;
        iVar4 = iVar1;
      } while (iVar1 < 0xa0);
      iVar4 = 0xe0;
      do {
        iVar1 = iVar4 + 1;
        *(byte *)(iVar4 + 0x2de5c41) = 1;
        iVar4 = iVar1;
      } while (iVar1 < 0xfd);
      DAT_005c2144 = 0x3a4;
      _DAT_02de5c30 = 1;
      return 0;
    }
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
  BVar2 = GetCPInfo(param_1,&_Stack_20);
  if (BVar2 == 0) {
    return 1;
  }
  memset((void *)0x2de5c40,0,0x101);
  _DAT_02de5c30 = (uint)(_Stack_20.LeadByte[0] != '\0');
  for (iVar4 = 0; (_Stack_20.LeadByte[iVar4] != '\0' || (_Stack_20.LeadByte[iVar4 + 1] != '\0'));
      iVar4 = iVar4 + 2) {
    for (uVar3 = (uint)_Stack_20.LeadByte[iVar4];
        (int)uVar3 <= (int)(uint)_Stack_20.LeadByte[iVar4 + 1]; uVar3 = uVar3 + 1) {
      *(byte *)(uVar3 + 0x2de5c41) = 1;
    }
  }
  if (param_1 != 1) {
    DAT_005c2144 = param_1;
    return 0;
  }
  DAT_005c2144 = GetOEMCP();
  return 0;
}
