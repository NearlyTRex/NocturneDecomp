// Name: engine_texture.cpp_FUN_00597140
// Address: 00597140
// Address Range: [[00597140, 00597612]]
// Convention: unknown
// Signature: void engine_texture_cpp_FUN_00597140(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00597305) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_texture_cpp_FUN_00597140(int param_1,int param_2,int param_3)

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
  DAT_0061b4a8 = *puVar4;
  if ((puVar4[0x14] == 0) && (param_3 != 2)) {
    _DAT_01c50930 = puVar4[0x11];
    _DAT_01c50934 = puVar4[0x12];
    _DAT_01c4e3d0 = (byte *)puVar4[0x13];
    _DAT_01c50944 = 0;
  }
  else {
    _DAT_01c50934 = 0;
    _DAT_01c4e3d0 = (byte *)0x0;
    _DAT_01c50930 = puVar4[0x14];
    _DAT_01c50944 = 1;
  }
  if ((_DAT_01c50948 == 0) && (puVar4[0x14] == 0)) {
    if (DAT_0061b4a0 == 0x20) {
      iVar8 = 0;
      pbVar7 = _DAT_01c4e3d0;
      do {
        pbVar1 = pbVar7 + 1;
        bVar3 = *pbVar7;
        pbVar2 = pbVar7 + 2;
        iVar5 = iVar8 + 4;
        pbVar7 = pbVar7 + 3;
        *(uint *)(&DAT_01c4e3d4 + iVar8) =
             (uint)*pbVar2 << (DAT_01c4e9ec & 0x1f) |
             (uint)bVar3 << (DAT_01c4e9d4 & 0x1f) | (uint)*pbVar1 << (DAT_01c4e9e0 & 0x1f);
        iVar8 = iVar5;
      } while (iVar5 != 0x400);
    }
    else {
      iVar8 = 0;
      local_14 = 0;
      pbVar7 = _DAT_01c4e3d0;
      do {
        *(ushort *)(iVar8 + 0x1c4e7d4) =
             (ushort)(pbVar7[2] / _DAT_01c4e9f0 << (DAT_01c4e9ec & 0x1f)) |
             (ushort)(pbVar7[1] / _DAT_01c4e9e4 << (DAT_01c4e9e0 & 0x1f)) |
             (ushort)(*pbVar7 / _DAT_01c4e9d8 << (DAT_01c4e9d4 & 0x1f));
        if (DAT_0061b4a0 == 0x20) {
          uVar6 = (uint)pbVar7[2] << (DAT_01c4e9ec & 0x1f) |
                  (uint)*pbVar7 << (DAT_01c4e9d4 & 0x1f) | (uint)pbVar7[1] << (DAT_01c4e9e0 & 0x1f);
        }
        else {
          uVar6 = (uint)pbVar7[1] << 8 | (uint)*pbVar7 << 0x10 | (uint)pbVar7[2];
        }
        pbVar7 = pbVar7 + 3;
        *(uint *)(&DAT_01c4e3d4 + local_14) = uVar6;
        local_14 = local_14 + 4;
        iVar8 = iVar8 + 2;
      } while (iVar8 != 0x200);
    }
  }
  if (DAT_0061b4a8 < 0x100) {
    if (DAT_0061b4a8 < 0x40) {
      if (DAT_0061b4a8 == 0x20) {
        _DAT_00623eb8 = 0x13;
        _DAT_00623ed8 = 0xe;
        _DAT_00623ef8 = 0x1f;
        _DAT_00623f18 = 0x3e0;
        _DAT_01c50940 = 5;
      }
    }
    else if (DAT_0061b4a8 < 0x41) {
      _DAT_00623eb8 = 0x12;
      _DAT_00623ed8 = 0xc;
      _DAT_00623ef8 = 0x3f;
      _DAT_00623f18 = 0xfc0;
      _DAT_01c50940 = 6;
    }
    else if (DAT_0061b4a8 == 0x80) {
      _DAT_00623eb8 = 0x11;
      _DAT_00623ed8 = 10;
      _DAT_00623ef8 = 0x7f;
      _DAT_00623f18 = 0x3f80;
      _DAT_01c50940 = 7;
    }
  }
  else if (DAT_0061b4a8 < 0x101) {
    _DAT_00623eb8 = 0x10;
    _DAT_00623ed8 = 8;
    _DAT_00623ef8 = 0xff;
    _DAT_00623f18 = 0xff00;
    _DAT_01c50940 = 8;
  }
  else if (DAT_0061b4a8 < 0x400) {
    if (DAT_0061b4a8 == 0x200) {
      _DAT_00623eb8 = 0xf;
      _DAT_00623ed8 = 6;
      _DAT_00623ef8 = 0x1ff;
      _DAT_00623f18 = 0x3fe00;
      _DAT_01c50940 = 9;
    }
  }
  else if (DAT_0061b4a8 < 0x401) {
    _DAT_00623eb8 = 0xe;
    _DAT_00623ed8 = 4;
    _DAT_00623ef8 = 0x3ff;
    _DAT_00623f18 = 0xffc00;
    _DAT_01c50940 = 10;
  }
  else if (DAT_0061b4a8 == 0x800) {
    _DAT_00623eb8 = 0xd;
    _DAT_00623ed8 = 2;
    _DAT_00623ef8 = 0x7ff;
    _DAT_00623f18 = 0x3ff800;
    _DAT_01c50940 = 0xb;
  }
  puVar4[0x15] = *(uint *)(param_1 + 0x18008);
  iVar8 = _DAT_01c50948;
  *(int *)(param_1 + 0x18008) = *(int *)(param_1 + 0x18008) + 1;
  if (iVar8 != 0) {
    if (param_3 != 0) {
      if (_DAT_01c50944 == 0) {
        (*_DAT_02c833b4)(param_2,*puVar4,puVar4[0x11],puVar4[0x13],puVar4[0x12]);
      }
      else {
        (*_DAT_02c833bc)(param_2,*puVar4,puVar4[0x14]);
      }
      return;
    }
    if (_DAT_01c50944 == 0) {
      (*_DAT_02c833b0)(param_2,*puVar4,puVar4[0x11],puVar4[0x13],puVar4[0x12]);
      return;
    }
    (*_DAT_02c833b8)(param_2,*puVar4,puVar4[0x14]);
  }
  return;
}
