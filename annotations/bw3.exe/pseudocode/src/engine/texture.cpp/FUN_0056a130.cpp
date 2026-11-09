// Name: engine_texture.cpp_FUN_0056a130
// Address: 0056a130
// Address Range: [[0056a130, 0056a602]]
// Convention: unknown
// Signature: void engine_texture_cpp_FUN_0056a130(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0056a2f5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_texture_cpp_FUN_0056a130(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  int local_14;
  
  puVar4 = (uint *)(param_1 + 4 + *(int *)(param_2 + 4) * 0x60);
  DAT_005fba28 = *puVar4;
  if ((puVar4[0x14] == 0) && (param_3 != 2)) {
    _DAT_01c6ced0 = puVar4[0x11];
    _DAT_01c6ced4 = puVar4[0x12];
    _DAT_01c6a970 = (byte *)puVar4[0x13];
    _DAT_01c6cee4 = 0;
  }
  else {
    _DAT_01c6ced4 = 0;
    _DAT_01c6a970 = (byte *)0x0;
    _DAT_01c6ced0 = puVar4[0x14];
    _DAT_01c6cee4 = 1;
  }
  if ((_DAT_01c6cee8 == 0) && (puVar4[0x14] == 0)) {
    if (DAT_005fba20 == 0x20) {
      iVar8 = 0;
      pbVar7 = _DAT_01c6a970;
      do {
        pbVar1 = pbVar7 + 1;
        bVar3 = *pbVar7;
        pbVar2 = pbVar7 + 2;
        iVar5 = iVar8 + 4;
        pbVar7 = pbVar7 + 3;
        *(uint *)(&DAT_01c6a974 + iVar8) =
             (uint)*pbVar2 << (DAT_01c6af8c & 0x1f) |
             (uint)bVar3 << (DAT_01c6af74 & 0x1f) | (uint)*pbVar1 << (DAT_01c6af80 & 0x1f);
        iVar8 = iVar5;
      } while (iVar5 != 0x400);
    }
    else {
      iVar8 = 0;
      local_14 = 0;
      pbVar7 = _DAT_01c6a970;
      do {
        *(ushort *)(iVar8 + 0x1c6ad74) =
             (ushort)(pbVar7[2] / _DAT_01c6af90 << (DAT_01c6af8c & 0x1f)) |
             (ushort)(pbVar7[1] / _DAT_01c6af84 << (DAT_01c6af80 & 0x1f)) |
             (ushort)(*pbVar7 / _DAT_01c6af78 << (DAT_01c6af74 & 0x1f));
        if (DAT_005fba20 == 0x20) {
          uVar6 = (uint)pbVar7[2] << (DAT_01c6af8c & 0x1f) |
                  (uint)*pbVar7 << (DAT_01c6af74 & 0x1f) | (uint)pbVar7[1] << (DAT_01c6af80 & 0x1f);
        }
        else {
          uVar6 = (uint)pbVar7[1] << 8 | (uint)*pbVar7 << 0x10 | (uint)pbVar7[2];
        }
        pbVar7 = pbVar7 + 3;
        *(uint *)(&DAT_01c6a974 + local_14) = uVar6;
        local_14 = local_14 + 4;
        iVar8 = iVar8 + 2;
      } while (iVar8 != 0x200);
    }
  }
  if (DAT_005fba28 < 0x100) {
    if (DAT_005fba28 < 0x40) {
      if (DAT_005fba28 == 0x20) {
        _DAT_00604df8 = 0x13;
        _DAT_00604e18 = 0xe;
        _DAT_00604e38 = 0x1f;
        _DAT_00604e58 = 0x3e0;
        _DAT_01c6cee0 = 5;
      }
    }
    else if (DAT_005fba28 < 0x41) {
      _DAT_00604df8 = 0x12;
      _DAT_00604e18 = 0xc;
      _DAT_00604e38 = 0x3f;
      _DAT_00604e58 = 0xfc0;
      _DAT_01c6cee0 = 6;
    }
    else if (DAT_005fba28 == 0x80) {
      _DAT_00604df8 = 0x11;
      _DAT_00604e18 = 10;
      _DAT_00604e38 = 0x7f;
      _DAT_00604e58 = 0x3f80;
      _DAT_01c6cee0 = 7;
    }
  }
  else if (DAT_005fba28 < 0x101) {
    _DAT_00604df8 = 0x10;
    _DAT_00604e18 = 8;
    _DAT_00604e38 = 0xff;
    _DAT_00604e58 = 0xff00;
    _DAT_01c6cee0 = 8;
  }
  else if (DAT_005fba28 < 0x400) {
    if (DAT_005fba28 == 0x200) {
      _DAT_00604df8 = 0xf;
      _DAT_00604e18 = 6;
      _DAT_00604e38 = 0x1ff;
      _DAT_00604e58 = 0x3fe00;
      _DAT_01c6cee0 = 9;
    }
  }
  else if (DAT_005fba28 < 0x401) {
    _DAT_00604df8 = 0xe;
    _DAT_00604e18 = 4;
    _DAT_00604e38 = 0x3ff;
    _DAT_00604e58 = 0xffc00;
    _DAT_01c6cee0 = 10;
  }
  else if (DAT_005fba28 == 0x800) {
    _DAT_00604df8 = 0xd;
    _DAT_00604e18 = 2;
    _DAT_00604e38 = 0x7ff;
    _DAT_00604e58 = 0x3ff800;
    _DAT_01c6cee0 = 0xb;
  }
  puVar4[0x15] = *(uint *)(param_1 + 0x18008);
  iVar8 = _DAT_01c6cee8;
  *(int *)(param_1 + 0x18008) = *(int *)(param_1 + 0x18008) + 1;
  if (iVar8 != 0) {
    if (param_3 != 0) {
      if (_DAT_01c6cee4 == 0) {
        (*_DAT_02cf6010)(param_2,*puVar4,puVar4[0x11],puVar4[0x13],puVar4[0x12]);
      }
      else {
        (*_DAT_02cf6018)(param_2,*puVar4,puVar4[0x14]);
      }
      return;
    }
    if (_DAT_01c6cee4 == 0) {
      (*_DAT_02cf600c)(param_2,*puVar4,puVar4[0x11],puVar4[0x13],puVar4[0x12]);
      return;
    }
    (*_DAT_02cf6014)(param_2,*puVar4,puVar4[0x14]);
  }
  return;
}
