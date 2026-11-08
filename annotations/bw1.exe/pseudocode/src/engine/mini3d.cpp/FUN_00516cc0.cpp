// Name: FUN_00516cc0
// Address: 00516cc0
// Address Range: [[00516cc0, 00516e33]]
// Convention: unknown
// Signature: uint FUN_00516cc0(int param_1,int param_2,ushort *param_3,uint param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00516cc0(int param_1,int param_2,ushort *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_14;
  
  _DAT_01e7dac8 = _DAT_01e7dac8 + param_4;
  _DAT_01d224b4 = _DAT_01d224b4 + param_2;
  FUN_00512670();
  if (10000 < param_2) {
    _DAT_01d1d400 = "..\\engine\\mini3d.cpp";
    _DAT_01d1d404 = 0x12de;
    FUN_005030e0("CMini3D::polyList - Too many verticies : %d",param_2);
  }
  iVar3 = 0;
  local_14 = 0;
  uVar1 = _DAT_01d25f14;
  if (_DAT_01d25f14 == 1) {
    iVar2 = _DAT_01d227e4;
    if (0 < param_2) {
      do {
        iVar3 = iVar3 + 1;
        FUN_00513370(param_1,iVar2);
        uVar1 = *(uint *)(iVar2 + 0x10);
        iVar2 = iVar2 + 0x20;
        local_14 = local_14 | uVar1;
        param_1 = param_1 + 0x20;
      } while (iVar3 < param_2);
    }
  }
  else {
    iVar2 = _DAT_01d227e4;
    if (0 < param_2) {
      do {
        iVar3 = iVar3 + 1;
        uVar1 = FUN_00513480(param_1,iVar2);
        iVar2 = iVar2 + 0x20;
        param_1 = param_1 + 0x20;
      } while (iVar3 < param_2);
    }
  }
  if (local_14 == 0) {
    iVar3 = 0;
    if (0 < (int)param_4) {
      do {
        FUN_00516fd0(_DAT_01d227e4 + (uint)*param_3 * 0x20,(uint)param_3[1] * 0x20 + _DAT_01d227e4,
                     (uint)param_3[2] * 0x20 + _DAT_01d227e4);
        iVar3 = iVar3 + 1;
        param_3 = param_3 + 3;
        uVar1 = param_4;
      } while (iVar3 < (int)param_4);
    }
  }
  else {
    iVar3 = 0;
    if (0 < (int)param_4) {
      do {
        uVar1 = FUN_00517240(_DAT_01d227e4 + (uint)*param_3 * 0x20,
                             (uint)param_3[1] * 0x20 + _DAT_01d227e4,
                             (uint)param_3[2] * 0x20 + _DAT_01d227e4);
        iVar3 = iVar3 + 1;
        param_3 = param_3 + 3;
      } while (iVar3 < (int)param_4);
      return uVar1;
    }
  }
  return uVar1;
}
