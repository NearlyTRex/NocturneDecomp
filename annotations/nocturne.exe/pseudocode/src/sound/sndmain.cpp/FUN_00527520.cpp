// Name: sound_sndmain.cpp_FUN_00527520
// Address: 00527520
// Address Range: [[00527520, 00527566]]
// Convention: __cdecl
// Signature: uint __cdecl sound_sndmain_cpp_FUN_00527520(uint current_sfx_handle)

#include "nocturne.h"

uint __cdecl sound_sndmain_cpp_FUN_00527520(uint current_sfx_handle)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (current_sfx_handle & 0x3f) + 1;
  if (uVar2 < 0x40) {
    iVar1 = uVar2 * 0x120;
    do {
      if ((*(int *)(&DAT_02dbd3e8 + iVar1) != 0) && (*(int *)(&DAT_02dbd3e4 + iVar1) != 0)) {
        return *(int *)(&DAT_02dbd3e4 + iVar1) << 6 | uVar2;
      }
      iVar1 = iVar1 + 0x120;
      uVar2 = uVar2 + 1;
    } while (iVar1 < 0x4800);
  }
  return 0;
}
