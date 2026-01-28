// Name: crt_unknown.c_FUN_0060fe94
// Address: 0060fe94
// Address Range: [[0060fe94, 0060ffa1]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_0060fe94(void)

#include "nocturne.h"

int crt_unknown_c_FUN_0060fe94(void)

{
  char **ppcVar1;
  short *psVar2;
  char *ptr;
  char *pcVar3;
  short sVar4;
  short sVar5;
  byte *puVar6;
  short *psVar7;
  SIZE_T n;
  char **dest;
  int iVar8;
  short *psVar9;
  short *in_stack_00000004;
  int in_stack_00000008;
  
  dest = (char **)g_EnvironInitialized;
  do {
    psVar7 = (short *)*dest;
    if (psVar7 == (short *)0x0) {
      return g_EnvironInitialized - (int)dest >> 2;
    }
    sVar4 = *in_stack_00000004;
    psVar9 = in_stack_00000004;
    while (sVar4 != 0) {
      sVar4 = crt_unknown_c_FUN_00610970();
      sVar5 = crt_unknown_c_FUN_00610970();
      if (sVar4 != sVar5) break;
      if (*psVar7 == 0x3d) {
        iVar8 = (int)dest - g_EnvironInitialized >> 2;
        if (in_stack_00000008 == 0) {
          return iVar8 + 1;
        }
        ptr = *dest;
        pcVar3 = ptr;
        while (pcVar3 != (char *)0x0) {
          *dest = dest[1];
          ppcVar1 = dest + 1;
          dest = dest + 1;
          pcVar3 = *ppcVar1;
        }
        if (g_EnvironStringArea != (char **)0x0) {
          if (*(char *)(iVar8 + (int)g_EnvironStringArea) != '\0') {
            crt_memory_c_free_FUN_00601cd0(ptr);
          }
          n = (int)dest - g_EnvironInitialized >> 2;
          crt_string_c_memmove_FUN_005fe5e0(dest,g_EnvironStringArea,n);
          g_EnvironStringArea = dest;
          if (iVar8 < (int)n) {
            puVar6 = (byte *)(iVar8 + (int)dest);
            do {
              iVar8 = iVar8 + 1;
              *puVar6 = puVar6[1];
              puVar6 = puVar6 + 1;
            } while (iVar8 < (int)n);
          }
        }
        return 0;
      }
      psVar7 = psVar7 + 1;
      psVar2 = psVar9 + 1;
      psVar9 = psVar9 + 1;
      sVar4 = *psVar2;
    }
    dest = dest + 1;
  } while( true );
}
