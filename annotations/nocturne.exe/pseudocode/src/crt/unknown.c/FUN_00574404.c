// Name: crt_unknown.c_FUN_00574404
// Address: 00574404
// Address Range: [[00574404, 00574511]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_00574404(short *param_1,int param_2)

#include "nocturne.h"

int FUN_00574404(short *param_1,int param_2)

{
  char **ppcVar1;
  short *psVar2;
  char *ptr;
  char *pcVar3;
  short sVar4;
  short sVar5;
  byte *puVar6;
  short *psVar7;
  SIZE_T n;
  char **dest;
  int iVar8;
  short *psVar9;
  
  dest = (char **)g_INT_02de54a8;
  do {
    psVar7 = (short *)*dest;
    if (psVar7 == (short *)0x0) {
      return g_INT_02de54a8 - (int)dest >> 2;
    }
    sVar4 = *param_1;
    psVar9 = param_1;
    while (sVar4 != 0) {
      sVar4 = FUN_005746f0(*psVar7);
      sVar5 = FUN_005746f0(*psVar9);
      if (sVar4 != sVar5) break;
      if (*psVar7 == 0x3d) {
        iVar8 = (int)dest - g_INT_02de54a8 >> 2;
        if (param_2 == 0) {
          return iVar8 + 1;
        }
        ptr = *dest;
        pcVar3 = ptr;
        while (pcVar3 != (char *)0x0) {
          *dest = dest[1];
          ppcVar1 = dest + 1;
          dest = dest + 1;
          pcVar3 = *ppcVar1;
        }
        if (g_CHAR_PTR_PTR_02de54a0 != (char **)0x0) {
          if (*(char *)(iVar8 + (int)g_CHAR_PTR_PTR_02de54a0) != '\0') {
            free(ptr);
          }
          n = (int)dest - g_INT_02de54a8 >> 2;
          memmove(dest,g_CHAR_PTR_PTR_02de54a0,n);
          g_CHAR_PTR_PTR_02de54a0 = dest;
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
