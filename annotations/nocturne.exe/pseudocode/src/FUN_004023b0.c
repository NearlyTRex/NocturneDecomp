// Name: FUN_004023b0
// Address: 004023b0
// Address Range: [[004023b0, 004024d0]]
// Convention: unknown
// Signature: void FUN_004023b0(char *param_1,int param_2,char *param_3)

#include "nocturne.h"

void FUN_004023b0(char *param_1,int param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  char acStack_114 [256];
  int local_14;
  
  bVar8 = 0;
  local_14 = 1;
  pcVar5 = param_3;
  if (*param_1 == '\0') {
    *param_3 = '\0';
  }
  else {
    do {
      cVar1 = *param_1;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = param_1[1];
      param_1 = param_1 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    iVar2 = FUN_00401ed0(param_3);
    pcVar5 = param_3;
    if (param_2 < iVar2) {
      do {
        cVar1 = *param_3;
        if (((cVar1 == '\0') || (((&DAT_005c168c)[(byte)(cVar1 + 1)] & 2) != 0)) || (cVar1 == '\n'))
        {
          uVar4 = (int)param_3 - (int)pcVar5;
          pcVar6 = pcVar5;
          pcVar7 = acStack_114;
          for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
            *(uint *)pcVar7 = *(uint *)pcVar6;
            pcVar6 = pcVar6 + (uint)bVar8 * -8 + 4;
            pcVar7 = pcVar7 + (uint)bVar8 * -8 + 4;
          }
          for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *pcVar7 = *pcVar6;
            pcVar6 = pcVar6 + (uint)bVar8 * -2 + 1;
            pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
          }
          acStack_114[uVar4] = '\0';
          iVar2 = FUN_00401ed0(acStack_114);
          if (param_2 < iVar2) {
            cVar1 = param_3[-1];
            pcVar6 = param_3;
            while ((param_3 = pcVar6 + -1, cVar1 != '\n' && (*param_3 != ' '))) {
              cVar1 = pcVar6[-2];
              pcVar6 = param_3;
            }
            *param_3 = '\n';
          }
          if (*param_3 == '\n') {
            pcVar5 = param_3 + 1;
          }
          if (*param_3 == '\0') {
            local_14 = 0;
          }
        }
        param_3 = param_3 + 1;
      } while (local_14 != 0);
      return;
    }
  }
  return;
}
