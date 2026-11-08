// Name: FUN_00555560
// Address: 00555560
// Address Range: [[00555560, 00555a74]]
// Convention: unknown
// Signature: undefined4 FUN_00555560(undefined4 *param_1,int param_2,ushort param_3,int param_4,uint *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00555560(uint *param_1,int param_2,ushort param_3,int param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  byte auStack_6b0 [384];
  byte auStack_530 [416];
  byte auStack_390 [400];
  byte auStack_200 [384];
  uint uStack_80;
  uint uStack_7c;
  int iStack_78;
  uint *puStack_70;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  ushort *puStack_4c;
  ushort uStack_48;
  ushort uStack_46;
  int iStack_44;
  int iStack_40;
  ushort uStack_3c;
  ushort uStack_3a;
  ushort uStack_34;
  ushort uStack_32;
  int *piStack_30;
  int *piStack_2c;
  uint uStack_28;
  float fStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  if (_DAT_0264a5d4 != (int *)0x0) {
    (**(code **)(*_DAT_0264a5d4 + 8))(_DAT_0264a5d4);
    _DAT_0264a5d4 = (int *)0x0;
  }
  if (_DAT_0264a5c8 != (int *)0x0) {
    FUN_005b77c0(&uStack_48,0,0x12);
    uStack_48 = 1;
    uStack_46 = param_3;
    iStack_44 = param_4;
    uStack_3c = (short)((int)((param_2 + (param_2 >> 0x1f) * -8) -
                             (uint)((param_2 >> 0x1f) << 2 < 0)) >> 3) * param_3;
    iStack_40 = param_4 * (uint)uStack_3c;
    uStack_3a = (ushort)param_2;
    iVar1 = (**(code **)(*_DAT_0264a5c8 + 0x38))(_DAT_0264a5c8,&uStack_48);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*_DAT_0264a5c8 + 0x14))(_DAT_0264a5c8,&uStack_48,0x12,0);
      if (iVar1 == 0) {
        _DAT_0264a5d8 = (uint)uStack_3a;
        _DAT_0264a5dc = iStack_44;
        _DAT_0264a5e0 = (uint)uStack_46;
        if (_DAT_0264a5d4 != (int *)0x0) {
          (**(code **)(*_DAT_0264a5d4 + 8))(_DAT_0264a5d4);
          _DAT_0264a5d4 = (int *)0x0;
        }
        uStack_20 = 0;
        uStack_1c = 0;
        FUN_005b77c0(&uStack_34,0,0x12);
        uStack_34 = 1;
        uStack_32 = 1;
        piStack_30 = (int *)0x5622;
        uStack_28 = 0x100002;
        piStack_2c = (int *)0xac44;
        FUN_005b77c0(&uStack_5c,0,0x14);
        puStack_4c = &uStack_34;
        uStack_5c = 0x14;
        uStack_58 = 0x12;
        uStack_54 = 0x400;
        iVar1 = (**(code **)(*_DAT_0264a5c4 + 0xc))(_DAT_0264a5c4,&uStack_5c,&uStack_20,0);
        if (iVar1 == 0) {
          (**(code **)*piStack_30)(piStack_30,&DAT_00621070,&piStack_2c);
          if (piStack_2c == (int *)0x0) {
            if (piStack_30 != (int *)0x0) {
              (**(code **)(*piStack_30 + 8))(piStack_30);
              piStack_30 = (int *)0x0;
            }
          }
          else {
            (**(code **)*piStack_2c)(piStack_2c,&DAT_0061bf50,&DAT_0264a5d4);
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
          uVar2 = FUN_00554ad0(iVar1);
          FUN_005b7790(auStack_530,"DirectSux: Unable to %s.  (%s)",
                       "Create temp secondary buffer for property set creation",uVar2);
          FUN_005549c0(auStack_530);
        }
        if (_DAT_0264a5d4 != (int *)0x0) {
          uStack_28 = 1;
          (**(code **)(*_DAT_0264a5d4 + 0x10))(_DAT_0264a5d4,&DAT_0061bf60,0,0,0,&uStack_28,4);
        }
        iVar1 = FUN_00552b30();
        if (0 < iVar1) {
          *param_1 = 0;
          return 1;
        }
        _DAT_0264a5ec = 8;
        fStack_24 = (float)FUN_00553600();
        fVar3 = ((float10)_DAT_0264a5dc * (float10)fStack_24) / (float10)_DAT_0264a5ec;
        FUN_005b7ff0();
        _DAT_0264a5e4 = (uint)ROUND(fVar3);
        _DAT_0264a5e4 = _DAT_0264a5e4 + 0xf & 0xfffffff0;
        _DAT_0264a5e8 =
             _DAT_0264a5e4 *
             ((int)((_DAT_0264a5d8 + ((int)_DAT_0264a5d8 >> 0x1f) * -8) -
                   (uint)(((int)_DAT_0264a5d8 >> 0x1f) << 2 < 0)) >> 3) * _DAT_0264a5e0;
        FUN_005b77c0(&uStack_80,0,0x14);
        puStack_70 = &uStack_58;
        iStack_78 = _DAT_0264a5e8 * _DAT_0264a5ec;
        uStack_80 = 0x14;
        uStack_7c = 0;
        if (_DAT_0264a5cc != (int *)0x0) {
          (**(code **)(*_DAT_0264a5cc + 8))(_DAT_0264a5cc);
          _DAT_0264a5cc = (int *)0x0;
        }
        iVar1 = (**(code **)(*_DAT_0264a5c4 + 0xc))(_DAT_0264a5c4,&uStack_80,&DAT_0264a5cc,0);
        if (iVar1 == 0) {
          *param_5 = _DAT_0264a5e4;
          return 1;
        }
        uVar2 = FUN_00554ad0(iVar1);
        FUN_005b7790(auStack_6b0,"DirectSux: Unable to %s.  (%s)",
                     "Create the secondary buffer",uVar2);
        FUN_005549c0(auStack_6b0);
      }
      else {
        uVar2 = FUN_00554ad0(iVar1);
        FUN_005b7790(auStack_200,"DirectSux: Unable to %s.  (%s)",
                     "Get Primary buffer format",uVar2);
        FUN_005549c0(auStack_200);
      }
    }
    else {
      uVar2 = FUN_00554ad0(iVar1);
      FUN_005b7790(auStack_390,"DirectSux: Unable to %s.  (%s)",
                   "Set Primary buffer format",uVar2);
      FUN_005549c0(auStack_390);
    }
  }
  if (_DAT_0264a5cc != (int *)0x0) {
    (**(code **)(*_DAT_0264a5cc + 8))(_DAT_0264a5cc);
    _DAT_0264a5cc = (int *)0x0;
  }
  return 0;
}
