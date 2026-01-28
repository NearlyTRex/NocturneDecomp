// Name: sound_sndmain.cpp_testSoundFiles_FUN_005ad5c0
// Address: 005ad5c0
// Address Range: [[005ad5c0, 005adb9e]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_testSoundFiles_FUN_005ad5c0(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_testSoundFiles_FUN_005ad5c0(void)

{
  CStrList_vtable *pCVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char **ppcVar5;
  char *drive;
  char *dir;
  char *in_stack_fffff0e0;
  char **ppcVar6;
  CStrList_vtable *in_stack_fffff0e4;
  char **in_stack_fffff0e8;
  CStrList_vtable *in_stack_fffff0ec;
  char **in_stack_fffff0f0;
  SFoundFileInfo SStack_b70;
  SFoundFileInfo SStack_95c;
  CStrList_vtable aCStack_748 [18];
  char acStack_548 [260];
  CStrList_vtable aCStack_444 [9];
  CStrList_vtable aCStack_340 [9];
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
  iVar4 = 0;
  if (0 < (int)local_34._0_4_) {
    do {
      pCVar1 = (CStrList_vtable *)(*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,1);
      if (pCVar1 != (CStrList_vtable *)0x0) break;
      ppcVar5 = apcStack_23c;
      dir = (char *)0x0;
      drive = (char *)0x0;
      pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                         ((CStrList *)(local_34 + 8),iVar4);
      crt_string_c_splitpath_FUN_005ff178(pcVar2,drive,dir,(char *)ppcVar5,(char *)pCVar1);
      crt_file_c_makepath_FUN_005febfc
                ((char *)aCStack_444,(char *)0x0,(char *)0x0,(char *)apcStack_23c,"mp3");
      crt_file_c_makepath_FUN_005febfc
                ((char *)aCStack_340,(char *)0x0,(char *)0x0,(char *)apcStack_23c,"wav");
      in_stack_fffff0e4 = aCStack_444;
      in_stack_fffff0e0 = "sound";
      iVar3 = engine_dosio_c_getFileSize_FUN_00481880("sound",(char *)in_stack_fffff0e4);
      if (iVar3 < 1) {
        in_stack_fffff0e4 = aCStack_340;
        in_stack_fffff0e0 = "sound";
        iVar3 = engine_dosio_c_getFileSize_FUN_00481880("sound",(char *)in_stack_fffff0e4);
        if (iVar3 < 1) {
          shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)(local_34 + 8),iVar4);
          crt_stdio_c_sprintf_FUN_005fdbd0((char *)aCStack_748,"Orphaned sfx file %s");
          in_stack_fffff0e0 = &stack0xfffff0e8;
          in_stack_fffff0e4 = aCStack_748;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    ((CStrList *)&stack0xfffff0e8,(char *)in_stack_fffff0e4);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)local_34._8_4_);
  }
  sound_sndmain_cpp_enableSoundSystem_FUN_005aaef0();
  iVar4 = sound_sndmain_cpp_isSoundBusy_FUN_005ab540();
  if (iVar4 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't start sound output to test sounds");
  }
  else {
    shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&CStack_24);
    shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
              (&CStack_24,"sound","*.mp3");
    shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
              (g_CEditorToolsPtr,"Testing MP3 files...");
    iVar4 = 0;
    if (0 < CStack_24.item_count) {
      do {
        iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,1);
        if (iVar3 != 0) break;
        shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                  (g_CEditorToolsPtr,(float)iVar4,(float)(int)CStack_24.data_array);
        shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                  ((CStrList *)&CStack_24.data_array,iVar4);
        crt_stdio_c_sprintf_FUN_005fdbd0(SStack_95c.found_path,"sound\\%s");
        iVar3 = engine_dosio_c_findFile_FUN_00481760(&SStack_95c);
        if (iVar3 == 0) {
          shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                    ((CStrList *)&CStack_24.data_array,iVar4);
          crt_stdio_c_sprintf_FUN_005fdbd0((char *)aCStack_748,"Can't get file info for %s");
          in_stack_fffff0e0 = &stack0xfffff0e8;
          in_stack_fffff0e4 = aCStack_748;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    ((CStrList *)&stack0xfffff0e8,(char *)in_stack_fffff0e4);
        }
        else {
          crt_string_c_splitpath_FUN_005ff178
                    (SStack_95c.found_path,(char *)0x0,(char *)0x0,acStack_13c,(char *)0x0);
          crt_file_c_makepath_FUN_005febfc
                    (acStack_548,(char *)0x0,(char *)0x0,acStack_13c,"wav");
          iVar3 = engine_dosio_c_getFileSize_FUN_00481880("sound",acStack_548);
          if (-1 < iVar3) {
            crt_stdio_c_sprintf_FUN_005fdbd0
                      ((char *)aCStack_748,"%s found in both wav and mp3 format");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80
                      ((CStrList *)&stack0xfffff0e8,(char *)aCStack_748);
          }
          ppcVar5 = (char **)&stack0xfffff0e8;
          in_stack_fffff0e0 = &stack0xfffff0e8;
          ppcVar6 = (char **)&stack0xfffff0e8;
          crt_file_c_makepath_FUN_005febfc
                    (SStack_b70.found_path,(char *)0x0,"sound",acStack_13c,"sfx");
          iVar3 = engine_dosio_c_findFile_FUN_00481760(&SStack_b70);
          if (iVar3 == 0) {
            crt_stdio_c_sprintf_FUN_005fdbd0((char *)aCStack_748,"No sfx file for %s");
            in_stack_fffff0e4 = aCStack_748;
            shape_edittool_cpp_CStrList_add_FUN_004a2b80
                      ((CStrList *)&stack0xfffff0e8,(char *)in_stack_fffff0e4);
          }
          else if (SStack_b70.timestamp < SStack_95c.timestamp) {
            crt_stdio_c_sprintf_FUN_005fdbd0((char *)aCStack_748,"%s older than %s");
            in_stack_fffff0e4 = aCStack_748;
            shape_edittool_cpp_CStrList_add_FUN_004a2b80
                      ((CStrList *)&stack0xfffff0e8,(char *)in_stack_fffff0e4);
            in_stack_fffff0e0 = (char *)ppcVar5;
          }
          else {
            in_stack_fffff0e4 =
                 (CStrList_vtable *)
                 shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                           ((CStrList *)&CStack_24.data_array,iVar4);
            in_stack_fffff0e0 = (char *)0x5adadb;
            pCVar1 = (CStrList_vtable *)
                     sound_sndmain_cpp_testSoundFile_FUN_005ad3b0((char *)in_stack_fffff0e4);
            if (pCVar1 != (CStrList_vtable *)0x0) {
              shape_edittool_cpp_CStrList_add_FUN_004a2b80
                        ((CStrList *)&stack0xfffff0e8,(char *)pCVar1);
              in_stack_fffff0e0 = (char *)ppcVar6;
              in_stack_fffff0e4 = pCVar1;
            }
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)CStack_24.data_array);
    }
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
    shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)(auStack_4c + 8));
    shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
              ((CStrList *)(auStack_4c + 8),"sound","*.wav");
    shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
              (g_CEditorToolsPtr,"Testing WAV files...");
    ppcVar5 = (char **)0x0;
    if (0 < (int)auStack_4c._8_4_) {
      do {
        iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,1);
        if (iVar4 != 0) break;
        CStack_24.data_array = ppcVar5;
        shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                  (g_CEditorToolsPtr,(float)(int)ppcVar5,(float)(int)auStack_4c._0_4_);
        pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                           ((CStrList *)auStack_4c,(int)ppcVar5);
        pcVar2 = sound_sndmain_cpp_testSoundFile_FUN_005ad3b0(pcVar2);
        if (pcVar2 != (char *)0x0) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff0d8,pcVar2);
        }
        ppcVar5 = (char **)((int)ppcVar5 + 1);
      } while ((int)ppcVar5 < (int)auStack_4c._0_4_);
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
    shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
              ((CStrList *)(auStack_4c + 8),0,(uint)in_stack_fffff0e0);
    shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&CStack_24,0,(uint)in_stack_fffff0e0);
  }
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40((CStrList *)local_34,0,(uint)in_stack_fffff0e0);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffff0e0,0,(uint)in_stack_fffff0e0,(uint)in_stack_fffff0e4,
             (uint)in_stack_fffff0e8,(uint)in_stack_fffff0ec,(uint)in_stack_fffff0f0);
  return;
}
