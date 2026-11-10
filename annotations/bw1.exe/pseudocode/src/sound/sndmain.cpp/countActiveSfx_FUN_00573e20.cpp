// Name: sound_sndmain.cpp_countActiveSfx_FUN_00573e20
// Address: 00573e20
// Address Range: [[00573e20, 00573e45]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_countActiveSfx_FUN_00573e20(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_countActiveSfx_FUN_00573e20(void)

{
  byte *puVar1;
  int iVar2;
  
  puVar1 = (byte *)0x2c745ec;
  iVar2 = 0;
  do {
    if ((*(int *)(puVar1 + 0x68) != 0) && (*(int *)(puVar1 + 100) != 0)) {
      iVar2 = iVar2 + 1;
    }
    puVar1 = puVar1 + 0x11c;
  } while (puVar1 != &DAT_02c78cec);
  return iVar2;
}
