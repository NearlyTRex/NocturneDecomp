// Name: engine_dosio.cpp_getFile_FUN_00456a60
// Address: 00456a60
// Address Range: [[00456a60, 00456b1c]]
// Convention: __cdecl
// Signature: _FILE * __cdecl engine_dosio_cpp_getFile_FUN_00456a60(char *directory,char *filename,char *mode)

#include "nocturne.h"

_FILE * __cdecl engine_dosio_cpp_getFile_FUN_00456a60(char *directory,char *filename,char *mode)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  _FILE *p_Var4;
  byte *pbVar5;
  SFoundFileInfo local_220;
  
  engine_dosio_cpp_getRelativeFilePath_FUN_00456700(local_220.found_path,directory,filename);
  bVar2 = *mode;
  pbVar5 = (byte *)mode;
  while (bVar2 != 0) {
    iVar3 = toupper((uint)*pbVar5);
    if (iVar3 == 0x57) {
      if (directory != (char *)0x0) {
        _mkdir(directory);
      }
      p_Var4 = _fopen(local_220.found_path,mode);
      return p_Var4;
    }
    pbVar1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
    bVar2 = *pbVar1;
  }
  iVar3 = engine_dosio_cpp_findFile_FUN_004567a0(&local_220);
  if ((iVar3 != 0) &&
     (p_Var4 = _fopen(local_220.target_path,mode), p_Var4 != (_FILE *)0x0))
  {
    if (local_220.file_offset != 0) {
      _fseek(p_Var4,local_220.file_offset,0);
    }
    return p_Var4;
  }
  return (_FILE *)0x0;
}
