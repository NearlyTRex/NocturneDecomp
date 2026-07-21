// Name: FUN_00573ca0
// Address: 00573ca0
// Address Range: [[00573ca0, 00573da2]]
// Convention: unknown
// Signature: int FUN_00573ca0(char *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00573ca0(char *param_1,int param_2)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *puVar7;
  char *pcVar8;
  int *piVar9;
  char *pcVar10;
  
  piVar9 = _DAT_02de54a4;
  do {
    pcVar8 = (char *)*piVar9;
    if (pcVar8 == (char *)0x0) {
      return (int)_DAT_02de54a4 - (int)piVar9 >> 2;
    }
    cVar3 = *param_1;
    pcVar10 = param_1;
    while (cVar3 != '\0') {
      iVar5 = toupper(*pcVar8);
      iVar6 = toupper(*pcVar10);
      if (iVar5 != iVar6) break;
      if (*pcVar8 == '=') {
        iVar5 = (int)piVar9 - (int)_DAT_02de54a4 >> 2;
        if (param_2 == 0) {
          return iVar5 + 1;
        }
        iVar6 = *piVar9;
        iVar4 = iVar6;
        while (iVar4 != 0) {
          *piVar9 = piVar9[1];
          piVar1 = piVar9 + 1;
          piVar9 = piVar9 + 1;
          iVar4 = *piVar1;
        }
        if (_DAT_02de54a0 != (int *)0x0) {
          if (*(char *)(iVar5 + (int)_DAT_02de54a0) != '\0') {
            FUN_005638d0(iVar6);
          }
          iVar6 = (int)piVar9 - (int)_DAT_02de54a4 >> 2;
          memmove(piVar9,_DAT_02de54a0,iVar6);
          _DAT_02de54a0 = piVar9;
          if (iVar5 < iVar6) {
            puVar7 = (byte *)(iVar5 + (int)piVar9);
            do {
              iVar5 = iVar5 + 1;
              *puVar7 = puVar7[1];
              puVar7 = puVar7 + 1;
            } while (iVar5 < iVar6);
          }
        }
        return 0;
      }
      pcVar8 = pcVar8 + 1;
      pcVar2 = pcVar10 + 1;
      pcVar10 = pcVar10 + 1;
      cVar3 = *pcVar2;
    }
    piVar9 = piVar9 + 1;
  } while( true );
}
