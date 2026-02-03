// Name: sound_sndmain.cpp_testSoundFiles_FUN_005ad5c0
// Address: 005ad5c0
// Address Range: [[005ad5c0, 005adb9e]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_testSoundFiles_FUN_005ad5c0(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_testSoundFiles_FUN_005ad5c0(void)

{
  CStrList_vtable *ext;
  char *pcVar1;
  int iVar2;
  int iVar3;
  char **ppcVar4;
  char *drive;
  char *dir;
  char *in_stack_fffff0e0;
  CStrList *pCVar5;
  CStrList *pCVar6;
  CStrList aCStack_f18 [58];
  SFoundFileInfo SStack_b70;
  SFoundFileInfo SStack_95c;
  char acStack_748 [512];
  char acStack_548 [260];
  char acStack_444 [260];
  char acStack_340 [260];
  char *apcStack_23c [64];
  char acStack_13c [240];
  byte auStack_4c [24];
  byte local_34 [16];
  CStrList CStack_24;
  
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff0e0);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Searching for orphaned sfx files");
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)local_34);
  shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
            ((CStrList *)local_34,"sound","*.sfx");
  iVar3 = 0;
  if (0 < (int)local_34._0_4_) {
    do {
      ext = (CStrList_vtable *)(*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,1);
      if (ext != (CStrList_vtable *)0x0) break;
      ppcVar4 = apcStack_23c;
      dir = (char *)0x0;
      drive = (char *)0x0;
      pcVar1 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                         ((CStrList *)(local_34 + 8),iVar3);
      splitpath(pcVar1,drive,dir,(char *)ppcVar4,(char *)ext);
      makepath
                (acStack_444,(char *)0x0,(char *)0x0,(char *)apcStack_23c,"mp3");
      makepath
                (acStack_340,(char *)0x0,(char *)0x0,(char *)apcStack_23c,"wav");
      in_stack_fffff0e0 = "sound";
      iVar2 = engine_dosio_c_getFileSize_FUN_00481880("sound",acStack_444);
      if (iVar2 < 1) {
        in_stack_fffff0e0 = "sound";
        iVar2 = engine_dosio_c_getFileSize_FUN_00481880("sound",acStack_340);
        if (iVar2 < 1) {
          shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)(local_34 + 8),iVar3);
          sprintf(acStack_748,"Orphaned sfx file %s");
          in_stack_fffff0e0 = (char *)aCStack_f18;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(aCStack_f18,acStack_748);
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)local_34._8_4_);
  }
  sound_sndmain_cpp_enableSoundSystem_FUN_005aaef0();
  iVar3 = sound_sndmain_cpp_isSoundBusy_FUN_005ab540();
  if (iVar3 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't start sound output to test sounds");
  }
  else {
    shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&CStack_24);
    shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
              (&CStack_24,"sound","*.mp3");
    shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
              (g_CEditorToolsPtr,"Testing MP3 files...");
    iVar3 = 0;
    if (0 < CStack_24.item_count) {
      do {
        iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,1);
        if (iVar2 != 0) break;
        shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                  (g_CEditorToolsPtr,(float)iVar3,(float)(int)CStack_24.data_array);
        shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                  ((CStrList *)&CStack_24.data_array,iVar3);
        sprintf(SStack_95c.found_path,"sound\\%s");
        iVar2 = engine_dosio_c_findFile_FUN_00481760(&SStack_95c);
        if (iVar2 == 0) {
          shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                    ((CStrList *)&CStack_24.data_array,iVar3);
          sprintf(acStack_748,"Can't get file info for %s");
          in_stack_fffff0e0 = (char *)aCStack_f18;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(aCStack_f18,acStack_748);
        }
        else {
          splitpath
                    (SStack_95c.found_path,(char *)0x0,(char *)0x0,acStack_13c,(char *)0x0);
          makepath
                    (acStack_548,(char *)0x0,(char *)0x0,acStack_13c,"wav");
          iVar2 = engine_dosio_c_getFileSize_FUN_00481880("sound",acStack_548);
          if (-1 < iVar2) {
            sprintf(acStack_748,"%s found in both wav and mp3 format");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(aCStack_f18,acStack_748);
          }
          pCVar5 = aCStack_f18;
          in_stack_fffff0e0 = (char *)aCStack_f18;
          pCVar6 = aCStack_f18;
          makepath
                    (SStack_b70.found_path,(char *)0x0,"sound",acStack_13c,"sfx");
          iVar2 = engine_dosio_c_findFile_FUN_00481760(&SStack_b70);
          if (iVar2 == 0) {
            sprintf(acStack_748,"No sfx file for %s");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(aCStack_f18,acStack_748);
          }
          else if (SStack_b70.timestamp < SStack_95c.timestamp) {
            sprintf(acStack_748,"%s older than %s");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(aCStack_f18,acStack_748);
            in_stack_fffff0e0 = (char *)pCVar5;
          }
          else {
            pcVar1 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                               ((CStrList *)&CStack_24.data_array,iVar3);
            in_stack_fffff0e0 = (char *)0x5adadb;
            pcVar1 = sound_sndmain_cpp_testSoundFile_FUN_005ad3b0(pcVar1);
            if (pcVar1 != (char *)0x0) {
              shape_edittool_cpp_CStrList_add_FUN_004a2b80(aCStack_f18,pcVar1);
              in_stack_fffff0e0 = (char *)pCVar6;
            }
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)CStack_24.data_array);
    }
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
    shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)(auStack_4c + 8));
    shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
              ((CStrList *)(auStack_4c + 8),"sound","*.wav");
    shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
              (g_CEditorToolsPtr,"Testing WAV files...");
    ppcVar4 = (char **)0x0;
    if (0 < (int)auStack_4c._8_4_) {
      do {
        iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,1);
        if (iVar3 != 0) break;
        CStack_24.data_array = ppcVar4;
        shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                  (g_CEditorToolsPtr,(float)(int)ppcVar4,(float)(int)auStack_4c._0_4_);
        pcVar1 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                           ((CStrList *)auStack_4c,(int)ppcVar4);
        pcVar1 = sound_sndmain_cpp_testSoundFile_FUN_005ad3b0(pcVar1);
        if (pcVar1 != (char *)0x0) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff0d8,pcVar1);
        }
        ppcVar4 = (char **)((int)ppcVar4 + 1);
      } while ((int)ppcVar4 < (int)auStack_4c._0_4_);
    }
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
    sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
    (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
    if ((int)in_stack_fffff0e0 < 1) {
      shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                (g_CEditorToolsPtr,"No sound file problems found");
    }
    else {
      shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                ((CPickList *)&stack0xfffff0e0,"Possible sound file problems",-1,0);
    }
    shape_edittool_cpp_CStrList_dtor_FUN_004a2a40((CStrList *)(auStack_4c + 8),0);
    shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&CStack_24,0);
  }
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40((CStrList *)local_34,0);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80((CPickList *)&stack0xfffff0e0,0);
  return;
}
