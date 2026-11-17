// Name: crt_unknown.c_FUN_005b0bb0
// Address: 005b0bb0
// Address Range: [[005b0bb0, 005b0c4a]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005b0bb0(void)

#include "nocturne.h"

uint FUN_005b0bb0(void)

{
  char **ppcVar1;
  
  ppcVar1 = g_EnvironmentBlock;
  if (g_EnvironmentBlock != (char **)0x0) {
    for (; *ppcVar1 != (char *)0x0; ppcVar1 = ppcVar1 + 1) {
      if (g_EnvironStringArea != (char **)0x0) {
        if (*(char *)(((int)ppcVar1 - (int)g_EnvironmentBlock >> 2) + (int)g_EnvironStringArea) !=
            '\0') {
          debugFree(*ppcVar1);
        }
        *ppcVar1 = (char *)0x0;
      }
    }
    if (g_EnvironStringArea == (char **)0x0) {
      ppcVar1 = (char **)malloc(5);
    }
    else {
      ppcVar1 = (char **)realloc(g_EnvironmentBlock,5);
    }
    if (ppcVar1 == (char **)0x0) {
      return 0xffffffff;
    }
    g_EnvironmentBlock = ppcVar1;
    *ppcVar1 = (char *)0x0;
    g_EnvironStringArea = ppcVar1 + 1;
    *(byte *)g_EnvironStringArea = 0;
  }
  return 0;
}
