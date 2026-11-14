// Name: sound_sndmain.cpp_isStreamableFile_FUN_0054c770
// Address: 0054c770
// Address Range: [[0054c770, 0054c7eb]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_isStreamableFile_FUN_0054c770(char *filename)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_isStreamableFile_FUN_0054c770(char *filename)

{
  int iVar1;
  char acStack_100 [256];
  
  iVar1 = engine_dosio_cpp_getFileSize_FUN_00460aa0("sound",filename);
  if (iVar1 < 0x200001) {
    engine_dosio_cpp_splitPath_FUN_00461070
              (filename,(char *)0x0,(char *)0x0,(char *)0x0,acStack_100);
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
