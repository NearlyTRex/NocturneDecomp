// Name: crt_unknown.c_FUN_005af800
// Address: 005af800
// Address Range: [[005af800, 005af967]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005af800(UINT param_1)

#include "nocturne.h"

uint FUN_005af800(UINT param_1)

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
      memset(g_CHAR_ARRAY_02d25940,0,0x101);
      g_UINT_00607e7c = 0;
      g_INT_02d25930 = 0;
      return 0;
    }
    if (param_1 == 0xfffffffc) {
      memset(g_CHAR_ARRAY_02d25940,0,0x101);
      iVar4 = 0x81;
      do {
        iVar1 = iVar4 + 1;
        g_CHAR_ARRAY_02d25941[iVar4] = '\x01';
        iVar4 = iVar1;
      } while (iVar1 < 0xa0);
      iVar4 = 0xe0;
      do {
        iVar1 = iVar4 + 1;
        g_CHAR_ARRAY_02d25941[iVar4] = '\x01';
        iVar4 = iVar1;
      } while (iVar1 < 0xfd);
      g_UINT_00607e7c = 0x3a4;
      g_INT_02d25930 = 1;
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
  memset(g_CHAR_ARRAY_02d25940,0,0x101);
  g_INT_02d25930 = (int)(_Stack_20.LeadByte[0] != '\0');
  for (iVar4 = 0; (_Stack_20.LeadByte[iVar4] != '\0' || (_Stack_20.LeadByte[iVar4 + 1] != '\0'));
      iVar4 = iVar4 + 2) {
    for (uVar3 = (uint)_Stack_20.LeadByte[iVar4];
        (int)uVar3 <= (int)(uint)_Stack_20.LeadByte[iVar4 + 1]; uVar3 = uVar3 + 1) {
      g_CHAR_ARRAY_02d25941[uVar3] = '\x01';
    }
  }
  if (param_1 != 1) {
    g_UINT_00607e7c = param_1;
    return 0;
  }
  g_UINT_00607e7c = GetOEMCP();
  return 0;
}
