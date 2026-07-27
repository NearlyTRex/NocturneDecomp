// Name: cockpit_ckptutil.c_FUN_0042e060
// Address: 0042e060
// Address Range: [[0042e060, 0042e21a]]
// Convention: unknown
// Signature: void cockpit_ckptutil_c_FUN_0042e060(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_ckptutil_c_FUN_0042e060(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iStack_28;
  int iStack_24;
  int iStack_18;
  int iStack_14;
  
  iVar4 = _DAT_01bd2fa4 - _DAT_01bd2fa0;
  if (param_1 != 0) {
    pcVar5 = (code *)cockpit_ckptutil_c_FUN_0042d130();
    if (DAT_005b7624 == 8) {
      iStack_18 = param_3 + *(int *)(&DAT_01bd2fa0 + param_4 * 4);
      if (0 < param_6) {
        iStack_28 = 0;
        do {
          if (param_2 == 0) {
            (*pcVar5)(iStack_18,param_1,param_5);
          }
          else {
            iVar8 = 0;
            for (iVar7 = 0; piVar6 = (int *)(param_2 + iStack_28), iVar7 < *piVar6;
                iVar7 = iVar7 + 1) {
              iVar1 = iVar8 + 0x44;
              iVar2 = iVar8 + 4;
              iVar3 = iVar8 + 4;
              iVar8 = iVar8 + 4;
              (*pcVar5)(iStack_18 + *(int *)(iVar3 + (int)piVar6),
                        *(int *)(iVar2 + (int)piVar6) + param_1,*(uint *)(iVar1 + (int)piVar6)
                       );
            }
          }
          iStack_28 = iStack_28 + 0x84;
          iStack_18 = iStack_18 + iVar4;
          param_1 = param_1 + param_5;
        } while (iStack_28 < param_6 * 0x84);
      }
    }
    else {
      iStack_14 = *(int *)(&DAT_01bd2fa0 + param_4 * 4) + param_3 * 2;
      if (0 < param_6) {
        iStack_24 = 0;
        do {
          if (param_2 == 0) {
            (*pcVar5)(iStack_14,param_1,param_5);
          }
          else {
            iVar8 = 0;
            for (iVar7 = 0; piVar6 = (int *)(param_2 + iStack_24), iVar7 < *piVar6;
                iVar7 = iVar7 + 1) {
              iVar1 = iVar8 + 0x44;
              iVar2 = iVar8 + 4;
              iVar3 = iVar8 + 4;
              iVar8 = iVar8 + 4;
              (*pcVar5)(*(int *)(iVar3 + (int)piVar6) * 2 + iStack_14,
                        *(int *)(iVar2 + (int)piVar6) + param_1,*(uint *)(iVar1 + (int)piVar6)
                       );
            }
          }
          iStack_24 = iStack_24 + 0x84;
          iStack_14 = iStack_14 + (iVar4 / 2) * 2;
          param_1 = param_1 + param_5;
        } while (iStack_24 < param_6 * 0x84);
      }
    }
  }
  return;
}
