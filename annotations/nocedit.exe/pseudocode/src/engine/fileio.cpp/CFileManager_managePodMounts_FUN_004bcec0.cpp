// Name: engine_fileio.cpp_CFileManager_managePodMounts_FUN_004bcec0
// Address: 004bcec0
// Address Range: [[004bcec0, 004bd186]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_CFileManager_managePodMounts_FUN_004bcec0(CFileManager *this_ptr)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_CFileManager_managePodMounts_FUN_004bcec0(CFileManager *this_ptr)

{
  char *pcVar1;
  int iVar2;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int initial_selected_index;
  CPickList local_5d8;
  char local_230 [512];
  CStrList local_30;
  CStrList local_20;
  char *format;
  
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&local_20);
  shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
            (&local_20,".","*.pod");
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&local_30);
  engine_fileio_cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0(this_ptr,&local_30);
  iVar4 = 0;
  if (0 < local_30.item_count) {
    do {
      pcVar1 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_30,iVar4);
      iVar2 = engine_fileio_cpp_CFileManager_findPodInList_FUN_004ba6c0(this_ptr,&local_20,pcVar1);
      if (iVar2 < 0) {
        pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_30,iVar4);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_20,pcVar2);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_30.item_count);
  }
  initial_selected_index = 0;
  while( true ) {
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_5d8);
    shape_edittool_cpp_CPickList_setOkButtonText_FUN_004a3d20(&local_5d8,(char *)0x0);
    shape_edittool_cpp_CPickList_setCancelButtonText_FUN_004a3d90(&local_5d8,"Close");
    iVar5 = 0;
    if (0 < local_20.item_count) {
      do {
        pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_20,iVar5);
        iVar3 = engine_fileio_cpp_CFileManager_findPodInList_FUN_004ba6c0(this_ptr,&local_30,pcVar2)
        ;
        if (iVar3 < 0) {
          pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_20,iVar5);
          format = "%s\tNot mounted";
        }
        else {
          pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_20,iVar5);
          format = "%s\tMounted";
        }
        _sprintf(local_230,format,pcVar2);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_5d8.base,local_230);
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_20.item_count);
    }
    initial_selected_index =
         shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                   (&local_5d8,"Select PODs you wish to have mounted",initial_selected_index,0);
    if (initial_selected_index < 0) break;
    pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_20,initial_selected_index);
    iVar5 = engine_fileio_cpp_CFileManager_findPodInList_FUN_004ba6c0(this_ptr,&local_30,pcVar2);
    if (iVar5 < 0) {
      pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                         (&local_20,initial_selected_index);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_30,pcVar2);
    }
    else {
      shape_edittool_cpp_CStrList_removeAt_FUN_004a2de0(&local_30,iVar5);
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_5d8,0);
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Applying changes to POD.INI");
  engine_fileio_cpp_CFileManager_writePodConfigFile_FUN_004ba620(this_ptr,&local_30);
  if (g_CDemonPodPtr != (CDemonPod *)0x0) {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Remounting all pods...");
    engine_pod_cpp_CPod_cleanup_FUN_00550c80((CPod *)g_CDemonPodPtr);
    (*g_CDemonPodPtr->vtable->load)((CPod *)g_CDemonPodPtr);
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_5d8,0);
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_30,0);
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_20,0);
  return;
}
