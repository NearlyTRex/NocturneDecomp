// Name: sound_snddx.cpp_getDirectSoundDevice_FUN_0052bef0
// Address: 0052bef0
// Address Range: [[0052bef0, 0052c11a]]
// Convention: __cdecl
// Signature: undefined * __cdecl sound_snddx_cpp_getDirectSoundDevice_FUN_0052bef0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * __cdecl sound_snddx_cpp_getDirectSoundDevice_FUN_0052bef0(int param_1)

{
  int iVar1;
  uint uVar2;
  byte *puVar3;
  int iStack_784;
  byte *puStack_780;
  byte *puStack_77c;
  byte auStack_5f4 [400];
  byte auStack_464 [400];
  byte auStack_2d4 [412];
  byte local_138 [268];
  uint uStack_2c;
  uint uStack_28;
  
  puStack_77c = &DAT_02dc93a0;
  puStack_780 = (byte *)0x52bf0a;
  iVar1 = sound_snddx_cpp_CDirectSoundDevice_close_FUN_00529e90();
  if (iVar1 != 0) {
    puStack_77c = local_138;
    puStack_780 = (byte *)param_1;
    iStack_784 = 0x52bf29;
    iVar1 = sound_snddx_cpp_enumerateDirectSoundDevice_FUN_0052be40();
    if (iVar1 != 0) {
      iStack_784 = 0;
      if (*(int *)(param_1 * 0x11c + 0x2dc84c4) == 0) {
        iStack_784 = param_1 * 0x11c + 0x2dc84c8;
      }
      puStack_77c = (byte *)0x0;
      puStack_780 = &DAT_02dc9214;
      iVar1 = Ordinal_1();
      if (iVar1 == 0) {
        iVar1 = (**(code **)(*_DAT_02dc9214 + 0x18))(_DAT_02dc9214,_DAT_02de2098,3);
        if (iVar1 == 0) {
          memset(&uStack_2c,0,0x14);
          uStack_2c = 0x14;
          uStack_28 = 0x11;
          iVar1 = (**(code **)(*_DAT_02dc9214 + 0xc))(_DAT_02dc9214,&uStack_2c,&DAT_02dc9218,0);
          if (iVar1 != 0) {
            uVar2 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(iVar1);
            _sprintf(&iStack_784,"DirectSux: Unable to %s.  (%s)",
                       "Create the primary buffer",uVar2);
            sound_sndmain_cpp_FUN_00529980(&iStack_784);
            uStack_28 = uStack_28 & 0xffffffef;
            iVar1 = (**(code **)(*_DAT_02dc9214 + 0xc))(_DAT_02dc9214,&uStack_2c,&DAT_02dc9218,0);
            if (iVar1 != 0) {
              uVar2 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(iVar1);
              _sprintf(auStack_464,"DirectSux: Unable to %s.  (%s)",
                         "Create the primary buffer",uVar2);
              puVar3 = auStack_464;
              goto LAB_0052bf91;
            }
          }
          iVar1 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005284e0();
          if ((iVar1 != 0) && (*(int *)(param_1 * 0x11c + 0x2dc85dc) != 0)) {
            (**(code **)*_DAT_02dc9218)(_DAT_02dc9218,&DAT_005c3908,&DAT_02dc9220);
          }
          return &DAT_02dc93a0;
        }
        uVar2 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(iVar1);
        _sprintf(auStack_2d4,"DirectSux: Unable to %s.  (%s)","Set cooperative level",
                   uVar2);
        puVar3 = auStack_2d4;
      }
      else {
        uVar2 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(iVar1);
        _sprintf(auStack_5f4,"DirectSux: Unable to %s.  (%s)",
                   "create DirectSound object",uVar2);
        puVar3 = auStack_5f4;
      }
LAB_0052bf91:
      sound_sndmain_cpp_FUN_00529980(puVar3);
      sound_snddx_cpp_CDirectSoundDevice_close_FUN_00529e90(&DAT_02dc93a0);
      return (byte *)0x0;
    }
  }
  return (byte *)0x0;
}
