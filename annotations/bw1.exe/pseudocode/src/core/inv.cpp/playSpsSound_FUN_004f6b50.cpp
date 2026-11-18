// Name: core_inv.cpp_playSpsSound_FUN_004f6b50
// Address: 004f6b50
// Address Range: [[004f6b50, 004f6ba8]]
// Convention: __cdecl
// Signature: int __cdecl core_inv_cpp_playSpsSound_FUN_004f6b50(CCharacter *character,char *sound_name)

#include "nocturne.h"

int __cdecl core_inv_cpp_playSpsSound_FUN_004f6b50(CCharacter *character,char *sound_name)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar1 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0
                      (g_CSound_PTR_006236b8,*(uint *)(iVar3 + 0x1d1bc4c));
    if (iVar1 == 0) {
      uVar2 = core_sound_cpp_CSound_playSound_FUN_0057d880
                        (g_CSound_PTR_006236b8,(void *)0x0,sound_name);
      character->spectral_sound_handle = uVar2;
      *(uint *)(iVar3 + 0x1d1bc4c) = uVar2;
      return 1;
    }
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x10);
  return 0;
}
