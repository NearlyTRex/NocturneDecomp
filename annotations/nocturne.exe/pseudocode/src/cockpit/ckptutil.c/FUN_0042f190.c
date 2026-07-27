// Name: cockpit_ckptutil.c_FUN_0042f190
// Address: 0042f190
// Address Range: [[0042f190, 0042f254]]
// Convention: unknown
// Signature: void cockpit_ckptutil_c_FUN_0042f190(int param_1,short *param_2,int param_3,int param_4,int param_5,int param_6)

#include "nocturne.h"

void cockpit_ckptutil_c_FUN_0042f190(int param_1,short *param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) && (iVar2 = 0, 0 < param_3)) {
    do {
      iVar1 = (int)((short)(param_2[3] * 2) >> 1);
      cockpit_ckptutil_c_FUN_0042f330
                (*param_2 + param_4,param_2[1] + param_5,param_2[2] + param_4,iVar1 + param_5,
                 *(byte *)((int)*param_2 + param_6 * param_2[1] + param_1),
                 *(byte *)(param_6 * iVar1 + param_1 + (int)param_2[2]),
                 (ushort)param_2[3] >> 0xf);
      iVar2 = iVar2 + 1;
      param_2 = param_2 + 4;
    } while (iVar2 < param_3);
  }
  return;
}
