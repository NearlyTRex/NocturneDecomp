// Name: engine_fileio.cpp_CCheckOutList_write_FUN_004b2eb0
// Address: 004b2eb0
// Address Range: [[004b2eb0, 004b2f8d]]
// Convention: __cdecl
// Signature: int __cdecl engine_fileio_cpp_CCheckOutList_write_FUN_004b2eb0(CCheckOutList *this_ptr,_FILE **file_handle)

#include "nocturne.h"

int __cdecl engine_fileio_cpp_CCheckOutList_write_FUN_004b2eb0(CCheckOutList *this_ptr,_FILE **file_handle)

{
  int iVar1;
  char *pcVar2;
  long new_size;
  int iVar3;
  
  iVar1 = _fseek(*file_handle,0,0);
  if (iVar1 == 0) {
    iVar1 = 0;
    if (0 < this_ptr->count) {
      iVar3 = 0;
      do {
        pcVar2 = this_ptr->items->name + iVar3;
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + 0x168;
        _fprintf(*file_handle,"%s = %s\n",pcVar2,pcVar2 + 0x104);
      } while (iVar1 < this_ptr->count);
    }
    _fflush(*file_handle);
    if (((((*file_handle)->_flag & 0x20) == 0) &&
        (new_size = _ftell(*file_handle), -1 < new_size)) &&
       (iVar1 = chsize((*file_handle)->_handle,new_size), iVar1 == 0)) {
      return 1;
    }
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"File I/O error accessing checkout file.\nGet Fletch, this is a serious situation.");
  if (*file_handle != (_FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(*file_handle,"..\\engine\\fileio.cpp",0xc4);
    *file_handle = (_FILE *)0x0;
  }
  return 0;
}
