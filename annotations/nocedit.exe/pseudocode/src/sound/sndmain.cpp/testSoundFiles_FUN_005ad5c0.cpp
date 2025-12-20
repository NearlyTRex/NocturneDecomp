// Name: sound_sndmain.cpp_testSoundFiles_FUN_005ad5c0
// Address: 005ad5c0
// Address Range: [[005ad5c0, 005adb9e]]
// Convention: __cdecl
// Signature: undefined sound_sndmain.cpp_testSoundFiles_FUN_005ad5c0()

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_testSoundFiles_FUN_005ad5c0(void)

{
  CStrList_remove *fname;
  char *pcVar1;
  int iVar2;
  char **string_data;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  CStrList_dtor *dir;
  char **in_stack_fffff0cc;
  CStrList *this_ptr;
  char *in_stack_fffff0f8;
  CStrList_vtable *in_stack_fffff0fc;
  char **in_stack_fffff100;
  CStrList_vtable *in_stack_fffff104;
  CStrList_vtable *pCVar5;
  char **in_stack_fffff108;
  CStrList_vtable *in_stack_fffff10c;
  char **in_stack_fffff110;
  char acStack_b5c [4];
  byte auStack_b58 [508];
  char acStack_95c [20];
  uint uStack_948;
  char acStack_748 [4];
  char acStack_744 [4];
  char acStack_740 [4];
  char acStack_73c [4];
  char acStack_738 [4];
  uint uStack_734;
  byte auStack_72c [488];
  char acStack_544 [4];
  char acStack_540 [232];
  char acStack_458 [8];
  char acStack_450 [256];
  char acStack_350 [8];
  char acStack_348 [240];
  byte auStack_258 [8];
  char acStack_250 [4];
  char acStack_24c [272];
  char acStack_13c [4];
  char acStack_138 [16];
  CStrList aCStack_128 [12];
  byte auStack_5c [12];
  CStrList_vtable *pCStack_50;
  CStrList CStack_48;
  byte auStack_38 [12];
  byte auStack_2c [8];
  char **ppcStack_24;
  int iStack_1c;
  
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff0e0);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Searching for orphaned sfx files");
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)auStack_2c);
  shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
            ((CStrList *)(auStack_2c + 4),"sound","*.sfx");
  iVar3 = 0;
  if (0 < (int)ppcStack_24) {
    do {
      fname = (CStrList_remove *)(*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,1);
      if (fname != (CStrList_remove *)0x0) break;
      dir = (CStrList_dtor *)auStack_258;
      pcVar4 = (char *)0x0;
      pcVar1 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&CStack_48,iVar3);
      crt_string_c_splitpath_FUN_005ff178
                (pcVar1,pcVar4,(char *)dir,(char *)fname,(char *)in_stack_fffff0cc);
      crt_file_c_makepath_FUN_005febfc
                (acStack_458,(char *)0x0,(char *)0x0,acStack_250,"mp3");
      in_stack_fffff0cc = (char **)0x0;
      crt_file_c_makepath_FUN_005febfc
                (acStack_350,(char *)0x0,(char *)0x0,acStack_24c,"wav");
      iVar2 = engine_dosio_c_getFileSize_FUN_00481880("sound",acStack_450);
      if ((iVar2 < 1) &&
         (iVar2 = engine_dosio_c_getFileSize_FUN_00481880("sound",acStack_348), iVar2 < 1))
      {
        shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)(auStack_38 + 8),iVar3);
        crt_stdio_c_sprintf_FUN_005fdbd0(acStack_748,"Orphaned sfx file %s");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff0ec,acStack_744);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)ppcStack_24);
  }
  sound_sndmain_cpp_enableSoundSystem_FUN_005aaef0();
  iVar3 = sound_sndmain_cpp_isSoundBusy_FUN_005ab540();
  if (iVar3 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't start sound output to test sounds");
  }
  else {
    this_ptr = (CStrList *)&stack0xfffffff4;
    pcVar1 = (char *)0x5ad6f0;
    shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(this_ptr);
    shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
              (&CStack_48,"sound","*.mp3");
    shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
              (g_CEditorToolsPtr,"Testing MP3 files...");
    iVar3 = 0;
    if (0 < (int)CStack_48.data_array) {
      do {
        iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,1);
        if (iVar2 != 0) break;
        iStack_1c = iVar3;
        shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                  (g_CEditorToolsPtr,(float)iVar3,(float)(int)auStack_2c._0_4_);
        shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)(auStack_2c + 4),iVar3);
        crt_stdio_c_sprintf_FUN_005fdbd0(auStack_b58 + 500,"sound\\%s");
        iVar2 = engine_dosio_c_findFile_FUN_00481760((SFoundFileInfo *)(auStack_b58 + 0x1f8));
        if (iVar2 == 0) {
          shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)&iStack_1c,iVar3);
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_744,"Can't get file info for %s");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff0f0,acStack_740);
        }
        else {
          crt_string_c_splitpath_FUN_005ff178
                    (acStack_95c,(char *)0x0,(char *)0x0,acStack_13c,(char *)0x0);
          crt_file_c_makepath_FUN_005febfc
                    (acStack_544,(char *)0x0,(char *)0x0,acStack_138,"wav");
          iVar2 = engine_dosio_c_getFileSize_FUN_00481880("sound",acStack_540);
          if (-1 < iVar2) {
            crt_stdio_c_sprintf_FUN_005fdbd0(acStack_73c,"%s found in both wav and mp3 format");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff0f8,acStack_738);
          }
          this_ptr = aCStack_128;
          pcVar1 = "sound";
          crt_file_c_makepath_FUN_005febfc
                    (acStack_b5c,(char *)0x0,"sound",(char *)this_ptr,"sfx");
          iVar2 = engine_dosio_c_findFile_FUN_00481760((SFoundFileInfo *)auStack_b58);
          if (iVar2 == 0) {
            in_stack_fffff0f8 = auStack_72c;
            this_ptr = (CStrList *)0x5adaaa;
            crt_stdio_c_sprintf_FUN_005fdbd0(in_stack_fffff0f8,"No sfx file for %s");
            in_stack_fffff100 = (char **)&stack0xfffff108;
            in_stack_fffff104 = (CStrList_vtable *)(auStack_72c + 4);
            in_stack_fffff0fc = (CStrList_vtable *)0x5adabf;
            shape_edittool_cpp_CStrList_add_FUN_004a2b80
                      ((CStrList *)&stack0xfffff108,(char *)in_stack_fffff104);
          }
          else if (uStack_948 < uStack_734) {
            in_stack_fffff0f8 = "%s older than %s";
            this_ptr = (CStrList *)auStack_72c;
            pcVar1 = (char *)0x5ada35;
            crt_stdio_c_sprintf_FUN_005fdbd0((char *)this_ptr,"%s older than %s");
            in_stack_fffff100 = (char **)&stack0xfffff108;
            in_stack_fffff104 = (CStrList_vtable *)(auStack_72c + 4);
            in_stack_fffff0fc = (CStrList_vtable *)0x5ada4a;
            shape_edittool_cpp_CStrList_add_FUN_004a2b80
                      ((CStrList *)&stack0xfffff108,(char *)in_stack_fffff104);
          }
          else {
            in_stack_fffff0f8 = (char *)0x5adad2;
            in_stack_fffff0fc = (CStrList_vtable *)in_ESP;
            in_stack_fffff104 =
                 (CStrList_vtable *)
                 shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                           ((CStrList *)&stack0x00000000,iVar3);
            in_stack_fffff100 = (char **)0x5adadb;
            string_data = (char **)sound_sndmain_cpp_testSoundFile_FUN_005ad3b0
                                             ((char *)in_stack_fffff104);
            pCVar5 = (CStrList_vtable *)&stack0xfffff0c4;
            if (string_data != (char **)0x0) {
              in_stack_fffff100 = (char **)0x5adaed;
              shape_edittool_cpp_CStrList_add_FUN_004a2b80
                        ((CStrList *)&stack0xfffff0c4,(char *)string_data);
              in_stack_fffff104 = pCVar5;
              in_stack_fffff108 = string_data;
            }
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)CStack_48.data_array);
    }
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
    shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)auStack_5c);
    shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
              ((CStrList *)(auStack_5c + 4),"sound","*.wav");
    shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
              (g_CEditorToolsPtr,"Testing WAV files...");
    iVar3 = 0;
    if (0 < (int)pCStack_50) {
      do {
        iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,1);
        if (iVar2 != 0) break;
        shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                  (g_CEditorToolsPtr,(float)iVar3,(float)(int)CStack_48.vtable);
        pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)auStack_38,iVar3);
        pcVar4 = sound_sndmain_cpp_testSoundFile_FUN_005ad3b0(pcVar4);
        if (pcVar4 != (char *)0x0) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff0d4,pcVar4);
          pcVar1 = pcVar4;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)pCStack_50);
    }
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
    sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
    (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
    if ((int)pcVar1 < 1) {
      shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                (g_CEditorToolsPtr,"No sound file problems found");
    }
    else {
      shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                ((CPickList *)&stack0xfffff0f0,"Possible sound file problems",-1,0);
    }
    shape_edittool_cpp_CStrList_dtor_FUN_004a2a40((CStrList *)(auStack_38 + 8),0,(uint)this_ptr);
    shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
              ((CStrList *)&stack0xfffffff4,0,(uint)in_stack_fffff0f8);
  }
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
            ((CStrList *)&stack0xffffffe8,0,(uint)in_stack_fffff0fc);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffff100,0,(uint)in_stack_fffff100,(uint)in_stack_fffff104,
             (uint)in_stack_fffff108,(uint)in_stack_fffff10c,(uint)in_stack_fffff110);
  return;
}
