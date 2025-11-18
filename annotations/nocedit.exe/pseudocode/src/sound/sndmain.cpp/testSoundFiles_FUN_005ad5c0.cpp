// Name: sound_sndmain.cpp_testSoundFiles_FUN_005ad5c0
// Address: 005ad5c0
// Address Range: [[005ad5c0, 005adb9e]]
// Convention: __cdecl
// Signature: undefined sound_sndmain.cpp_testSoundFiles_FUN_005ad5c0()
// Cross-references:
//   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 (004be270) at 004be47c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Searching_for_orphaned_s_00651292
//   TerminatedCString s_sfx_006512b3
//   TerminatedCString s_sound_006512b9
//   TerminatedCString s_mp3_006512bf
//   TerminatedCString s_wav_006512c3
//   TerminatedCString s_sound_006512c7
//   TerminatedCString s_sound_006512cd
//   TerminatedCString s_Orphaned_sfx_file_s_006512d3
//   TerminatedCString s_Can_t_start_sound_output_006512e8
//   TerminatedCString s_mp3_00651310
//   TerminatedCString s_sound_00651316
//   TerminatedCString s_Testing_MP3_files_0065131c
//   TerminatedCString s_sound_s_00651331
//   TerminatedCString s_Can_t_get_file_info_for__0065133a
//   TerminatedCString s_wav_00651355
//   TerminatedCString s_sound_00651359
//   TerminatedCString s_s_found_in_both_wav_and__0065135f
//   TerminatedCString s_sfx_00651383
//   TerminatedCString s_sound_00651387
//   TerminatedCString s_No_sfx_file_for_s_0065138d
//   TerminatedCString s_s_older_than_s_006513a0
//   TerminatedCString s_wav_006513b1
//   TerminatedCString s_sound_006513b7
//   TerminatedCString s_Testing_WAV_files_006513bd
//   TerminatedCString s_No_sound_file_problems_f_006513d2
//   TerminatedCString s_Possible_sound_file_prob_006513ef
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CEditorTools g_CEditorToolsPtr
//   void* g_CKeysPtr
// Function calls:
//   crt_file.c_makepath_FUN_005febfc
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_splitpath_FUN_005ff178
//   engine_dosio.c_findFile_FUN_00481760
//   engine_dosio.c_getFileSize_FUN_00481880
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
//   sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0
//   sound_sndmain.cpp_isSoundBusy_FUN_005ab540
//   sound_sndmain.cpp_resetSoundDevice_FUN_005ab130
//   sound_sndmain.cpp_testSoundFile_FUN_005ad3b0

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
  undefined1 auStack_b58 [508];
  char acStack_95c [20];
  uint uStack_948;
  char acStack_748 [4];
  char acStack_744 [4];
  char acStack_740 [4];
  char acStack_73c [4];
  char acStack_738 [4];
  uint uStack_734;
  undefined1 auStack_72c [488];
  char acStack_544 [4];
  char acStack_540 [232];
  char acStack_458 [8];
  char acStack_450 [256];
  char acStack_350 [8];
  char acStack_348 [240];
  undefined1 auStack_258 [8];
  char acStack_250 [4];
  char acStack_24c [272];
  char acStack_13c [4];
  char acStack_138 [16];
  CStrList aCStack_128 [12];
  undefined1 auStack_5c [12];
  CStrList_vtable *pCStack_50;
  CStrList CStack_48;
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [8];
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
      fname = (CStrList_remove *)(*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,1);
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
        iVar2 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,1);
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
        iVar2 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,1);
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
    (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,1);
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


// Assembly code:
// 005ad5c0: PUSH EBX
//   Label: sound_sndmain.cpp_testSoundFiles_FUN_005ad5c0
// 005ad5c1: PUSH ESI
// 005ad5c2: PUSH EDI
// 005ad5c3: PUSH EBP
// 005ad5c4: SUB ESP,0xf10
// 005ad5ca: MOV EAX,ESP
// 005ad5cc: PUSH EAX
// 005ad5cd: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 005ad5d2: ADD ESP,0x4
// 005ad5d5: PUSH 0x651292
//   XREF to: 00651292 (DATA)
// 005ad5da: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 005ad5e0: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 005ad5e1: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 005ad5e6: ADD ESP,0x8
// 005ad5e9: LEA EAX,[ESP + 0xeec]
//   XREF to: Stack[-0x34] (DATA)
// 005ad5f0: PUSH EAX
// 005ad5f1: CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   XREF to: 004a2a20 (UNCONDITIONAL_CALL)
// 005ad5f6: ADD ESP,0x4
// 005ad5f9: PUSH 0x6512b3
//   XREF to: 006512b3 (DATA)
// 005ad5fe: PUSH 0x6512b9
//   XREF to: 006512b9 (DATA)
// 005ad603: LEA EAX,[ESP + 0xef4]
//   XREF to: Stack[-0x34] (DATA)
// 005ad60a: PUSH EAX
// 005ad60b: CALL shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
//   XREF to: 004a37b0 (UNCONDITIONAL_CALL)
// 005ad610: ADD ESP,0xc
// 005ad613: MOV ECX,dword ptr [ESP + 0xeec]
//   XREF to: Stack[-0x34] (READ)
// 005ad61a: XOR EBX,EBX
// 005ad61c: TEST ECX,ECX
// 005ad61e: JLE 0x005ad6d1
//   XREF to: 005ad6d1 (CONDITIONAL_JUMP)
// 005ad624: PUSH 0x1
//   Label: LAB_005ad624
// 005ad626: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005ad62b: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005ad62c: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005ad62e: CALL dword ptr [EDX]
// 005ad630: ADD ESP,0x8
// 005ad633: TEST EAX,EAX
// 005ad635: JNZ 0x005ad6d1
//   XREF to: 005ad6d1 (CONDITIONAL_JUMP)
// 005ad63b: PUSH EAX
// 005ad63c: LEA EAX,[ESP + 0xce0]
// 005ad643: PUSH EAX
// 005ad644: PUSH 0x0
// 005ad646: PUSH 0x0
// 005ad648: PUSH EBX
// 005ad649: LEA EAX,[ESP + 0xf00]
// 005ad650: PUSH EAX
// 005ad651: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 005ad656: ADD ESP,0x8
// 005ad659: PUSH EAX
// 005ad65a: CALL crt_string.c_splitpath_FUN_005ff178
//   XREF to: 005ff178 (UNCONDITIONAL_CALL)
// 005ad65f: ADD ESP,0x14
// 005ad662: PUSH 0x6512bf
//   XREF to: 006512bf (DATA)
// 005ad667: LEA EAX,[ESP + 0xce0]
// 005ad66e: PUSH EAX
// 005ad66f: PUSH 0x0
// 005ad671: PUSH 0x0
// 005ad673: LEA EAX,[ESP + 0xae4]
// 005ad67a: PUSH EAX
// 005ad67b: CALL crt_file.c_makepath_FUN_005febfc
//   XREF to: 005febfc (UNCONDITIONAL_CALL)
// 005ad680: ADD ESP,0x14
// 005ad683: PUSH 0x6512c3
//   XREF to: 006512c3 (DATA)
// 005ad688: LEA EAX,[ESP + 0xce0]
// 005ad68f: PUSH EAX
// 005ad690: PUSH 0x0
// 005ad692: PUSH 0x0
// 005ad694: LEA EAX,[ESP + 0xbe8]
// 005ad69b: PUSH EAX
// 005ad69c: CALL crt_file.c_makepath_FUN_005febfc
//   XREF to: 005febfc (UNCONDITIONAL_CALL)
// 005ad6a1: ADD ESP,0x14
// 005ad6a4: LEA EAX,[ESP + 0xad4]
// 005ad6ab: PUSH EAX
// 005ad6ac: PUSH 0x6512c7
//   XREF to: 006512c7 (DATA)
// 005ad6b1: CALL engine_dosio.c_getFileSize_FUN_00481880
//   XREF to: 00481880 (UNCONDITIONAL_CALL)
// 005ad6b6: ADD ESP,0x8
// 005ad6b9: TEST EAX,EAX
// 005ad6bb: JLE 0x005ad848
//   XREF to: 005ad848 (CONDITIONAL_JUMP)
// 005ad6c1: MOV ESI,dword ptr [ESP + 0xeec]
//   Label: LAB_005ad6c1
// 005ad6c8: INC EBX
// 005ad6c9: CMP EBX,ESI
// 005ad6cb: JL 0x005ad624
//   XREF to: 005ad624 (CONDITIONAL_JUMP)
// 005ad6d1: CALL sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0
//   Label: LAB_005ad6d1
//   XREF to: 005aaef0 (UNCONDITIONAL_CALL)
// 005ad6d6: CALL sound_sndmain.cpp_isSoundBusy_FUN_005ab540
//   XREF to: 005ab540 (UNCONDITIONAL_CALL)
// 005ad6db: TEST EAX,EAX
// 005ad6dd: JZ 0x005ad8a6
//   XREF to: 005ad8a6 (CONDITIONAL_JUMP)
// 005ad6e3: LEA EAX,[ESP + 0xefc]
// 005ad6ea: PUSH EAX
// 005ad6eb: CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   XREF to: 004a2a20 (UNCONDITIONAL_CALL)
// 005ad6f0: ADD ESP,0x4
// 005ad6f3: PUSH 0x651310
//   XREF to: 00651310 (DATA)
// 005ad6f8: PUSH 0x651316
//   XREF to: 00651316 (DATA)
// 005ad6fd: LEA EAX,[ESP + 0xf04]
// 005ad704: PUSH EAX
// 005ad705: CALL shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
//   XREF to: 004a37b0 (UNCONDITIONAL_CALL)
// 005ad70a: ADD ESP,0xc
// 005ad70d: PUSH 0x65131c
//   XREF to: 0065131c (DATA)
// 005ad712: MOV EBP,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 005ad718: PUSH EBP
//   XREF to: 02cf1cd4 (DATA)
// 005ad719: CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   XREF to: 004a0430 (UNCONDITIONAL_CALL)
// 005ad71e: ADD ESP,0x8
// 005ad721: MOV EAX,dword ptr [ESP + 0xefc]
// 005ad728: XOR EBX,EBX
// 005ad72a: TEST EAX,EAX
// 005ad72c: JLE 0x005ad745
//   XREF to: 005ad745 (CONDITIONAL_JUMP)
// 005ad72e: PUSH 0x1
//   Label: LAB_005ad72e
// 005ad730: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005ad735: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005ad736: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005ad738: CALL dword ptr [EDX]
// 005ad73a: ADD ESP,0x8
// 005ad73d: TEST EAX,EAX
// 005ad73f: JZ 0x005ad8bc
//   XREF to: 005ad8bc (CONDITIONAL_JUMP)
// 005ad745: MOV EDI,dword ptr [0x00678a60]
//   Label: LAB_005ad745
//   XREF to: 00678a60 (READ)
// 005ad74b: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 005ad74c: CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
// 005ad751: ADD ESP,0x4
// 005ad754: LEA EAX,[ESP + 0xedc]
// 005ad75b: PUSH EAX
// 005ad75c: CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   XREF to: 004a2a20 (UNCONDITIONAL_CALL)
// 005ad761: ADD ESP,0x4
// 005ad764: PUSH 0x6513b1
//   XREF to: 006513b1 (DATA)
// 005ad769: PUSH 0x6513b7
//   XREF to: 006513b7 (DATA)
// 005ad76e: LEA EAX,[ESP + 0xee4]
// 005ad775: PUSH EAX
// 005ad776: CALL shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
//   XREF to: 004a37b0 (UNCONDITIONAL_CALL)
// 005ad77b: ADD ESP,0xc
// 005ad77e: PUSH 0x6513bd
//   XREF to: 006513bd (DATA)
// 005ad783: MOV EBP,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 005ad789: PUSH EBP
//   XREF to: 02cf1cd4 (DATA)
// 005ad78a: CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   XREF to: 004a0430 (UNCONDITIONAL_CALL)
// 005ad78f: ADD ESP,0x8
// 005ad792: MOV EAX,dword ptr [ESP + 0xedc]
// 005ad799: XOR EBX,EBX
// 005ad79b: TEST EAX,EAX
// 005ad79d: JLE 0x005ad7b6
//   XREF to: 005ad7b6 (CONDITIONAL_JUMP)
// 005ad79f: PUSH 0x1
//   Label: LAB_005ad79f
// 005ad7a1: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005ad7a6: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005ad7a7: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005ad7a9: CALL dword ptr [EDX]
// 005ad7ab: ADD ESP,0x8
// 005ad7ae: TEST EAX,EAX
// 005ad7b0: JZ 0x005adb05
//   XREF to: 005adb05 (CONDITIONAL_JUMP)
// 005ad7b6: MOV EBX,dword ptr [0x00678a60]
//   Label: LAB_005ad7b6
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 005ad7bc: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 005ad7bd: CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
// 005ad7c2: ADD ESP,0x4
// 005ad7c5: CALL sound_sndmain.cpp_resetSoundDevice_FUN_005ab130
//   XREF to: 005ab130 (UNCONDITIONAL_CALL)
// 005ad7ca: PUSH 0x1
// 005ad7cc: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005ad7d1: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005ad7d2: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005ad7d4: CALL dword ptr [EDX + 0x4]
// 005ad7d7: ADD ESP,0x8
// 005ad7da: CMP dword ptr [ESP],0x1
// 005ad7de: JGE 0x005adb84
//   XREF to: 005adb84 (CONDITIONAL_JUMP)
// 005ad7e4: PUSH 0x6513d2
//   XREF to: 006513d2 (DATA)
// 005ad7e9: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 005ad7ef: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 005ad7f0: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 005ad7f5: ADD ESP,0x8
// 005ad7f8: PUSH 0x0
//   Label: LAB_005ad7f8
// 005ad7fa: LEA EAX,[ESP + 0xee0]
// 005ad801: PUSH EAX
// 005ad802: CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
// 005ad807: ADD ESP,0x8
// 005ad80a: PUSH 0x0
// 005ad80c: LEA EAX,[ESP + 0xf00]
// 005ad813: PUSH EAX
// 005ad814: CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
// 005ad819: ADD ESP,0x8
//   Label: LAB_005ad819
// 005ad81c: PUSH 0x0
// 005ad81e: LEA EAX,[ESP + 0xef0]
// 005ad825: PUSH EAX
// 005ad826: CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
// 005ad82b: ADD ESP,0x8
// 005ad82e: PUSH 0x0
// 005ad830: LEA EAX,[ESP + 0x4]
// 005ad834: PUSH EAX
// 005ad835: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 005ad83a: ADD ESP,0x8
// 005ad83d: ADD ESP,0xf10
// 005ad843: POP EBP
// 005ad844: POP EDI
// 005ad845: POP ESI
// 005ad846: POP EBX
// 005ad847: RET
// 005ad848: LEA EAX,[ESP + 0xbd8]
//   Label: LAB_005ad848
// 005ad84f: PUSH EAX
// 005ad850: PUSH 0x6512cd
//   XREF to: 006512cd (DATA)
// 005ad855: CALL engine_dosio.c_getFileSize_FUN_00481880
//   XREF to: 00481880 (UNCONDITIONAL_CALL)
// 005ad85a: ADD ESP,0x8
// 005ad85d: TEST EAX,EAX
// 005ad85f: JG 0x005ad6c1
//   XREF to: 005ad6c1 (CONDITIONAL_JUMP)
// 005ad865: PUSH EBX
// 005ad866: LEA EAX,[ESP + 0xef0]
// 005ad86d: PUSH EAX
// 005ad86e: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 005ad873: ADD ESP,0x8
// 005ad876: PUSH EAX
// 005ad877: PUSH 0x6512d3
//   XREF to: 006512d3 (DATA)
// 005ad87c: LEA EAX,[ESP + 0x7d8]
// 005ad883: PUSH EAX
// 005ad884: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005ad889: ADD ESP,0xc
// 005ad88c: LEA EAX,[ESP + 0x7d0]
// 005ad893: PUSH EAX
// 005ad894: LEA EAX,[ESP + 0x4]
// 005ad898: PUSH EAX
// 005ad899: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 005ad89e: ADD ESP,0x8
// 005ad8a1: JMP 0x005ad6c1
//   XREF to: 005ad6c1 (UNCONDITIONAL_JUMP)
// 005ad8a6: PUSH 0x6512e8
//   Label: LAB_005ad8a6
//   XREF to: 006512e8 (DATA)
// 005ad8ab: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 005ad8b1: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 005ad8b2: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 005ad8b7: JMP 0x005ad819
//   XREF to: 005ad819 (UNCONDITIONAL_JUMP)
// 005ad8bc: MOV EAX,dword ptr [ESP + 0xefc]
//   Label: LAB_005ad8bc
// 005ad8c3: MOV dword ptr [ESP + 0xf0c],EAX
// 005ad8ca: FILD dword ptr [ESP + 0xf0c]
// 005ad8d1: SUB ESP,0x4
// 005ad8d4: MOV dword ptr [ESP + 0xf10],EBX
// 005ad8db: FSTP float ptr [ESP]
// 005ad8de: FILD dword ptr [ESP + 0xf10]
// 005ad8e5: SUB ESP,0x4
// 005ad8e8: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 005ad8ee: FSTP float ptr [ESP]
// 005ad8f1: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 005ad8f2: CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
//   XREF to: 004a0530 (UNCONDITIONAL_CALL)
// 005ad8f7: ADD ESP,0xc
// 005ad8fa: PUSH EBX
// 005ad8fb: LEA EAX,[ESP + 0xf00]
// 005ad902: PUSH EAX
// 005ad903: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 005ad908: ADD ESP,0x8
// 005ad90b: PUSH EAX
// 005ad90c: PUSH 0x651331
//   XREF to: 00651331 (DATA)
// 005ad911: LEA EAX,[ESP + 0x5c4]
// 005ad918: PUSH EAX
// 005ad919: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005ad91e: ADD ESP,0xc
// 005ad921: LEA EAX,[ESP + 0x5bc]
// 005ad928: PUSH EAX
// 005ad929: CALL engine_dosio.c_findFile_FUN_00481760
//   XREF to: 00481760 (UNCONDITIONAL_CALL)
// 005ad92e: ADD ESP,0x4
// 005ad931: TEST EAX,EAX
// 005ad933: JZ 0x005ada52
//   XREF to: 005ada52 (CONDITIONAL_JUMP)
// 005ad939: PUSH 0x0
// 005ad93b: LEA EAX,[ESP + 0xde0]
// 005ad942: PUSH EAX
// 005ad943: PUSH 0x0
// 005ad945: PUSH 0x0
// 005ad947: LEA EAX,[ESP + 0x5cc]
// 005ad94e: PUSH EAX
// 005ad94f: CALL crt_string.c_splitpath_FUN_005ff178
//   XREF to: 005ff178 (UNCONDITIONAL_CALL)
// 005ad954: ADD ESP,0x14
// 005ad957: PUSH 0x651355
//   XREF to: 00651355 (DATA)
// 005ad95c: LEA EAX,[ESP + 0xde0]
// 005ad963: PUSH EAX
// 005ad964: PUSH 0x0
// 005ad966: PUSH 0x0
// 005ad968: LEA EAX,[ESP + 0x9e0]
// 005ad96f: PUSH EAX
// 005ad970: CALL crt_file.c_makepath_FUN_005febfc
//   XREF to: 005febfc (UNCONDITIONAL_CALL)
// 005ad975: ADD ESP,0x14
// 005ad978: LEA EAX,[ESP + 0x9d0]
// 005ad97f: PUSH EAX
// 005ad980: PUSH 0x651359
//   XREF to: 00651359 (DATA)
// 005ad985: CALL engine_dosio.c_getFileSize_FUN_00481880
//   XREF to: 00481880 (UNCONDITIONAL_CALL)
// 005ad98a: ADD ESP,0x8
// 005ad98d: TEST EAX,EAX
// 005ad98f: JL 0x005ad9c3
//   XREF to: 005ad9c3 (CONDITIONAL_JUMP)
// 005ad991: LEA EAX,[ESP + 0xddc]
// 005ad998: PUSH EAX
// 005ad999: PUSH 0x65135f
//   XREF to: 0065135f (DATA)
// 005ad99e: LEA EAX,[ESP + 0x7d8]
// 005ad9a5: PUSH EAX
// 005ad9a6: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005ad9ab: ADD ESP,0xc
// 005ad9ae: LEA EAX,[ESP + 0x7d0]
// 005ad9b5: PUSH EAX
// 005ad9b6: LEA EAX,[ESP + 0x4]
// 005ad9ba: PUSH EAX
// 005ad9bb: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 005ad9c0: ADD ESP,0x8
// 005ad9c3: PUSH 0x651383
//   Label: LAB_005ad9c3
//   XREF to: 00651383 (DATA)
// 005ad9c8: LEA EAX,[ESP + 0xde0]
// 005ad9cf: PUSH EAX
// 005ad9d0: PUSH 0x651387
//   XREF to: 00651387 (DATA)
// 005ad9d5: PUSH 0x0
// 005ad9d7: LEA EAX,[ESP + 0x3b8]
// 005ad9de: PUSH EAX
// 005ad9df: CALL crt_file.c_makepath_FUN_005febfc
//   XREF to: 005febfc (UNCONDITIONAL_CALL)
// 005ad9e4: ADD ESP,0x14
// 005ad9e7: LEA EAX,[ESP + 0x3a8]
// 005ad9ee: PUSH EAX
// 005ad9ef: CALL engine_dosio.c_findFile_FUN_00481760
//   XREF to: 00481760 (UNCONDITIONAL_CALL)
// 005ad9f4: ADD ESP,0x4
// 005ad9f7: TEST EAX,EAX
// 005ad9f9: JZ 0x005ada90
//   XREF to: 005ada90 (CONDITIONAL_JUMP)
// 005ad9ff: MOV EAX,dword ptr [ESP + 0x5b4]
// 005ada06: CMP EAX,dword ptr [ESP + 0x7c8]
// 005ada0d: JNC 0x005adac4
//   XREF to: 005adac4 (CONDITIONAL_JUMP)
// 005ada13: LEA EAX,[ESP + 0x5bc]
// 005ada1a: PUSH EAX
// 005ada1b: LEA EAX,[ESP + 0x3ac]
// 005ada22: PUSH EAX
// 005ada23: PUSH 0x6513a0
//   XREF to: 006513a0 (DATA)
// 005ada28: LEA EAX,[ESP + 0x7dc]
// 005ada2f: PUSH EAX
// 005ada30: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005ada35: ADD ESP,0x10
// 005ada38: LEA EAX,[ESP + 0x7d0]
// 005ada3f: PUSH EAX
// 005ada40: LEA EAX,[ESP + 0x4]
// 005ada44: PUSH EAX
// 005ada45: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 005ada4a: ADD ESP,0x8
// 005ada4d: JMP 0x005adaf0
//   XREF to: 005adaf0 (UNCONDITIONAL_JUMP)
// 005ada52: PUSH EBX
//   Label: LAB_005ada52
// 005ada53: LEA EAX,[ESP + 0xf00]
// 005ada5a: PUSH EAX
// 005ada5b: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 005ada60: ADD ESP,0x8
// 005ada63: PUSH EAX
// 005ada64: PUSH 0x65133a
//   XREF to: 0065133a (DATA)
// 005ada69: LEA EAX,[ESP + 0x7d8]
// 005ada70: PUSH EAX
// 005ada71: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005ada76: ADD ESP,0xc
// 005ada79: LEA EAX,[ESP + 0x7d0]
// 005ada80: PUSH EAX
// 005ada81: LEA EAX,[ESP + 0x4]
// 005ada85: PUSH EAX
// 005ada86: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 005ada8b: ADD ESP,0x8
// 005ada8e: JMP 0x005adaf0
//   XREF to: 005adaf0 (UNCONDITIONAL_JUMP)
// 005ada90: LEA EAX,[ESP + 0x5bc]
//   Label: LAB_005ada90
// 005ada97: PUSH EAX
// 005ada98: PUSH 0x65138d
//   XREF to: 0065138d (DATA)
// 005ada9d: LEA EAX,[ESP + 0x7d8]
// 005adaa4: PUSH EAX
// 005adaa5: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005adaaa: ADD ESP,0xc
// 005adaad: LEA EAX,[ESP + 0x7d0]
// 005adab4: PUSH EAX
// 005adab5: LEA EAX,[ESP + 0x4]
// 005adab9: PUSH EAX
// 005adaba: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 005adabf: ADD ESP,0x8
// 005adac2: JMP 0x005adaf0
//   XREF to: 005adaf0 (UNCONDITIONAL_JUMP)
// 005adac4: PUSH EBX
//   Label: LAB_005adac4
// 005adac5: LEA EAX,[ESP + 0xf00]
// 005adacc: PUSH EAX
// 005adacd: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 005adad2: ADD ESP,0x8
// 005adad5: PUSH EAX
// 005adad6: CALL sound_sndmain.cpp_testSoundFile_FUN_005ad3b0
//   XREF to: 005ad3b0 (UNCONDITIONAL_CALL)
// 005adadb: ADD ESP,0x4
// 005adade: TEST EAX,EAX
// 005adae0: JZ 0x005adaf0
//   XREF to: 005adaf0 (CONDITIONAL_JUMP)
// 005adae2: PUSH EAX
// 005adae3: LEA EAX,[ESP + 0x4]
// 005adae7: PUSH EAX
// 005adae8: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 005adaed: ADD ESP,0x8
// 005adaf0: MOV EDX,dword ptr [ESP + 0xefc]
//   Label: LAB_005adaf0
// 005adaf7: INC EBX
// 005adaf8: CMP EBX,EDX
// 005adafa: JL 0x005ad72e
//   XREF to: 005ad72e (CONDITIONAL_JUMP)
// 005adb00: JMP 0x005ad745
//   XREF to: 005ad745 (UNCONDITIONAL_JUMP)
// 005adb05: MOV EAX,dword ptr [ESP + 0xedc]
//   Label: LAB_005adb05
// 005adb0c: MOV dword ptr [ESP + 0xf0c],EAX
// 005adb13: FILD dword ptr [ESP + 0xf0c]
// 005adb1a: SUB ESP,0x4
// 005adb1d: MOV dword ptr [ESP + 0xf10],EBX
// 005adb24: FSTP float ptr [ESP]
// 005adb27: FILD dword ptr [ESP + 0xf10]
// 005adb2e: SUB ESP,0x4
// 005adb31: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 005adb37: FSTP float ptr [ESP]
// 005adb3a: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 005adb3b: CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
//   XREF to: 004a0530 (UNCONDITIONAL_CALL)
// 005adb40: ADD ESP,0xc
// 005adb43: PUSH EBX
// 005adb44: LEA EAX,[ESP + 0xee0]
// 005adb4b: PUSH EAX
// 005adb4c: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 005adb51: ADD ESP,0x8
// 005adb54: PUSH EAX
// 005adb55: CALL sound_sndmain.cpp_testSoundFile_FUN_005ad3b0
//   XREF to: 005ad3b0 (UNCONDITIONAL_CALL)
// 005adb5a: ADD ESP,0x4
// 005adb5d: TEST EAX,EAX
// 005adb5f: JZ 0x005adb6f
//   XREF to: 005adb6f (CONDITIONAL_JUMP)
// 005adb61: PUSH EAX
// 005adb62: LEA EAX,[ESP + 0x4]
// 005adb66: PUSH EAX
// 005adb67: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 005adb6c: ADD ESP,0x8
// 005adb6f: MOV EDX,dword ptr [ESP + 0xedc]
//   Label: LAB_005adb6f
// 005adb76: INC EBX
// 005adb77: CMP EBX,EDX
// 005adb79: JL 0x005ad79f
//   XREF to: 005ad79f (CONDITIONAL_JUMP)
// 005adb7f: JMP 0x005ad7b6
//   XREF to: 005ad7b6 (UNCONDITIONAL_JUMP)
// 005adb84: PUSH 0x0
//   Label: LAB_005adb84
// 005adb86: PUSH -0x1
// 005adb88: PUSH 0x6513ef
//   XREF to: 006513ef (DATA)
// 005adb8d: LEA EAX,[ESP + 0xc]
// 005adb91: PUSH EAX
// 005adb92: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 005adb97: ADD ESP,0x10
// 005adb9a: JMP 0x005ad7f8
//   XREF to: 005ad7f8 (UNCONDITIONAL_JUMP)
