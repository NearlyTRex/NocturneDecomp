// Name: engine_mini3d.cpp_FUN_00515ae0
// Address: 00515ae0
// Address Range: [[00515ae0, 00515bc8]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_00515ae0(undefined4 param_1,undefined4 param_2,ushort *param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_00515ae0(uint param_1,uint param_2,ushort *param_3,int param_4,int param_5)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  int iVar4;
  
  if (param_5 != 0) {
    engine_mini3d_cpp_FUN_005155d0(param_2);
    iVar4 = 0;
    if (0 < param_4) {
      do {
        puVar1 = param_3 + 2;
        puVar2 = param_3 + 1;
        uVar3 = *param_3;
        param_3 = param_3 + 3;
        iVar4 = iVar4 + 1;
        engine_mini3d_cpp_FUN_00515850
                  (_DAT_01d227e0 + (uint)uVar3 * 0x40,(uint)*puVar2 * 0x40 + _DAT_01d227e0,
                   (uint)*puVar1 * 0x40 + _DAT_01d227e0);
      } while (iVar4 < param_4);
    }
    engine_mini3d_cpp_FUN_00515750();
    return;
  }
  if ((_DAT_02c83470 != (code *)0x0) && (_DAT_01c50948 != 0)) {
    (*_DAT_02c83470)(_DAT_01d227e0,param_2,param_3,param_4,_DAT_01c51d14);
    return;
  }
  iVar4 = 0;
  if (0 < param_4) {
    do {
      puVar1 = param_3 + 2;
      puVar2 = param_3 + 1;
      uVar3 = *param_3;
      param_3 = param_3 + 3;
      iVar4 = iVar4 + 1;
      engine_mini3d_cpp_FUN_00516060
                (_DAT_01d227e0 + (uint)uVar3 * 0x40,(uint)*puVar2 * 0x40 + _DAT_01d227e0,
                 (uint)*puVar1 * 0x40 + _DAT_01d227e0);
    } while (iVar4 < param_4);
  }
  return;
}
