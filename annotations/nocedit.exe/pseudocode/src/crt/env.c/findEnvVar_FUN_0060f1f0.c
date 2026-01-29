// Name: crt_env.c_findEnvVar_FUN_0060f1f0
// Address: 0060f1f0
// Address Range: [[0060f1f0, 0060f2f2]]
// Convention: __cdecl
// Signature: int __cdecl crt_env_c_findEnvVar_FUN_0060f1f0(char *name,int delete_flag)

#include "nocturne.h"

int __cdecl findEnvVar(char *name,int delete_flag)

{
  char **ppcVar1;
  byte *pbVar2;
  byte bVar3;
  char *ptr;
  char *pcVar4;
  int iVar5;
  int iVar6;
  byte *puVar7;
  byte *pbVar8;
  char **dest;
  byte *pbVar9;
  SIZE_T n;
  
  dest = g_EnvironmentBlock;
  do {
    pbVar8 = (byte *)*dest;
    if (pbVar8 == (byte *)0x0) {
      return (int)g_EnvironmentBlock - (int)dest >> 2;
    }
    bVar3 = *name;
    pbVar9 = (byte *)name;
    while (bVar3 != 0) {
      iVar5 = toupper((uint)*pbVar8);
      iVar6 = toupper((uint)*pbVar9);
      if (iVar5 != iVar6) break;
      if (*pbVar8 == 0x3d) {
        iVar5 = (int)dest - (int)g_EnvironmentBlock >> 2;
        if (delete_flag == 0) {
          return iVar5 + 1;
        }
        ptr = *dest;
        pcVar4 = ptr;
        while (pcVar4 != (char *)0x0) {
          *dest = dest[1];
          ppcVar1 = dest + 1;
          dest = dest + 1;
          pcVar4 = *ppcVar1;
        }
        if (g_EnvironStringArea != (char **)0x0) {
          if (*(char *)(iVar5 + (int)g_EnvironStringArea) != '\0') {
            free(ptr);
          }
          n = (int)dest - (int)g_EnvironmentBlock >> 2;
          memmove(dest,g_EnvironStringArea,n);
          g_EnvironStringArea = dest;
          if (iVar5 < (int)n) {
            puVar7 = (byte *)(iVar5 + (int)dest);
            do {
              iVar5 = iVar5 + 1;
              *puVar7 = puVar7[1];
              puVar7 = puVar7 + 1;
            } while (iVar5 < (int)n);
          }
        }
        return 0;
      }
      pbVar8 = pbVar8 + 1;
      pbVar2 = pbVar9 + 1;
      pbVar9 = pbVar9 + 1;
      bVar3 = *pbVar2;
    }
    dest = dest + 1;
  } while( true );
}
