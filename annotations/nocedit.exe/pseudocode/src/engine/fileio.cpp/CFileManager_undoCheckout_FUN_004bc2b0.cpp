// Name: engine_fileio.cpp_CFileManager_undoCheckout_FUN_004bc2b0
// Address: 004bc2b0
// Address Range: [[004bc2b0, 004bc591]]
// Convention: __cdecl
// Signature: int __cdecl engine_fileio_cpp_CFileManager_undoCheckout_FUN_004bc2b0 (CFileManager *this_ptr,CCheckOutItem *checkout_item)

#include "nocturne.h"

int __cdecl
engine_fileio_cpp_CFileManager_undoCheckout_FUN_004bc2b0
          (CFileManager *this_ptr,CCheckOutItem *checkout_item)

{
  int iVar1;
  int iVar2;
  char *in_stack_0000000c;
  char local_414 [500];
  char local_220 [260];
  char local_11c [260];
  CStrList local_18;
  
  iVar1 = engine_fileio_cpp_CFileManager_createPodConfigWizard_FUN_004bccf0(this_ptr);
  if (iVar1 != 0) {
    iVar1 = engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
                      (checkout_item,in_stack_0000000c,local_11c,"Select file to undo check out"
                       ,"*.pod");
    if (iVar1 != 0) {
      iVar1 = engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
                        (checkout_item,local_11c,local_220,"Select file to undo check out",
                         "*");
      if (iVar1 != 0) {
        iVar1 = engine_fileio_cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
                          (checkout_item,local_220);
        if (iVar1 != 0) {
          iVar1 = engine_fileio_cpp_getLatestFileFromRepository_FUN_004b3220
                            (checkout_item->name,local_220);
          if (iVar1 != 0) {
            shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&local_18);
            engine_fileio_cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0(this_ptr,&local_18);
            iVar1 = engine_fileio_cpp_CFileManager_findPodInList_FUN_004ba6c0
                              (this_ptr,&local_18,local_11c);
            if (iVar1 < 0) {
              shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff844);
              shape_edittool_cpp_CStrList_add_FUN_004a2b80
                        ((CStrList *)&stack0xfffff844,"Delete local files and mount");
              shape_edittool_cpp_CStrList_add_FUN_004a2b80
                        ((CStrList *)&stack0xfffff844,"Delete local files but don't mount");
              shape_edittool_cpp_CStrList_add_FUN_004a2b80
                        ((CStrList *)&stack0xfffff844,"Keep files extracted and pod dismounted");
              _sprintf(local_414,"Undo checkout on %s",local_11c);
              iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                ((CPickList *)&stack0xfffff844,local_414,-1,0);
              if (iVar1 == 0) {
                iVar2 = engine_fileio_cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
                                  (this_ptr,local_11c);
                if (iVar2 == 0) {
                  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80((CPickList *)&stack0xfffff844,0);
                  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_18,0);
                  return 0;
                }
                shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_18,local_11c);
                engine_fileio_cpp_CFileManager_writePodConfigFile_FUN_004ba620(this_ptr,&local_18);
              }
              if (iVar1 == 1) {
                iVar1 = engine_fileio_cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
                                  (this_ptr,local_11c);
                if (iVar1 == 0) {
                  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80((CPickList *)&stack0xfffff844,0);
                  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_18,0);
                  return 0;
                }
              }
              shape_edittool_cpp_CPickList_dtor_FUN_004a3c80((CPickList *)&stack0xfffff844,0);
            }
            else {
              iVar1 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                                (g_CEditorToolsPtr,"Delete local files?");
              if (iVar1 != 0) {
                iVar1 = engine_fileio_cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
                                  (this_ptr,local_11c);
                if (iVar1 == 0) {
                  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_18,0);
                  return 0;
                }
              }
            }
            if (g_CDemonPodPtr != (CDemonPod *)0x0) {
              shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                        (g_CEditorToolsPtr,"Remounting all pods...");
              engine_pod_cpp_CPod_cleanup_FUN_00550c80((CPod *)g_CDemonPodPtr);
              (*g_CDemonPodPtr->vtable->load)((CPod *)g_CDemonPodPtr);
            }
            shape_edittool_cpp_CStrList_dtor_FUN_004a2a40((CStrList *)&local_18.capacity,0);
            return 0;
          }
        }
      }
    }
  }
  return 0;
}
