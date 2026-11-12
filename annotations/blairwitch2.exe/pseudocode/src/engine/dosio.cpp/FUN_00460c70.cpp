// Name: engine_dosio.cpp_FUN_00460c70
// Address: 00460c70
// Address Range: [[00460c70, 00460d2c]]
// Convention: __cdecl
// Signature: _FILE * __cdecl engine_dosio_cpp_FUN_00460c70(char *directory,char *filename,char *mode)

#include "nocturne.h"

_FILE * __cdecl engine_dosio_cpp_FUN_00460c70(char *directory,char *filename,char *mode)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  _FILE *p_Var4;
  byte *pbVar5;
  SFoundFileInfo local_220;
  
  engine_dosio_cpp_FUN_00460910(&local_220,directory,filename);
  bVar2 = *mode;
  pbVar5 = (byte *)mode;
  while (bVar2 != 0) {
    iVar3 = toupper((uint)*pbVar5);
    if (iVar3 == 0x57) {
      if (directory != (char *)0x0) {
        engine_dosio_cpp_FUN_004613b0(directory);
      }
      p_Var4 = _fopen(local_220.found_path,mode);
      return p_Var4;
    }
    pbVar1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
    bVar2 = *pbVar1;
  }
  iVar3 = engine_dosio_cpp_findFile_FUN_00460980(&local_220);
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
