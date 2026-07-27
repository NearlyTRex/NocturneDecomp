// Name: FUN_00571718
// Address: 00571718
// Address Range: [[00571718, 005717a4]]
// Convention: unknown
// Signature: undefined4 FUN_00571718(int param_1,int param_2)

#include "nocturne.h"

uint FUN_00571718(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((0 < param_1) && (param_1 < 0xd)) {
    PTR_crt_unknown_c_FUN_00566f98_005c1890 = &UNK_005716cc;
    if ((param_2 != 2) && (param_2 != 3)) {
      iVar1 = FUN_00571588(param_1);
      if ((iVar1 != 0) && (param_1 == 2)) {
        FUN_00572ef0(0,0x9f);
      }
    }
    uVar2 = FUN_00571564(param_1);
    FUN_00571510(param_1,param_2);
    iVar1 = FUN_00571630();
    if (iVar1 == 0) {
      FUN_00571694();
    }
    else {
      FUN_00571668();
    }
    return uVar2;
  }
  FUN_00568e80(9);
  return 3;
}
