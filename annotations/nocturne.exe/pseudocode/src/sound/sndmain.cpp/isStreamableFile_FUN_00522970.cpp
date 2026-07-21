// Name: sound_sndmain.cpp_isStreamableFile_FUN_00522970
// Address: 00522970
// Address Range: [[00522970, 005229eb]]
// Convention: unknown
// Signature: undefined4 sound_sndmain_cpp_isStreamableFile_FUN_00522970(undefined4 param_1)

#include "nocturne.h"

uint sound_sndmain_cpp_isStreamableFile_FUN_00522970(uint param_1)

{
  int iVar1;
  byte auStack_100 [256];
  
  iVar1 = engine_dosio_cpp_getFileSize_FUN_004568c0("sound",param_1);
  if (iVar1 < 0x200001) {
    splitpath(param_1,0,0,0,auStack_100);
    iVar1 = _stricmp(auStack_100,&DAT_0059277e);
    if (iVar1 != 0) {
      iVar1 = _stricmp(auStack_100,&DAT_00592782);
      if (iVar1 != 0) {
        return 0;
      }
    }
  }
  return 1;
}
