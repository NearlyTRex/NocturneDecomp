// Name: engine_fileio.cpp_extractFileWithTimestamp_FUN_004b7d50
// Address: 004b7d50
// Address Range: [[004b7d50, 004b7f42]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_extractFileWithTimestamp_FUN_004b7d50(FILE * source_file, char * dest_filename, char * name_or_offset, int file_size, int file_offset, int checksum, int timestamp)

#include "nocturne.h"

int __cdecl
engine_fileio_cpp_extractFileWithTimestamp_FUN_004b7d50
          (FILE *source_file,char *dest_filename,char *name_or_offset,int file_size,int file_offset,
          int checksum,int timestamp)

{
  byte bVar1;
  byte *pbVar2;
  char cVar3;
  int iVar4;
  FILE *file_ptr;
  uint uVar6;
  BADSPACEBASE *in_ESP;
  uint uVar7;
  char *pcVar8;
  byte bVar9;
  FILE *pFVar10;
  char local_114 [256];
  byte *local_14;
  int iVar5;
  
  bVar9 = 0;
  bVar1 = *name_or_offset;
  uVar6 = 0;
  local_14 = (byte *)name_or_offset;
  while (uVar7 = uVar6, bVar1 != 0x5c) {
    uVar7 = uVar6 + 1;
    iVar4 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*local_14);
    local_114[uVar6] = (char)iVar4;
    local_14 = local_14 + 1;
    uVar6 = 0xffffffff;
    pcVar8 = name_or_offset;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar3 = *pcVar8;
      pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
    } while (cVar3 != '\0');
    if (~uVar6 - 1 < uVar7) {
      local_114[0] = '\0';
      break;
    }
    uVar6 = uVar7;
    bVar1 = *local_14;
  }
  local_114[uVar7] = '\0';
  crt_stdio_c_fseek_FUN_005ffacc((FILE *)dest_filename,file_offset,0);
  crt_file_c_create_directory_FUN_00600e10(local_114);
  file_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       (name_or_offset,(char *)0x0,"wb","..\\engine\\fileio.cpp",0xae4)
  ;
  uVar6 = 0;
  if (file_ptr != (FILE *)0x0) {
    iVar4 = 0;
    if (0 < file_size) {
      do {
        pFVar10 = file_ptr;
        if (((file_ptr->_flag & 0x400) == 0) && (1 < file_ptr->_bufsize - file_ptr->_cnt)) {
          if ((*(int *)(dest_filename + 4) < 1) || (**(byte **)dest_filename - 0xd < 0xfe)) {
            iVar5 = crt_stdio_c_fgetc_FUN_005fe840((FILE *)dest_filename);
            cVar3 = (char)iVar5;
          }
          else {
            *(int *)(dest_filename + 4) = *(int *)(dest_filename + 4) + -1;
            pcVar8 = *(char **)dest_filename;
            *(char **)dest_filename = pcVar8 + 1;
            cVar3 = *pcVar8;
          }
          *file_ptr->_ptr = cVar3;
          if (*file_ptr->_ptr == '\n') {
            uVar6 = 10;
            goto LAB_004b7e34;
          }
          iVar5 = file_ptr->_cnt;
          *(byte *)((int)&file_ptr->_flag + 1) = *(byte *)((int)&file_ptr->_flag + 1) | 0x10;
          file_ptr->_cnt = iVar5 + 1;
          file_ptr->_ptr = file_ptr->_ptr + 1;
        }
        else {
          if ((*(int *)(dest_filename + 4) < 1) || (**(byte **)dest_filename - 0xd < 0xfe)) {
            uVar6 = crt_stdio_c_fgetc_FUN_005fe840((FILE *)dest_filename);
          }
          else {
            pbVar2 = *(byte **)dest_filename;
            *(byte **)dest_filename = pbVar2 + 1;
            *(int *)(dest_filename + 4) = *(int *)(dest_filename + 4) + -1;
            uVar6 = (uint)*pbVar2;
          }
LAB_004b7e34:
          crt_stdio_c_fputc_FUN_006007a0(uVar6,pFVar10);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < file_size);
    }
    uVar6 = (uint)((dest_filename[0xc] & 0x20U) == 0);
    if ((file_ptr->_flag & 0x20) != 0) {
      uVar6 = 0;
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\engine\\fileio.cpp",0xaf5);
    iVar4 = engine_dosio_c_copyFileTimestamp_FUN_00481910(name_or_offset,(char *)checksum);
    if (iVar4 == 0) {
      uVar6 = 0;
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"WARNING: Error setting date/time on %s.\n(Most likely reason: Tried to set the file time to a time\nnewer than the current system time on your computer)",name_or_offset);
    }
  }
  return uVar6;
}
