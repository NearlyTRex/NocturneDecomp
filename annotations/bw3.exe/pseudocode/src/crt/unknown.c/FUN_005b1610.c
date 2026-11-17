// Name: crt_unknown.c_FUN_005b1610
// Address: 005b1610
// Address Range: [[005b1610, 005b1712]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005b1610(byte *param_1,int param_2)

#include "nocturne.h"

int FUN_005b1610(byte *param_1,int param_2)

{
  char **ppcVar1;
  byte *pbVar2;
  byte bVar3;
  char *ptr;
  char *pcVar4;
  int iVar5;
  int iVar6;
  byte *puVar7;
  byte *pbVar8;
  char **dest;
  byte *pbVar9;
  SIZE_T n;
  
  dest = g_CHAR_PTR_PTR_02d25924;
  do {
    pbVar8 = (byte *)*dest;
    if (pbVar8 == (byte *)0x0) {
      return (int)g_CHAR_PTR_PTR_02d25924 - (int)dest >> 2;
    }
    bVar3 = *param_1;
    pbVar9 = param_1;
    while (bVar3 != 0) {
      iVar5 = toupper((uint)*pbVar8);
      iVar6 = toupper((uint)*pbVar9);
      if (iVar5 != iVar6) break;
      if (*pbVar8 == 0x3d) {
        iVar5 = (int)dest - (int)g_CHAR_PTR_PTR_02d25924 >> 2;
        if (param_2 == 0) {
          return iVar5 + 1;
        }
        ptr = *dest;
        pcVar4 = ptr;
        while (pcVar4 != (char *)0x0) {
          *dest = dest[1];
          ppcVar1 = dest + 1;
          dest = dest + 1;
          pcVar4 = *ppcVar1;
        }
        if (g_CHAR_PTR_PTR_02d25920 != (char **)0x0) {
          if (*(char *)(iVar5 + (int)g_CHAR_PTR_PTR_02d25920) != '\0') {
            debugFree(ptr);
          }
          n = (int)dest - (int)g_CHAR_PTR_PTR_02d25924 >> 2;
          memmove(dest,g_CHAR_PTR_PTR_02d25920,n);
          g_CHAR_PTR_PTR_02d25920 = dest;
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
