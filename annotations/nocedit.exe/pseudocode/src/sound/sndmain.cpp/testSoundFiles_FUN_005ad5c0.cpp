// Name: sound_sndmain.cpp_testSoundFiles_FUN_005ad5c0
// Address: 005ad5c0
// Address Range: [[005ad5c0, 005adb9e]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_testSoundFiles_FUN_005ad5c0(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_testSoundFiles_FUN_005ad5c0(void)

{
  char *pcVar1;
  char *path;
  int iVar2;
  int iVar1;
  int iVar4;
  char *pcVar5;
  int iVar3;
  CPickList CStack_f20;
  SFoundFileInfo SStack_b78;
  SFoundFileInfo SStack_964;
  char acStack_750 [512];
  char acStack_550 [260];
  char acStack_44c [260];
  char acStack_348 [260];
  char acStack_244 [256];
  char acStack_144 [256];
  CStrList CStack_44;
  CStrList local_34;
  CStrList CStack_24;
  int iStack_14;
  char *fname;
  char *dir;
  char *drive;
  
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&CStack_f20);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Searching for orphaned sfx files");
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&local_34);
  shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
            (&local_34,"sound","*.sfx");
  iVar3 = 0;
  if (0 < local_34.item_count) {
    do {
      pcVar1 = (char *)(*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_ESCAPE);
      if (pcVar1 != (char *)0x0) break;
      fname = acStack_244;
      dir = (char *)0x0;
      drive = (char *)0x0;
      path = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_34,iVar3);
      splitpath(path,drive,dir,fname,pcVar1);
      makepath
                (acStack_44c,(char *)0x0,(char *)0x0,acStack_244,"mp3");
      makepath
                (acStack_348,(char *)0x0,(char *)0x0,acStack_244,"wav");
      iVar2 = engine_dosio_c_getFileSize_FUN_00481880("sound",acStack_44c);
      if ((iVar2 < 1) &&
         (iVar1 = engine_dosio_c_getFileSize_FUN_00481880("sound",acStack_348), iVar1 < 1))
      {
        pcVar5 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_34,iVar3);
        _sprintf(acStack_750,"Orphaned sfx file %s",pcVar5);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_f20.base,acStack_750);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_34.item_count);
  }
  sound_sndmain_cpp_enableSoundSystem_FUN_005aaef0();
  iVar1 = sound_sndmain_cpp_isSoundBusy_FUN_005ab540();
  if (iVar1 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't start sound output to test sounds");
  }
  else {
    shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&CStack_24);
    shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
              (&CStack_24,"sound","*.mp3");
    shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
              (g_CEditorToolsPtr,"Testing MP3 files...");
    iVar1 = 0;
    if (0 < CStack_24.item_count) {
      do {
        iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_ESCAPE);
        if (iVar4 != 0) break;
        shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                  (g_CEditorToolsPtr,(float)iVar1,(float)CStack_24.item_count);
        pcVar5 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&CStack_24,iVar1);
        _sprintf(SStack_964.found_path,"sound\\%s",pcVar5);
        iVar4 = engine_dosio_c_findFile_FUN_00481760(&SStack_964);
        if (iVar4 == 0) {
          pcVar5 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&CStack_24,iVar1);
          _sprintf(acStack_750,"Can't get file info for %s",pcVar5);
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_f20.base,acStack_750);
        }
        else {
          splitpath
                    (SStack_964.found_path,(char *)0x0,(char *)0x0,acStack_144,(char *)0x0);
          makepath
                    (acStack_550,(char *)0x0,(char *)0x0,acStack_144,"wav");
          iVar4 = engine_dosio_c_getFileSize_FUN_00481880("sound",acStack_550);
          if (-1 < iVar4) {
            _sprintf
                      (acStack_750,"%s found in both wav and mp3 format",acStack_144);
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_f20.base,acStack_750);
          }
          makepath
                    (SStack_b78.found_path,(char *)0x0,"sound",acStack_144,"sfx");
          iVar4 = engine_dosio_c_findFile_FUN_00481760(&SStack_b78);
          if (iVar4 == 0) {
            _sprintf(acStack_750,"No sfx file for %s",&SStack_964);
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_f20.base,acStack_750);
          }
          else if (SStack_b78.timestamp < SStack_964.timestamp) {
            _sprintf
                      (acStack_750,"%s older than %s",&SStack_b78,&SStack_964);
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_f20.base,acStack_750);
          }
          else {
            pcVar5 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&CStack_24,iVar1);
            pcVar5 = sound_sndmain_cpp_testSoundFile_FUN_005ad3b0(pcVar5);
            if (pcVar5 != (char *)0x0) {
              shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_f20.base,pcVar5);
            }
          }
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < CStack_24.item_count);
    }
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
    shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&CStack_44);
    shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
              (&CStack_44,"sound","*.wav");
    shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
              (g_CEditorToolsPtr,"Testing WAV files...");
    iVar1 = 0;
    if (0 < CStack_44.item_count) {
      do {
        iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_ESCAPE);
        if (iVar4 != 0) break;
        shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                  (g_CEditorToolsPtr,(float)iVar1,(float)CStack_44.item_count);
        pcVar5 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&CStack_44,iVar1);
        pcVar5 = sound_sndmain_cpp_testSoundFile_FUN_005ad3b0(pcVar5);
        if (pcVar5 != (char *)0x0) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_f20.base,pcVar5);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < CStack_44.item_count);
    }
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
    sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
    (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
    if (CStack_f20.base.item_count < 1) {
      shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                (g_CEditorToolsPtr,"No sound file problems found");
    }
    else {
      shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                (&CStack_f20,"Possible sound file problems",-1,0);
    }
    shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&CStack_44,0);
    shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&CStack_24,0);
  }
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_34,0);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&CStack_f20,0);
  return;
}
