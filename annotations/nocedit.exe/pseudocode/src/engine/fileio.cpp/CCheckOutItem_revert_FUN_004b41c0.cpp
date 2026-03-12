// Name: engine_fileio.cpp_CCheckOutItem_revert_FUN_004b41c0
// Address: 004b41c0
// Address Range: [[004b41c0, 004b421d]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_CCheckOutItem_revert_FUN_004b41c0(CCheckOutItem *this_ptr,char *output_buffer)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_CCheckOutItem_revert_FUN_004b41c0(CCheckOutItem *this_ptr,char *output_buffer)

{
  int iVar1;
  int iVar2;
  char local_108 [260];
  
  iVar1 = engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
                    (this_ptr,output_buffer,local_108,"Select file to undo check out",
                     "*");
  if (iVar1 != 0) {
    iVar2 = engine_fileio_cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
                      (this_ptr,local_108);
    if (iVar2 != 0) {
      engine_fileio_cpp_getLatestFileFromRepository_FUN_004b3220(this_ptr->name,local_108);
      return;
    }
  }
  return;
}
