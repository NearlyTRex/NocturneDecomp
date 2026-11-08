// Name: FUN_00554e50
// Address: 00554e50
// Address Range: [[00554e50, 00554f7e]]
// Convention: unknown
// Signature: bool FUN_00554e50(int param_1)

#include "nocturne.h"

bool FUN_00554e50(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  bool bVar5;
  int unaff_retaddr;
  int *apiStack_1a4 [101];
  
  param_1 = param_1 * 0x24;
  piVar4 = (int *)(param_1 + 0x264ac10);
  apiStack_1a4[0] = (int *)*piVar4;
  bVar5 = true;
  if (apiStack_1a4[0] != (int *)0x0) {
    iVar2 = (**(code **)(*apiStack_1a4[0] + 0x48))();
    if (iVar2 != 0) {
      uVar3 = FUN_00554ad0(iVar2);
      FUN_005b7790(apiStack_1a4,"DirectSux: Unable to %s.  (%s)",
                   "Stop hardware sfx secondary buffer",uVar3);
      FUN_005549c0(apiStack_1a4);
    }
    bVar5 = iVar2 == 0;
    piVar1 = *(int **)(param_1 + 0x264ac14);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(int *)(param_1 + 0x264ac14) = 0;
    }
    iVar2 = *(int *)(param_1 + 0x264ac18) * 0x18;
    if (*(int *)(param_1 + 0x264ac20) != 0) {
      *(uint *)(*(int *)(param_1 + 0x264ac20) * 0x24 + 0x264ac1c) =
           *(uint *)(param_1 + 0x264ac1c);
    }
    if (unaff_retaddr == *(int *)(iVar2 + 0x264a5f8)) {
      *(uint *)(iVar2 + 0x264a5f8) = *(uint *)(param_1 + 0x264ac20);
    }
    else {
      *(uint *)(*(int *)(param_1 + 0x264ac1c) * 0x24 + 0x264ac20) =
           *(uint *)(param_1 + 0x264ac20);
    }
    piVar1 = (int *)*piVar4;
    if ((piVar1 != *(int **)(iVar2 + 0x264a5f4)) && (piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *piVar4 = 0;
    }
  }
  *piVar4 = 0;
  *(uint *)(param_1 + 0x264ac20) = 0;
  *(uint *)(param_1 + 0x264ac1c) = 0;
  *(uint *)(param_1 + 0x264ac18) = 0;
  return bVar5;
}
