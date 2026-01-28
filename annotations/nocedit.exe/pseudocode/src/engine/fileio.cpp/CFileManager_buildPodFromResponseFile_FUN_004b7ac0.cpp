// Name: engine_fileio.cpp_CFileManager_buildPodFromResponseFile_FUN_004b7ac0
// Address: 004b7ac0
// Address Range: [[004b7ac0, 004b7c0f]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_CFileManager_buildPodFromResponseFile_FUN_004b7ac0(CFileManager *this_ptr)

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_CFileManager_buildPodFromResponseFile_FUN_004b7ac0(CFileManager *this_ptr)

{
  int *piVar1;
  FILE *pFVar2;
  byte *pbVar3;
  int iVar4;
  FILE *file;
  uint character;
  char local_5c [80];
  
  iVar4 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                    (g_CEditorToolsPtr,"Enter response filename",local_5c,0x14,0);
  if (iVar4 == 0) {
    return;
  }
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   (local_5c,(char *)0x0,"rt","..\\engine\\fileio.cpp",0xa67);
  if (file != (FILE *)0x0) {
    engine_fileio_cpp_CFileManager_openExtractFileForBuilding_FUN_004b7c10(this_ptr);
    while( true ) {
      if ((file->_cnt < 1) || ((byte)*file->_ptr - 0xd < 0xfe)) {
        character = crt_stdio_c_fgetc_FUN_005fe840(file);
      }
      else {
        pbVar3 = (byte *)file->_ptr;
        file->_cnt = file->_cnt + -1;
        file->_ptr = (char *)(pbVar3 + 1);
        character = (uint)*pbVar3;
      }
      if (character == 0xffffffff) break;
      pFVar2 = this_ptr->file_ptr;
      if (((pFVar2->_flag & 0x400) == 0) && (1 < pFVar2->_bufsize - pFVar2->_cnt)) {
        *pFVar2->_ptr = (char)character;
        if (*pFVar2->_ptr == '\n') {
          crt_stdio_c_fputc_FUN_006007a0(10,this_ptr->file_ptr);
        }
        else {
          pbVar3 = (byte *)((int)&this_ptr->file_ptr->_flag + 1);
          *pbVar3 = *pbVar3 | 0x10;
          piVar1 = &this_ptr->file_ptr->_cnt;
          *piVar1 = *piVar1 + 1;
          this_ptr->file_ptr->_ptr = this_ptr->file_ptr->_ptr + 1;
        }
      }
      else {
        crt_stdio_c_fputc_FUN_006007a0(character,this_ptr->file_ptr);
      }
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(this_ptr->file_ptr,"..\\engine\\fileio.cpp",0xa79);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\fileio.cpp",0xa7a);
    engine_fileio_cpp_CFileManager_rebuildLastPod_FUN_004b5a50(this_ptr,(char *)0x0,(char *)0x0);
    return;
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"Unable to open response file!");
  return;
}
