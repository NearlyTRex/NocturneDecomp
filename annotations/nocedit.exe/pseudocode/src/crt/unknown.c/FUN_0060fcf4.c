// Name: crt_unknown.c_FUN_0060fcf4
// Address: 0060fcf4
// Address Range: [[0060fcf4, 0060fe91]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_0060fcf4(short *param_1)

#include "nocturne.h"

uint FUN_0060fcf4(short *param_1)

{
  short *in_EAX;
  uint *ptr;
  int iVar3;
  SIZE_T n;
  ulong new_size;
  bool bVar4;
  short *psVar2;
  short sVar1;
  
  ptr = (uint *)g_EnvironInitialized;
  if (param_1 == (short *)0x0) {
    return 0xffffffff;
  }
  if (*param_1 != 0) {
    sVar1 = param_1[1];
    psVar2 = param_1;
    while ((in_EAX = psVar2 + 1, sVar1 != 0 && (*in_EAX != 0x3d))) {
      sVar1 = psVar2[2];
      psVar2 = in_EAX;
    }
  }
  if (*in_EAX == 0) {
    return 0xffffffff;
  }
  bVar4 = in_EAX[1] == 0;
  if (g_EnvironInitialized == 0) {
    if (bVar4) {
      return 0;
    }
    ptr = malloc(9);
    if (ptr == (uint *)0x0) {
      return 0xffffffff;
    }
    g_EnvironStringArea = (char **)(ptr + 2);
    g_EnvironInitialized = (int)ptr;
    *ptr = 0;
    ptr[1] = 0;
    n = 0;
  }
  else {
    iVar3 = FUN_0060fe94(param_1,bVar4);
    if (bVar4) {
      return 0;
    }
    if (iVar3 < 1) {
      n = -iVar3;
      new_size = n + 1 + iVar3 * -4 + 8;
      if (g_EnvironStringArea == (char **)0x0) {
        ptr = malloc(new_size);
        if (ptr == (uint *)0x0) {
          return 0xffffffff;
        }
        func_0x0060cd60(ptr,g_EnvironInitialized,iVar3 * -4);
        g_EnvironStringArea = (char **)(ptr + (2 - iVar3));
        memset(g_EnvironStringArea,0,n + 1);
      }
      else {
        ptr = realloc(ptr,new_size);
        if (ptr == (uint *)0x0) {
          return 0xffffffff;
        }
        memmove(ptr + (2 - iVar3),g_EnvironStringArea,n);
        g_EnvironStringArea = (char **)(ptr + (2 - iVar3));
      }
      ptr[1 - iVar3] = 0;
      g_EnvironInitialized = (int)ptr;
    }
    else {
      n = iVar3 - 1;
    }
  }
  ptr[n] = param_1;
  *(byte *)(n + (int)g_EnvironStringArea) = 0;
  return 0;
}
