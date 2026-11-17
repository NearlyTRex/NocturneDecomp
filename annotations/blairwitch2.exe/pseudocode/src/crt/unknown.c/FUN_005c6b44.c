// Name: crt_unknown.c_FUN_005c6b44
// Address: 005c6b44
// Address Range: [[005c6b44, 005c6ce1]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c6b44(short *param_1)

#include "nocturne.h"

uint FUN_005c6b44(short *param_1)

{
  short sVar1;
  short *psVar2;
  short *in_EAX;
  uint *ptr;
  int iVar3;
  SIZE_T n;
  ulong new_size;
  bool bVar4;
  
  ptr = (uint *)g_INT_026807e8;
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
  if (g_INT_026807e8 == 0) {
    if (bVar4) {
      return 0;
    }
    ptr = (uint *)malloc(9);
    if (ptr == (uint *)0x0) {
      return 0xffffffff;
    }
    g_CHAR_PTR_PTR_026807e0 = (char **)(ptr + 2);
    g_INT_026807e8 = (int)ptr;
    *ptr = 0;
    ptr[1] = 0;
    n = 0;
  }
  else {
    iVar3 = FUN_005c6ce4(param_1,bVar4);
    if (bVar4) {
      return 0;
    }
    if (iVar3 < 1) {
      n = -iVar3;
      new_size = n + 1 + iVar3 * -4 + 8;
      if (g_CHAR_PTR_PTR_026807e0 == (char **)0x0) {
        ptr = (uint *)malloc(new_size);
        if (ptr == (uint *)0x0) {
          return 0xffffffff;
        }
        FUN_005c4cf0(ptr,g_INT_026807e8,iVar3 * -4);
        g_CHAR_PTR_PTR_026807e0 = (char **)(ptr + (2 - iVar3));
        memset(g_CHAR_PTR_PTR_026807e0,0,n + 1);
      }
      else {
        ptr = (uint *)realloc(ptr,new_size);
        if (ptr == (uint *)0x0) {
          return 0xffffffff;
        }
        memmove(ptr + (2 - iVar3),g_CHAR_PTR_PTR_026807e0,n);
        g_CHAR_PTR_PTR_026807e0 = (char **)(ptr + (2 - iVar3));
      }
      ptr[1 - iVar3] = 0;
      g_INT_026807e8 = (int)ptr;
    }
    else {
      n = iVar3 - 1;
    }
  }
  ptr[n] = param_1;
  *(byte *)(n + (int)g_CHAR_PTR_PTR_026807e0) = 0;
  return 0;
}
