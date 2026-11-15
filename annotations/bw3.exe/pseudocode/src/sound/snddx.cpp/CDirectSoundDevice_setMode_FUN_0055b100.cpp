// Name: sound_snddx.cpp_CDirectSoundDevice_setMode_FUN_0055b100
// Address: 0055b100
// Address Range: [[0055b100, 0055b614]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_setMode_FUN_0055b100(CDirectSoundDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int *out_samples_per_block)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_snddx_cpp_CDirectSoundDevice_setMode_FUN_0055b100(CDirectSoundDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int *out_samples_per_block)

{
  uint uVar1;
  double dVar2;
  uint uVar3;
  char acStack_6d0 [384];
  char acStack_550 [416];
  char acStack_3b0 [400];
  char acStack_220 [380];
  uint uStack_a4;
  uint uStack_a0;
  int iStack_9c;
  ushort **ppuStack_94;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  ushort *apuStack_5c [5];
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
    uStack_46 = (ushort)channels;
    iStack_44 = sample_rate;
    uStack_3c = (short)((int)((bits_per_sample + (bits_per_sample >> 0x1f) * -8) -
                             (uint)((bits_per_sample >> 0x1f) << 2 < 0)) >> 3) * uStack_46;
    iStack_40 = sample_rate * (uint)uStack_3c;
    uStack_3a = (ushort)bits_per_sample;
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
        apuStack_5c[0] = &uStack_34;
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
          sound_snddx_cpp_getDirectSoundErrorString_FUN_0055a670(uVar1);
          _sprintf(acStack_550,"DirectSux: Unable to %s.  (%s)");
          sound_sndmain_cpp_logSoundError_FUN_0055a560(acStack_550);
        }
        if (_DAT_02cf49d4 != (int *)0x0) {
          uStack_28 = 1;
          (**(code **)(*_DAT_02cf49d4 + 0x10))(_DAT_02cf49d4,&DAT_006044f0,0,0,0,&uStack_28,4);
        }
        uVar1 = sound_sndmain_cpp_hasHardware3DSound_FUN_005586d0();
        if (0 < (int)uVar1) {
          (this_ptr->base).vtable = (CSoundDeviceFull_vtable *)0x0;
          return 1;
        }
        _DAT_02cf49ec = 8;
        fStack_24 = sound_sndmain_cpp_getMaxSwLatency_FUN_005591a0();
        uVar3 = 0x55b3e9;
        dVar2 = round
                          ((double)(((float)_DAT_02cf49dc * fStack_24) / (float)_DAT_02cf49ec));
        _DAT_02cf49e4 = (uint)ROUND(dVar2);
        _DAT_02cf49e4 = _DAT_02cf49e4 + 0xf & 0xfffffff0;
        _DAT_02cf49e8 =
             _DAT_02cf49e4 *
             ((int)((_DAT_02cf49d8 + ((int)_DAT_02cf49d8 >> 0x1f) * -8) -
                   (uint)(((int)_DAT_02cf49d8 >> 0x1f) << 2 < 0)) >> 3) * _DAT_02cf49e0;
        memset(&uStack_a4,0,0x24);
        ppuStack_94 = apuStack_5c;
        iStack_9c = _DAT_02cf49e8 * _DAT_02cf49ec;
        uStack_a4 = 0x24;
        uStack_a0 = 0;
        if (_DAT_02cf49cc != (int *)0x0) {
          (**(code **)(*_DAT_02cf49cc + 8))(_DAT_02cf49cc,uVar3);
          _DAT_02cf49cc = (int *)0x0;
        }
        uVar1 = (**(code **)(*_DAT_02cf49c4 + 0xc))(_DAT_02cf49c4,&uStack_a4,&DAT_02cf49cc,0);
        if (uVar1 == 0) {
          *out_samples_per_block = _DAT_02cf49e4;
          return 1;
        }
        sound_snddx_cpp_getDirectSoundErrorString_FUN_0055a670(uVar1);
        _sprintf(acStack_6d0,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_0055a560(acStack_6d0);
      }
      else {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_0055a670(uVar1);
        _sprintf(acStack_220,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_0055a560(acStack_220);
      }
    }
    else {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_0055a670(uVar1);
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
