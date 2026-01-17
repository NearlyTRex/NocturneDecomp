// Name: crt_startup.c_FUN_0060d230
// Address: 0060d230
// Address Range: [[0060d230, 0060d397]]
// Convention: __cdecl
// Signature: int crt_startup.c_FUN_0060d230(UINT cp)

#include "nocturne.h"

int __cdecl crt_startup_c_FUN_0060d230(UINT cp)

{
  int iVar1;
  BOOL BVar2;
  uint uVar3;
  int iVar4;
  _cpinfo _Stack_20;
  
  if (cp == 0xffffffff) {
    cp = (*g_GetACPFunc)();
  }
  else if (cp == 0xfffffffe) {
    cp = (*g_GetOEMCPFunc)();
  }
  else {
    if (cp == 0xfffffffd) {
      crt_memory_c_memset_FUN_005fde40(&DAT_03f9c030,0,0x101);
      g_CodePage = 0;
      g_MultibyteLocaleActive = 0;
      return 0;
    }
    if (cp == 0xfffffffc) {
      crt_memory_c_memset_FUN_005fde40(&DAT_03f9c030,0,0x101);
      iVar4 = 0x81;
      do {
        iVar1 = iVar4 + 1;
        g_LeadByteTable[iVar4] = '\x01';
        iVar4 = iVar1;
      } while (iVar1 < 0xa0);
      iVar4 = 0xe0;
      do {
        iVar1 = iVar4 + 1;
        g_LeadByteTable[iVar4] = '\x01';
        iVar4 = iVar1;
      } while (iVar1 < 0xfd);
      g_CodePage = 0x3a4;
      g_MultibyteLocaleActive = 1;
      return 0;
    }
  }
  if (cp == 0) {
    cp = 1;
  }
  BVar2 = (*g_GetCPInfoFunc)(cp,&_Stack_20);
  if (BVar2 == 0) {
    return 1;
  }
  crt_memory_c_memset_FUN_005fde40(&DAT_03f9c030,0,0x101);
  g_MultibyteLocaleActive = (int)(_Stack_20.LeadByte[0] != '\0');
  for (iVar4 = 0; (_Stack_20.LeadByte[iVar4] != '\0' || (_Stack_20.LeadByte[iVar4 + 1] != '\0'));
      iVar4 = iVar4 + 2) {
    for (uVar3 = (uint)_Stack_20.LeadByte[iVar4];
        (int)uVar3 <= (int)(uint)_Stack_20.LeadByte[iVar4 + 1]; uVar3 = uVar3 + 1) {
      g_LeadByteTable[uVar3] = '\x01';
    }
  }
  if (cp != 1) {
    g_CodePage = cp;
    return 0;
  }
  g_CodePage = (*g_GetOEMCPFunc)();
  return 0;
}
