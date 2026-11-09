// Name: engine_mini3d.cpp_FUN_004f6d00
// Address: 004f6d00
// Address Range: [[004f6d00, 004f6de8]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004f6d00(undefined4 param_1,undefined4 param_2,ushort *param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004f6d00(uint param_1,uint param_2,ushort *param_3,int param_4,int param_5)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  int iVar4;
  
  if (param_5 != 0) {
    engine_mini3d_cpp_FUN_004f6850(param_2);
    iVar4 = 0;
    if (0 < param_4) {
      do {
        puVar1 = param_3 + 2;
        puVar2 = param_3 + 1;
        uVar3 = *param_3;
        param_3 = param_3 + 3;
        iVar4 = iVar4 + 1;
        engine_mini3d_cpp_FUN_004f6a70
                  (_DAT_01d09b7c + (uint)uVar3 * 0x40,(uint)*puVar2 * 0x40 + _DAT_01d09b7c,
                   (uint)*puVar1 * 0x40 + _DAT_01d09b7c);
      } while (iVar4 < param_4);
    }
    engine_mini3d_cpp_FUN_004f6970();
    return;
  }
  if ((_DAT_0264bca0 != (code *)0x0) && (_DAT_01c37788 != 0)) {
    (*_DAT_0264bca0)(_DAT_01d09b7c,param_2,param_3,param_4,_DAT_01c38b54);
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
      engine_mini3d_cpp_FUN_004f7280
                (_DAT_01d09b7c + (uint)uVar3 * 0x40,(uint)*puVar2 * 0x40 + _DAT_01d09b7c,
                 (uint)*puVar1 * 0x40 + _DAT_01d09b7c);
    } while (iVar4 < param_4);
  }
  return;
}
