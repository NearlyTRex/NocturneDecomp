// Name: FUN_005b1d74
// Address: 005b1d74
// Address Range: [[005b1d74, 005b1e81]]
// Convention: unknown
// Signature: int FUN_005b1d74(short *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005b1d74(short *param_1,int param_2)

{
  int *piVar1;
  short *psVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  byte *puVar6;
  short *psVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  short *psVar11;
  
  piVar9 = _DAT_02d25928;
  do {
    psVar7 = (short *)*piVar9;
    if (psVar7 == (short *)0x0) {
      return (int)_DAT_02d25928 - (int)piVar9 >> 2;
    }
    sVar4 = *param_1;
    psVar11 = param_1;
    while (sVar4 != 0) {
      sVar4 = FUN_005b2060(*psVar7);
      sVar5 = FUN_005b2060(*psVar11);
      if (sVar4 != sVar5) break;
      if (*psVar7 == 0x3d) {
        iVar10 = (int)piVar9 - (int)_DAT_02d25928 >> 2;
        if (param_2 == 0) {
          return iVar10 + 1;
        }
        iVar8 = *piVar9;
        iVar3 = iVar8;
        while (iVar3 != 0) {
          *piVar9 = piVar9[1];
          piVar1 = piVar9 + 1;
          piVar9 = piVar9 + 1;
          iVar3 = *piVar1;
        }
        if (_DAT_02d25920 != (int *)0x0) {
          if (*(char *)(iVar10 + (int)_DAT_02d25920) != '\0') {
            FUN_005a3770(iVar8);
          }
          iVar8 = (int)piVar9 - (int)_DAT_02d25928 >> 2;
          FUN_005a54c0(piVar9,_DAT_02d25920,iVar8);
          _DAT_02d25920 = piVar9;
          if (iVar10 < iVar8) {
            puVar6 = (byte *)(iVar10 + (int)piVar9);
            do {
              iVar10 = iVar10 + 1;
              *puVar6 = puVar6[1];
              puVar6 = puVar6 + 1;
            } while (iVar10 < iVar8);
          }
        }
        return 0;
      }
      psVar7 = psVar7 + 1;
      psVar2 = psVar11 + 1;
      psVar11 = psVar11 + 1;
      sVar4 = *psVar2;
    }
    piVar9 = piVar9 + 1;
  } while( true );
}
