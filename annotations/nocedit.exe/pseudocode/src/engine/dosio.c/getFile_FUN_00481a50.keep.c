// Name: engine_dosio.c_getFile_FUN_00481a50
// Address: 00481a50
// MANUAL RECONSTRUCTION
// Address Range: [[00481a50, 00481b4c]]
// Convention: __cdecl
// Signature: _FILE * __cdecl engine_dosio_c_getFile_FUN_00481a50(char *directory,char *filename,char *mode)

#include "nocturne.h"

_FILE * __cdecl engine_dosio_c_getFile_FUN_00481a50(char *directory,char *filename,char *mode)

{
  int iVar3;
  _FILE *p_Var4;
  int iVar1;
  _FILE *file;
  byte *pbVar5;
  char *archive_path;
  SFoundFileInfo local_220;
  char *source_file;
  byte *pbVar1;
  byte bVar2;

  engine_dosio_c_getRelativeFilePath_FUN_004816c0(local_220.found_path,directory,filename);
  bVar2 = *mode;
  pbVar5 = (byte *)mode;
  while (bVar2 != 0) {
    iVar3 = toupper((uint)*pbVar5);
    if (iVar3 == 0x57) {
      if (directory != (char *)0x0) {
        _mkdir(directory);
      }
      p_Var4 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                         (local_220.found_path,(char *)0x0,mode,"..\\engine\\dosio.c",0x198);
      return p_Var4;
    }
    pbVar1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
    bVar2 = *pbVar1;
  }
  iVar1 = engine_dosio_c_findFile_FUN_00481760(&local_220);
  if (iVar1 == 0) {
    return (_FILE *)0x0;
  }
  if (local_220.is_archive == 0) {
    iVar1 = 0x1ac;
    source_file = "..\\engine\\dosio.c";
    archive_path = (char *)0x0;
  }
  else {
    iVar1 = 0x1aa;
    source_file = "..\\engine\\dosio.c";
    archive_path = local_220.found_path;
  }
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   (local_220.target_path,archive_path,mode,source_file,iVar1);
  if (file != (_FILE *)0x0) {
    if (local_220.file_offset != 0) {
      _fseek(file,local_220.file_offset,0);
    }
    return file;
  }
  return (_FILE *)0x0;
}
