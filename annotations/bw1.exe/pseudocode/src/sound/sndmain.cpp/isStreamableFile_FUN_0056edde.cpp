// Name: sound_sndmain.cpp_isStreamableFile_FUN_0056edde
// Address: 0056edde
// Address Range: [[0056edde, 0056ee5b]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_isStreamableFile_FUN_0056edde(char *filename)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_isStreamableFile_FUN_0056edde(char *filename)

{
  int iVar1;
  char acStack_100 [256];
  
  iVar1 = engine_dosio_cpp_getFileSize_FUN_00478fb0("sound",filename);
  if (iVar1 < 0x200001) {
    engine_dosio_cpp_splitPath_FUN_00479580
              (filename,(char *)0x0,(char *)0x0,(char *)0x0,acStack_100);
    iVar1 = _stricmp(acStack_100,&DAT_005f30e3);
    if (iVar1 != 0) {
      iVar1 = _stricmp(acStack_100,&DAT_005f30e7);
      if (iVar1 != 0) {
        return 0;
      }
    }
  }
  return 1;
}
