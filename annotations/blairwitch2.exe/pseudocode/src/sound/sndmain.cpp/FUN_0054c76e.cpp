// Name: sound_sndmain.cpp_FUN_0054c76e
// Address: 0054c76e
// Address Range: [[0054c76e, 0054c7eb]]
// Convention: unknown
// Signature: undefined4 sound_sndmain_cpp_FUN_0054c76e(char *param_1)

#include "nocturne.h"

uint sound_sndmain_cpp_FUN_0054c76e(char *param_1)

{
  int iVar1;
  char acStack_100 [256];
  
  iVar1 = engine_dosio_cpp_getFileSize_FUN_00460aa0("sound",param_1);
  if (iVar1 < 0x200001) {
    engine_dosio_cpp_FUN_00461070(param_1,(char *)0x0,(char *)0x0,(char *)0x0,acStack_100);
    iVar1 = _stricmp(acStack_100,&DAT_005e7ee9);
    if (iVar1 != 0) {
      iVar1 = _stricmp(acStack_100,&DAT_005e7eed);
      if (iVar1 != 0) {
        return 0;
      }
    }
  }
  return 1;
}
