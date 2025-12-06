// Name: crt_unknown.c_FUN_0060d230
// Address: 0060d230
// Address Range: [[0060d230, 0060d397]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060d230()

#include "nocturne.h"

uint crt_unknown_c_FUN_0060d230(void)

{
  int iVar1;
  BOOL BVar2;
  uint uVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  UINT in_stack_00000004;
  _cpinfo _Stack_20;
  
  if (in_stack_00000004 == 0xffffffff) {
    in_stack_00000004 = (*PTR_GetACP_00611560)();
  }
  else if (in_stack_00000004 == 0xfffffffe) {
    in_stack_00000004 = (*PTR_GetOEMCP_006115b8)();
  }
  else {
    if (in_stack_00000004 == 0xfffffffd) {
      crt_memory_c_memset_FUN_005fde40(&DAT_03f9c030,0,0x101);
      g_CodePage = 0;
      g_MultibyteLocaleActive = 0;
      return 0;
    }
    if (in_stack_00000004 == 0xfffffffc) {
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
  if (in_stack_00000004 == 0) {
    in_stack_00000004 = 1;
  }
  BVar2 = (*PTR_GetCPInfo_00611564)(in_stack_00000004,&_Stack_20);
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
  if (in_stack_00000004 != 1) {
    g_CodePage = in_stack_00000004;
    return 0;
  }
  g_CodePage = (*PTR_GetOEMCP_006115b8)();
  return 0;
}
