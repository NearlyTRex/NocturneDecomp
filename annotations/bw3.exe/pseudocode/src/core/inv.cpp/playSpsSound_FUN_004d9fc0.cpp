// Name: core_inv.cpp_playSpsSound_FUN_004d9fc0
// Address: 004d9fc0
// Address Range: [[004d9fc0, 004da018]]
// Convention: __cdecl
// Signature: int __cdecl core_inv_cpp_playSpsSound_FUN_004d9fc0(CCharacter *character,char *sound_name)

#include "nocturne.h"

int __cdecl core_inv_cpp_playSpsSound_FUN_004d9fc0(CCharacter *character,char *sound_name)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar1 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0
                      (g_CSound_PTR_006045f8,*(uint *)(iVar3 + 0x1d70a24));
    if (iVar1 == 0) {
      uVar2 = core_sound_cpp_CSound_playSound_FUN_005609b0
                        (g_CSound_PTR_006045f8,(void *)0x0,sound_name);
      character->spectral_sound_handle = uVar2;
      *(uint *)(iVar3 + 0x1d70a24) = uVar2;
      return 1;
    }
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x10);
  return 0;
}
