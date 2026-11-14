// Name: sound_sndmain.cpp_isStreamableFile_FUN_005522d0
// Address: 005522d0
// Address Range: [[005522d0, 0055234b]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_isStreamableFile_FUN_005522d0(char *filename)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_isStreamableFile_FUN_005522d0(char *filename)

{
  int iVar1;
  char acStack_100 [256];
  
  iVar1 = engine_dosio_cpp_getFileSize_FUN_004657f0("sound",filename);
  if (iVar1 < 0x200001) {
    engine_dosio_cpp_splitPath_FUN_00465e50
              (filename,(char *)0x0,(char *)0x0,(char *)0x0,acStack_100);
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
