// Name: engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220
// Address: 004b3220
// Address Range: [[004b3220, 004b3591]]
// Convention: __cdecl
// Signature: int __cdecl engine_fileio_cpp_getLatestFileFromRepository_FUN_004b3220(char *base_directory,char *filename)

#include "nocturne.h"

int __cdecl engine_fileio_cpp_getLatestFileFromRepository_FUN_004b3220(char *base_directory,char *filename)

{
  char cVar1;
  _FILE *stream_ptr;
  int *piVar2;
  _FILE *dest_file;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  SFoundFileInfo *pSVar8;
  byte bVar9;
  SFoundFileInfo local_53c;
  SFoundFileInfo local_328;
  char local_114 [256];
  char local_14 [4];
  SFoundFileInfo *pSVar7;
  
  bVar9 = 0;
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80(base_directory,local_14,local_114);
  engine_dosio_c_makePath_FUN_00481f50
            (local_53c.found_path,local_14,local_114,(char *)0x0,(char *)0x0);
  pSVar8 = &local_53c;
  iVar4 = -1;
  pSVar7 = &local_53c;
  do {
    pcVar6 = pSVar7->found_path;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar6 = (char *)((int)pSVar7 + (uint)bVar9 * -2 + 1);
    cVar1 = pSVar7->found_path[0];
    pSVar7 = (SFoundFileInfo *)pcVar6;
  } while (cVar1 != '\0');
  pcVar6 = pcVar6 + -1;
  pcVar5 = filename;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  iVar4 = 0;
  do {
    stream_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                           (local_53c.found_path,(char *)0x0,"rb",
                            "..\\engine\\fileio.cpp",0x153);
    if (stream_ptr != (_FILE *)0x0) {
      _setvbuf(stream_ptr,(char *)0x0,0,0x400);
      goto LAB_004b32cc;
    }
    piVar2 = (int *)_errno();
    if (*piVar2 != 6) break;
    iVar4 = iVar4 + 1;
    (*g_SleepFunc)(500);
  } while (iVar4 < 10);
  stream_ptr = (_FILE *)0x0;
LAB_004b32cc:
  if ((stream_ptr == (_FILE *)0x0) ||
     (iVar4 = engine_dosio_c_findFileNormally_FUN_004817c0(&local_53c), iVar4 == 0)) {
    if (stream_ptr != (_FILE *)0x0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream_ptr,"..\\engine\\fileio.cpp",0xc4);
      stream_ptr = (_FILE *)0x0;
    }
    pcVar6 = "Can't access %s.\nPerhaps someone else is checking it in, and it's taking a while?\nTry again in a few minutes, and if that doesn't work, get Fletch";
  }
  else {
    pSVar8 = &local_328;
    do {
      cVar1 = *filename;
      pSVar8->found_path[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = filename[1];
      filename = filename + 2;
      pSVar8->found_path[1] = cVar1;
      pSVar8 = (SFoundFileInfo *)(pSVar8->found_path + 2);
    } while (cVar1 != '\0');
    iVar4 = engine_dosio_c_findFileNormally_FUN_004817c0(&local_328);
    if (iVar4 == 0) {
      local_328.file_size = 0xffffffff;
    }
    if (((local_328.file_size != local_53c.file_size) ||
        ((char *)(local_53c.timestamp + 2) < local_328.timestamp)) ||
       ((char *)(local_328.timestamp + 2) < local_53c.timestamp)) {
      engine_dosio_c_setFileAttributes_FUN_004819f0(local_328.found_path,0);
      remove(local_328.found_path);
      dest_file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                            (local_328.found_path,(char *)0x0,"wb",
                             "..\\engine\\fileio.cpp",0x3c5);
      if (dest_file == (_FILE *)0x0) {
        if (stream_ptr != (_FILE *)0x0) {
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream_ptr,"..\\engine\\fileio.cpp",0xc4);
          stream_ptr = (_FILE *)0x0;
        }
        pSVar8 = &local_328;
        pcVar6 = "Can't create %s.";
        goto LAB_004b32fe;
      }
      pcVar6 = engine_fileio_cpp_copyFileWithProgress_FUN_004b2030
                         (stream_ptr,dest_file,local_53c.found_path,local_328.found_path,
                          local_53c.file_size);
      if (stream_ptr != (_FILE *)0x0) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream_ptr,"..\\engine\\fileio.cpp",0xc4);
        stream_ptr = (_FILE *)0x0;
      }
      if (dest_file != (_FILE *)0x0) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(dest_file,"..\\engine\\fileio.cpp",0xc4);
      }
      if (pcVar6 != (char *)0x0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar6);
        goto LAB_004b3306;
      }
      iVar4 = engine_dosio_c_copyFileTimestamp_FUN_00481910
                        (local_328.found_path,(char *)local_53c.timestamp);
      if (iVar4 == 0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"WARNING: Error setting date/time on %s.\n(Most likely reason: Tried to set the file time to a time\nnewer than the current system time on your computer)",&local_328);
        return 0;
      }
    }
    if (stream_ptr != (_FILE *)0x0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream_ptr,"..\\engine\\fileio.cpp",0xc4);
    }
    stream_ptr = (_FILE *)0x0;
    uVar3 = engine_dosio_c_getFileTimestamp_FUN_00481960((char *)0x0,local_328.found_path);
    if (((((int)uVar3 < 0) || ((uVar3 & 8) != 0)) ||
        (iVar4 = engine_dosio_c_setFileAttributes_FUN_004819f0(local_328.found_path,(byte)uVar3 | 8)
        , iVar4 != 0)) && (-1 < (int)uVar3)) {
      return 1;
    }
    pSVar8 = &local_328;
    pcVar6 = "Error turning on read-only bit for %s.";
  }
LAB_004b32fe:
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar6,pSVar8);
LAB_004b3306:
  if (stream_ptr != (_FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream_ptr,"..\\engine\\fileio.cpp",0xc4);
  }
  return 0;
}
