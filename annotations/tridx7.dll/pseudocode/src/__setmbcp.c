// Name: __setmbcp
// Address: 10007eb0
// Address Range: [[10007eb0, 100080d2]]
// Convention: __cdecl
// Signature: int __cdecl __setmbcp(int _CodePage)

#include "nocturne.h"

/* Library Function - Single Match
int __cdecl __setmbcp(int _CodePage)

{
  byte *pbVar1;
  UINT CodePage;
  UINT *pUVar2;
  BOOL BVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  BYTE *pBVar7;
  byte *pbVar8;
  uint *puVar9;
  byte bVar10;
  int local_18;
  _cpinfo local_14;
  
  bVar10 = 0;
  __lock(0x19);
  CodePage = getSystemCP(_CodePage);
  if (DAT_10016edc == CodePage) {
    FUN_10005a10(0x19);
    return 0;
  }
  if (CodePage == 0) {
    setSBCS();
    FUN_10005a10(0x19);
    return 0;
  }
  local_18 = 0;
  pUVar2 = &DAT_10016f00;
  do {
    if (*pUVar2 == CodePage) {
      uVar4 = 0;
      puVar9 = &DAT_10016dd8;
      for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
      }
      *(byte *)puVar9 = 0;
      do {
        pbVar8 = &DAT_10016f10 + (local_18 * 6 + uVar4) * 8;
        bVar10 = *pbVar8;
        while ((bVar10 != 0 && (pbVar8[1] != 0))) {
          uVar6 = (uint)*pbVar8;
          if (uVar6 <= pbVar8[1]) {
            bVar10 = (&DAT_10016ef8)[uVar4];
            do {
              pbVar1 = (byte *)((int)&DAT_10016dd8 + uVar6 + 1);
              *pbVar1 = *pbVar1 | bVar10;
              uVar6 = uVar6 + 1;
            } while (uVar6 <= pbVar8[1]);
          }
          pbVar8 = pbVar8 + 2;
          bVar10 = *pbVar8;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 4);
      DAT_10016edc = CodePage;
      DAT_10016ee0 = _CPtoLCID(CodePage);
      DAT_10016eec = *(uint *)(&DAT_10016f08 + local_18 * 0x30);
      DAT_10016ee8 = *(uint *)(&DAT_10016f04 + local_18 * 0x30);
      DAT_10016ef0 = *(uint *)(local_18 * 0x30 + 0x10016f0c);
      FUN_10005a10(0x19);
      return 0;
    }
    pUVar2 = pUVar2 + 0xc;
    local_18 = local_18 + 1;
  } while (pUVar2 < &DAT_10016ff0);
  BVar3 = GetCPInfo(CodePage,&local_14);
  if (BVar3 == 1) {
    puVar9 = &DAT_10016dd8;
    for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
    }
    *(byte *)puVar9 = 0;
    if (local_14.MaxCharSize < 2) {
      DAT_10016ee0 = 0;
      DAT_10016edc = 0;
    }
    else {
      pBVar7 = local_14.LeadByte;
      while ((local_14.LeadByte[0] != 0 && (pBVar7[1] != 0))) {
        uVar4 = (uint)*pBVar7;
        if (uVar4 <= pBVar7[1]) {
          do {
            pbVar8 = (byte *)((int)&DAT_10016dd8 + uVar4 + 1);
            *pbVar8 = *pbVar8 | 4;
            uVar4 = uVar4 + 1;
          } while (uVar4 <= pBVar7[1]);
        }
        pBVar7 = pBVar7 + 2;
        local_14.LeadByte[0] = *pBVar7;
      }
      uVar4 = 1;
      do {
        pbVar8 = (byte *)((int)&DAT_10016dd8 + uVar4 + 1);
        *pbVar8 = *pbVar8 | 8;
        uVar4 = uVar4 + 1;
      } while (uVar4 < 0xff);
      DAT_10016edc = CodePage;
      DAT_10016ee0 = _CPtoLCID(CodePage);
    }
    DAT_10016ee8 = 0;
    DAT_10016eec = 0;
    DAT_10016ef0 = 0;
    FUN_10005a10(0x19);
    return 0;
  }
  if (DAT_10016ef4 == 0) {
    FUN_10005a10(0x19);
    return -1;
  }
  setSBCS();
  FUN_10005a10(0x19);
  return 0;
}
