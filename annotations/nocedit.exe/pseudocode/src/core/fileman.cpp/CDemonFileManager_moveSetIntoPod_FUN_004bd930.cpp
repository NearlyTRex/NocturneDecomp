// Name: core_fileman.cpp_CDemonFileManager_moveSetIntoPod_FUN_004bd930
// Address: 004bd930
// Address Range: [[004bd930, 004bd9a1]]
// Convention: __cdecl
// Signature: void core_fileman.cpp_CDemonFileManager_moveSetIntoPod_FUN_004bd930(CDemonFileManager * this_ptr)

#include "nocturne.h"

void __cdecl
core_fileman_cpp_CDemonFileManager_moveSetIntoPod_FUN_004bd930(CDemonFileManager *this_ptr)

{
  int iVar1;
  char local_104 [256];
  
  iVar1 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                    (g_CEditorToolsPtr,"Select set to build pod.","models",
                     "*.set",SUB41 /* extract 2-byte value */(local_104,0));
  if (iVar1 == 0) {
    return;
  }
  engine_fileio_cpp_CFileManager_openExtractFileForBuilding_FUN_004b7c10
            (&this_ptr->base_filemanager);
  core_fileman_cpp_CDemonFileManager_addSetToExtractList_FUN_004bd8e0(this_ptr,local_104);
  engine_fileio_cpp_CFileManager_closeExtractFile_FUN_004b7c60(&this_ptr->base_filemanager);
  engine_fileio_cpp_CFileManager_rebuildLastPod_FUN_004b5a50
            (&this_ptr->base_filemanager,(char *)0x0,(char *)0x0);
  return;
}
