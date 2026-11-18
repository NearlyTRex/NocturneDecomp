// Name: crt_unknown.c_FUN_005ce6dc
// Address: 005ce6dc
// Address Range: [[005ce6dc, 005ce87e]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005ce6dc(char *param_1)

#include "nocturne.h"

uint FUN_005ce6dc(char *param_1)

{
  char cVar1;
  char *in_EAX;
  char **ptr;
  int iVar2;
  SIZE_T n;
  ulong new_size;
  uint uVar3;
  int iVar4;
  char **ppcVar5;
  char **ppcVar6;
  bool bVar7;
  byte bVar8;
  
  ptr = g_EnvironmentBlock;
  bVar8 = 0;
  if (param_1 == (char *)0x0) {
    return 0xffffffff;
  }
  if (*param_1 != '\0') {
    in_EAX = param_1 + 1;
    cVar1 = *in_EAX;
    for (; (cVar1 != '\0' && (*in_EAX != '=')); in_EAX = in_EAX + 1) {
      cVar1 = in_EAX[1];
    }
  }
  if (*in_EAX == '\0') {
    return 0xffffffff;
  }
  bVar7 = in_EAX[1] == '\0';
  if (g_EnvironmentBlock == (char **)0x0) {
    if (bVar7) {
      return 0;
    }
    ptr = (char **)malloc(9);
    if (ptr == (char **)0x0) {
      return 0xffffffff;
    }
    g_EnvironStringArea = ptr + 2;
    g_EnvironmentBlock = ptr;
    *ptr = (char *)0x0;
    ptr[1] = (char *)0x0;
    n = 0;
  }
  else {
    iVar2 = FUN_005ce880(param_1,bVar7);
    if (bVar7) {
      return 0;
    }
    if (iVar2 < 1) {
      n = -iVar2;
      new_size = iVar2 * -4 + 8U + n + 1;
      if (g_EnvironStringArea == (char **)0x0) {
        ptr = (char **)malloc(new_size);
        if (ptr == (char **)0x0) {
          return 0xffffffff;
        }
        ppcVar5 = g_EnvironmentBlock;
        ppcVar6 = ptr;
        for (uVar3 = (uint)(iVar2 * -4) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *ppcVar6 = *ppcVar5;
          ppcVar5 = ppcVar5 + (uint)bVar8 * -2 + 1;
          ppcVar6 = ppcVar6 + (uint)bVar8 * -2 + 1;
        }
        for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(byte *)ppcVar6 = *(byte *)ppcVar5;
          ppcVar5 = (char **)((int)ppcVar5 + (uint)bVar8 * -2 + 1);
          ppcVar6 = (char **)((int)ppcVar6 + (uint)bVar8 * -2 + 1);
        }
        g_EnvironStringArea = ptr + (2 - iVar2);
        memset(g_EnvironStringArea,0,n + 1);
      }
      else {
        ptr = (char **)realloc(ptr,new_size);
        if (ptr == (char **)0x0) {
          return 0xffffffff;
        }
        memmove(ptr + (2 - iVar2),g_EnvironStringArea,n);
        g_EnvironStringArea = ptr + (2 - iVar2);
      }
      ptr[1 - iVar2] = (char *)0x0;
      g_EnvironmentBlock = ptr;
    }
    else {
      n = iVar2 - 1;
    }
  }
  ptr[n] = param_1;
  *(byte *)((int)g_EnvironStringArea + n) = 0;
  return 0;
}
