// Name: sound_sndmain.cpp_isStreamableFile_FUN_005a5180
// Address: 005a5180
// Address Range: [[005a5180, 005a51fb]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_isStreamableFile_FUN_005a5180(char *filename)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_isStreamableFile_FUN_005a5180(char *filename)

{
  int iVar1;
  int iVar2;
  char local_100 [256];
  
  iVar1 = engine_dosio_cpp_getFileSize_FUN_00481880("sound",filename);
  if (iVar1 < 0x200001) {
    engine_dosio_cpp_splitPath_FUN_00481f20(filename,(char *)0x0,(char *)0x0,(char *)0x0,local_100);
    iVar2 = _stricmp(local_100,"mp3");
    if (iVar2 != 0) {
      iVar2 = _stricmp(local_100,".mp3");
      if (iVar2 != 0) {
        return 0;
      }
    }
  }
  return 1;
}
