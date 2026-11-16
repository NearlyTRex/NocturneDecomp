// Name: crt_unknown.c_FUN_005b1d74
// Address: 005b1d74
// Address Range: [[005b1d74, 005b1e81]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005b1d74(short *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005b1d74(short *param_1,int param_2)

{
  uint *puVar1;
  short *psVar2;
  void *ptr;
  void *pvVar3;
  short sVar4;
  short sVar5;
  byte *puVar6;
  short *psVar7;
  SIZE_T n;
  uint *dest;
  int iVar8;
  short *psVar9;
  
  dest = _DAT_02d25928;
  do {
    psVar7 = (short *)*dest;
    if (psVar7 == (short *)0x0) {
      return (int)_DAT_02d25928 - (int)dest >> 2;
    }
    sVar4 = *param_1;
    psVar9 = param_1;
    while (sVar4 != 0) {
      sVar4 = FUN_005b2060(*psVar7);
      sVar5 = FUN_005b2060(*psVar9);
      if (sVar4 != sVar5) break;
      if (*psVar7 == 0x3d) {
        iVar8 = (int)dest - (int)_DAT_02d25928 >> 2;
        if (param_2 == 0) {
          return iVar8 + 1;
        }
        ptr = (void *)*dest;
        pvVar3 = ptr;
        while (pvVar3 != (void *)0x0) {
          *dest = dest[1];
          puVar1 = dest + 1;
          dest = dest + 1;
          pvVar3 = (void *)*puVar1;
        }
        if (_DAT_02d25920 != (uint *)0x0) {
          if (*(char *)(iVar8 + (int)_DAT_02d25920) != '\0') {
            debugFree(ptr);
          }
          n = (int)dest - (int)_DAT_02d25928 >> 2;
          memmove(dest,_DAT_02d25920,n);
          _DAT_02d25920 = dest;
          if (iVar8 < (int)n) {
            puVar6 = (byte *)(iVar8 + (int)dest);
            do {
              iVar8 = iVar8 + 1;
              *puVar6 = puVar6[1];
              puVar6 = puVar6 + 1;
            } while (iVar8 < (int)n);
          }
        }
        return 0;
      }
      psVar7 = psVar7 + 1;
      psVar2 = psVar9 + 1;
      psVar9 = psVar9 + 1;
      sVar4 = *psVar2;
    }
    dest = dest + 1;
  } while( true );
}
