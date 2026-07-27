// Name: sound_sndmain.cpp_FUN_00527570
// Address: 00527570
// Address Range: [[00527570, 005275dc]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_00527570(undefined1 *param_1)

#include "nocturne.h"

void sound_sndmain_cpp_FUN_00527570(byte *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  sound_sndmain_cpp_lockSound_FUN_00528800();
  iVar2 = 0x2dbd374;
  iVar3 = 0;
  do {
    if ((*(int *)(iVar2 + 0x74) != 0) && (*(int *)(iVar2 + 0x70) != 0)) {
      sound_sndmain_cpp_FUN_005257e0();
      iVar1 = _sprintf(param_1,"sfx slot %d: %s, pos %7.1f/%7.1f\n",iVar3,*(int *)(iVar2 + 0x74),
                         *(uint *)(iVar2 + 0x60),*(uint *)(iVar2 + 100),
                         (double)*(int *)(*(int *)(iVar2 + 0x74) + 0x110));
      param_1 = param_1 + iVar1;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x120;
  } while (iVar3 < 0x40);
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  *param_1 = 0;
  return;
}
