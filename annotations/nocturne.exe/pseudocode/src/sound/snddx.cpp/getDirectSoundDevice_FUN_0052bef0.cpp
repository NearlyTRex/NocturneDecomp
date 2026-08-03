// Name: sound_snddx.cpp_getDirectSoundDevice_FUN_0052bef0
// Address: 0052bef0
// Address Range: [[0052bef0, 0052c11a]]
// Convention: __cdecl
// Signature: CDirectSoundDevice * __cdecl sound_snddx_cpp_getDirectSoundDevice_FUN_0052bef0(UINT device_id)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDirectSoundDevice * __cdecl sound_snddx_cpp_getDirectSoundDevice_FUN_0052bef0(UINT device_id)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iStack_784;
  char acStack_5f4 [400];
  char acStack_464 [400];
  char acStack_2d4 [412];
  SSoundDeviceInfo local_138;
  
  iVar1 = sound_snddx_cpp_CDirectSoundDevice_close_FUN_00529e90((CDirectSoundDevice *)&DAT_02dc93a0)
  ;
  if (iVar1 != 0) {
    iStack_784 = 0x52bf29;
    iVar1 = sound_snddx_cpp_enumerateDirectSoundDevice_FUN_0052be40(device_id,&local_138);
    if (iVar1 != 0) {
      iStack_784 = 0;
      if (*(int *)(device_id * 0x11c + 0x2dc84c4) == 0) {
        iStack_784 = device_id * 0x11c + 0x2dc84c8;
      }
      uVar2 = Ordinal_1();
      if (uVar2 == 0) {
        uVar2 = (**(code **)(*_DAT_02dc9214 + 0x18))(_DAT_02dc9214,_DAT_02de2098,3);
        if (uVar2 == 0) {
          memset(&local_138.flags,0,0x14);
          local_138.flags = 0x14;
          local_138.is_primary_device = 0x11;
          uVar2 = (**(code **)(*_DAT_02dc9214 + 0xc))
                            (_DAT_02dc9214,&local_138.flags,&DAT_02dc9218,0);
          if (uVar2 != 0) {
            sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar2);
            _sprintf((char *)&iStack_784,"DirectSux: Unable to %s.  (%s)")
            ;
            sound_sndmain_cpp_FUN_00529980(&iStack_784);
            local_138.is_primary_device = local_138.is_primary_device & 0xffffffef;
            uVar2 = (**(code **)(*_DAT_02dc9214 + 0xc))
                              (_DAT_02dc9214,&local_138.flags,&DAT_02dc9218,0);
            if (uVar2 != 0) {
              sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar2);
              _sprintf(acStack_464,"DirectSux: Unable to %s.  (%s)");
              pcVar3 = acStack_464;
              goto LAB_0052bf91;
            }
          }
          iVar1 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005284e0();
          if ((iVar1 != 0) && (*(int *)(device_id * 0x11c + 0x2dc85dc) != 0)) {
            (**(code **)*_DAT_02dc9218)(_DAT_02dc9218,&DAT_005c3908,&DAT_02dc9220);
          }
          return (CDirectSoundDevice *)&DAT_02dc93a0;
        }
        sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar2);
        _sprintf(acStack_2d4,"DirectSux: Unable to %s.  (%s)");
        pcVar3 = acStack_2d4;
      }
      else {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar2);
        _sprintf(acStack_5f4,"DirectSux: Unable to %s.  (%s)");
        pcVar3 = acStack_5f4;
      }
LAB_0052bf91:
      sound_sndmain_cpp_FUN_00529980(pcVar3);
      sound_snddx_cpp_CDirectSoundDevice_close_FUN_00529e90((CDirectSoundDevice *)&DAT_02dc93a0);
      return (CDirectSoundDevice *)0x0;
    }
  }
  return (CDirectSoundDevice *)0x0;
}
