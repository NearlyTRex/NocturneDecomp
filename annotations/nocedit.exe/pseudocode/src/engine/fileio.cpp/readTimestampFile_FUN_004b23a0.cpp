// Name: engine_fileio.cpp_readTimestampFile_FUN_004b23a0
// Address: 004b23a0
// Address Range: [[004b23a0, 004b2631]]
// Convention: __cdecl
// Signature: int __cdecl engine_fileio_cpp_readTimestampFile_FUN_004b23a0(_FILE *file,STimestampRecord **records,int *count)

#include "nocturne.h"

int __cdecl
engine_fileio_cpp_readTimestampFile_FUN_004b23a0(_FILE *file,STimestampRecord **records,int *count)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  STimestampRecord *pSVar4;
  int new_size;
  int *piVar5;
  STimestampRecord *pSVar6;
  byte bVar7;
  uint in_stack_00000010;
  char local_560 [1024];
  STimestampRecord local_160;
  int local_18;
  int local_14;
  
  bVar7 = 0;
  new_size = 0x148;
  local_18 = 0;
  _fseek((_FILE *)file->_ptr,0,0);
  *records = (STimestampRecord *)0x0;
  local_14 = 0;
  do {
    _fscanf((_FILE *)file->_ptr," ");
    pcVar2 = _fgets(local_560,0x400,(_FILE *)file->_ptr);
    if (pcVar2 != local_560) {
      if ((((_FILE *)file->_ptr)->_flag & 0x20) == 0) {
        return local_18;
      }
      shape_memdbg_cpp_closeFile_FUN_0050f9b0((_FILE *)file->_ptr,"..\\engine\\fileio.cpp",0xc4)
      ;
      file->_ptr = (char *)0x0;
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"Error reading %s",in_stack_00000010);
LAB_004b246f:
      if ((_FILE *)file->_ptr != (_FILE *)0x0) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0
                  ((_FILE *)file->_ptr,"..\\engine\\fileio.cpp",0xc4);
        file->_ptr = (char *)0x0;
      }
      if (*records != (STimestampRecord *)0x0) {
        shape_memdbg_cpp_debugFree_FUN_0050f460(*records,"..\\engine\\fileio.cpp",0x1ae);
        *records = (STimestampRecord *)0x0;
      }
      return -1;
    }
    iVar3 = engine_fileio_cpp_parseTimestampRecord_FUN_004b2270(local_560,&local_160);
    if (iVar3 == 0) {
      if ((_FILE *)file->_ptr != (_FILE *)0x0) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0
                  ((_FILE *)file->_ptr,"..\\engine\\fileio.cpp",0xc4);
        file->_ptr = (char *)0x0;
      }
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"Error parsing %s, record %d",in_stack_00000010,local_18);
      goto LAB_004b246f;
    }
    pSVar4 = &local_160;
    piVar5 = count;
    do {
      iVar3 = *piVar5;
      *(char *)&pSVar4->record_start = (char)iVar3;
      if ((char)iVar3 == '\0') break;
      cVar1 = *(char *)((int)piVar5 + 1);
      piVar5 = (int *)((int)piVar5 + 2);
      *(char *)((int)&pSVar4->record_start + 1) = cVar1;
      pSVar4 = (STimestampRecord *)((int)&pSVar4->record_start + 2);
    } while (cVar1 != '\0');
    pSVar4 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                       (*records,new_size,"..\\engine\\fileio.cpp",0x1c2);
    *records = pSVar4;
    if (pSVar4 == (STimestampRecord *)0x0) {
      if ((_FILE *)file->_ptr != (_FILE *)0x0) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0
                  ((_FILE *)file->_ptr,"..\\engine\\fileio.cpp",0xc4);
        file->_ptr = (char *)0x0;
      }
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"Out of memory reading %s record %d",in_stack_00000010,local_18);
      return -1;
    }
    new_size = new_size + 0x148;
    pSVar6 = &local_160;
    pcVar2 = pSVar4->unk1 + local_14 + -4;
    for (iVar3 = 0x52; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(int *)pcVar2 = pSVar6->record_start;
      pSVar6 = (STimestampRecord *)((int)pSVar6 + ((uint)bVar7 * -2 + 1) * 4);
      pcVar2 = pcVar2 + ((uint)bVar7 * -2 + 1) * 4;
    }
    local_18 = local_18 + 1;
    local_14 = local_14 + 0x148;
  } while( true );
}
