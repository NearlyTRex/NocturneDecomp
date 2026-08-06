// Name: crt_unknown.c_FUN_00574404
// Address: 00574404
// Address Range: [[00574404, 00574511]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_00574404(short *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00574404(short *param_1,int param_2)

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
  
  dest = _DAT_02de54a8;
  do {
    psVar7 = (short *)*dest;
    if (psVar7 == (short *)0x0) {
      return (int)_DAT_02de54a8 - (int)dest >> 2;
    }
    sVar4 = *param_1;
    psVar9 = param_1;
    while (sVar4 != 0) {
      sVar4 = FUN_005746f0(*psVar7);
      sVar5 = FUN_005746f0(*psVar9);
      if (sVar4 != sVar5) break;
      if (*psVar7 == 0x3d) {
        iVar8 = (int)dest - (int)_DAT_02de54a8 >> 2;
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
        if (_DAT_02de54a0 != (uint *)0x0) {
          if (*(char *)(iVar8 + (int)_DAT_02de54a0) != '\0') {
            free(ptr);
          }
          n = (int)dest - (int)_DAT_02de54a8 >> 2;
          memmove(dest,_DAT_02de54a0,n);
          _DAT_02de54a0 = dest;
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
