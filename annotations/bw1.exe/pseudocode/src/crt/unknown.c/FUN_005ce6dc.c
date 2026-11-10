// Name: crt_unknown.c_FUN_005ce6dc
// Address: 005ce6dc
// Address Range: [[005ce6dc, 005ce87e]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005ce6dc(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005ce6dc(char *param_1)

{
  char cVar1;
  char *in_EAX;
  uint *ptr;
  int iVar2;
  SIZE_T n;
  ulong new_size;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  bool bVar7;
  byte bVar8;
  
  ptr = _DAT_02c9f6d4;
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
  if (_DAT_02c9f6d4 == (uint *)0x0) {
    if (bVar7) {
      return 0;
    }
    ptr = FUN_005c08d0(9);
    if (ptr == (uint *)0x0) {
      return 0xffffffff;
    }
    _DAT_02c9f6d0 = ptr + 2;
    _DAT_02c9f6d4 = ptr;
    *ptr = 0;
    ptr[1] = 0;
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
      if (_DAT_02c9f6d0 == (uint *)0x0) {
        ptr = FUN_005c08d0(new_size);
        if (ptr == (uint *)0x0) {
          return 0xffffffff;
        }
        puVar5 = _DAT_02c9f6d4;
        puVar6 = ptr;
        for (uVar3 = (uint)(iVar2 * -4) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
        }
        for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(byte *)puVar6 = *(byte *)puVar5;
          puVar5 = (uint *)((int)puVar5 + (uint)bVar8 * -2 + 1);
          puVar6 = (uint *)((int)puVar6 + (uint)bVar8 * -2 + 1);
        }
        _DAT_02c9f6d0 = ptr + (2 - iVar2);
        memset(_DAT_02c9f6d0,0,n + 1);
      }
      else {
        ptr = (uint *)realloc(ptr,new_size);
        if (ptr == (uint *)0x0) {
          return 0xffffffff;
        }
        memmove(ptr + (2 - iVar2),_DAT_02c9f6d0,n);
        _DAT_02c9f6d0 = ptr + (2 - iVar2);
      }
      ptr[1 - iVar2] = 0;
      _DAT_02c9f6d4 = ptr;
    }
    else {
      n = iVar2 - 1;
    }
  }
  ptr[n] = param_1;
  *(byte *)((int)_DAT_02c9f6d0 + n) = 0;
  return 0;
}
