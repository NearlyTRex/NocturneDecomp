// Name: crt_locale.c__setmbcp_FUN_10007eb0
// Address: 10007eb0
// Address Range: [[10007eb0, 100080d2]]
// Convention: __cdecl
// Signature: int __cdecl crt_locale_c__setmbcp_FUN_10007eb0(int code_page)

#include "nocturne.h"

int __cdecl _setmbcp(int code_page)

{
  byte *pbVar1;
  uint CodePage;
  uint *puVar2;
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
  _lock(0x19);
  CodePage = getSystemCP();
  if (DAT_10016edc == CodePage) {
    _unlock(0x19);
    return 0;
  }
  if (CodePage == 0) {
    setSBCS();
    _unlock(0x19);
    return 0;
  }
  local_18 = 0;
  puVar2 = &DAT_10016f00;
  do {
    if (*puVar2 == CodePage) {
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
      _unlock(0x19);
      return 0;
    }
    puVar2 = puVar2 + 0xc;
    local_18 = local_18 + 1;
  } while (puVar2 < &DAT_10016ff0);
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
    _unlock(0x19);
    return 0;
  }
  if (DAT_10016ef4 == 0) {
    _unlock(0x19);
    return -1;
  }
  setSBCS();
  _unlock(0x19);
  return 0;
}
