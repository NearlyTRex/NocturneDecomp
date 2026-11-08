// Name: FUN_004f2490
// Address: 004f2490
// Address Range: [[004f2490, 004f2603]]
// Convention: unknown
// Signature: uint FUN_004f2490(int param_1,int param_2,ushort *param_3,uint param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004f2490(int param_1,int param_2,ushort *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_14;
  
  _DAT_01ed3198 = _DAT_01ed3198 + param_4;
  _DAT_01d76c34 = _DAT_01d76c34 + param_2;
  FUN_004ede40();
  if (10000 < param_2) {
    _DAT_01d71de0 = "..\\engine\\mini3d.cpp";
    _DAT_01d71de4 = 0x12de;
    FUN_004e4330("CMini3D::polyList - Too many verticies : %d",param_2);
  }
  iVar3 = 0;
  local_14 = 0;
  uVar1 = _DAT_01d7a694;
  if (_DAT_01d7a694 == 1) {
    iVar2 = _DAT_01d76f64;
    if (0 < param_2) {
      do {
        iVar3 = iVar3 + 1;
        FUN_004eeb40(param_1,iVar2);
        uVar1 = *(uint *)(iVar2 + 0x10);
        iVar2 = iVar2 + 0x20;
        local_14 = local_14 | uVar1;
        param_1 = param_1 + 0x20;
      } while (iVar3 < param_2);
    }
  }
  else {
    iVar2 = _DAT_01d76f64;
    if (0 < param_2) {
      do {
        iVar3 = iVar3 + 1;
        uVar1 = FUN_004eec50(param_1,iVar2);
        iVar2 = iVar2 + 0x20;
        param_1 = param_1 + 0x20;
      } while (iVar3 < param_2);
    }
  }
  if (local_14 == 0) {
    iVar3 = 0;
    if (0 < (int)param_4) {
      do {
        FUN_004f27a0(_DAT_01d76f64 + (uint)*param_3 * 0x20,(uint)param_3[1] * 0x20 + _DAT_01d76f64,
                     (uint)param_3[2] * 0x20 + _DAT_01d76f64);
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
        uVar1 = FUN_004f2a10(_DAT_01d76f64 + (uint)*param_3 * 0x20,
                             (uint)param_3[1] * 0x20 + _DAT_01d76f64,
                             (uint)param_3[2] * 0x20 + _DAT_01d76f64);
        iVar3 = iVar3 + 1;
        param_3 = param_3 + 3;
      } while (iVar3 < (int)param_4);
      return uVar1;
    }
  }
  return uVar1;
}
