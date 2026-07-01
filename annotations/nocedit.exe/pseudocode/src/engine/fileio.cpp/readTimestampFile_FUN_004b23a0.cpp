// Name: engine_fileio.cpp_readTimestampFile_FUN_004b23a0
// Address: 004b23a0
// Address Range: [[004b23a0, 004b2631]]
// Convention: __cdecl
// Signature: int __cdecl engine_fileio_cpp_readTimestampFile_FUN_004b23a0(_FILE *file_handle,STimestampRecord **records,char *directory,char *filename)

#include "nocturne.h"

int __cdecl engine_fileio_cpp_readTimestampFile_FUN_004b23a0(_FILE *file_handle,STimestampRecord **records,char *directory,char *filename)

{
  char cVar2;
  char *pcVar2;
  int iVar3;
  STimestampRecord *pSVar4;
  int iVar4;
  int new_size;
  char *pcVar5;
  STimestampRecord *pSVar5;
  STimestampRecord *pSVar6;
  byte bVar6;
  char local_560 [1024];
  STimestampRecord local_160;
  int local_18;
  int local_14;
  char cVar1;
  
  bVar6 = 0;
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
    pSVar6 = &local_160;
    pcVar5 = directory;
    do {
      cVar1 = *pcVar5;
      pSVar6->filename[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pSVar6->filename[1] = cVar2;
      pSVar6 = (STimestampRecord *)(pSVar6->filename + 2);
    } while (cVar2 != '\0');
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
    new_size = new_size + 0x148;
    pSVar5 = &local_160;
    pcVar5 = pSVar4->filename + local_14;
    for (iVar4 = 0x52; iVar4 != 0; iVar4 = iVar4 + -1) {
      pSVar5 = (STimestampRecord *)((int)pSVar5 + (uint)bVar6 * -8 + 4);
      *(uint *)pcVar5 = *(uint *)pSVar5->filename;
      pSVar5 = pSVar5;
      pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
    }
    local_18 = local_18 + 1;
    local_14 = local_14 + 0x148;
  } while( true );
}
