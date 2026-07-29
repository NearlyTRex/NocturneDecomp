// Name: sound_snddx.cpp_CDirectSoundDevice_initPropertySet_FUN_0052a280
// Address: 0052a280
// Address Range: [[0052a280, 0052a440]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_initPropertySet_FUN_0052a280(CDirectSoundDevice *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_snddx_cpp_CDirectSoundDevice_initPropertySet_FUN_0052a280(CDirectSoundDevice *this_ptr)

{
  uint error_code;
  char *pcVar1;
  int *piStack_1e0;
  int *piStack_40;
  int *piStack_3c;
  uint uStack_38;
  int *piStack_34;
  uint *puStack_30;
  ushort local_2c;
  ushort uStack_2a;
  uint *puStack_28;
  uint uStack_24;
  ushort uStack_20;
  ushort uStack_1e;
  uint local_18;
  uint local_14;
  
  if (_DAT_02dc9224 != (int *)0x0) {
    (**(code **)(*_DAT_02dc9224 + 8))();
    _DAT_02dc9224 = (int *)0x0;
  }
  local_18 = 0;
  local_14 = 0;
  piStack_1e0 = (int *)0x52a2d3;
  memset(&local_2c,0,0x12);
  local_2c = 1;
  uStack_2a = 1;
  puStack_28 = (uint *)0x5622;
  uStack_1e = 0x10;
  uStack_20 = 2;
  uStack_24 = 0xac44;
  piStack_1e0 = (int *)0x52a31e;
  memset(&piStack_40,0,0x14);
  piStack_40 = (int *)0x14;
  piStack_3c = (int *)0x12;
  puStack_30 = (uint *)&local_2c;
  uStack_38 = 0x400;
  piStack_1e0 = _DAT_02dc9214;
  error_code = (**(code **)(*_DAT_02dc9214 + 0xc))();
  if (error_code == 0) {
    (**(code **)*puStack_28)(puStack_28,&DAT_005c3918,&uStack_24);
    if (puStack_30 == (uint *)0x0) {
      if (piStack_34 != (int *)0x0) {
        (**(code **)(*piStack_34 + 8))(piStack_34);
      }
    }
    else {
      (**(code **)*puStack_30)(puStack_30,&DAT_005bed10,&DAT_02dc9224);
      if (piStack_40 != (int *)0x0) {
        (**(code **)(*piStack_40 + 8))(piStack_40);
        piStack_40 = (int *)0x0;
      }
      if (piStack_3c != (int *)0x0) {
        (**(code **)(*piStack_3c + 8))(piStack_3c);
        return;
      }
    }
  }
  else {
    pcVar1 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(error_code);
    _sprintf(&piStack_1e0,"DirectSux: Unable to %s.  (%s)","Create temp secondary buffer for property set creation",
               pcVar1);
    sound_sndmain_cpp_FUN_00529980(&piStack_1e0);
  }
  return;
}
