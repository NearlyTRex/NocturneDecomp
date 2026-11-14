// Name: crt_unknown.c_FUN_005c6580
// Address: 005c6580
// Address Range: [[005c6580, 005c6682]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005c6580(byte *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005c6580(byte *param_1,int param_2)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *puVar7;
  byte *pbVar8;
  int *dest;
  byte *pbVar9;
  SIZE_T n;
  
  dest = _DAT_026807e4;
  do {
    pbVar8 = (byte *)*dest;
    if (pbVar8 == (byte *)0x0) {
      return (int)_DAT_026807e4 - (int)dest >> 2;
    }
    bVar3 = *param_1;
    pbVar9 = param_1;
    while (bVar3 != 0) {
      iVar5 = toupper((uint)*pbVar8);
      iVar6 = toupper((uint)*pbVar9);
      if (iVar5 != iVar6) break;
      if (*pbVar8 == 0x3d) {
        iVar5 = (int)dest - (int)_DAT_026807e4 >> 2;
        if (param_2 == 0) {
          return iVar5 + 1;
        }
        iVar6 = *dest;
        iVar4 = iVar6;
        while (iVar4 != 0) {
          *dest = dest[1];
          piVar1 = dest + 1;
          dest = dest + 1;
          iVar4 = *piVar1;
        }
        if (_DAT_026807e0 != (int *)0x0) {
          if (*(char *)(iVar5 + (int)_DAT_026807e0) != '\0') {
            FUN_005b86a0(iVar6);
          }
          n = (int)dest - (int)_DAT_026807e4 >> 2;
          memmove(dest,_DAT_026807e0,n);
          _DAT_026807e0 = dest;
          if (iVar5 < (int)n) {
            puVar7 = (byte *)(iVar5 + (int)dest);
            do {
              iVar5 = iVar5 + 1;
              *puVar7 = puVar7[1];
              puVar7 = puVar7 + 1;
            } while (iVar5 < (int)n);
          }
        }
        return 0;
      }
      pbVar8 = pbVar8 + 1;
      pbVar2 = pbVar9 + 1;
      pbVar9 = pbVar9 + 1;
      bVar3 = *pbVar2;
    }
    dest = dest + 1;
  } while( true );
}
