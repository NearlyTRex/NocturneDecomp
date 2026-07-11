// Name: FUN_0040ce80
// Address: 0040ce80
// Address Range: [[0040ce80, 0040cf6b]]
// Convention: unknown
// Signature: void FUN_0040ce80(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0040ce80(uint param_1,uint param_2)

{
  int iVar1;
  
  if (DAT_00763e88 != 1) {
    FUN_005644f0(DAT_00763e84,"%s{ // %s\n",&DAT_005acc90,param_2);
    FUN_0040bff0(1);
    FUN_0041c9e0(param_1,DAT_00763e84,&DAT_005acc90);
    FUN_0040bff0(0xffffffff);
    FUN_005644f0(DAT_00763e84,&DAT_00577dd4,&DAT_005acc90);
    return;
  }
  do {
    iVar1 = FUN_00564570(DAT_00763e84);
    if (iVar1 < 0) {
      FUN_0040c320("sim box state info opening brace",param_2);
    }
  } while (iVar1 != 10);
  FUN_0041c850(param_1,DAT_00763e84);
  do {
    while( true ) {
      iVar1 = FUN_00564570(DAT_00763e84);
      if (-1 < iVar1) break;
      FUN_0040c320("sim box state info closing brace",param_2);
      if (iVar1 == 10) {
        return;
      }
    }
  } while (iVar1 != 10);
  return;
}
