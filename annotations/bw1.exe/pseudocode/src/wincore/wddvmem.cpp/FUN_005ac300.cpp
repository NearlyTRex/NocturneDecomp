// Name: FUN_005ac300
// Address: 005ac300
// Address Range: [[005ac300, 005ac821]]
// Convention: unknown
// Signature: undefined4 FUN_005ac300(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005ac300(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piStack_110;
  byte *puStack_10c;
  byte *puStack_108;
  int iStack_104;
  int *piStack_100;
  int iStack_fc;
  int iStack_f8;
  int *piStack_f4;
  uint uStack_ec;
  int iStack_b4;
  uint auStack_b0 [2];
  uint uStack_a8;
  int iStack_a0;
  uint uStack_98;
  int iStack_40;
  uint auStack_38 [4];
  int iStack_28;
  int iStack_24;
  
  if (_DAT_02c9930c != (int *)0x0) {
    piStack_f4 = _DAT_02c9930c;
    iStack_f8 = 0x5ac527;
    (**(code **)(*_DAT_02c9930c + 8))();
    _DAT_02c9930c = (int *)0x0;
  }
  if (_DAT_02c99308 != (int *)0x0) {
    piStack_f4 = _DAT_02c99308;
    iStack_f8 = 0x5ac331;
    (**(code **)(*_DAT_02c99308 + 8))();
    _DAT_02c99308 = (int *)0x0;
  }
  if (_DAT_02c99304 != (int *)0x0) {
    piStack_f4 = _DAT_02c99304;
    iStack_f8 = 0x5ac348;
    (**(code **)(*_DAT_02c99304 + 8))();
    _DAT_02c99304 = (int *)0x0;
  }
  if (((param_3 != 8) && (param_3 != 0x10)) && (param_3 != 0x20)) {
    return 0;
  }
  DAT_0061b4a0 = param_3;
  _DAT_02c99328 = param_3;
  DAT_0061b498 = param_1;
  _DAT_02c9932c = 0;
  DAT_0061b49c = param_2;
  _DAT_02c99330 = 0;
  _DAT_02c99320 = param_1;
  _DAT_02c9931c = 0;
  _DAT_02c99324 = param_2;
  if (DAT_00629010 != 0) {
    piStack_f4 = (int *)DAT_00629010;
    iStack_f8 = 0x5ac3c2;
    FUN_005c09f0();
    DAT_00629010 = 0;
  }
  if (_DAT_02c99310 != 0) {
    piStack_f4 = (int *)_DAT_02c99310;
    iStack_f8 = 0x5ac3dc;
    FUN_005c09f0();
    DAT_0071362c = 0;
  }
  piStack_f4 = (int *)(((int)((DAT_0061b4a0 + (DAT_0061b4a0 >> 0x1f) * -8) -
                             (uint)((DAT_0061b4a0 >> 0x1f) << 2 < 0)) >> 3) *
                      DAT_0061b498 * DAT_0061b49c);
  iStack_f8 = 0x5ac40f;
  DAT_00629010 = FUN_005c08d0();
  if (DAT_00629010 == 0) {
    piStack_f4 = (int *)"WDDVMEM: Fatal - out of frame buffer memory";
    _DAT_01d1d400 = "..\\wincore\\wddvmem.cpp";
    _DAT_01d1d404 = 0xed;
    iStack_f8 = 0x5ac43a;
    FUN_005030e0();
  }
  piStack_f4 = (int *)(DAT_0061b498 * DAT_0061b49c * 4 + 0x40);
  iStack_f8 = 0x5ac455;
  _DAT_02c99310 = FUN_005c08d0();
  if (_DAT_02c99310 == 0) {
    piStack_f4 = (int *)"WDDVMEM: Fatal - out of Z buffer memory";
    _DAT_01d1d400 = "..\\wincore\\wddvmem.cpp";
    _DAT_01d1d404 = 0xf2;
    iStack_f8 = 0x5ac481;
    FUN_005030e0();
  }
  piStack_f4 = (int *)param_3;
  iStack_f8 = param_2;
  DAT_0071362c = _DAT_02c99310 + 0x10U & 0xfffffff0;
  iStack_fc = param_1;
  piStack_100 = _DAT_02c99300;
  iStack_104 = 0x5ac4af;
  iVar1 = (**(code **)(*_DAT_02c99300 + 0x54))();
  if ((iVar1 != 0) && (param_2 < 0x1e0)) {
    _DAT_02c99320 = 0x280;
    _DAT_02c9932c = (0x280 - param_1) / 2;
    _DAT_02c99330 = (0x1e0 - param_2) / 2;
    iStack_104 = param_3;
    puStack_108 = (byte *)0x1e0;
    puStack_10c = (byte *)0x280;
    piStack_110 = _DAT_02c99300;
    _DAT_02c99324 = 0x1e0;
    iVar1 = (**(code **)(*_DAT_02c99300 + 0x54))();
  }
  if (iVar1 != 0) {
    if (param_3 != 0x20) {
      return 0;
    }
    iStack_104 = 0x18;
    puStack_108 = (byte *)_DAT_02c99324;
    puStack_10c = (byte *)_DAT_02c99320;
    piStack_110 = _DAT_02c99300;
    iVar1 = (**(code **)(*_DAT_02c99300 + 0x54))();
    if (iVar1 != 0) {
      return 0;
    }
    _DAT_02c99328 = 0x18;
    _DAT_02c9931c = 1;
  }
  puStack_10c = (byte *)&piStack_100;
  iStack_104 = 0x6c;
  puStack_108 = (byte *)0x0;
  piStack_110 = (int *)0x5ac581;
  FUN_005bfb70();
  iStack_104 = 0;
  piStack_100 = (int *)0x6c;
  uStack_98 = 0x6218;
  uStack_ec = 2;
  puStack_108 = &DAT_02c99304;
  iStack_fc = 0x21;
  piStack_110 = _DAT_02c99300;
  puStack_10c = (byte *)&piStack_100;
  iVar1 = (**(code **)(*_DAT_02c99300 + 0x18))();
  if (iVar1 != 0) {
    iStack_fc = 1;
    iVar1 = (**(code **)(*_DAT_02c99300 + 0x18))(_DAT_02c99300,&piStack_110,&DAT_02c99304,0);
    if (iVar1 != 0) {
      uStack_a8 = 0xa18;
      iVar1 = (**(code **)(*_DAT_02c99300 + 0x18))(_DAT_02c99300,&piStack_110,&DAT_02c99304,0);
      if (iVar1 != 0) {
        return 0;
      }
    }
  }
  FUN_005bfb70(auStack_38,0,4);
  auStack_38[0] = 4;
  iVar1 = (**(code **)(*_DAT_02c99304 + 0x30))(_DAT_02c99304,auStack_38,&DAT_02c99308);
  if (iVar1 == 0) {
    iVar1 = 0;
    if (0 < DAT_0061b49c) {
      iVar3 = DAT_0061b4a0 >> 0x1f;
      iVar2 = DAT_0061b4a0 + iVar3 * -8;
      iStack_40 = DAT_0061b498 * 4;
      iVar4 = 0;
      iVar5 = 0;
      do {
        *(int *)(&DAT_01c4354c + iVar5) =
             DAT_0061b498 * iVar1 * ((int)(iVar2 - (uint)(iVar3 << 2 < 0)) >> 3) + DAT_00629010;
        iVar1 = iVar1 + 1;
        *(uint *)(&DAT_01c4480c + iVar5) = DAT_0071362c + iVar4;
        iVar4 = iVar4 + iStack_40;
        iVar5 = iVar5 + 4;
      } while (iVar1 < DAT_0061b49c);
    }
    FUN_00401810(0,0,iStack_28 + -1,iStack_24 + -1);
    iVar1 = 0;
    FUN_005acec0();
    do {
      FUN_005bfb70(auStack_b0,0,0x6c);
      auStack_b0[0] = 0x6c;
      iVar2 = (**(code **)(*_DAT_02c99308 + 100))(_DAT_02c99308,0,auStack_b0,1,0);
      if (iVar2 != 0) {
        _DAT_01d1d400 = "..\\wincore\\wddvmem.cpp";
        _DAT_01d1d404 = 0x1ec;
        FUN_005030e0("Clear of back buffer failed");
      }
      iVar5 = 0;
      iVar2 = iStack_a0;
      if (0 < _DAT_02c99324) {
        do {
          iVar3 = _DAT_02c99320 * _DAT_02c99328 >> 0x1f;
          FUN_005bfb70(iVar2,0,(int)((_DAT_02c99320 * _DAT_02c99328 + iVar3 * -8) -
                                    (uint)(iVar3 << 2 < 0)) >> 3);
          iVar5 = iVar5 + 1;
          iVar2 = iVar2 + iStack_b4;
        } while (iVar5 < _DAT_02c99324);
      }
      iVar2 = (**(code **)(*_DAT_02c99308 + 0x80))(_DAT_02c99308,0);
      if (iVar2 != 0) {
        _DAT_01d1d400 = "..\\wincore\\wddvmem.cpp";
        _DAT_01d1d404 = 0x1f6;
        FUN_005030e0("Unlock of back buffer clear failed");
      }
      _DAT_02c99314 = 1;
      iVar1 = iVar1 + 1;
      FUN_005acff0();
    } while (iVar1 < 3);
    return 1;
  }
  _DAT_01d1d400 = "..\\wincore\\wddvmem.cpp";
  _DAT_01d1d404 = 0x1d1;
  FUN_005030e0("setScreenResolution - Create back buffer failed!");
  return 0;
}
