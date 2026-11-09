// Name: sound_sndmain.cpp_FUN_005522ce
// Address: 005522ce
// Address Range: [[005522ce, 0055234b]]
// Convention: unknown
// Signature: undefined4 sound_sndmain_cpp_FUN_005522ce(char *param_1)

#include "nocturne.h"

uint sound_sndmain_cpp_FUN_005522ce(char *param_1)

{
  int iVar1;
  char acStack_100 [256];
  
  iVar1 = engine_dosio_cpp_getFileSize_FUN_004657f0("sound",param_1);
  if (iVar1 < 0x200001) {
    engine_dosio_cpp_FUN_00465e50(param_1,(char *)0x0,(char *)0x0,(char *)0x0,acStack_100);
    iVar1 = _stricmp(acStack_100,&DAT_005d29cd);
    if (iVar1 != 0) {
      iVar1 = _stricmp(acStack_100,&DAT_005d29d1);
      if (iVar1 != 0) {
        return 0;
      }
    }
  }
  return 1;
}
