// Name: sound_snddx.cpp_FUN_00577f90
// Address: 00577f90
// Address Range: [[00577f90, 005784a4]]
// Convention: unknown
// Signature: undefined4 sound_snddx_cpp_FUN_00577f90(undefined4 *param_1,int param_2,ushort param_3,int param_4,uint *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint sound_snddx_cpp_FUN_00577f90(uint *param_1,int param_2,ushort param_3,int param_4,uint *param_5)

{
  uint uVar1;
  int extraout_EAX;
  char *pcVar2;
  float10 fVar3;
  int *enable;
  byte auStack_6d0 [384];
  byte auStack_550 [416];
  byte auStack_3b0 [400];
  byte auStack_220 [384];
  uint uStack_a0;
  uint uStack_9c;
  int iStack_98;
  byte *puStack_90;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  ushort *puStack_5c;
  byte auStack_58 [16];
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
  
  if (_DAT_02c81da4 != (int *)0x0) {
    (**(code **)(*_DAT_02c81da4 + 8))(_DAT_02c81da4);
    _DAT_02c81da4 = (int *)0x0;
  }
  if (_DAT_02c81d98 != (int *)0x0) {
    memset(&uStack_48,0,0x12);
    uStack_48 = 1;
    uStack_46 = param_3;
    iStack_44 = param_4;
    uStack_3c = (short)((int)((param_2 + (param_2 >> 0x1f) * -8) -
                             (uint)((param_2 >> 0x1f) << 2 < 0)) >> 3) * param_3;
    iStack_40 = param_4 * (uint)uStack_3c;
    uStack_3a = (ushort)param_2;
    uVar1 = (**(code **)(*_DAT_02c81d98 + 0x38))(_DAT_02c81d98,&uStack_48);
    if (uVar1 == 0) {
      uVar1 = (**(code **)(*_DAT_02c81d98 + 0x14))(_DAT_02c81d98,&uStack_48,0x12,0);
      if (uVar1 == 0) {
        _DAT_02c81da8 = (uint)uStack_3a;
        _DAT_02c81dac = iStack_44;
        _DAT_02c81db0 = (uint)uStack_46;
        if (_DAT_02c81da4 != (int *)0x0) {
          (**(code **)(*_DAT_02c81da4 + 8))(_DAT_02c81da4);
          _DAT_02c81da4 = (int *)0x0;
        }
        uStack_20 = 0;
        uStack_1c = 0;
        memset(&uStack_34,0,0x12);
        uStack_34 = 1;
        uStack_32 = 1;
        piStack_30 = (int *)0x5622;
        uStack_28 = 0x100002;
        piStack_2c = (int *)0xac44;
        memset(&uStack_6c,0,0x24);
        puStack_5c = &uStack_34;
        uStack_6c = 0x24;
        uStack_68 = 0x12;
        uStack_64 = 0x400;
        enable = _DAT_02c81d94;
        uVar1 = (**(code **)(*_DAT_02c81d94 + 0xc))(_DAT_02c81d94,&uStack_6c,&uStack_20,0);
        if (uVar1 == 0) {
          (**(code **)*piStack_30)(piStack_30,&DAT_00627870,&piStack_2c);
          if (piStack_2c == (int *)0x0) {
            if (piStack_30 != (int *)0x0) {
              (**(code **)(*piStack_30 + 8))(piStack_30);
              piStack_30 = (int *)0x0;
            }
          }
          else {
            (**(code **)*piStack_2c)(piStack_2c,&DAT_006235a0,&DAT_02c81da4);
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
          pcVar2 = sound_snddx_cpp_FUN_00577500(uVar1);
          FUN_005bfb40
                    (auStack_550,"DirectSux: Unable to %s.  (%s)",
                     "Create temp secondary buffer for property set creation",pcVar2);
          sound_sndmain_cpp_FUN_005773f0(auStack_550);
        }
        if (_DAT_02c81da4 != (int *)0x0) {
          uStack_28 = 1;
          (**(code **)(*_DAT_02c81da4 + 0x10))(_DAT_02c81da4,&DAT_006235b0,0,0,0,&uStack_28,4);
        }
        sound_sndmain_cpp_FUN_00575560((int)enable);
        if (0 < extraout_EAX) {
          *param_1 = 0;
          return 1;
        }
        _DAT_02c81dbc = 8;
        fStack_24 = (float)sound_sndmain_cpp_getMaxSwLatency_FUN_00576030();
        fVar3 = ((float10)_DAT_02c81dac * (float10)fStack_24) / (float10)_DAT_02c81dbc;
        round();
        _DAT_02c81db4 = (uint)ROUND(fVar3);
        _DAT_02c81db4 = _DAT_02c81db4 + 0xf & 0xfffffff0;
        _DAT_02c81db8 =
             _DAT_02c81db4 *
             ((int)((_DAT_02c81da8 + ((int)_DAT_02c81da8 >> 0x1f) * -8) -
                   (uint)(((int)_DAT_02c81da8 >> 0x1f) << 2 < 0)) >> 3) * _DAT_02c81db0;
        memset(&uStack_a0,0,0x24);
        puStack_90 = auStack_58;
        iStack_98 = _DAT_02c81db8 * _DAT_02c81dbc;
        uStack_a0 = 0x24;
        uStack_9c = 0;
        if (_DAT_02c81d9c != (int *)0x0) {
          (**(code **)(*_DAT_02c81d9c + 8))(_DAT_02c81d9c);
          _DAT_02c81d9c = (int *)0x0;
        }
        uVar1 = (**(code **)(*_DAT_02c81d94 + 0xc))(_DAT_02c81d94,&uStack_a0,&DAT_02c81d9c,0);
        if (uVar1 == 0) {
          *param_5 = _DAT_02c81db4;
          return 1;
        }
        pcVar2 = sound_snddx_cpp_FUN_00577500(uVar1);
        FUN_005bfb40
                  (auStack_6d0,"DirectSux: Unable to %s.  (%s)",
                   "Create the secondary buffer",pcVar2);
        sound_sndmain_cpp_FUN_005773f0(auStack_6d0);
      }
      else {
        pcVar2 = sound_snddx_cpp_FUN_00577500(uVar1);
        FUN_005bfb40
                  (auStack_220,"DirectSux: Unable to %s.  (%s)",
                   "Get Primary buffer format",pcVar2);
        sound_sndmain_cpp_FUN_005773f0(auStack_220);
      }
    }
    else {
      pcVar2 = sound_snddx_cpp_FUN_00577500(uVar1);
      FUN_005bfb40
                (auStack_3b0,"DirectSux: Unable to %s.  (%s)","Set Primary buffer format",
                 pcVar2);
      sound_sndmain_cpp_FUN_005773f0(auStack_3b0);
    }
  }
  if (_DAT_02c81d9c != (int *)0x0) {
    (**(code **)(*_DAT_02c81d9c + 8))(_DAT_02c81d9c);
    _DAT_02c81d9c = (int *)0x0;
  }
  return 0;
}
