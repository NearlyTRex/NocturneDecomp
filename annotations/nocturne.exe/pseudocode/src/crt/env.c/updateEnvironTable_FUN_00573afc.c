// Name: crt_env.c_updateEnvironTable_FUN_00573afc
// Address: 00573afc
// Address Range: [[00573afc, 00573c9e]]
// Convention: __cdecl
// Signature: int __cdecl crt_env_c_updateEnvironTable_FUN_00573afc(char *envstr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl updateEnvironTable(char *envstr)

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
  uint in_stack_0000000c;
  
  ptr = _DAT_02de54a4;
  bVar8 = 0;
  if (envstr == (char *)0x0) {
    return -1;
  }
  if (*envstr != '\0') {
    in_EAX = envstr + 1;
    cVar1 = *in_EAX;
    for (; (cVar1 != '\0' && (*in_EAX != '=')); in_EAX = in_EAX + 1) {
      cVar1 = in_EAX[1];
    }
  }
  if (*in_EAX == '\0') {
    return -1;
  }
  bVar7 = in_EAX[1] == '\0';
  if (_DAT_02de54a4 == (uint *)0x0) {
    if (bVar7) {
      return 0;
    }
    ptr = (uint *)malloc(9);
    if (ptr == (uint *)0x0) {
      return -1;
    }
    _DAT_02de54a0 = ptr + 2;
    _DAT_02de54a4 = ptr;
    *ptr = 0;
    ptr[1] = 0;
    n = 0;
  }
  else {
    iVar2 = findEnvVar(envstr,(uint)bVar7);
    if (bVar7) {
      return 0;
    }
    if (iVar2 < 1) {
      n = -iVar2;
      new_size = iVar2 * -4 + 8U + n + 1;
      if (_DAT_02de54a0 == (uint *)0x0) {
        ptr = (uint *)malloc(new_size);
        if (ptr == (uint *)0x0) {
          return -1;
        }
        puVar5 = _DAT_02de54a4;
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
        _DAT_02de54a0 = ptr + (2 - iVar2);
        memset(_DAT_02de54a0,0,n + 1);
      }
      else {
        ptr = (uint *)realloc(ptr,new_size);
        if (ptr == (uint *)0x0) {
          return -1;
        }
        memmove(ptr + (2 - iVar2),_DAT_02de54a0,n);
        _DAT_02de54a0 = ptr + (2 - iVar2);
      }
      ptr[1 - iVar2] = 0;
      _DAT_02de54a4 = ptr;
    }
    else {
      n = iVar2 - 1;
    }
  }
  ptr[n] = in_stack_0000000c;
  *(byte *)((int)_DAT_02de54a0 + n) = 0;
  return 0;
}
