// Name: FUN_10010050
// Address: 10010050
// Address Range: [[10010050, 1001032c]]
// Convention: unknown
// Signature: void FUN_10010050(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10010050(void)

{
  byte bVar1;
  byte *_Source;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  byte bVar9;
  
  bVar9 = 0;
  __lock(0xc);
  DAT_102407a0 = 0;
  DAT_100185d0 = 0xffffffff;
  DAT_100185c0 = 0xffffffff;
  _Source = (byte *)FUN_10010c50("TZ");
  if (_Source == (byte *)0x0) {
    FUN_10005a10(0xc);
    DVar2 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_102407a8);
    if (DVar2 != 0) {
      DAT_10018520 = DAT_102407a8 * 0x3c;
      DAT_102407a0 = 1;
      if (DAT_102407ee != 0) {
        DAT_10018520 = DAT_10018520 + DAT_102407fc * 0x3c;
      }
      if ((DAT_10240842 == 0) || (DAT_10240850 == 0)) {
        DAT_10018524 = 0;
      }
      else {
        DAT_10018524 = 1;
        _DAT_10018528 = (DAT_10240850 - DAT_102407fc) * 0x3c;
      }
      FUN_10010910(PTR_DAT_100185b0,&DAT_102407ac,0x40);
      FUN_10010910(PTR_DAT_100185b4,&DAT_10240800,0x40);
      PTR_DAT_100185b4[0x3f] = 0;
      PTR_DAT_100185b0[0x3f] = PTR_DAT_100185b4[0x3f];
      return;
    }
  }
  else {
    if (*_Source != 0) {
      pbVar6 = _Source;
      pbVar7 = DAT_100185b8;
      if (DAT_100185b8 == (byte *)0x0) {
LAB_100101b8:
        FUN_10005b30(DAT_100185b8);
        uVar4 = 0xffffffff;
        pbVar6 = _Source;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + (uint)bVar9 * -2 + 1;
        } while (bVar1 != 0);
        DAT_100185b8 = (byte *)FUN_10008830(~uVar4);
        if (DAT_100185b8 == (byte *)0x0) {
          FUN_10005a10(0xc);
          return;
        }
        uVar4 = 0xffffffff;
        pbVar6 = _Source;
        do {
          pbVar7 = pbVar6;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pbVar7 = pbVar6 + (uint)bVar9 * -2 + 1;
          bVar1 = *pbVar6;
          pbVar6 = pbVar7;
        } while (bVar1 != 0);
        uVar4 = ~uVar4;
        pbVar6 = pbVar7 + -uVar4;
        pbVar7 = DAT_100185b8;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(uint *)pbVar7 = *(uint *)pbVar6;
          pbVar6 = pbVar6 + (uint)bVar9 * -8 + 4;
          pbVar7 = pbVar7 + (uint)bVar9 * -8 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pbVar7 = *pbVar6;
          pbVar6 = pbVar6 + (uint)bVar9 * -2 + 1;
          pbVar7 = pbVar7 + (uint)bVar9 * -2 + 1;
        }
        FUN_10005a10(0xc);
        pbVar6 = _Source + 3;
        _strncpy(PTR_DAT_100185b0,(char *)_Source,3);
        PTR_DAT_100185b0[3] = 0;
        bVar9 = *pbVar6;
        if (bVar9 == 0x2d) {
          pbVar6 = _Source + 4;
        }
        iVar3 = FUN_1000fe60(pbVar6);
        DAT_10018520 = iVar3 * 0xe10;
        for (; (bVar1 = *pbVar6, bVar1 == 0x2b || (('/' < (char)bVar1 && ((char)bVar1 < ':'))));
            pbVar6 = pbVar6 + 1) {
        }
        if (*pbVar6 == 0x3a) {
          pbVar6 = pbVar6 + 1;
          iVar3 = FUN_1000fe60(pbVar6);
          DAT_10018520 = DAT_10018520 + iVar3 * 0x3c;
          bVar1 = *pbVar6;
          while (('/' < (char)bVar1 && ((char)*pbVar6 < ':'))) {
            pbVar6 = pbVar6 + 1;
            bVar1 = *pbVar6;
          }
          if (*pbVar6 == 0x3a) {
            pbVar6 = pbVar6 + 1;
            iVar3 = FUN_1000fe60(pbVar6);
            DAT_10018520 = DAT_10018520 + iVar3;
            bVar1 = *pbVar6;
            while (('/' < (char)bVar1 && ((char)*pbVar6 < ':'))) {
              pbVar6 = pbVar6 + 1;
              bVar1 = *pbVar6;
            }
          }
        }
        if (bVar9 == 0x2d) {
          DAT_10018520 = -DAT_10018520;
        }
        DAT_10018524 = (int)(char)*pbVar6;
        if (DAT_10018524 != 0) {
          _strncpy(PTR_DAT_100185b4,(char *)pbVar6,3);
          PTR_DAT_100185b4[3] = 0;
          return;
        }
        *PTR_DAT_100185b4 = 0;
        return;
      }
      do {
        bVar1 = *pbVar6;
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_100101ab:
          iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_100101b0;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_100101ab;
        pbVar6 = pbVar6 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_100101b0:
      if (iVar3 != 0) goto LAB_100101b8;
    }
    FUN_10005a10(0xc);
  }
  return;
}
