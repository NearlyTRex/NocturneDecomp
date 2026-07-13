// Name: FUN_10006da0
// Address: 10006da0
// Address Range: [[10006da0, 10006ee6]]
// Convention: unknown
// Signature: undefined4 FUN_10006da0(void)

#include "nocturne.h"

/* WARNING: Exceeded maximum restarts with more pending */

uint FUN_10006da0(void)

{
  int iVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  uint uVar3;
  FARPROC pFVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint unaff_EBX;
  code *unaff_EBP;
  uint unaff_EDI;
  byte *puVar8;
  byte *puVar9;
  byte auStack_14 [4];
  FARPROC local_10;
  byte auStack_c [8];
  uint local_4;
  
  local_4 = 0;
  iVar1 = __ms_p5_test_fdiv();
  if (iVar1 != 0) {
    return 1;
  }
  hModule = GetModuleHandleA("KERNEL32");
  if (hModule == (HMODULE)0x0) {
    return 0;
  }
  local_10 = GetProcAddress(hModule,"GetProcessAffinityMask");
  if (local_10 == (FARPROC)0x0) {
    return 0;
  }
  pFVar2 = GetProcAddress(hModule,"GetCurrentProcess");
  if (pFVar2 == (FARPROC)0x0) {
    return 0;
  }
  uVar3 = (*pFVar2)();
  puVar8 = auStack_c;
  puVar9 = auStack_14;
  iVar1 = (*local_10)(uVar3,puVar8);
  if (iVar1 == 0) {
    return 0;
  }
  if (unaff_EDI == 1) {
    return 0;
  }
  pFVar2 = GetProcAddress(hModule,"SetThreadAffinityMask");
  if (pFVar2 == (FARPROC)0x0) {
    return 0;
  }
  pFVar4 = GetProcAddress(hModule,"GetCurrentThread");
  if (pFVar4 == (FARPROC)0x0) {
    return 0;
  }
  iVar1 = 0;
  do {
    uVar5 = 1 << ((byte)iVar1 & 0x1f);
    if ((unaff_EDI & uVar5) != 0) {
      uVar6 = (*pFVar4)(uVar5);
      (*pFVar2)(uVar6);
      iVar7 = __ms_p5_test_fdiv();
      if (iVar7 != 0) {
        local_10 = (FARPROC)0x1;
        break;
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x20);
  uVar6 = (*pFVar4)(unaff_EBX);
  iVar1 = (*pFVar2)(uVar6);
  if (iVar1 == 0) {
    iVar1 = (*unaff_EBP)(uVar3,&stack0xffffffe4,&stack0xffffffd8);
    if (iVar1 == 0) {
      puVar9 = puVar8;
    }
    uVar3 = (*pFVar4)(puVar9);
    (*pFVar2)(uVar3);
  }
  return unaff_EBX;
}
