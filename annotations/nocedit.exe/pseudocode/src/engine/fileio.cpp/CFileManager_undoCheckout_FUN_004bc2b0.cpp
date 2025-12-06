// Name: engine_fileio.cpp_CFileManager_undoCheckout_FUN_004bc2b0
// Address: 004bc2b0
// Address Range: [[004bc2b0, 004bc591]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_CFileManager_undoCheckout_FUN_004bc2b0(CFileManager * this_ptr, CCheckOutItem * checkout_item)

#include "nocturne.h"

int __cdecl
engine_fileio_cpp_CFileManager_undoCheckout_FUN_004bc2b0
          (CFileManager *this_ptr,CCheckOutItem *checkout_item)

{
  CFileManager *this_ptr_00;
  CCheckOutItem *this_ptr_01;
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  CStrList_vtable *in_stack_00000010;
  char **in_stack_fffff880;
  CStrList_vtable *in_stack_fffff884;
  char **in_stack_fffff888;
  CStrList_vtable *in_stack_fffff88c;
  char **in_stack_fffff890;
  CStrList_vtable *in_stack_fffff894;
  uint in_stack_fffff898;
  char acStack_3e4 [4];
  char acStack_3e0 [456];
  char acStack_218 [4];
  byte auStack_214 [4];
  char acStack_210 [248];
  char acStack_118 [4];
  char acStack_114 [20];
  char acStack_100 [28];
  char acStack_e4 [4];
  char acStack_e0 [8];
  char acStack_d8 [208];
  
  this_ptr_01 = checkout_item;
  this_ptr_00 = this_ptr;
  iVar1 = engine_fileio_cpp_CFileManager_createPodConfigWizard_FUN_004bccf0(this_ptr);
  if (iVar1 != 0) {
    iVar1 = engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
                      (this_ptr_01,(char *)in_stack_00000010,acStack_118,
                       "Select file to undo check out","*.pod");
    if (iVar1 != 0) {
      iVar1 = engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
                        (this_ptr_01,acStack_114,acStack_218,"Select file to undo check out",
                         "*");
      if (iVar1 != 0) {
        iVar1 = engine_fileio_cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
                          (this_ptr_01,auStack_214);
        if (iVar1 != 0) {
          iVar1 = engine_fileio_cpp_getLatestFileFromRepository_FUN_004b3220
                            (this_ptr_01->name,acStack_210);
          if (iVar1 != 0) {
            shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)&stack0xfffffffc);
            engine_fileio_cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0
                      (this_ptr_00,(CStrList *)&stack0x00000000);
            iVar1 = engine_fileio_cpp_CFileManager_findPodInList_FUN_004ba6c0
                              (this_ptr_00,(CStrList *)&this_ptr,acStack_100);
            if (iVar1 < 0) {
              shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff864);
              shape_edittool_cpp_CStrList_add_FUN_004a2b80
                        ((CStrList *)&stack0xfffff868,"Delete local files and mount");
              shape_edittool_cpp_CStrList_add_FUN_004a2b80
                        ((CStrList *)&stack0xfffff86c,"Delete local files but don't mount");
              shape_edittool_cpp_CStrList_add_FUN_004a2b80
                        ((CStrList *)&stack0xfffff870,"Keep files extracted and pod dismounted");
              crt_stdio_c_sprintf_FUN_005fdbd0(acStack_3e4,"Undo checkout on %s");
              iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                ((CPickList *)&stack0xfffff878,acStack_3e0,-1,0);
              if (iVar1 == 0) {
                iVar2 = engine_fileio_cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
                                  (this_ptr_00,acStack_e4);
                if (iVar2 == 0) {
                  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                            ((CPickList *)&stack0xfffff880,0,(uint)in_stack_fffff880,
                             (uint)in_stack_fffff884,(uint)in_stack_fffff888,(uint)in_stack_fffff88c
                             ,(uint)in_stack_fffff890);
                  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
                            ((CStrList *)&stack0x00000028,0,(uint)in_stack_fffff884);
                  return 0;
                }
                shape_edittool_cpp_CStrList_add_FUN_004a2b80
                          ((CStrList *)&stack0x00000024,acStack_e0);
                engine_fileio_cpp_CFileManager_writePodConfigFile_FUN_004ba620
                          (this_ptr_00,(CStrList *)&stack0x00000028);
              }
              if (iVar1 == 1) {
                iVar1 = engine_fileio_cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
                                  (this_ptr_00,acStack_d8);
                if (iVar1 == 0) {
                  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                            ((CPickList *)&stack0xfffff888,0,(uint)in_stack_fffff888,
                             (uint)in_stack_fffff88c,(uint)in_stack_fffff890,(uint)in_stack_fffff894
                             ,in_stack_fffff898);
                  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
                            ((CStrList *)&stack0x00000030,0,(uint)in_stack_fffff88c);
                  return 0;
                }
              }
              shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                        ((CPickList *)&stack0xfffff888,0,(uint)in_stack_fffff888,
                         (uint)in_stack_fffff88c,(uint)in_stack_fffff890,(uint)in_stack_fffff894,
                         in_stack_fffff898);
            }
            else {
              iVar1 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                                (g_CEditorToolsPtr,"Delete local files?");
              if (iVar1 != 0) {
                iVar1 = engine_fileio_cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
                                  (this_ptr_00,acStack_d8);
                if (iVar1 == 0) {
                  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
                            ((CStrList *)&stack0x00000030,0,(uint)in_stack_fffff88c);
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
            shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
                      ((CStrList *)&stack0x00000030,0,(uint)in_stack_fffff88c);
            return 0;
          }
        }
      }
    }
  }
  return 0;
}
