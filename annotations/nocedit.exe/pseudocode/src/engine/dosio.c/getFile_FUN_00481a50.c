// Name: engine_dosio.c_getFile_FUN_00481a50
// Address: 00481a50
// Address Range: [[00481a50, 00481b4c]]
// Convention: __cdecl
// Signature: FILE * __cdecl engine_dosio_c_getFile_FUN_00481a50(char *directory,char *filename,char *mode)

#include "nocturne.h"

FILE * __cdecl engine_dosio_c_getFile_FUN_00481a50(char *directory,char *filename,char *mode)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  FILE *pFVar4;
  byte *pbVar5;
  SFoundFileInfo *directory_00;
  char *source_file;
  SFoundFileInfo local_220;
  
  engine_dosio_c_getRelativeFilePath_FUN_004816c0(local_220.found_path,directory,filename);
  directory_00 = &local_220;
  bVar2 = *mode;
  pbVar5 = (byte *)mode;
  while (bVar2 != 0) {
    iVar3 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar5);
    if (iVar3 == 0x57) {
      if (directory != (char *)0x0) {
        crt_file_c_create_directory_FUN_00600e10(directory);
      }
      pFVar4 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                         (local_220.found_path,(char *)0x0,mode,"..\\engine\\dosio.c",0x198);
      return pFVar4;
    }
    pbVar1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
    bVar2 = *pbVar1;
  }
  iVar3 = engine_dosio_c_findFile_FUN_00481760(&local_220);
  if (iVar3 == 0) {
    return (FILE *)0x0;
  }
  if (local_220.is_archive == 0) {
    iVar3 = 0x1ac;
    source_file = "..\\engine\\dosio.c";
    directory_00 = (SFoundFileInfo *)0x0;
  }
  else {
    iVar3 = 0x1aa;
    source_file = "..\\engine\\dosio.c";
  }
  pFVar4 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (local_220.target_path,directory_00->found_path,mode,source_file,iVar3);
  if (pFVar4 != (FILE *)0x0) {
    if (local_220.file_offset != 0) {
      crt_stdio_c_fseek_FUN_005ffacc(pFVar4,local_220.file_offset,0);
    }
    return pFVar4;
  }
  return (FILE *)0x0;
}
