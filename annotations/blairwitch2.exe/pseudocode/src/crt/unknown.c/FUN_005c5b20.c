// Name: crt_unknown.c_FUN_005c5b20
// Address: 005c5b20
// Address Range: [[005c5b20, 005c5bba]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c5b20(void)

#include "nocturne.h"

uint FUN_005c5b20(void)

{
  char **ppcVar1;
  
  ppcVar1 = g_CHAR_PTR_PTR_026807e4;
  if (g_CHAR_PTR_PTR_026807e4 != (char **)0x0) {
    for (; *ppcVar1 != (char *)0x0; ppcVar1 = ppcVar1 + 1) {
      if (g_CHAR_PTR_PTR_026807e0 != (char **)0x0) {
        if (*(char *)(((int)ppcVar1 - (int)g_CHAR_PTR_PTR_026807e4 >> 2) +
                     (int)g_CHAR_PTR_PTR_026807e0) != '\0') {
          debugFree(*ppcVar1);
        }
        *ppcVar1 = (char *)0x0;
      }
    }
    if (g_CHAR_PTR_PTR_026807e0 == (char **)0x0) {
      ppcVar1 = (char **)malloc(5);
    }
    else {
      ppcVar1 = (char **)realloc(g_CHAR_PTR_PTR_026807e4,5);
    }
    if (ppcVar1 == (char **)0x0) {
      return 0xffffffff;
    }
    g_CHAR_PTR_PTR_026807e4 = ppcVar1;
    *ppcVar1 = (char *)0x0;
    g_CHAR_PTR_PTR_026807e0 = ppcVar1 + 1;
    *(byte *)g_CHAR_PTR_PTR_026807e0 = 0;
  }
  return 0;
}
