// Name: crt_env.c_updateEnvironTable_FUN_0060f04c
// Address: 0060f04c
// Address Range: [[0060f04c, 0060f1ee]]
// Convention: __cdecl
// Signature: int crt_env.c_updateEnvironTable_FUN_0060f04c(char * envstr)

#include "nocturne.h"

int __cdecl crt_env_c_updateEnvironTable_FUN_0060f04c(char *envstr)

{
  uint uVar1;
  char cVar2;
  char *in_EAX;
  char **ptr;
  int iVar3;
  char *n;
  uint uVar4;
  int iVar5;
  char **ppcVar6;
  int unaff_EDI;
  char **ppcVar7;
  bool bVar8;
  byte bVar9;
  char *in_stack_00000010;
  
  ptr = g_EnvironmentBlock;
  bVar9 = 0;
  if (envstr == (char *)0x0) {
    return -1;
  }
  if (*envstr != '\0') {
    in_EAX = envstr + 1;
    cVar2 = *in_EAX;
    for (; (cVar2 != '\0' && (*in_EAX != '=')); in_EAX = in_EAX + 1) {
      cVar2 = in_EAX[1];
    }
  }
  if (*in_EAX == '\0') {
    return -1;
  }
  bVar8 = in_EAX[1] == '\0';
  n = (char *)(uint)bVar8;
  if (g_EnvironmentBlock == (char **)0x0) {
    if (bVar8) {
      return 0;
    }
    ptr = (char **)crt_memory_c_malloc_FUN_00601bb0(9);
    if (ptr == (char **)0x0) {
      return -1;
    }
    g_EnvironStringArea = ptr + 2;
    g_EnvironmentBlock = ptr;
    *ptr = n;
    ptr[1] = n;
  }
  else {
    iVar3 = crt_env_c_findEnvVar_FUN_0060f1f0(envstr,(int)n);
    if (bVar8) {
      return 0;
    }
    if (iVar3 < 1) {
      n = (char *)-iVar3;
      uVar1 = iVar3 * -4;
      if (g_EnvironStringArea == (char **)0x0) {
        ptr = (char **)crt_memory_c_malloc_FUN_00601bb0((ulong)(n + uVar1 + 9));
        if (ptr == (char **)0x0) {
          return -1;
        }
        ppcVar6 = g_EnvironmentBlock;
        ppcVar7 = ptr;
        for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *ppcVar7 = *ppcVar6;
          ppcVar6 = ppcVar6 + (uint)bVar9 * -2 + 1;
          ppcVar7 = ppcVar7 + (uint)bVar9 * -2 + 1;
        }
        for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(byte *)ppcVar7 = *(byte *)ppcVar6;
          ppcVar6 = (char **)((int)ppcVar6 + (uint)bVar9 * -2 + 1);
          ppcVar7 = (char **)((int)ppcVar7 + (uint)bVar9 * -2 + 1);
        }
        g_EnvironStringArea = (char **)(unaff_EDI + (int)ptr);
        crt_memory_c_memset_FUN_005fde40(g_EnvironStringArea,0,uVar1 + 8);
      }
      else {
        ptr = (char **)crt_memory_c_realloc_FUN_00601df0(ptr,(ulong)(n + uVar1 + 9));
        if (ptr == (char **)0x0) {
          return -1;
        }
        crt_string_c_memmove_FUN_005fe5e0
                  ((char **)(unaff_EDI + (int)ptr),g_EnvironStringArea,(SIZE_T)n);
        g_EnvironStringArea = (char **)(unaff_EDI + (int)ptr);
      }
      ptr[1 - iVar3] = (char *)0x0;
      g_EnvironmentBlock = ptr;
    }
    else {
      n = (char *)(iVar3 - 1);
    }
  }
  ptr[(int)n] = in_stack_00000010;
  *(char *)((int)g_EnvironStringArea + (int)n) = '\0';
  return 0;
}
