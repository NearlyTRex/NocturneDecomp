// Name: sound_snddx.cpp_FUN_0055b100
// Address: 0055b100
// Address Range: [[0055b100, 0055b614]]
// Convention: unknown
// Signature: undefined4 sound_snddx_cpp_FUN_0055b100(undefined4 *param_1,int param_2,ushort param_3,int param_4,uint *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint sound_snddx_cpp_FUN_0055b100(uint *param_1,int param_2,ushort param_3,int param_4,uint *param_5)

{
  uint uVar1;
  float10 fVar2;
  char acStack_6d0 [384];
  char acStack_550 [416];
  char acStack_3b0 [400];
  char acStack_220 [384];
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
  
  if (_DAT_02cf49d4 != (int *)0x0) {
    (**(code **)(*_DAT_02cf49d4 + 8))(_DAT_02cf49d4);
    _DAT_02cf49d4 = (int *)0x0;
  }
  if (_DAT_02cf49c8 != (int *)0x0) {
    memset(&uStack_48,0,0x12);
    uStack_48 = 1;
    uStack_46 = param_3;
    iStack_44 = param_4;
    uStack_3c = (short)((int)((param_2 + (param_2 >> 0x1f) * -8) -
                             (uint)((param_2 >> 0x1f) << 2 < 0)) >> 3) * param_3;
    iStack_40 = param_4 * (uint)uStack_3c;
    uStack_3a = (ushort)param_2;
    uVar1 = (**(code **)(*_DAT_02cf49c8 + 0x38))(_DAT_02cf49c8,&uStack_48);
    if (uVar1 == 0) {
      uVar1 = (**(code **)(*_DAT_02cf49c8 + 0x14))(_DAT_02cf49c8,&uStack_48,0x12,0);
      if (uVar1 == 0) {
        _DAT_02cf49d8 = (uint)uStack_3a;
        _DAT_02cf49dc = iStack_44;
        _DAT_02cf49e0 = (uint)uStack_46;
        if (_DAT_02cf49d4 != (int *)0x0) {
          (**(code **)(*_DAT_02cf49d4 + 8))(_DAT_02cf49d4);
          _DAT_02cf49d4 = (int *)0x0;
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
        uVar1 = (**(code **)(*_DAT_02cf49c4 + 0xc))(_DAT_02cf49c4,&uStack_6c,&uStack_20,0);
        if (uVar1 == 0) {
          (**(code **)*piStack_30)(piStack_30,&DAT_00608bb8,&piStack_2c);
          if (piStack_2c == (int *)0x0) {
            if (piStack_30 != (int *)0x0) {
              (**(code **)(*piStack_30 + 8))(piStack_30);
              piStack_30 = (int *)0x0;
            }
          }
          else {
            (**(code **)*piStack_2c)(piStack_2c,&DAT_006044e0,&DAT_02cf49d4);
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
          sound_snddx_cpp_FUN_0055a670(uVar1);
          _sprintf(acStack_550,"DirectSux: Unable to %s.  (%s)");
          sound_sndmain_cpp_logSoundError_FUN_0055a560(acStack_550);
        }
        if (_DAT_02cf49d4 != (int *)0x0) {
          uStack_28 = 1;
          (**(code **)(*_DAT_02cf49d4 + 0x10))(_DAT_02cf49d4,&DAT_006044f0,0,0,0,&uStack_28,4);
        }
        uVar1 = sound_sndmain_cpp_hasHardware3DSound_FUN_005586d0();
        if (0 < (int)uVar1) {
          *param_1 = 0;
          return 1;
        }
        _DAT_02cf49ec = 8;
        fStack_24 = sound_sndmain_cpp_getMaxSwLatency_FUN_005591a0();
        fVar2 = ((float10)_DAT_02cf49dc * (float10)fStack_24) / (float10)_DAT_02cf49ec;
        round();
        _DAT_02cf49e4 = (uint)ROUND(fVar2);
        _DAT_02cf49e4 = _DAT_02cf49e4 + 0xf & 0xfffffff0;
        _DAT_02cf49e8 =
             _DAT_02cf49e4 *
             ((int)((_DAT_02cf49d8 + ((int)_DAT_02cf49d8 >> 0x1f) * -8) -
                   (uint)(((int)_DAT_02cf49d8 >> 0x1f) << 2 < 0)) >> 3) * _DAT_02cf49e0;
        memset(&uStack_a0,0,0x24);
        puStack_90 = auStack_58;
        iStack_98 = _DAT_02cf49e8 * _DAT_02cf49ec;
        uStack_a0 = 0x24;
        uStack_9c = 0;
        if (_DAT_02cf49cc != (int *)0x0) {
          (**(code **)(*_DAT_02cf49cc + 8))(_DAT_02cf49cc);
          _DAT_02cf49cc = (int *)0x0;
        }
        uVar1 = (**(code **)(*_DAT_02cf49c4 + 0xc))(_DAT_02cf49c4,&uStack_a0,&DAT_02cf49cc,0);
        if (uVar1 == 0) {
          *param_5 = _DAT_02cf49e4;
          return 1;
        }
        sound_snddx_cpp_FUN_0055a670(uVar1);
        _sprintf(acStack_6d0,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_0055a560(acStack_6d0);
      }
      else {
        sound_snddx_cpp_FUN_0055a670(uVar1);
        _sprintf(acStack_220,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_0055a560(acStack_220);
      }
    }
    else {
      sound_snddx_cpp_FUN_0055a670(uVar1);
      _sprintf(acStack_3b0,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_logSoundError_FUN_0055a560(acStack_3b0);
    }
  }
  if (_DAT_02cf49cc != (int *)0x0) {
    (**(code **)(*_DAT_02cf49cc + 8))(_DAT_02cf49cc);
    _DAT_02cf49cc = (int *)0x0;
  }
  return 0;
}
