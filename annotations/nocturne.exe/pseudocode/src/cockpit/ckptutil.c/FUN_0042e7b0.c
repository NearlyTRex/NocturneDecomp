// Name: cockpit_ckptutil.c_FUN_0042e7b0
// Address: 0042e7b0
// Address Range: [[0042e7b0, 0042e9c2]]
// Convention: unknown
// Signature: void cockpit_ckptutil_c_FUN_0042e7b0(int param_1,int param_2,int param_3,int param_4,int *param_5,int param_6,uint param_7)

#include "nocturne.h"

void cockpit_ckptutil_c_FUN_0042e7b0(int param_1,int param_2,int param_3,int param_4,int *param_5,int param_6,uint param_7)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iStack_24;
  int *piStack_1c;
  int *piStack_18;
  int iStack_14;
  
  if (param_1 != 0) {
    if (param_6 < (param_2 - param_4) + 1) {
      PTR_01cc4800 = "..\\cockpit\\ckptutil.c";
      INT_01cc4804 = 0x3f0;
      core_main_c_FUN_004c8440("Invalid height array size.");
    }
    piVar1 = (int *)shape_memdbg_cpp_malloc_FUN_00564c18(param_4 * 4);
    if (piVar1 == (int *)0x0) {
      PTR_01cc4800 = "..\\cockpit\\ckptutil.c";
      INT_01cc4804 = 0x3f6;
      core_main_c_FUN_004c8440("No room for scroll bitmap height table.");
    }
    iVar6 = 0;
    iStack_24 = 0;
    if (0 < param_4) {
      piStack_1c = piVar1;
      do {
        iVar5 = param_3 + -1;
        for (pbVar4 = (byte *)(param_1 + (param_3 + -1) * param_2 + iVar6);
            (-1 < iVar5 && (*pbVar4 != param_7)); pbVar4 = pbVar4 + -param_2) {
          iVar5 = iVar5 + -1;
        }
        *piStack_1c = iVar5 + 1;
        if (iStack_24 <= iVar5) {
          iStack_24 = iVar5;
        }
        piStack_1c = piStack_1c + 1;
        iVar6 = iVar6 + 1;
      } while (iVar6 < param_4);
    }
    *param_5 = iStack_24;
    iStack_14 = 1;
    if (1 < param_6) {
      iVar6 = param_4 + -1;
      do {
        piStack_18 = param_5 + 1;
        iVar5 = param_3 + -1;
        for (pbVar4 = (byte *)(iVar6 + (param_3 + -1) * param_2 + param_1 + iStack_14);
            (-1 < iVar5 && (*pbVar4 != param_7)); pbVar4 = pbVar4 + -param_2) {
          iVar5 = iVar5 + -1;
        }
        iVar3 = 0;
        piVar2 = piVar1;
        if (0 < iVar6) {
          do {
            iVar3 = iVar3 + 1;
            *piVar2 = piVar2[1];
            piVar2 = piVar2 + 1;
          } while (iVar3 < iVar6);
        }
        iVar3 = 0;
        piVar1[param_4 + -1] = iVar5 + 1;
        iVar5 = 0;
        piVar2 = piVar1;
        if (0 < param_4) {
          do {
            if (iVar3 <= *piVar2) {
              iVar3 = *piVar2;
            }
            iVar5 = iVar5 + 1;
            piVar2 = piVar2 + 1;
          } while (iVar5 < param_4);
        }
        iStack_14 = iStack_14 + 1;
        *piStack_18 = iVar3;
        param_5 = piStack_18;
      } while (iStack_14 < param_6);
    }
    FUN_00564494(piVar1);
  }
  return;
}
