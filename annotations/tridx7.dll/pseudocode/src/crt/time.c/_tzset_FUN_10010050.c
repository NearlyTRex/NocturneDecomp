// Name: crt_time.c__tzset_FUN_10010050
// Address: 10010050
// Address Range: [[10010050, 1001032c]]
// Convention: __cdecl
// Signature: void __cdecl crt_time_c__tzset_FUN_10010050(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _tzset(void)

{
  byte bVar1;
  byte *source;
  DWORD DVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  byte bVar10;
  
  bVar10 = 0;
  _lock(0xc);
  DAT_102407a0 = 0;
  DAT_100185d0 = 0xffffffff;
  DAT_100185c0 = 0xffffffff;
  source = (byte *)getenv("TZ");
  if (source == (byte *)0x0) {
    _unlock(0xc);
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
      wcstombs(PTR_DAT_100185b0,(wchar_t *)&DAT_102407ac,0x40);
      wcstombs(PTR_DAT_100185b4,(wchar_t *)&DAT_10240800,0x40);
      PTR_DAT_100185b4[0x3f] = 0;
      PTR_DAT_100185b0[0x3f] = PTR_DAT_100185b4[0x3f];
      return;
    }
  }
  else {
    if (*source != 0) {
      pbVar7 = source;
      pbVar8 = DAT_100185b8;
      if (DAT_100185b8 == (byte *)0x0) {
LAB_100101b8:
        free(DAT_100185b8);
        uVar5 = 0xffffffff;
        pbVar7 = source;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + (uint)bVar10 * -2 + 1;
        } while (bVar1 != 0);
        DAT_100185b8 = malloc(~uVar5);
        if (DAT_100185b8 == (byte *)0x0) {
          _unlock(0xc);
          return;
        }
        uVar5 = 0xffffffff;
        pbVar7 = source;
        do {
          pbVar8 = pbVar7;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pbVar8 = pbVar7 + (uint)bVar10 * -2 + 1;
          bVar1 = *pbVar7;
          pbVar7 = pbVar8;
        } while (bVar1 != 0);
        uVar5 = ~uVar5;
        pbVar7 = pbVar8 + -uVar5;
        pbVar8 = DAT_100185b8;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(uint *)pbVar8 = *(uint *)pbVar7;
          pbVar7 = pbVar7 + (uint)bVar10 * -8 + 4;
          pbVar8 = pbVar8 + (uint)bVar10 * -8 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pbVar8 = *pbVar7;
          pbVar7 = pbVar7 + (uint)bVar10 * -2 + 1;
          pbVar8 = pbVar8 + (uint)bVar10 * -2 + 1;
        }
        _unlock(0xc);
        pbVar7 = source + 3;
        _strncpy(PTR_DAT_100185b0,(char *)source,3);
        PTR_DAT_100185b0[3] = 0;
        bVar10 = *pbVar7;
        if (bVar10 == 0x2d) {
          pbVar7 = source + 4;
        }
        lVar4 = atol((char *)pbVar7);
        DAT_10018520 = lVar4 * 0xe10;
        for (; (bVar1 = *pbVar7, bVar1 == 0x2b || (('/' < (char)bVar1 && ((char)bVar1 < ':'))));
            pbVar7 = pbVar7 + 1) {
        }
        if (*pbVar7 == 0x3a) {
          pbVar7 = pbVar7 + 1;
          lVar4 = atol((char *)pbVar7);
          DAT_10018520 = DAT_10018520 + lVar4 * 0x3c;
          bVar1 = *pbVar7;
          while (('/' < (char)bVar1 && ((char)*pbVar7 < ':'))) {
            pbVar7 = pbVar7 + 1;
            bVar1 = *pbVar7;
          }
          if (*pbVar7 == 0x3a) {
            pbVar7 = pbVar7 + 1;
            lVar4 = atol((char *)pbVar7);
            DAT_10018520 = DAT_10018520 + lVar4;
            bVar1 = *pbVar7;
            while (('/' < (char)bVar1 && ((char)*pbVar7 < ':'))) {
              pbVar7 = pbVar7 + 1;
              bVar1 = *pbVar7;
            }
          }
        }
        if (bVar10 == 0x2d) {
          DAT_10018520 = -DAT_10018520;
        }
        DAT_10018524 = (int)(char)*pbVar7;
        if (DAT_10018524 != 0) {
          _strncpy(PTR_DAT_100185b4,(char *)pbVar7,3);
          PTR_DAT_100185b4[3] = 0;
          return;
        }
        *PTR_DAT_100185b4 = 0;
        return;
      }
      do {
        bVar1 = *pbVar7;
        bVar9 = bVar1 < *pbVar8;
        if (bVar1 != *pbVar8) {
LAB_100101ab:
          iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_100101b0;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar7[1];
        bVar9 = bVar1 < pbVar8[1];
        if (bVar1 != pbVar8[1]) goto LAB_100101ab;
        pbVar7 = pbVar7 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_100101b0:
      if (iVar3 != 0) goto LAB_100101b8;
    }
    _unlock(0xc);
  }
  return;
}
