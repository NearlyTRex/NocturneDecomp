// Name: sound_snddx.cpp_CDirectSoundDevice_setMode_FUN_00555560
// Address: 00555560
// Address Range: [[00555560, 00555a74]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_setMode_FUN_00555560(CDirectSoundDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int *out_samples_per_block)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_snddx_cpp_CDirectSoundDevice_setMode_FUN_00555560(CDirectSoundDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int *out_samples_per_block)

{
  uint uVar1;
  double dVar2;
  uint uVar3;
  char acStack_6b0 [384];
  char acStack_530 [416];
  char acStack_390 [400];
  char acStack_200 [380];
  uint uStack_84;
  uint uStack_80;
  int iStack_7c;
  uint *puStack_74;
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
    memset(&uStack_48,0,0x12);
    uStack_48 = 1;
    uStack_46 = (ushort)channels;
    iStack_44 = sample_rate;
    uStack_3c = (short)((int)((bits_per_sample + (bits_per_sample >> 0x1f) * -8) -
                             (uint)((bits_per_sample >> 0x1f) << 2 < 0)) >> 3) * uStack_46;
    iStack_40 = sample_rate * (uint)uStack_3c;
    uStack_3a = (ushort)bits_per_sample;
    uVar1 = (**(code **)(*_DAT_0264a5c8 + 0x38))(_DAT_0264a5c8,&uStack_48);
    if (uVar1 == 0) {
      uVar1 = (**(code **)(*_DAT_0264a5c8 + 0x14))(_DAT_0264a5c8,&uStack_48,0x12,0);
      if (uVar1 == 0) {
        _DAT_0264a5d8 = (uint)uStack_3a;
        _DAT_0264a5dc = iStack_44;
        _DAT_0264a5e0 = (uint)uStack_46;
        if (_DAT_0264a5d4 != (int *)0x0) {
          (**(code **)(*_DAT_0264a5d4 + 8))(_DAT_0264a5d4);
          _DAT_0264a5d4 = (int *)0x0;
        }
        uStack_20 = 0;
        uStack_1c = 0;
        memset(&uStack_34,0,0x12);
        uStack_34 = 1;
        uStack_32 = 1;
        piStack_30 = (int *)0x5622;
        uStack_28 = 0x100002;
        piStack_2c = (int *)0xac44;
        memset(&uStack_5c,0,0x14);
        puStack_4c = &uStack_34;
        uStack_5c = 0x14;
        uStack_58 = 0x12;
        uStack_54 = 0x400;
        uVar1 = (**(code **)(*_DAT_0264a5c4 + 0xc))(_DAT_0264a5c4,&uStack_5c,&uStack_20,0);
        if (uVar1 == 0) {
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
          sound_snddx_cpp_getDirectSoundErrorString_FUN_00554ad0(uVar1);
          _sprintf(acStack_530,"DirectSux: Unable to %s.  (%s)");
          sound_sndmain_cpp_logSoundError_FUN_005549c0(acStack_530);
        }
        if (_DAT_0264a5d4 != (int *)0x0) {
          uStack_28 = 1;
          (**(code **)(*_DAT_0264a5d4 + 0x10))(_DAT_0264a5d4,&DAT_0061bf60,0,0,0,&uStack_28,4);
        }
        uVar1 = sound_sndmain_cpp_hasHardware3DSound_FUN_00552b30();
        if (0 < (int)uVar1) {
          (this_ptr->base).vtable = (CSoundDeviceFull_vtable *)0x0;
          return 1;
        }
        _DAT_0264a5ec = 8;
        fStack_24 = sound_sndmain_cpp_getMaxSwLatency_FUN_00553600();
        uVar3 = 0x555849;
        dVar2 = round
                          ((double)(((float)_DAT_0264a5dc * fStack_24) / (float)_DAT_0264a5ec));
        _DAT_0264a5e4 = (uint)ROUND(dVar2);
        _DAT_0264a5e4 = _DAT_0264a5e4 + 0xf & 0xfffffff0;
        _DAT_0264a5e8 =
             _DAT_0264a5e4 *
             ((int)((_DAT_0264a5d8 + ((int)_DAT_0264a5d8 >> 0x1f) * -8) -
                   (uint)(((int)_DAT_0264a5d8 >> 0x1f) << 2 < 0)) >> 3) * _DAT_0264a5e0;
        memset(&uStack_84,0,0x14);
        puStack_74 = &uStack_5c;
        iStack_7c = _DAT_0264a5e8 * _DAT_0264a5ec;
        uStack_84 = 0x14;
        uStack_80 = 0;
        if (_DAT_0264a5cc != (int *)0x0) {
          (**(code **)(*_DAT_0264a5cc + 8))(_DAT_0264a5cc,uVar3);
          _DAT_0264a5cc = (int *)0x0;
        }
        uVar1 = (**(code **)(*_DAT_0264a5c4 + 0xc))(_DAT_0264a5c4,&uStack_84,&DAT_0264a5cc,0);
        if (uVar1 == 0) {
          *out_samples_per_block = _DAT_0264a5e4;
          return 1;
        }
        sound_snddx_cpp_getDirectSoundErrorString_FUN_00554ad0(uVar1);
        _sprintf(acStack_6b0,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_005549c0(acStack_6b0);
      }
      else {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_00554ad0(uVar1);
        _sprintf(acStack_200,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_005549c0(acStack_200);
      }
    }
    else {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00554ad0(uVar1);
      _sprintf(acStack_390,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_logSoundError_FUN_005549c0(acStack_390);
    }
  }
  if (_DAT_0264a5cc != (int *)0x0) {
    (**(code **)(*_DAT_0264a5cc + 8))(_DAT_0264a5cc);
    _DAT_0264a5cc = (int *)0x0;
  }
  return 0;
}
