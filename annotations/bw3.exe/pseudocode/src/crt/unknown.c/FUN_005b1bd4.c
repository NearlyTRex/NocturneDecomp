// Name: crt_unknown.c_FUN_005b1bd4
// Address: 005b1bd4
// Address Range: [[005b1bd4, 005b1d71]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005b1bd4(short *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005b1bd4(short *param_1)

{
  short sVar1;
  short *psVar2;
  short *in_EAX;
  uint *ptr;
  int iVar3;
  SIZE_T n;
  ulong new_size;
  bool bVar4;
  
  ptr = _DAT_02d25928;
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
  if (_DAT_02d25928 == (uint *)0x0) {
    if (bVar4) {
      return 0;
    }
    ptr = FUN_005a3650(9);
    if (ptr == (uint *)0x0) {
      return 0xffffffff;
    }
    _DAT_02d25920 = ptr + 2;
    _DAT_02d25928 = ptr;
    *ptr = 0;
    ptr[1] = 0;
    n = 0;
  }
  else {
    iVar3 = FUN_005b1d74(param_1,bVar4);
    if (bVar4) {
      return 0;
    }
    if (iVar3 < 1) {
      n = -iVar3;
      new_size = n + 1 + iVar3 * -4 + 8;
      if (_DAT_02d25920 == (uint *)0x0) {
        ptr = FUN_005a3650(new_size);
        if (ptr == (uint *)0x0) {
          return 0xffffffff;
        }
        FUN_005afd80(ptr,_DAT_02d25928,iVar3 * -4);
        _DAT_02d25920 = ptr + (2 - iVar3);
        memset(_DAT_02d25920,0,n + 1);
      }
      else {
        ptr = (uint *)realloc(ptr,new_size);
        if (ptr == (uint *)0x0) {
          return 0xffffffff;
        }
        memmove(ptr + (2 - iVar3),_DAT_02d25920,n);
        _DAT_02d25920 = ptr + (2 - iVar3);
      }
      ptr[1 - iVar3] = 0;
      _DAT_02d25928 = ptr;
    }
    else {
      n = iVar3 - 1;
    }
  }
  ptr[n] = param_1;
  *(byte *)(n + (int)_DAT_02d25920) = 0;
  return 0;
}
