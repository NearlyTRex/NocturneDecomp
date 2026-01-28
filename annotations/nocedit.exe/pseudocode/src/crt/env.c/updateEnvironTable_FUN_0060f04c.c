// Name: crt_env.c_updateEnvironTable_FUN_0060f04c
// Address: 0060f04c
// Address Range: [[0060f04c, 0060f1ee]]
// Convention: __cdecl
// Signature: int __cdecl crt_env_c_updateEnvironTable_FUN_0060f04c(char *envstr)

#include "nocturne.h"

int __cdecl crt_env_c_updateEnvironTable_FUN_0060f04c(char *envstr)

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
  if (g_EnvironmentBlock == (char **)0x0) {
    if (bVar7) {
      return 0;
    }
    ptr = crt_memory_c_malloc_FUN_00601bb0(9);
    if (ptr == (char **)0x0) {
      return -1;
    }
    g_EnvironStringArea = ptr + 2;
    g_EnvironmentBlock = ptr;
    *ptr = (char *)0x0;
    ptr[1] = (char *)0x0;
    n = 0;
  }
  else {
    iVar2 = crt_env_c_findEnvVar_FUN_0060f1f0(envstr,(uint)bVar7);
    if (bVar7) {
      return 0;
    }
    if (iVar2 < 1) {
      n = -iVar2;
      new_size = iVar2 * -4 + 8U + n + 1;
      if (g_EnvironStringArea == (char **)0x0) {
        ptr = crt_memory_c_malloc_FUN_00601bb0(new_size);
        if (ptr == (char **)0x0) {
          return -1;
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
        crt_memory_c_memset_FUN_005fde40(g_EnvironStringArea,0,n + 1);
      }
      else {
        ptr = crt_memory_c_realloc_FUN_00601df0(ptr,new_size);
        if (ptr == (char **)0x0) {
          return -1;
        }
        crt_string_c_memmove_FUN_005fe5e0(ptr + (2 - iVar2),g_EnvironStringArea,n);
        g_EnvironStringArea = ptr + (2 - iVar2);
      }
      ptr[1 - iVar2] = (char *)0x0;
      g_EnvironmentBlock = ptr;
    }
    else {
      n = iVar2 - 1;
    }
  }
  ptr[n] = envstr;
  *(byte *)((int)g_EnvironStringArea + n) = 0;
  return 0;
}
