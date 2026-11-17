// Name: crt_unknown.c_FUN_00572cb0
// Address: 00572cb0
// Address Range: [[00572cb0, 00572d4a]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_00572cb0(void)

#include "nocturne.h"

uint FUN_00572cb0(void)

{
  char **ppcVar1;
  
  ppcVar1 = g_CHAR_PTR_PTR_02de54a4;
  if (g_CHAR_PTR_PTR_02de54a4 != (char **)0x0) {
    for (; *ppcVar1 != (char *)0x0; ppcVar1 = ppcVar1 + 1) {
      if (g_CHAR_PTR_PTR_02de54a0 != (char **)0x0) {
        if (*(char *)(((int)ppcVar1 - (int)g_CHAR_PTR_PTR_02de54a4 >> 2) +
                     (int)g_CHAR_PTR_PTR_02de54a0) != '\0') {
          free(*ppcVar1);
        }
        *ppcVar1 = (char *)0x0;
      }
    }
    if (g_CHAR_PTR_PTR_02de54a0 == (char **)0x0) {
      ppcVar1 = (char **)malloc(5);
    }
    else {
      ppcVar1 = (char **)realloc(g_CHAR_PTR_PTR_02de54a4,5);
    }
    if (ppcVar1 == (char **)0x0) {
      return 0xffffffff;
    }
    g_CHAR_PTR_PTR_02de54a4 = ppcVar1;
    *ppcVar1 = (char *)0x0;
    g_CHAR_PTR_PTR_02de54a0 = ppcVar1 + 1;
    *(byte *)g_CHAR_PTR_PTR_02de54a0 = 0;
  }
  return 0;
}
