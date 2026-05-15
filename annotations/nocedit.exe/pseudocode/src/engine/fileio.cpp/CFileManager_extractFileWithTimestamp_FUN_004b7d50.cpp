// Name: engine_fileio.cpp_CFileManager_extractFileWithTimestamp_FUN_004b7d50
// Address: 004b7d50
// Address Range: [[004b7d50, 004b7f42]]
// Convention: __cdecl
// Signature: int __cdecl engine_fileio_cpp_CFileManager_extractFileWithTimestamp_FUN_004b7d50(CFileManager *this_ptr,_FILE *source_file,char *dest_filename,int file_size,int file_offset,char *timestamp_source,int checksum)

#include "nocturne.h"

int __cdecl engine_fileio_cpp_CFileManager_extractFileWithTimestamp_FUN_004b7d50(CFileManager *this_ptr,_FILE *source_file,char *dest_filename,int file_size,int file_offset,char *timestamp_source,int checksum)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char cVar3;
  int iVar4;
  _FILE *file_ptr;
  uint uVar4;
  uint uVar6;
  byte *pbVar5;
  uint uVar7;
  char *pcVar8;
  int iVar6;
  byte bVar9;
  char local_114 [256];
  byte *local_14;
  byte *pbVar2;
  byte bVar1;
  _FILE *p_Var10;
  int iVar5;
  
  bVar9 = 0;
  bVar1 = *dest_filename;
  uVar4 = 0;
  pbVar5 = (byte *)dest_filename;
  while (uVar7 = uVar4, bVar1 != 0x5c) {
    uVar7 = uVar4 + 1;
    iVar4 = toupper((uint)*pbVar5);
    local_114[uVar4] = (char)iVar4;
    pbVar5 = pbVar5 + 1;
    uVar6 = 0xffffffff;
    pcVar8 = dest_filename;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8;
    } while (cVar1 != '\0');
    if (~uVar6 - 1 < uVar7) {
      local_114[0] = '\0';
      break;
    }
    uVar4 = uVar7;
    bVar1 = *pbVar5;
  }
  local_114[uVar7] = '\0';
  _fseek(source_file,file_offset,0);
  _mkdir(local_114);
  file_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       (dest_filename,(char *)0x0,"wb","..\\engine\\fileio.cpp",0xae4);
  uVar4 = 0;
  if (file_ptr != (_FILE *)0x0) {
    iVar6 = 0;
    if (0 < file_size) {
      do {
        p_Var10 = file_ptr;
        if (((file_ptr->_flag & 0x400) == 0) && (1 < file_ptr->_bufsize - file_ptr->_cnt)) {
          if ((source_file->_cnt < 1) || ((byte)*source_file->_ptr - 0xd < 0xfe)) {
            iVar5 = _fgetc(source_file);
            cVar3 = (char)iVar5;
          }
          else {
            source_file->_cnt = source_file->_cnt + -1;
            pcVar3 = source_file->_ptr;
            source_file->_ptr = pcVar3 + 1;
            cVar3 = *pcVar3;
          }
          *file_ptr->_ptr = cVar3;
          if (*file_ptr->_ptr == '\n') {
            uVar4 = 10;
            goto LAB_004b7e34;
          }
          iVar2 = file_ptr->_cnt;
          *(byte *)((int)&file_ptr->_flag + 1) = *(byte *)((int)&file_ptr->_flag + 1) | 0x10;
          file_ptr->_cnt = iVar2 + 1;
          file_ptr->_ptr = file_ptr->_ptr + 1;
        }
        else {
          if ((source_file->_cnt < 1) || ((byte)*source_file->_ptr - 0xd < 0xfe)) {
            uVar4 = _fgetc(source_file);
          }
          else {
            pbVar2 = (byte *)source_file->_ptr;
            source_file->_ptr = (char *)(pbVar2 + 1);
            source_file->_cnt = source_file->_cnt + -1;
            uVar4 = (uint)*pbVar2;
          }
LAB_004b7e34:
          _fputc(uVar4,p_Var10);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < file_size);
    }
    uVar4 = (uint)((source_file->_flag & 0x20) == 0);
    if ((file_ptr->_flag & 0x20) != 0) {
      uVar4 = 0;
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\engine\\fileio.cpp",0xaf5);
    iVar6 = engine_dosio_cpp_copyFileTimestamp_FUN_00481910(dest_filename,timestamp_source);
    if (iVar6 == 0) {
      uVar4 = 0;
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"WARNING: Error setting date/time on %s.\n(Most likely reason: Tried to set the file time to a time\nnewer than the current system time on your computer)",dest_filename);
    }
  }
  return uVar4;
}
