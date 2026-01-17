// Name: engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220
// Address: 004b3220
// Address Range: [[004b3220, 004b3591]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220(char * base_directory, char * filename)

#include "nocturne.h"

int __cdecl
engine_fileio_cpp_getLatestFileFromRepository_FUN_004b3220(char *base_directory,char *filename)

{
  char cVar1;
  bool bVar2;
  FILE *stream_ptr;
  int *piVar3;
  FILE *dest_file;
  uint uVar4;
  undefined3 extraout_var;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  SFoundFileInfo *pSVar9;
  byte bVar10;
  SFoundFileInfo local_53c;
  SFoundFileInfo local_328;
  char local_114 [256];
  char local_14 [4];
  SFoundFileInfo *pSVar8;
  
  bVar10 = 0;
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80(base_directory,local_14,local_114);
  engine_dosio_c_makePath_FUN_00481f50
            (local_53c.found_path,local_14,local_114,(char *)0x0,(char *)0x0);
  pSVar9 = &local_53c;
  iVar5 = -1;
  pSVar8 = &local_53c;
  do {
    pcVar7 = pSVar8->found_path;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar7 = (char *)((int)pSVar8 + (uint)bVar10 * -2 + 1);
    cVar1 = pSVar8->found_path[0];
    pSVar8 = (SFoundFileInfo *)pcVar7;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -1;
  pcVar6 = filename;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  iVar5 = 0;
  do {
    stream_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                           (local_53c.found_path,(char *)0x0,"rb",
                            "..\\engine\\fileio.cpp",0x153);
    if (stream_ptr != (FILE *)0x0) {
      crt_stdio_c_setvbuf_FUN_00601490(stream_ptr,(char *)0x0,0,0x400);
      goto LAB_004b32cc;
    }
    piVar3 = (int *)crt_errno_c_errno_FUN_00601450();
    if (*piVar3 != 6) break;
    iVar5 = iVar5 + 1;
    (*g_SleepFunc)(500);
  } while (iVar5 < 10);
  stream_ptr = (FILE *)0x0;
LAB_004b32cc:
  if ((stream_ptr == (FILE *)0x0) ||
     (iVar5 = engine_dosio_c_findFileNormally_FUN_004817c0(&local_53c), iVar5 == 0)) {
    if (stream_ptr != (FILE *)0x0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream_ptr,"..\\engine\\fileio.cpp",0xc4);
      stream_ptr = (FILE *)0x0;
    }
    pcVar7 = "Can't access %s.\nPerhaps someone else is checking it in, and it's taking a while?\nTry again in a few minutes, and if that doesn't work, get Fletch";
  }
  else {
    pSVar9 = &local_328;
    do {
      cVar1 = *filename;
      pSVar9->found_path[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = filename[1];
      filename = filename + 2;
      pSVar9->found_path[1] = cVar1;
      pSVar9 = (SFoundFileInfo *)(pSVar9->found_path + 2);
    } while (cVar1 != '\0');
    iVar5 = engine_dosio_c_findFileNormally_FUN_004817c0(&local_328);
    if (iVar5 == 0) {
      local_328.file_size = 0xffffffff;
    }
    if (((local_328.file_size != local_53c.file_size) ||
        ((char *)(local_53c.timestamp + 2) < local_328.timestamp)) ||
       ((char *)(local_328.timestamp + 2) < local_53c.timestamp)) {
      engine_dosio_c_setFileAttributes_FUN_004819f0(local_328.found_path,0);
      crt_io_c_deleteFile_FUN_005ff9d0(local_328.found_path);
      dest_file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                            (local_328.found_path,(char *)0x0,"wb",
                             "..\\engine\\fileio.cpp",0x3c5);
      if (dest_file == (FILE *)0x0) {
        if (stream_ptr != (FILE *)0x0) {
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream_ptr,"..\\engine\\fileio.cpp",0xc4);
          stream_ptr = (FILE *)0x0;
        }
        pSVar9 = &local_328;
        pcVar7 = "Can't create %s.";
        goto LAB_004b32fe;
      }
      pcVar7 = engine_fileio_cpp_copyFileWithProgress_FUN_004b2030
                         (stream_ptr,dest_file,local_53c.found_path,local_328.found_path,
                          local_53c.file_size);
      if (stream_ptr != (FILE *)0x0) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream_ptr,"..\\engine\\fileio.cpp",0xc4);
        stream_ptr = (FILE *)0x0;
      }
      if (dest_file != (FILE *)0x0) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(dest_file,"..\\engine\\fileio.cpp",0xc4);
      }
      if (pcVar7 != (char *)0x0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar7);
        goto LAB_004b3306;
      }
      iVar5 = engine_dosio_c_copyFileTimestamp_FUN_00481910
                        (local_328.found_path,(char *)local_53c.timestamp);
      if (iVar5 == 0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"WARNING: Error setting date/time on %s.\n(Most likely reason: Tried to set the file time to a time\nnewer than the current system time on your computer)",&local_328);
        return 0;
      }
    }
    if (stream_ptr != (FILE *)0x0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream_ptr,"..\\engine\\fileio.cpp",0xc4);
    }
    stream_ptr = (FILE *)0x0;
    uVar4 = engine_dosio_c_getFileTimestamp_FUN_00481960((char *)0x0,local_328.found_path);
    if (((((int)uVar4 < 0) || ((uVar4 & 8) != 0)) ||
        (bVar2 = engine_dosio_c_setFileAttributes_FUN_004819f0(local_328.found_path,(byte)uVar4 | 8)
        , CONCAT31 /* combine 2-byte values */(extraout_var,bVar2) != 0)) && (-1 < (int)uVar4)) {
      return 1;
    }
    pSVar9 = &local_328;
    pcVar7 = "Error turning on read-only bit for %s.";
  }
LAB_004b32fe:
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar7,pSVar9);
LAB_004b3306:
  if (stream_ptr != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream_ptr,"..\\engine\\fileio.cpp",0xc4);
  }
  return 0;
}
