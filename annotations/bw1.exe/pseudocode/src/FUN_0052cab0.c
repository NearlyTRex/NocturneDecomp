// Name: FUN_0052cab0
// Address: 0052cab0
// Address Range: [[0052cab0, 0052cf82]]
// Convention: unknown
// Signature: void FUN_0052cab0(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052cab0(int *param_1,int param_2)

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
      FUN_004961b0(0x01C3EB54,"Disconnecting from server...");
      iVar1 = FUN_005b2420();
      iVar1 = iVar1 / 0x12;
      _DAT_01d51d9c = iVar1 - _DAT_01d51d9c;
      if (_DAT_01d51d9c < 0) {
        _DAT_01d51d9c = 0;
      }
      else if (0x20000 < _DAT_01d51d9c) {
        _DAT_01d51d9c = 0x20000;
      }
      iVar2 = _DAT_01d51da0 + _DAT_01d51d9c;
      iVar3 = iVar2 + -0x1e0000;
      _DAT_01d51d9c = iVar1;
      _DAT_01d51da0 = iVar2;
      if (param_1[0x46] < 0) {
LAB_0052cc24:
        FUN_00496dd0(0x01C3EB54);
      }
      else {
        do {
          iVar1 = FUN_005b2420();
          iVar1 = iVar1 / 0x12;
          _DAT_01d51d9c = iVar1 - _DAT_01d51d9c;
          if (_DAT_01d51d9c < 0) {
            _DAT_01d51d9c = 0;
          }
          else if (0x20000 < _DAT_01d51d9c) {
            _DAT_01d51d9c = 0x20000;
          }
          _DAT_01d51da0 = _DAT_01d51da0 + _DAT_01d51d9c;
          local_24 = (float)(_DAT_01d51da0 - iVar2) * (float)_DAT_005eb8e0;
          if (local_24 < 0.0) {
            local_24 = 0.0;
          }
          _DAT_01d51d9c = iVar1;
          if (((float)_DAT_005eb8f0 < local_24) || (0x40400000 < (int)local_24)) {
            FUN_004942e0(0x01C3EB54,"Couldn't contact server to disconnect.");
            goto LAB_0052cc24;
          }
          FUN_004962b0(0x01C3EB54,local_24 * _DAT_005eb8e8,0x453b8000);
          while( true ) {
            local_30 = (float)(_DAT_01d51da0 - iVar3) * (float)_DAT_005eb8e0;
            if (local_30 < 0.0) {
              local_30 = 0.0;
            }
            if ((float)_DAT_005eb8f0 < local_30) {
              local_30 = 30.0;
            }
            if ((float)_DAT_005eb8f8 <= local_30) break;
            iVar1 = FUN_005b2420();
            _DAT_01d51d9c = iVar1 / 0x12 - _DAT_01d51d9c;
            if (_DAT_01d51d9c < 0) {
              _DAT_01d51d9c = 0;
            }
            else if (0x20000 < _DAT_01d51d9c) {
              _DAT_01d51d9c = 0x20000;
            }
            _DAT_01d51da0 = _DAT_01d51da0 + _DAT_01d51d9c;
            _DAT_01d51d9c = iVar1 / 0x12;
          }
          FUN_005306d0(param_1,param_1 + param_1[0x46] * 0x1f + 0xf,1);
          iVar3 = _DAT_01d51da0;
          FUN_0052d360(param_1);
        } while (-1 < param_1[0x46]);
        FUN_00496dd0(0x01C3EB54);
      }
    }
    if (*param_1 == 1) {
      FUN_004961b0(0x01C3EB54,"Disconnecting...");
      iVar1 = FUN_005b2420();
      iVar1 = iVar1 / 0x12;
      _DAT_01d51d9c = iVar1 - _DAT_01d51d9c;
      if (_DAT_01d51d9c < 0) {
        _DAT_01d51d9c = 0;
      }
      else if (0x20000 < _DAT_01d51d9c) {
        _DAT_01d51d9c = 0x20000;
      }
      iVar2 = _DAT_01d51da0 + _DAT_01d51d9c;
      iVar3 = iVar2 + -0x1e0000;
      _DAT_01d51d9c = iVar1;
      _DAT_01d51da0 = iVar2;
      if (param_1[7] < 2) {
LAB_0052ce47:
        FUN_00496dd0(0x01C3EB54);
      }
      else {
        do {
          iVar1 = FUN_005b2420();
          iVar1 = iVar1 / 0x12;
          _DAT_01d51d9c = iVar1 - _DAT_01d51d9c;
          if (_DAT_01d51d9c < 0) {
            _DAT_01d51d9c = 0;
          }
          else if (0x20000 < _DAT_01d51d9c) {
            _DAT_01d51d9c = 0x20000;
          }
          _DAT_01d51da0 = _DAT_01d51da0 + _DAT_01d51d9c;
          local_2c = (float)(_DAT_01d51da0 - iVar2) * (float)_DAT_005eb8e0;
          if (local_2c < 0.0) {
            local_2c = 0.0;
          }
          _DAT_01d51d9c = iVar1;
          if (((float)_DAT_005eb8f0 < local_2c) || (0x40a00000 < (int)local_2c)) {
            FUN_004942e0(0x01C3EB54,"Couldn't connect to all clients to disconnect.");
            goto LAB_0052ce47;
          }
          FUN_004962b0(0x01C3EB54,local_2c * _DAT_005eb8e8,0x459c4000);
          while( true ) {
            local_28 = (float)(_DAT_01d51da0 - iVar3) * (float)_DAT_005eb8e0;
            if (local_28 < 0.0) {
              local_28 = 0.0;
            }
            if ((float)_DAT_005eb8f0 < local_28) {
              local_28 = 30.0;
            }
            if ((float)_DAT_005eb8f8 <= local_28) break;
            iVar1 = FUN_005b2420();
            _DAT_01d51d9c = iVar1 / 0x12 - _DAT_01d51d9c;
            if (_DAT_01d51d9c < 0) {
              _DAT_01d51d9c = 0;
            }
            else if (0x20000 < _DAT_01d51d9c) {
              _DAT_01d51d9c = 0x20000;
            }
            _DAT_01d51da0 = _DAT_01d51da0 + _DAT_01d51d9c;
            _DAT_01d51d9c = iVar1 / 0x12;
          }
          iVar1 = 0;
          if (0 < param_1[7]) {
            piVar4 = param_1 + 0xf;
            do {
              if (iVar1 != param_1[0x47]) {
                FUN_005306d0(param_1,piVar4,1);
              }
              iVar1 = iVar1 + 1;
              piVar4 = piVar4 + 0x1f;
            } while (iVar1 < param_1[7]);
          }
          iVar3 = _DAT_01d51da0;
          FUN_0052d360(param_1);
        } while (1 < param_1[7]);
        FUN_00496dd0(0x01C3EB54);
      }
    }
  }
  param_1[1] = 0;
  param_1[0x47] = -1;
  param_1[0x46] = -1;
  *(byte *)(param_1 + 0x48) = 0;
  *param_1 = 0;
  _DAT_01d51db4 = 0;
  _DAT_01d6dfb8 = 0;
  _DAT_01d51da8 = 0;
  param_1[7] = 0;
  _DAT_01d51dac = 0;
  param_1[0x5c] = 0;
  return;
}
