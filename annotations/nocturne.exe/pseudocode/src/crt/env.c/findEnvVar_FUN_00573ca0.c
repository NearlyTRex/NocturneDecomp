// Name: crt_env.c_findEnvVar_FUN_00573ca0
// Address: 00573ca0
// Address Range: [[00573ca0, 00573da2]]
// Convention: __cdecl
// Signature: int __cdecl crt_env_c_findEnvVar_FUN_00573ca0(char *name,int delete_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl findEnvVar(char *name,int delete_flag)

{
  uint *puVar1;
  byte *pbVar2;
  byte bVar3;
  void *ptr;
  void *pvVar4;
  int iVar5;
  int iVar6;
  byte *puVar7;
  byte *pbVar8;
  uint *dest;
  byte *pbVar9;
  SIZE_T n;
  
  dest = _DAT_02de54a4;
  do {
    pbVar8 = (byte *)*dest;
    if (pbVar8 == (byte *)0x0) {
      return (int)_DAT_02de54a4 - (int)dest >> 2;
    }
    bVar3 = *name;
    pbVar9 = (byte *)name;
    while (bVar3 != 0) {
      iVar5 = toupper((uint)*pbVar8);
      iVar6 = toupper((uint)*pbVar9);
      if (iVar5 != iVar6) break;
      if (*pbVar8 == 0x3d) {
        iVar5 = (int)dest - (int)_DAT_02de54a4 >> 2;
        if (delete_flag == 0) {
          return iVar5 + 1;
        }
        ptr = (void *)*dest;
        pvVar4 = ptr;
        while (pvVar4 != (void *)0x0) {
          *dest = dest[1];
          puVar1 = dest + 1;
          dest = dest + 1;
          pvVar4 = (void *)*puVar1;
        }
        if (_DAT_02de54a0 != (uint *)0x0) {
          if (*(char *)(iVar5 + (int)_DAT_02de54a0) != '\0') {
            free(ptr);
          }
          n = (int)dest - (int)_DAT_02de54a4 >> 2;
          memmove(dest,_DAT_02de54a0,n);
          _DAT_02de54a0 = dest;
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
