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
  int iVar3;
  int iVar4;
  char *format;
  CPickList CStack_5d4;
  byte local_30 [16];
  CStrList local_20;
  
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&local_20);
  shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
            (&local_20,".","*.pod");
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)local_30);
  engine_fileio_cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0(this_ptr,(CStrList *)local_30);
  iVar4 = 0;
  if (0 < (int)local_30._0_4_) {
    do {
      pcVar1 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)local_30,iVar4);
      iVar2 = engine_fileio_cpp_CFileManager_findPodInList_FUN_004ba6c0(this_ptr,&local_20,pcVar1);
      if (iVar2 < 0) {
        pcVar1 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)local_30,iVar4);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_20,pcVar1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)local_30._0_4_);
  }
  iVar4 = 0;
  while( true ) {
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffa28);
    shape_edittool_cpp_CPickList_setOkButtonText_FUN_004a3d20
              ((CPickList *)&stack0xfffffa28,(char *)0x0);
    shape_edittool_cpp_CPickList_setCancelButtonText_FUN_004a3d90
              ((CPickList *)&stack0xfffffa28,"Close");
    iVar2 = 0;
    if (0 < local_20.item_count) {
      do {
        pcVar1 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_20,iVar2);
        iVar3 = engine_fileio_cpp_CFileManager_findPodInList_FUN_004ba6c0
                          (this_ptr,(CStrList *)local_30,pcVar1);
        if (iVar3 < 0) {
          pcVar1 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_20,iVar2);
          format = "%s\tNot mounted";
        }
        else {
          pcVar1 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_20,iVar2);
          format = "%s\tMounted";
        }
        sprintf((char *)&CStack_5d4.selection_state,format,pcVar1);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa28,(char *)&CStack_5d4.selection_state);
        iVar2 = iVar2 + 1;
      } while (iVar2 < local_20.item_count);
    }
    iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)&stack0xfffffa28,"Select PODs you wish to have mounted",iVar4,0);
    if (iVar4 < 0) break;
    pcVar1 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_20,iVar4);
    iVar2 = engine_fileio_cpp_CFileManager_findPodInList_FUN_004ba6c0
                      (this_ptr,(CStrList *)local_30,pcVar1);
    if (iVar2 < 0) {
      pcVar1 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_20,iVar4);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)local_30,pcVar1);
    }
    else {
      shape_edittool_cpp_CStrList_removeAt_FUN_004a2de0((CStrList *)local_30,iVar2);
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80((CPickList *)&stack0xfffffa28,0);
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Applying changes to POD.INI");
  engine_fileio_cpp_CFileManager_writePodConfigFile_FUN_004ba620(this_ptr,(CStrList *)local_30);
  if (g_CDemonPodPtr != (CDemonPod *)0x0) {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Remounting all pods...");
    engine_pod_cpp_CPod_cleanup_FUN_00550c80((CPod *)g_CDemonPodPtr);
    (*g_CDemonPodPtr->vtable->load)((CPod *)g_CDemonPodPtr);
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&CStack_5d4,0);
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40((CStrList *)(local_30 + 4),0);
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40((CStrList *)&local_20.capacity,0);
  return;
}
