// Name: engine_texture.cpp_FUN_00574520
// Address: 00574520
// Address Range: [[00574520, 005749f2]]
// Convention: unknown
// Signature: void engine_texture_cpp_FUN_00574520(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005746e5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_texture_cpp_FUN_00574520(int param_1,int param_2,int param_3)

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
  DAT_006141c8 = *puVar4;
  if ((puVar4[0x14] == 0) && (param_3 != 2)) {
    _DAT_01c37770 = puVar4[0x11];
    _DAT_01c37774 = puVar4[0x12];
    _DAT_01c35210 = (byte *)puVar4[0x13];
    _DAT_01c37784 = 0;
  }
  else {
    _DAT_01c37774 = 0;
    _DAT_01c35210 = (byte *)0x0;
    _DAT_01c37770 = puVar4[0x14];
    _DAT_01c37784 = 1;
  }
  if ((_DAT_01c37788 == 0) && (puVar4[0x14] == 0)) {
    if (DAT_006141c0 == 0x20) {
      iVar8 = 0;
      pbVar7 = _DAT_01c35210;
      do {
        pbVar1 = pbVar7 + 1;
        bVar3 = *pbVar7;
        pbVar2 = pbVar7 + 2;
        iVar5 = iVar8 + 4;
        pbVar7 = pbVar7 + 3;
        *(uint *)(&DAT_01c35214 + iVar8) =
             (uint)*pbVar2 << (DAT_01c3582c & 0x1f) |
             (uint)bVar3 << (DAT_01c35814 & 0x1f) | (uint)*pbVar1 << (DAT_01c35820 & 0x1f);
        iVar8 = iVar5;
      } while (iVar5 != 0x400);
    }
    else {
      iVar8 = 0;
      local_14 = 0;
      pbVar7 = _DAT_01c35210;
      do {
        *(ushort *)(iVar8 + 0x1c35614) =
             (ushort)(pbVar7[2] / _DAT_01c35830 << (DAT_01c3582c & 0x1f)) |
             (ushort)(pbVar7[1] / _DAT_01c35824 << (DAT_01c35820 & 0x1f)) |
             (ushort)(*pbVar7 / _DAT_01c35818 << (DAT_01c35814 & 0x1f));
        if (DAT_006141c0 == 0x20) {
          uVar6 = (uint)pbVar7[2] << (DAT_01c3582c & 0x1f) |
                  (uint)*pbVar7 << (DAT_01c35814 & 0x1f) | (uint)pbVar7[1] << (DAT_01c35820 & 0x1f);
        }
        else {
          uVar6 = (uint)pbVar7[1] << 8 | (uint)*pbVar7 << 0x10 | (uint)pbVar7[2];
        }
        pbVar7 = pbVar7 + 3;
        *(uint *)(&DAT_01c35214 + local_14) = uVar6;
        local_14 = local_14 + 4;
        iVar8 = iVar8 + 2;
      } while (iVar8 != 0x200);
    }
  }
  if (DAT_006141c8 < 0x100) {
    if (DAT_006141c8 < 0x40) {
      if (DAT_006141c8 == 0x20) {
        _DAT_0061c868 = 0x13;
        _DAT_0061c888 = 0xe;
        _DAT_0061c8a8 = 0x1f;
        _DAT_0061c8c8 = 0x3e0;
        _DAT_01c37780 = 5;
      }
    }
    else if (DAT_006141c8 < 0x41) {
      _DAT_0061c868 = 0x12;
      _DAT_0061c888 = 0xc;
      _DAT_0061c8a8 = 0x3f;
      _DAT_0061c8c8 = 0xfc0;
      _DAT_01c37780 = 6;
    }
    else if (DAT_006141c8 == 0x80) {
      _DAT_0061c868 = 0x11;
      _DAT_0061c888 = 10;
      _DAT_0061c8a8 = 0x7f;
      _DAT_0061c8c8 = 0x3f80;
      _DAT_01c37780 = 7;
    }
  }
  else if (DAT_006141c8 < 0x101) {
    _DAT_0061c868 = 0x10;
    _DAT_0061c888 = 8;
    _DAT_0061c8a8 = 0xff;
    _DAT_0061c8c8 = 0xff00;
    _DAT_01c37780 = 8;
  }
  else if (DAT_006141c8 < 0x400) {
    if (DAT_006141c8 == 0x200) {
      _DAT_0061c868 = 0xf;
      _DAT_0061c888 = 6;
      _DAT_0061c8a8 = 0x1ff;
      _DAT_0061c8c8 = 0x3fe00;
      _DAT_01c37780 = 9;
    }
  }
  else if (DAT_006141c8 < 0x401) {
    _DAT_0061c868 = 0xe;
    _DAT_0061c888 = 4;
    _DAT_0061c8a8 = 0x3ff;
    _DAT_0061c8c8 = 0xffc00;
    _DAT_01c37780 = 10;
  }
  else if (DAT_006141c8 == 0x800) {
    _DAT_0061c868 = 0xd;
    _DAT_0061c888 = 2;
    _DAT_0061c8a8 = 0x7ff;
    _DAT_0061c8c8 = 0x3ff800;
    _DAT_01c37780 = 0xb;
  }
  puVar4[0x15] = *(uint *)(param_1 + 0x18008);
  iVar8 = _DAT_01c37788;
  *(int *)(param_1 + 0x18008) = *(int *)(param_1 + 0x18008) + 1;
  if (iVar8 != 0) {
    if (param_3 != 0) {
      if (_DAT_01c37784 == 0) {
        (*_DAT_0264bbe4)(param_2,*puVar4,puVar4[0x11],puVar4[0x13],puVar4[0x12]);
      }
      else {
        (*_DAT_0264bbec)(param_2,*puVar4,puVar4[0x14]);
      }
      return;
    }
    if (_DAT_01c37784 == 0) {
      (*_DAT_0264bbe0)(param_2,*puVar4,puVar4[0x11],puVar4[0x13],puVar4[0x12]);
      return;
    }
    (*_DAT_0264bbe8)(param_2,*puVar4,puVar4[0x14]);
  }
  return;
}
