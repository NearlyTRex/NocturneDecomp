// Name: sound_sndmain.cpp_isStreamableFile_FUN_00522970
// Address: 00522970
// Address Range: [[00522970, 005229eb]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_isStreamableFile_FUN_00522970(char *filename)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_isStreamableFile_FUN_00522970(char *filename)

{
  int iVar1;
  char acStack_100 [256];
  
  iVar1 = engine_dosio_cpp_getFileSize_FUN_004568c0("sound",filename);
  if (iVar1 < 0x200001) {
    splitpath(filename,(char *)0x0,(char *)0x0,(char *)0x0,acStack_100);
    iVar1 = _stricmp(acStack_100,"mp3");
    if (iVar1 != 0) {
      iVar1 = _stricmp(acStack_100,".mp3");
      if (iVar1 != 0) {
        return 0;
      }
    }
  }
  return 1;
}
