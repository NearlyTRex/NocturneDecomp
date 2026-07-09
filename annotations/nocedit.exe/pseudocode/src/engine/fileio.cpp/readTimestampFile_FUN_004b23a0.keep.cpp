// Name: engine_fileio.cpp_readTimestampFile_FUN_004b23a0
// Address: 004b23a0
// MANUAL RECONSTRUCTION
// Address Range: [[004b23a0, 004b2631]]
// Convention: __cdecl
// Signature: int __cdecl engine_fileio_cpp_readTimestampFile_FUN_004b23a0(_FILE *file_handle,STimestampRecord **records,char *directory,char *filename)

#include "nocturne.h"

int __cdecl engine_fileio_cpp_readTimestampFile_FUN_004b23a0(_FILE *file_handle,STimestampRecord **records,char *directory,char *filename)

{
  char *pcVar2;
  int iVar3;
  STimestampRecord *pSVar4;
  int new_size;
  char local_560 [1024];
  STimestampRecord local_160;
  int local_18;
  int local_14;

  new_size = 0x148;
  local_18 = 0;
  _fseek((_FILE *)file_handle->_ptr,0,0);
  *records = (STimestampRecord *)0x0;
  local_14 = 0;
  do {
    _fscanf((_FILE *)file_handle->_ptr," ");
    pcVar2 = _fgets(local_560,0x400,(_FILE *)file_handle->_ptr);
    if (pcVar2 != local_560) {
      if ((((_FILE *)file_handle->_ptr)->_flag & 0x20) == 0) {
        return local_18;
      }
      shape_memdbg_cpp_closeFile_FUN_0050f9b0
                ((_FILE *)file_handle->_ptr,"..\\engine\\fileio.cpp",196);
      file_handle->_ptr = (char *)0x0;
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"Error reading %s",filename);
LAB_004b246f:
      if ((_FILE *)file_handle->_ptr != (_FILE *)0x0) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0
                  ((_FILE *)file_handle->_ptr,"..\\engine\\fileio.cpp",196);
        file_handle->_ptr = (char *)0x0;
      }
      if (*records != (STimestampRecord *)0x0) {
        shape_memdbg_cpp_debugFree_FUN_0050f460(*records,"..\\engine\\fileio.cpp",430);
        *records = (STimestampRecord *)0x0;
      }
      return -1;
    }
    iVar3 = engine_fileio_cpp_parseTimestampRecord_FUN_004b2270(local_560,&local_160);
    if (iVar3 == 0) {
      if ((_FILE *)file_handle->_ptr != (_FILE *)0x0) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0
                  ((_FILE *)file_handle->_ptr,"..\\engine\\fileio.cpp",196);
        file_handle->_ptr = (char *)0x0;
      }
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"Error parsing %s, record %d",filename,local_18);
      goto LAB_004b246f;
    }
    strcpy(local_160.filename,directory);
    pSVar4 = (STimestampRecord *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                       (*records,new_size,"..\\engine\\fileio.cpp",450);
    *records = pSVar4;
    if (pSVar4 == (STimestampRecord *)0x0) {
      if ((_FILE *)file_handle->_ptr != (_FILE *)0x0) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0
                  ((_FILE *)file_handle->_ptr,"..\\engine\\fileio.cpp",196);
        file_handle->_ptr = (char *)0x0;
      }
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"Out of memory reading %s record %d",filename,local_18);
      return -1;
    }
    new_size = new_size + sizeof(STimestampRecord);
    memcpy(pSVar4->filename + local_14,&local_160,sizeof(STimestampRecord));
    local_18 = local_18 + 1;
    local_14 = local_14 + sizeof(STimestampRecord);
  } while( true );
}
