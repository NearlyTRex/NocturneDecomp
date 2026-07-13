// Name: FUN_0052a450
// Address: 0052a450
// Address Range: [[0052a450, 0052a961]]
// Convention: unknown
// Signature: undefined4 FUN_0052a450(undefined4 *param_1,int param_2,ushort param_3,int param_4,uint *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0052a450(uint *param_1,int param_2,ushort param_3,int param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  byte auStack_6b0 [400];
  byte auStack_520 [384];
  byte auStack_3a0 [416];
  byte auStack_200 [384];
  uint uStack_80;
  uint uStack_7c;
  int iStack_78;
  uint *puStack_70;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  ushort *puStack_4c;
  ushort local_48;
  ushort local_46;
  int local_44;
  int local_40;
  ushort local_3c;
  ushort local_3a;
  ushort uStack_34;
  ushort uStack_32;
  int *piStack_30;
  int *piStack_2c;
  uint uStack_28;
  float fStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  if (_DAT_02dc9224 != (int *)0x0) {
    (**(code **)(*_DAT_02dc9224 + 8))(_DAT_02dc9224);
    _DAT_02dc9224 = (int *)0x0;
  }
  if (_DAT_02dc9218 != (int *)0x0) {
    FUN_00563cc0(&local_48,0,0x12);
    local_48 = 1;
    local_46 = param_3;
    local_44 = param_4;
    local_3c = (short)((int)((param_2 + (param_2 >> 0x1f) * -8) - (uint)((param_2 >> 0x1f) << 2 < 0)
                            ) >> 3) * param_3;
    local_40 = param_4 * (uint)local_3c;
    local_3a = (ushort)param_2;
    iVar1 = (**(code **)(*_DAT_02dc9218 + 0x38))(_DAT_02dc9218,&local_48);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*_DAT_02dc9218 + 0x14))(_DAT_02dc9218,&local_48,0x12,0);
      if (iVar1 == 0) {
        _DAT_02dc9228 = (uint)local_3a;
        _DAT_02dc922c = local_44;
        _DAT_02dc9230 = (uint)local_46;
        if (_DAT_02dc9224 != (int *)0x0) {
          (**(code **)(*_DAT_02dc9224 + 8))(_DAT_02dc9224);
          _DAT_02dc9224 = (int *)0x0;
        }
        uStack_20 = 0;
        uStack_1c = 0;
        FUN_00563cc0(&uStack_34,0,0x12);
        uStack_34 = 1;
        uStack_32 = 1;
        piStack_30 = (int *)0x5622;
        uStack_28 = 0x100002;
        piStack_2c = (int *)0xac44;
        FUN_00563cc0(&uStack_5c,0,0x14);
        puStack_4c = &uStack_34;
        uStack_5c = 0x14;
        uStack_58 = 0x12;
        uStack_54 = 0x400;
        iVar1 = (**(code **)(*_DAT_02dc9214 + 0xc))(_DAT_02dc9214,&uStack_5c,&uStack_20,0);
        if (iVar1 == 0) {
          (**(code **)*piStack_30)(piStack_30,&DAT_005c3918,&piStack_2c);
          if (piStack_2c == (int *)0x0) {
            if (piStack_30 != (int *)0x0) {
              (**(code **)(*piStack_30 + 8))(piStack_30);
              piStack_30 = (int *)0x0;
            }
          }
          else {
            (**(code **)*piStack_2c)(piStack_2c,&DAT_005bed10,&DAT_02dc9224);
            if (piStack_30 != (int *)0x0) {
              (**(code **)(*piStack_30 + 8))(piStack_30);
              piStack_30 = (int *)0x0;
            }
            if (piStack_2c != (int *)0x0) {
              (**(code **)(*piStack_2c + 8))(piStack_2c);
              piStack_2c = (int *)0x0;
            }
          }
        }
        else {
          uVar2 = FUN_00529a90(iVar1);
          FUN_00563c90(auStack_3a0,"DirectSux: Unable to %s.  (%s)",
                       "Create temp secondary buffer for property set creation",uVar2);
          FUN_00529980(auStack_3a0);
        }
        if (_DAT_02dc9224 != (int *)0x0) {
          uStack_28 = 1;
          (**(code **)(*_DAT_02dc9224 + 0x10))(_DAT_02dc9224,&DAT_005bed20,0,0,0,&uStack_28,4);
        }
        if (_DAT_02dc9220 != 0) {
          *param_1 = 0;
          return 1;
        }
        _DAT_02dc923c = 8;
        fStack_24 = (float)FUN_00528970();
        fVar3 = ((float10)_DAT_02dc922c * (float10)fStack_24) / (float10)_DAT_02dc923c;
        FUN_00563a30();
        _DAT_02dc9234 = (uint)ROUND(fVar3);
        _DAT_02dc9234 = _DAT_02dc9234 + 0xf & 0xfffffff0;
        _DAT_02dc9238 =
             _DAT_02dc9234 *
             ((int)((_DAT_02dc9228 + ((int)_DAT_02dc9228 >> 0x1f) * -8) -
                   (uint)(((int)_DAT_02dc9228 >> 0x1f) << 2 < 0)) >> 3) * _DAT_02dc9230;
        FUN_00563cc0(&uStack_80,0,0x14);
        puStack_70 = &uStack_58;
        iStack_78 = _DAT_02dc9238 * _DAT_02dc923c;
        uStack_80 = 0x14;
        uStack_7c = 0;
        if (_DAT_02dc921c != (int *)0x0) {
          (**(code **)(*_DAT_02dc921c + 8))(_DAT_02dc921c);
          _DAT_02dc921c = (int *)0x0;
        }
        iVar1 = (**(code **)(*_DAT_02dc9214 + 0xc))(_DAT_02dc9214,&uStack_80,&DAT_02dc921c,0);
        if (iVar1 == 0) {
          *param_5 = _DAT_02dc9234;
          return 1;
        }
        uVar2 = FUN_00529a90(iVar1);
        FUN_00563c90(auStack_6b0,"DirectSux: Unable to %s.  (%s)",
                     "Create the secondary buffer",uVar2);
        FUN_00529980(auStack_6b0);
      }
      else {
        uVar2 = FUN_00529a90(iVar1);
        FUN_00563c90(auStack_200,"DirectSux: Unable to %s.  (%s)",
                     "Get Primary buffer format",uVar2);
        FUN_00529980(auStack_200);
      }
    }
    else {
      uVar2 = FUN_00529a90(iVar1);
      FUN_00563c90(auStack_520,"DirectSux: Unable to %s.  (%s)",
                   "Set Primary buffer format",uVar2);
      FUN_00529980(auStack_520);
    }
  }
  if (_DAT_02dc921c != (int *)0x0) {
    (**(code **)(*_DAT_02dc921c + 8))(_DAT_02dc921c);
    _DAT_02dc921c = (int *)0x0;
  }
  return 0;
}
