// Name: engine_fileio.cpp_copyFileWithProgress_FUN_004b2030
// Address: 004b2030
// Address Range: [[004b2030, 004b21f6]]
// Convention: __cdecl
// Signature: char * engine_fileio.cpp_copyFileWithProgress_FUN_004b2030(FILE * source_file, FILE * dest_file, char * source_filename, char * dest_filename, int file_size_bytes)

#include "nocturne.h"

char * __cdecl
engine_fileio_cpp_copyFileWithProgress_FUN_004b2030
          (FILE *source_file,FILE *dest_file,char *source_filename,char *dest_filename,
          int file_size_bytes)

{
  bool bVar1;
  SIZE_T SVar2;
  int *piVar3;
  char *pcVar4;
  SIZE_T count;
  BADSPACEBASE *in_ESP;
  int iVar5;
  char *buffer;
  
  g_FileTransferErrorMessage[0] = '\0';
  bVar1 = 0xc800 < file_size_bytes;
  if (bVar1) {
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&stack0xfffffdf8,"Copying %s -> %s (%d bytes)",source_filename,dest_filename,
               file_size_bytes);
    shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
              (g_CEditorToolsPtr,&stack0xfffffdfc);
  }
  iVar5 = 0;
  if (0 < file_size_bytes) {
    do {
      count = file_size_bytes - iVar5;
      if (0x8000 < (int)count) {
        count = 0x8000;
      }
      SVar2 = crt_stdio_c_fread_FUN_005fd990(g_FileTransferBuffer,1,count,(FILE *)source_filename);
      if (SVar2 != count) {
        crt_stdio_c_sprintf_FUN_005fdbd0((char *)0x4b20a9,"Error reading %s");
        piVar3 = (int *)crt_errno_c_errno_FUN_00601450();
        iVar5 = *piVar3;
LAB_004b20b4:
        pcVar4 = crt_string_c_strerror_FUN_00601470(iVar5);
        if (pcVar4 != (char *)0x0) {
          pcVar4 = g_FileTransferErrorMessage;
          goto LAB_004b20cd;
        }
        break;
      }
      SVar2 = crt_stdio_c_fwrite_FUN_005fdc00(g_FileTransferBuffer,1,count,dest_file);
      if (SVar2 != count) {
        crt_stdio_c_sprintf_FUN_005fdbd0(g_FileTransferErrorMessage,"Error writing %s");
        piVar3 = (int *)crt_errno_c_errno_FUN_00601450();
        iVar5 = *piVar3;
        goto LAB_004b20b4;
      }
      iVar5 = iVar5 + count;
      if (bVar1) {
        shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                  (g_CEditorToolsPtr,(float)iVar5,(float)file_size_bytes);
      }
    } while (iVar5 < file_size_bytes);
  }
  goto LAB_004b20ee;
  while( true ) {
    buffer = pcVar4 + 1;
    if (*buffer == '\0') goto LAB_004b20e5;
    pcVar4 = pcVar4 + 2;
    if (*buffer == '\0') break;
LAB_004b20cd:
    buffer = pcVar4;
    if (*pcVar4 == '\0') goto LAB_004b20e5;
    if (*pcVar4 == '\0') break;
  }
  buffer = (char *)0x0;
LAB_004b20e5:
  crt_stdio_c_sprintf_FUN_005fdbd0(buffer,"\n%s");
LAB_004b20ee:
  if (bVar1) {
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  }
  if (g_FileTransferErrorMessage[0] != '\0') {
    return g_FileTransferErrorMessage;
  }
  return (char *)0x0;
}
