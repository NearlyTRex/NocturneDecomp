// Name: dll_dx7.cpp_FUN_10003d90
// Address: 10003d90
// Address Range: [[10003d90, 10003e3b]]
// Convention: unknown
// Signature: void dll_dx7_cpp_FUN_10003d90(ushort *param_1,uint param_2,int param_3)

#include "nocturne.h"

void dll_dx7_cpp_FUN_10003d90(ushort *param_1,uint param_2,int param_3)

{
  uint uVar1;
  ushort uVar2;
  uint *puVar3;
  ushort *puVar4;
  int iVar5;
  int local_4;
  
  puVar3 = (uint *)dll_dx7_cpp_FUN_10003a30(param_3);
  if (0 < param_3) {
    local_4 = param_3;
    do {
      puVar4 = param_1;
      iVar5 = param_3;
      if (0 < param_3) {
        do {
          uVar1 = *puVar3;
          puVar3 = puVar3 + 1;
          uVar2 = (ushort)(uVar1 >> 0x10);
          iVar5 = iVar5 + -1;
          *puVar4 = (uVar2 >> 4 & 0xf) << (DAT_101386a8 & 0x1f) |
                    ((ushort)(uVar1 >> 4) & 0xf) << (DAT_10226e80 & 0x1f) |
                    ((ushort)(uVar1 >> 0xc) & 0xf) << (DAT_10240620 & 0x1f) | uVar2 & 0xf000;
          puVar4 = puVar4 + 1;
        } while (iVar5 != 0);
      }
      param_1 = (ushort *)((int)param_1 + (param_2 & 0xfffffffe));
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  return;
}
