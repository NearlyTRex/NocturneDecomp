// Name: FUN_00577880
// Address: 00577880
// Address Range: [[00577880, 005779ae]]
// Convention: unknown
// Signature: bool FUN_00577880(int param_1)

#include "nocturne.h"

bool FUN_00577880(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  bool bVar5;
  int unaff_retaddr;
  int *apiStack_1a4 [101];
  
  param_1 = param_1 * 0x24;
  piVar4 = (int *)(param_1 + 0x2c823e0);
  apiStack_1a4[0] = (int *)*piVar4;
  bVar5 = true;
  if (apiStack_1a4[0] != (int *)0x0) {
    iVar2 = (**(code **)(*apiStack_1a4[0] + 0x48))();
    if (iVar2 != 0) {
      uVar3 = FUN_00577500(iVar2);
      FUN_005bfb40(apiStack_1a4,"DirectSux: Unable to %s.  (%s)",
                   "Stop hardware sfx secondary buffer",uVar3);
      FUN_005773f0(apiStack_1a4);
    }
    bVar5 = iVar2 == 0;
    piVar1 = *(int **)(param_1 + 0x2c823e4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(int *)(param_1 + 0x2c823e4) = 0;
    }
    iVar2 = *(int *)(param_1 + 0x2c823e8) * 0x18;
    if (*(int *)(param_1 + 0x2c823f0) != 0) {
      *(uint *)(*(int *)(param_1 + 0x2c823f0) * 0x24 + 0x2c823ec) =
           *(uint *)(param_1 + 0x2c823ec);
    }
    if (unaff_retaddr == *(int *)(iVar2 + 0x2c81dc8)) {
      *(uint *)(iVar2 + 0x2c81dc8) = *(uint *)(param_1 + 0x2c823f0);
    }
    else {
      *(uint *)(*(int *)(param_1 + 0x2c823ec) * 0x24 + 0x2c823f0) =
           *(uint *)(param_1 + 0x2c823f0);
    }
    piVar1 = (int *)*piVar4;
    if ((piVar1 != *(int **)(iVar2 + 0x2c81dc4)) && (piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *piVar4 = 0;
    }
  }
  *piVar4 = 0;
  *(uint *)(param_1 + 0x2c823f0) = 0;
  *(uint *)(param_1 + 0x2c823ec) = 0;
  *(uint *)(param_1 + 0x2c823e8) = 0;
  return bVar5;
}
