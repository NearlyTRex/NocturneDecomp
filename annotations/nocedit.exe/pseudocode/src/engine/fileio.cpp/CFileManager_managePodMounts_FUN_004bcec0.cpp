// Name: engine_fileio.cpp_CFileManager_managePodMounts_FUN_004bcec0
// Address: 004bcec0
// Address Range: [[004bcec0, 004bd186]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_managePodMounts_FUN_004bcec0(CFileManager * this_ptr)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_CFileManager_managePodMounts_FUN_004bcec0(CFileManager *this_ptr)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int unaff_EBX;
  int iVar4;
  BADSPACEBASE *in_ESP;
  uint in_stack_fffffa58;
  uint in_stack_fffffa5c;
  char **in_stack_fffffa60;
  CStrList_vtable *in_stack_fffffa64;
  uint in_stack_fffffa68;
  char **in_stack_fffffa6c;
  CStrList_vtable *in_stack_fffffa70;
  uint in_stack_fffffa74;
  char acStack_21c [4];
  char acStack_218 [496];
  byte auStack_28 [8];
  CStrList local_20;
  
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&local_20);
  shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
            ((CStrList *)&local_20.capacity,".","*.pod");
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)auStack_28);
  engine_fileio_cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0
            (this_ptr,(CStrList *)(auStack_28 + 4));
  iVar4 = 0;
  if (0 < local_20.item_count) {
    do {
      pcVar1 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_20,iVar4);
      iVar2 = engine_fileio_cpp_CFileManager_findPodInList_FUN_004ba6c0
                        (this_ptr,(CStrList *)&local_20.capacity,pcVar1);
      if (iVar2 < 0) {
        pcVar1 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)auStack_28,iVar4);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&local_20.vtable,pcVar1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_20.item_count);
  }
  iVar4 = 0;
  while( true ) {
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffa38);
    shape_edittool_cpp_CPickList_setOkButtonText_FUN_004a3d20
              ((CPickList *)&stack0xfffffa3c,(char *)0x0);
    shape_edittool_cpp_CPickList_setCancelButtonText_FUN_004a3d90
              ((CPickList *)&stack0xfffffa40,"Close");
    iVar2 = 0;
    if (0 < unaff_EBX) {
      do {
        pcVar1 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                           ((CStrList *)&stack0xfffffffc,iVar2);
        iVar3 = engine_fileio_cpp_CFileManager_findPodInList_FUN_004ba6c0
                          (this_ptr,(CStrList *)(auStack_28 + 4),pcVar1);
        if (iVar3 < 0) {
          shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)&stack0xfffffff0,iVar2);
          pcVar1 = "%s\tNot mounted";
        }
        else {
          shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)&stack0xfffffff0,iVar2);
          pcVar1 = "%s\tMounted";
        }
        crt_stdio_c_sprintf_FUN_005fdbd0(acStack_21c,pcVar1);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffa40,acStack_218);
        iVar2 = iVar2 + 1;
      } while (iVar2 < unaff_EBX);
    }
    iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)&stack0xfffffa44,"Select PODs you wish to have mounted",iVar4,0);
    if (iVar4 < 0) break;
    pcVar1 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                       ((CStrList *)&stack0x00000000,iVar4);
    iVar2 = engine_fileio_cpp_CFileManager_findPodInList_FUN_004ba6c0
                      (this_ptr,(CStrList *)&stack0xfffffff4,pcVar1);
    if (iVar2 < 0) {
      pcVar1 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                         ((CStrList *)&stack0x00000008,iVar4);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffffc,pcVar1);
    }
    else {
      shape_edittool_cpp_CStrList_removeAt_FUN_004a2de0((CStrList *)&stack0xfffffff8,iVar2);
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffa58,0,in_stack_fffffa58,in_stack_fffffa5c,
               (uint)in_stack_fffffa60,(uint)in_stack_fffffa64,in_stack_fffffa68);
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Applying changes to POD.INI");
  engine_fileio_cpp_CFileManager_writePodConfigFile_FUN_004ba620
            (this_ptr,(CStrList *)&stack0xfffffff4);
  if (g_CDemonPodPtr != (CDemonPod *)0x0) {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Remounting all pods...");
    engine_pod_cpp_CPod_cleanup_FUN_00550c80((CPod *)g_CDemonPodPtr);
    (*g_CDemonPodPtr->vtable->load)((CPod *)g_CDemonPodPtr);
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffffa64,0,(uint)in_stack_fffffa64,in_stack_fffffa68,
             (uint)in_stack_fffffa6c,(uint)in_stack_fffffa70,in_stack_fffffa74);
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40((CStrList *)&stack0x00000010,0,in_stack_fffffa68);
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
            ((CStrList *)&stack0x00000024,0,(uint)in_stack_fffffa6c);
  return;
}
