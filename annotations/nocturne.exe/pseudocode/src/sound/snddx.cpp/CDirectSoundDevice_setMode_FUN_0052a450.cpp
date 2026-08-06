// Name: sound_snddx.cpp_CDirectSoundDevice_setMode_FUN_0052a450
// Address: 0052a450
// Address Range: [[0052a450, 0052a961]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_setMode_FUN_0052a450(CDirectSoundDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int *out_samples_per_block)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_snddx_cpp_CDirectSoundDevice_setMode_FUN_0052a450(CDirectSoundDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int *out_samples_per_block)

{
  uint uVar1;
  char *pcVar2;
  double dVar3;
  uint uVar4;
  char acStack_6b0 [400];
  char acStack_520 [384];
  char acStack_3a0 [416];
  char acStack_200 [380];
  uint uStack_84;
  uint uStack_80;
  int iStack_7c;
  uint *puStack_74;
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
    memset(&local_48,0,0x12);
    local_48 = 1;
    local_46 = (ushort)channels;
    local_44 = sample_rate;
    local_3c = (short)((int)((bits_per_sample + (bits_per_sample >> 0x1f) * -8) -
                            (uint)((bits_per_sample >> 0x1f) << 2 < 0)) >> 3) * local_46;
    local_40 = sample_rate * (uint)local_3c;
    local_3a = (ushort)bits_per_sample;
    uVar1 = (**(code **)(*_DAT_02dc9218 + 0x38))(_DAT_02dc9218,&local_48);
    if (uVar1 == 0) {
      uVar1 = (**(code **)(*_DAT_02dc9218 + 0x14))(_DAT_02dc9218,&local_48,0x12,0);
      if (uVar1 == 0) {
        _DAT_02dc9228 = (uint)local_3a;
        _DAT_02dc922c = local_44;
        _DAT_02dc9230 = (uint)local_46;
        if (_DAT_02dc9224 != (int *)0x0) {
          (**(code **)(*_DAT_02dc9224 + 8))(_DAT_02dc9224);
          _DAT_02dc9224 = (int *)0x0;
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
        uVar1 = (**(code **)(*_DAT_02dc9214 + 0xc))(_DAT_02dc9214,&uStack_5c,&uStack_20,0);
        if (uVar1 == 0) {
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
          pcVar2 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar1);
          _sprintf(acStack_3a0,"DirectSux: Unable to %s.  (%s)",
                     "Create temp secondary buffer for property set creation",pcVar2);
          sound_sndmain_cpp_FUN_00529980(acStack_3a0);
        }
        if (_DAT_02dc9224 != (int *)0x0) {
          uStack_28 = 1;
          (**(code **)(*_DAT_02dc9224 + 0x10))(_DAT_02dc9224,&DAT_005bed20,0,0,0,&uStack_28,4);
        }
        if (_DAT_02dc9220 != 0) {
          (this_ptr->base).vtable = (CSoundDeviceFull_vtable *)0x0;
          return 1;
        }
        _DAT_02dc923c = 8;
        fStack_24 = sound_sndmain_cpp_getMaxSwLatency_FUN_00528970();
        uVar4 = 0x52a73b;
        dVar3 = round
                          ((double)(((float)_DAT_02dc922c * fStack_24) / (float)_DAT_02dc923c));
        _DAT_02dc9234 = (uint)ROUND(dVar3);
        _DAT_02dc9234 = _DAT_02dc9234 + 0xf & 0xfffffff0;
        _DAT_02dc9238 =
             _DAT_02dc9234 *
             ((int)((_DAT_02dc9228 + ((int)_DAT_02dc9228 >> 0x1f) * -8) -
                   (uint)(((int)_DAT_02dc9228 >> 0x1f) << 2 < 0)) >> 3) * _DAT_02dc9230;
        memset(&uStack_84,0,0x14);
        puStack_74 = &uStack_5c;
        iStack_7c = _DAT_02dc9238 * _DAT_02dc923c;
        uStack_84 = 0x14;
        uStack_80 = 0;
        if (_DAT_02dc921c != (int *)0x0) {
          (**(code **)(*_DAT_02dc921c + 8))(_DAT_02dc921c,uVar4);
          _DAT_02dc921c = (int *)0x0;
        }
        uVar1 = (**(code **)(*_DAT_02dc9214 + 0xc))(_DAT_02dc9214,&uStack_84,&DAT_02dc921c,0);
        if (uVar1 == 0) {
          *out_samples_per_block = _DAT_02dc9234;
          return 1;
        }
        pcVar2 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar1);
        _sprintf(acStack_6b0,"DirectSux: Unable to %s.  (%s)",
                   "Create the secondary buffer",pcVar2);
        sound_sndmain_cpp_FUN_00529980(acStack_6b0);
      }
      else {
        pcVar2 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar1);
        _sprintf(acStack_200,"DirectSux: Unable to %s.  (%s)",
                   "Get Primary buffer format",pcVar2);
        sound_sndmain_cpp_FUN_00529980(acStack_200);
      }
    }
    else {
      pcVar2 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar1);
      _sprintf(acStack_520,"DirectSux: Unable to %s.  (%s)","Set Primary buffer format",
                 pcVar2);
      sound_sndmain_cpp_FUN_00529980(acStack_520);
    }
  }
  if (_DAT_02dc921c != (int *)0x0) {
    (**(code **)(*_DAT_02dc921c + 8))(_DAT_02dc921c);
    _DAT_02dc921c = (int *)0x0;
  }
  return 0;
}
