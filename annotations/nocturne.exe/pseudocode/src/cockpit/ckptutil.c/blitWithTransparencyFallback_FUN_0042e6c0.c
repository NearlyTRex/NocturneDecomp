// Name: cockpit_ckptutil.c_blitWithTransparencyFallback_FUN_0042e6c0
// Address: 0042e6c0
// Address Range: [[0042e6c0, 0042e74d]]
// Convention: unknown
// Signature: void cockpit_ckptutil_c_blitWithTransparencyFallback_FUN_0042e6c0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

#include "nocturne.h"

void cockpit_ckptutil_c_blitWithTransparencyFallback_FUN_0042e6c0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  char *pcVar2;
  int local_18;
  int local_14;
  
  if (0 < param_3) {
    local_14 = param_6;
    local_18 = 0;
    do {
      iVar1 = 0;
      if (0 < param_2) {
        pcVar2 = (char *)(param_1 + local_18);
        do {
          if (*pcVar2 == '\0') {
            *pcVar2 = *(char *)(DAT_005b761c * local_14 + iVar1 + param_5 + param_4);
          }
          iVar1 = iVar1 + 1;
          pcVar2 = pcVar2 + 1;
        } while (iVar1 < param_2);
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + param_2;
    } while (local_14 < param_6 + param_3);
  }
  return;
}
