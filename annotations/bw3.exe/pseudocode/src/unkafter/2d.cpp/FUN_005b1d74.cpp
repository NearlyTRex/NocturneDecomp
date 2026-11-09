// Name: unkafter_2d.cpp_FUN_005b1d74
// Address: 005b1d74
// Address Range: [[005b1d74, 005b1e81]]
// Convention: unknown
// Signature: int unkafter_2d_cpp_FUN_005b1d74(short *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int unkafter_2d_cpp_FUN_005b1d74(short *param_1,int param_2)

{
  int *piVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  byte *puVar7;
  short *psVar8;
  SIZE_T n;
  int *dest;
  int iVar9;
  short *psVar10;
  
  dest = _DAT_02d25928;
  do {
    psVar8 = (short *)*dest;
    if (psVar8 == (short *)0x0) {
      return (int)_DAT_02d25928 - (int)dest >> 2;
    }
    sVar5 = *param_1;
    psVar10 = param_1;
    while (sVar5 != 0) {
      sVar5 = unkafter_2d_cpp_FUN_005b2060(*psVar8);
      sVar6 = unkafter_2d_cpp_FUN_005b2060(*psVar10);
      if (sVar5 != sVar6) break;
      if (*psVar8 == 0x3d) {
        iVar9 = (int)dest - (int)_DAT_02d25928 >> 2;
        if (param_2 == 0) {
          return iVar9 + 1;
        }
        iVar3 = *dest;
        iVar4 = iVar3;
        while (iVar4 != 0) {
          *dest = dest[1];
          piVar1 = dest + 1;
          dest = dest + 1;
          iVar4 = *piVar1;
        }
        if (_DAT_02d25920 != (int *)0x0) {
          if (*(char *)(iVar9 + (int)_DAT_02d25920) != '\0') {
            FUN_005a3770(iVar3);
          }
          n = (int)dest - (int)_DAT_02d25928 >> 2;
          memmove(dest,_DAT_02d25920,n);
          _DAT_02d25920 = dest;
          if (iVar9 < (int)n) {
            puVar7 = (byte *)(iVar9 + (int)dest);
            do {
              iVar9 = iVar9 + 1;
              *puVar7 = puVar7[1];
              puVar7 = puVar7 + 1;
            } while (iVar9 < (int)n);
          }
        }
        return 0;
      }
      psVar8 = psVar8 + 1;
      psVar2 = psVar10 + 1;
      psVar10 = psVar10 + 1;
      sVar5 = *psVar2;
    }
    dest = dest + 1;
  } while( true );
}
