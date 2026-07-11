// Name: FUN_004e9e90
// Address: 004e9e90
// Address Range: [[004e9e90, 004ea362]]
// Convention: unknown
// Signature: void FUN_004e9e90(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e9e90(int *param_1,int param_2)

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
      FUN_00471660(0x01BCD074,"Disconnecting from server...");
      iVar1 = FUN_00558a30();
      iVar1 = iVar1 / 0x12;
      _DAT_01cea3f4 = iVar1 - _DAT_01cea3f4;
      if (_DAT_01cea3f4 < 0) {
        _DAT_01cea3f4 = 0;
      }
      else if (0x20000 < _DAT_01cea3f4) {
        _DAT_01cea3f4 = 0x20000;
      }
      iVar2 = _DAT_01cea3f8 + _DAT_01cea3f4;
      iVar3 = iVar2 + -0x1e0000;
      _DAT_01cea3f4 = iVar1;
      _DAT_01cea3f8 = iVar2;
      if (param_1[0x44] < 0) {
LAB_004ea004:
        FUN_004720c0(0x01BCD074);
      }
      else {
        do {
          iVar1 = FUN_00558a30();
          iVar1 = iVar1 / 0x12;
          _DAT_01cea3f4 = iVar1 - _DAT_01cea3f4;
          if (_DAT_01cea3f4 < 0) {
            _DAT_01cea3f4 = 0;
          }
          else if (0x20000 < _DAT_01cea3f4) {
            _DAT_01cea3f4 = 0x20000;
          }
          _DAT_01cea3f8 = _DAT_01cea3f8 + _DAT_01cea3f4;
          local_24 = (float)(_DAT_01cea3f8 - iVar2) * (float)_DAT_0058bd0a;
          if (local_24 < 0.0) {
            local_24 = 0.0;
          }
          _DAT_01cea3f4 = iVar1;
          if (((float)_DAT_0058bd1a < local_24) || (0x40400000 < (int)local_24)) {
            FUN_0046fe60(0x01BCD074,"Couldn't contact server to disconnect.");
            goto LAB_004ea004;
          }
          FUN_00471760(0x01BCD074,local_24 * _DAT_0058bd12,0x453b8000);
          while( true ) {
            local_30 = (float)(_DAT_01cea3f8 - iVar3) * (float)_DAT_0058bd0a;
            if (local_30 < 0.0) {
              local_30 = 0.0;
            }
            if ((float)_DAT_0058bd1a < local_30) {
              local_30 = 30.0;
            }
            if ((float)_DAT_0058bd22 <= local_30) break;
            iVar1 = FUN_00558a30();
            _DAT_01cea3f4 = iVar1 / 0x12 - _DAT_01cea3f4;
            if (_DAT_01cea3f4 < 0) {
              _DAT_01cea3f4 = 0;
            }
            else if (0x20000 < _DAT_01cea3f4) {
              _DAT_01cea3f4 = 0x20000;
            }
            _DAT_01cea3f8 = _DAT_01cea3f8 + _DAT_01cea3f4;
            _DAT_01cea3f4 = iVar1 / 0x12;
          }
          FUN_004edab0(param_1,param_1 + param_1[0x44] * 0x1e + 0xf,1);
          iVar3 = _DAT_01cea3f8;
          FUN_004ea740(param_1);
        } while (-1 < param_1[0x44]);
        FUN_004720c0(0x01BCD074);
      }
    }
    if (*param_1 == 1) {
      FUN_00471660(0x01BCD074,"Disconnecting...");
      iVar1 = FUN_00558a30();
      iVar1 = iVar1 / 0x12;
      _DAT_01cea3f4 = iVar1 - _DAT_01cea3f4;
      if (_DAT_01cea3f4 < 0) {
        _DAT_01cea3f4 = 0;
      }
      else if (0x20000 < _DAT_01cea3f4) {
        _DAT_01cea3f4 = 0x20000;
      }
      iVar2 = _DAT_01cea3f8 + _DAT_01cea3f4;
      iVar3 = iVar2 + -0x1e0000;
      _DAT_01cea3f4 = iVar1;
      _DAT_01cea3f8 = iVar2;
      if (param_1[7] < 2) {
LAB_004ea227:
        FUN_004720c0(0x01BCD074);
      }
      else {
        do {
          iVar1 = FUN_00558a30();
          iVar1 = iVar1 / 0x12;
          _DAT_01cea3f4 = iVar1 - _DAT_01cea3f4;
          if (_DAT_01cea3f4 < 0) {
            _DAT_01cea3f4 = 0;
          }
          else if (0x20000 < _DAT_01cea3f4) {
            _DAT_01cea3f4 = 0x20000;
          }
          _DAT_01cea3f8 = _DAT_01cea3f8 + _DAT_01cea3f4;
          local_2c = (float)(_DAT_01cea3f8 - iVar2) * (float)_DAT_0058bd0a;
          if (local_2c < 0.0) {
            local_2c = 0.0;
          }
          _DAT_01cea3f4 = iVar1;
          if (((float)_DAT_0058bd1a < local_2c) || (0x40a00000 < (int)local_2c)) {
            FUN_0046fe60(0x01BCD074,"Couldn't connect to all clients to disconnect.");
            goto LAB_004ea227;
          }
          FUN_00471760(0x01BCD074,local_2c * _DAT_0058bd12,0x459c4000);
          while( true ) {
            local_28 = (float)(_DAT_01cea3f8 - iVar3) * (float)_DAT_0058bd0a;
            if (local_28 < 0.0) {
              local_28 = 0.0;
            }
            if ((float)_DAT_0058bd1a < local_28) {
              local_28 = 30.0;
            }
            if ((float)_DAT_0058bd22 <= local_28) break;
            iVar1 = FUN_00558a30();
            _DAT_01cea3f4 = iVar1 / 0x12 - _DAT_01cea3f4;
            if (_DAT_01cea3f4 < 0) {
              _DAT_01cea3f4 = 0;
            }
            else if (0x20000 < _DAT_01cea3f4) {
              _DAT_01cea3f4 = 0x20000;
            }
            _DAT_01cea3f8 = _DAT_01cea3f8 + _DAT_01cea3f4;
            _DAT_01cea3f4 = iVar1 / 0x12;
          }
          iVar1 = 0;
          if (0 < param_1[7]) {
            piVar4 = param_1 + 0xf;
            do {
              if (iVar1 != param_1[0x45]) {
                FUN_004edab0(param_1,piVar4,1);
              }
              iVar1 = iVar1 + 1;
              piVar4 = piVar4 + 0x1e;
            } while (iVar1 < param_1[7]);
          }
          iVar3 = _DAT_01cea3f8;
          FUN_004ea740(param_1);
        } while (1 < param_1[7]);
        FUN_004720c0(0x01BCD074);
      }
    }
  }
  param_1[1] = 0;
  param_1[0x45] = -1;
  param_1[0x44] = -1;
  *(byte *)(param_1 + 0x46) = 0;
  *param_1 = 0;
  _DAT_01cea40c = 0;
  _DAT_01d06610 = 0;
  _DAT_01cea400 = 0;
  param_1[7] = 0;
  _DAT_01cea404 = 0;
  param_1[0x5a] = 0;
  return;
}
