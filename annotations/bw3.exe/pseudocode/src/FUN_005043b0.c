// Name: FUN_005043b0
// Address: 005043b0
// Address Range: [[005043b0, 0050488c]]
// Convention: unknown
// Signature: void FUN_005043b0(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005043b0(int *param_1,int param_2)

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
      FUN_0047ed50(0x01C5B0E4,"Disconnecting from server...");
      iVar1 = FUN_005806a0();
      iVar1 = iVar1 / 0x12;
      _DAT_01da6474 = iVar1 - _DAT_01da6474;
      if (_DAT_01da6474 < 0) {
        _DAT_01da6474 = 0;
      }
      else if (0x20000 < _DAT_01da6474) {
        _DAT_01da6474 = 0x20000;
      }
      iVar3 = _DAT_01da6478 + _DAT_01da6474;
      iVar2 = iVar3 + -0x1e0000;
      _DAT_01da6474 = iVar1;
      _DAT_01da6478 = iVar3;
      if (param_1[0x48] < 0) {
LAB_00504521:
        FUN_0047f970(0x01C5B0E4);
      }
      else {
        do {
          iVar1 = FUN_005806a0();
          iVar1 = iVar1 / 0x12;
          _DAT_01da6474 = iVar1 - _DAT_01da6474;
          if (_DAT_01da6474 < 0) {
            _DAT_01da6474 = 0;
          }
          else if (0x20000 < _DAT_01da6474) {
            _DAT_01da6474 = 0x20000;
          }
          _DAT_01da6478 = _DAT_01da6478 + _DAT_01da6474;
          local_30 = (float)(_DAT_01da6478 - iVar3) * (float)_DAT_005ca6f1;
          if (local_30 < 0.0) {
            local_30 = 0.0;
          }
          _DAT_01da6474 = iVar1;
          if (((float)_DAT_005ca701 < local_30) || (0x40400000 < (int)local_30)) {
            FUN_0047ce80(0x01C5B0E4,"Couldn't contact server to disconnect.");
            goto LAB_00504521;
          }
          FUN_0047ee50(0x01C5B0E4,local_30 * _DAT_005ca6f9,0x453b8000);
          while( true ) {
            local_28 = (float)(_DAT_01da6478 - iVar2) * (float)_DAT_005ca6f1;
            if (local_28 < 0.0) {
              local_28 = 0.0;
            }
            if ((float)_DAT_005ca701 < local_28) {
              local_28 = 30.0;
            }
            if ((float)_DAT_005ca709 <= local_28) break;
            iVar1 = FUN_005806a0();
            _DAT_01da6474 = iVar1 / 0x12 - _DAT_01da6474;
            if (_DAT_01da6474 < 0) {
              _DAT_01da6474 = 0;
            }
            else if (0x20000 < _DAT_01da6474) {
              _DAT_01da6474 = 0x20000;
            }
            _DAT_01da6478 = _DAT_01da6478 + _DAT_01da6474;
            _DAT_01da6474 = iVar1 / 0x12;
          }
          FUN_00507f90(param_1,param_1 + param_1[0x48] * 0x20 + 0xf,1);
          iVar2 = _DAT_01da6478;
          FUN_00504c70(param_1);
        } while (-1 < param_1[0x48]);
        FUN_0047f970(0x01C5B0E4);
      }
    }
    if (*param_1 == 1) {
      FUN_0047ed50(0x01C5B0E4,"Disconnecting...");
      iVar1 = FUN_005806a0();
      iVar1 = iVar1 / 0x12;
      _DAT_01da6474 = iVar1 - _DAT_01da6474;
      if (_DAT_01da6474 < 0) {
        _DAT_01da6474 = 0;
      }
      else if (0x20000 < _DAT_01da6474) {
        _DAT_01da6474 = 0x20000;
      }
      iVar3 = _DAT_01da6478 + _DAT_01da6474;
      iVar2 = iVar3 + -0x1e0000;
      _DAT_01da6474 = iVar1;
      _DAT_01da6478 = iVar3;
      if (param_1[7] < 2) {
LAB_0050474e:
        FUN_0047f970(0x01C5B0E4);
      }
      else {
        do {
          iVar1 = FUN_005806a0();
          iVar1 = iVar1 / 0x12;
          _DAT_01da6474 = iVar1 - _DAT_01da6474;
          if (_DAT_01da6474 < 0) {
            _DAT_01da6474 = 0;
          }
          else if (0x20000 < _DAT_01da6474) {
            _DAT_01da6474 = 0x20000;
          }
          _DAT_01da6478 = _DAT_01da6478 + _DAT_01da6474;
          local_2c = (float)(_DAT_01da6478 - iVar3) * (float)_DAT_005ca6f1;
          if (local_2c < 0.0) {
            local_2c = 0.0;
          }
          _DAT_01da6474 = iVar1;
          if (((float)_DAT_005ca701 < local_2c) || (0x40a00000 < (int)local_2c)) {
            FUN_0047ce80(0x01C5B0E4,"Couldn't connect to all clients to disconnect.");
            goto LAB_0050474e;
          }
          FUN_0047ee50(0x01C5B0E4,local_2c * _DAT_005ca6f9,0x459c4000);
          while( true ) {
            local_24 = (float)(_DAT_01da6478 - iVar2) * (float)_DAT_005ca6f1;
            if (local_24 < 0.0) {
              local_24 = 0.0;
            }
            if ((float)_DAT_005ca701 < local_24) {
              local_24 = 30.0;
            }
            if ((float)_DAT_005ca709 <= local_24) break;
            iVar1 = FUN_005806a0();
            _DAT_01da6474 = iVar1 / 0x12 - _DAT_01da6474;
            if (_DAT_01da6474 < 0) {
              _DAT_01da6474 = 0;
            }
            else if (0x20000 < _DAT_01da6474) {
              _DAT_01da6474 = 0x20000;
            }
            _DAT_01da6478 = _DAT_01da6478 + _DAT_01da6474;
            _DAT_01da6474 = iVar1 / 0x12;
          }
          iVar1 = 0;
          if (0 < param_1[7]) {
            piVar4 = param_1 + 0xf;
            do {
              if (iVar1 != param_1[0x49]) {
                FUN_00507f90(param_1,piVar4,1);
              }
              iVar1 = iVar1 + 1;
              piVar4 = piVar4 + 0x20;
            } while (iVar1 < param_1[7]);
          }
          iVar2 = _DAT_01da6478;
          FUN_00504c70(param_1);
        } while (1 < param_1[7]);
        FUN_0047f970(0x01C5B0E4);
      }
    }
  }
  param_1[1] = 0;
  param_1[0x49] = -1;
  param_1[0x48] = -1;
  *(byte *)(param_1 + 0x4a) = 0;
  *param_1 = 0;
  _DAT_01da648c = 0;
  _DAT_01dc2690 = 0;
  _DAT_01da6480 = 0;
  param_1[7] = 0;
  _DAT_01da6484 = 0;
  param_1[0x5e] = 0;
  return;
}
