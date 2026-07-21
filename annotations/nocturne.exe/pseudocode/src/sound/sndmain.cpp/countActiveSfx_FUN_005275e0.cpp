// Name: sound_sndmain.cpp_countActiveSfx_FUN_005275e0
// Address: 005275e0
// Address Range: [[005275e0, 00527605]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_countActiveSfx_FUN_005275e0(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_countActiveSfx_FUN_005275e0(void)

{
  byte *puVar1;
  int iVar2;
  
  puVar1 = (byte *)0x2dbd374;
  iVar2 = 0;
  do {
    if ((*(int *)(puVar1 + 0x74) != 0) && (*(int *)(puVar1 + 0x70) != 0)) {
      iVar2 = iVar2 + 1;
    }
    puVar1 = puVar1 + 0x120;
  } while (puVar1 != &DAT_02dc1b74);
  return iVar2;
}
