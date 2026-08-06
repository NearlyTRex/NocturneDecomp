// Name: cockpit_ckptutil.c_FUN_0042e7b0
// Address: 0042e7b0
// Address Range: [[0042e7b0, 0042e9c2]]
// Convention: unknown
// Signature: void cockpit_ckptutil_c_FUN_0042e7b0(int param_1,int param_2,int param_3,int param_4,int *param_5,int param_6,uint param_7)

#include "nocturne.h"

void cockpit_ckptutil_c_FUN_0042e7b0(int param_1,int param_2,int param_3,int param_4,int *param_5,int param_6,uint param_7)

{
  int *ptr;
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iStack_24;
  int *piStack_1c;
  int *piStack_18;
  int iStack_14;
  
  if (param_1 != 0) {
    if (param_6 < (param_2 - param_4) + 1) {
      g_CurrentFilename = "..\\cockpit\\ckptutil.c";
      g_CurrentLineNumber = 1008;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Invalid height array size.");
    }
    ptr = shape_memdbg_cpp_malloc_FUN_00564c18(param_4 * 4);
    if (ptr == (int *)0x0) {
      g_CurrentFilename = "..\\cockpit\\ckptutil.c";
      g_CurrentLineNumber = 1014;
      core_main_c_displayErrorAndQuit_FUN_004c8440("No room for scroll bitmap height table.");
    }
    iVar5 = 0;
    iStack_24 = 0;
    if (0 < param_4) {
      piStack_1c = ptr;
      do {
        iVar4 = param_3 + -1;
        for (pbVar3 = (byte *)(param_1 + (param_3 + -1) * param_2 + iVar5);
            (-1 < iVar4 && (*pbVar3 != param_7)); pbVar3 = pbVar3 + -param_2) {
          iVar4 = iVar4 + -1;
        }
        *piStack_1c = iVar4 + 1;
        if (iStack_24 <= iVar4) {
          iStack_24 = iVar4;
        }
        piStack_1c = piStack_1c + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_4);
    }
    *param_5 = iStack_24;
    iStack_14 = 1;
    if (1 < param_6) {
      iVar5 = param_4 + -1;
      do {
        piStack_18 = param_5 + 1;
        iVar4 = param_3 + -1;
        for (pbVar3 = (byte *)(iVar5 + (param_3 + -1) * param_2 + param_1 + iStack_14);
            (-1 < iVar4 && (*pbVar3 != param_7)); pbVar3 = pbVar3 + -param_2) {
          iVar4 = iVar4 + -1;
        }
        iVar2 = 0;
        piVar1 = ptr;
        if (0 < iVar5) {
          do {
            iVar2 = iVar2 + 1;
            *piVar1 = piVar1[1];
            piVar1 = piVar1 + 1;
          } while (iVar2 < iVar5);
        }
        iVar2 = 0;
        ptr[param_4 + -1] = iVar4 + 1;
        iVar4 = 0;
        piVar1 = ptr;
        if (0 < param_4) {
          do {
            if (iVar2 <= *piVar1) {
              iVar2 = *piVar1;
            }
            iVar4 = iVar4 + 1;
            piVar1 = piVar1 + 1;
          } while (iVar4 < param_4);
        }
        iStack_14 = iStack_14 + 1;
        *piStack_18 = iVar2;
        param_5 = piStack_18;
      } while (iStack_14 < param_6);
    }
    operator_delete(ptr);
  }
  return;
}
