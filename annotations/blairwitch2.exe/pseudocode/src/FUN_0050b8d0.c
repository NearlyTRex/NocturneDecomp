// Name: FUN_0050b8d0
// Address: 0050b8d0
// Address Range: [[0050b8d0, 0050bdac]]
// Convention: unknown
// Signature: void FUN_0050b8d0(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050b8d0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  if (param_2 != 0) {
    if (*param_1 == 2) {
      FUN_0047db40(0x01C25594,"Disconnecting from server...");
      iVar1 = FUN_0058e9e0();
      iVar1 = iVar1 / 0x12;
      _DAT_01d34e34 = iVar1 - _DAT_01d34e34;
      if (_DAT_01d34e34 < 0) {
        _DAT_01d34e34 = 0;
      }
      else if (0x20000 < _DAT_01d34e34) {
        _DAT_01d34e34 = 0x20000;
      }
      iVar3 = _DAT_01d34e38 + _DAT_01d34e34;
      iVar2 = iVar3 + -0x1e0000;
      _DAT_01d34e34 = iVar1;
      _DAT_01d34e38 = iVar3;
      if (param_1[0x48] < 0) {
LAB_0050ba41:
        FUN_0047e760(0x01C25594);
      }
      else {
        do {
          iVar1 = FUN_0058e9e0();
          iVar1 = iVar1 / 0x12;
          _DAT_01d34e34 = iVar1 - _DAT_01d34e34;
          if (_DAT_01d34e34 < 0) {
            _DAT_01d34e34 = 0;
          }
          else if (0x20000 < _DAT_01d34e34) {
            _DAT_01d34e34 = 0x20000;
          }
          _DAT_01d34e38 = _DAT_01d34e38 + _DAT_01d34e34;
          local_30 = (float)(_DAT_01d34e38 - iVar3) * (float)_DAT_005e0685;
          if (local_30 < 0.0) {
            local_30 = 0.0;
          }
          _DAT_01d34e34 = iVar1;
          if (((float)_DAT_005e0695 < local_30) || (0x40400000 < (int)local_30)) {
            FUN_0047bda0(0x01C25594,"Couldn't contact server to disconnect.");
            goto LAB_0050ba41;
          }
          FUN_0047dc40(0x01C25594,local_30 * _DAT_005e068d,0x453b8000);
          while( true ) {
            local_28 = (float)(_DAT_01d34e38 - iVar2) * (float)_DAT_005e0685;
            if (local_28 < 0.0) {
              local_28 = 0.0;
            }
            if ((float)_DAT_005e0695 < local_28) {
              local_28 = 30.0;
            }
            if ((float)_DAT_005e069d <= local_28) break;
            iVar1 = FUN_0058e9e0();
            _DAT_01d34e34 = iVar1 / 0x12 - _DAT_01d34e34;
            if (_DAT_01d34e34 < 0) {
              _DAT_01d34e34 = 0;
            }
            else if (0x20000 < _DAT_01d34e34) {
              _DAT_01d34e34 = 0x20000;
            }
            _DAT_01d34e38 = _DAT_01d34e38 + _DAT_01d34e34;
            _DAT_01d34e34 = iVar1 / 0x12;
          }
          FUN_0050f4b0(param_1,param_1 + param_1[0x48] * 0x20 + 0xf,1);
          iVar2 = _DAT_01d34e38;
          FUN_0050c190(param_1);
        } while (-1 < param_1[0x48]);
        FUN_0047e760(0x01C25594);
      }
    }
    if (*param_1 == 1) {
      FUN_0047db40(0x01C25594,"Disconnecting...");
      iVar1 = FUN_0058e9e0();
      iVar1 = iVar1 / 0x12;
      _DAT_01d34e34 = iVar1 - _DAT_01d34e34;
      if (_DAT_01d34e34 < 0) {
        _DAT_01d34e34 = 0;
      }
      else if (0x20000 < _DAT_01d34e34) {
        _DAT_01d34e34 = 0x20000;
      }
      iVar3 = _DAT_01d34e38 + _DAT_01d34e34;
      iVar2 = iVar3 + -0x1e0000;
      _DAT_01d34e34 = iVar1;
      _DAT_01d34e38 = iVar3;
      if (param_1[7] < 2) {
LAB_0050bc6e:
        FUN_0047e760(0x01C25594);
      }
      else {
        do {
          iVar1 = FUN_0058e9e0();
          iVar1 = iVar1 / 0x12;
          _DAT_01d34e34 = iVar1 - _DAT_01d34e34;
          if (_DAT_01d34e34 < 0) {
            _DAT_01d34e34 = 0;
          }
          else if (0x20000 < _DAT_01d34e34) {
            _DAT_01d34e34 = 0x20000;
          }
          _DAT_01d34e38 = _DAT_01d34e38 + _DAT_01d34e34;
          local_2c = (float)(_DAT_01d34e38 - iVar3) * (float)_DAT_005e0685;
          if (local_2c < 0.0) {
            local_2c = 0.0;
          }
          _DAT_01d34e34 = iVar1;
          if (((float)_DAT_005e0695 < local_2c) || (0x40a00000 < (int)local_2c)) {
            FUN_0047bda0(0x01C25594,"Couldn't connect to all clients to disconnect.");
            goto LAB_0050bc6e;
          }
          FUN_0047dc40(0x01C25594,local_2c * _DAT_005e068d,0x459c4000);
          while( true ) {
            local_24 = (float)(_DAT_01d34e38 - iVar2) * (float)_DAT_005e0685;
            if (local_24 < 0.0) {
              local_24 = 0.0;
            }
            if ((float)_DAT_005e0695 < local_24) {
              local_24 = 30.0;
            }
            if ((float)_DAT_005e069d <= local_24) break;
            iVar1 = FUN_0058e9e0();
            _DAT_01d34e34 = iVar1 / 0x12 - _DAT_01d34e34;
            if (_DAT_01d34e34 < 0) {
              _DAT_01d34e34 = 0;
            }
            else if (0x20000 < _DAT_01d34e34) {
              _DAT_01d34e34 = 0x20000;
            }
            _DAT_01d34e38 = _DAT_01d34e38 + _DAT_01d34e34;
            _DAT_01d34e34 = iVar1 / 0x12;
          }
          iVar1 = 0;
          if (0 < param_1[7]) {
            piVar4 = param_1 + 0xf;
            do {
              if (iVar1 != param_1[0x49]) {
                FUN_0050f4b0(param_1,piVar4,1);
              }
              iVar1 = iVar1 + 1;
              piVar4 = piVar4 + 0x20;
            } while (iVar1 < param_1[7]);
          }
          iVar2 = _DAT_01d34e38;
          FUN_0050c190(param_1);
        } while (1 < param_1[7]);
        FUN_0047e760(0x01C25594);
      }
    }
  }
  param_1[1] = 0;
  param_1[0x49] = -1;
  param_1[0x48] = -1;
  *(byte *)(param_1 + 0x4a) = 0;
  *param_1 = 0;
  _DAT_01d34e4c = 0;
  _DAT_01d51050 = 0;
  _DAT_01d34e40 = 0;
  param_1[7] = 0;
  _DAT_01d34e44 = 0;
  param_1[0x5e] = 0;
  return;
}
