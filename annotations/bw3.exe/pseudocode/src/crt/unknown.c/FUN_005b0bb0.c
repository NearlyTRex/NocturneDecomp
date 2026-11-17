// Name: crt_unknown.c_FUN_005b0bb0
// Address: 005b0bb0
// Address Range: [[005b0bb0, 005b0c4a]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005b0bb0(void)

#include "nocturne.h"

uint FUN_005b0bb0(void)

{
  char **ppcVar1;
  
  ppcVar1 = g_CHAR_PTR_PTR_02d25924;
  if (g_CHAR_PTR_PTR_02d25924 != (char **)0x0) {
    for (; *ppcVar1 != (char *)0x0; ppcVar1 = ppcVar1 + 1) {
      if (g_CHAR_PTR_PTR_02d25920 != (char **)0x0) {
        if (*(char *)(((int)ppcVar1 - (int)g_CHAR_PTR_PTR_02d25924 >> 2) +
                     (int)g_CHAR_PTR_PTR_02d25920) != '\0') {
          debugFree(*ppcVar1);
        }
        *ppcVar1 = (char *)0x0;
      }
    }
    if (g_CHAR_PTR_PTR_02d25920 == (char **)0x0) {
      ppcVar1 = (char **)malloc(5);
    }
    else {
      ppcVar1 = (char **)realloc(g_CHAR_PTR_PTR_02d25924,5);
    }
    if (ppcVar1 == (char **)0x0) {
      return 0xffffffff;
    }
    g_CHAR_PTR_PTR_02d25924 = ppcVar1;
    *ppcVar1 = (char *)0x0;
    g_CHAR_PTR_PTR_02d25920 = ppcVar1 + 1;
    *(byte *)g_CHAR_PTR_PTR_02d25920 = 0;
  }
  return 0;
}
