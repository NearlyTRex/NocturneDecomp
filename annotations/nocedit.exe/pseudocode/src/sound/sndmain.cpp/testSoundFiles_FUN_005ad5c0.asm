; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl sound_sndmain_cpp_testSoundFiles_FUN_005ad5c0(void)
;
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
;
; XREF[1]:
;   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 at 004be47c
;
; Referenced Globals:
;   TerminatedCString s_Searching_for_orphaned_s_00651292
;   TerminatedCString s_sfx_006512b3
;   TerminatedCString s_sound_006512b9
;   TerminatedCString s_mp3_006512bf
;   TerminatedCString s_wav_006512c3
;   TerminatedCString s_sound_006512c7
;   TerminatedCString s_sound_006512cd
;   TerminatedCString s_Orphaned_sfx_file_s_006512d3
;   TerminatedCString s_Can_t_start_sound_output_006512e8
;   TerminatedCString s_mp3_00651310
;   TerminatedCString s_sound_00651316
;   TerminatedCString s_Testing_MP3_files_0065131c
;   TerminatedCString s_sound_s_00651331
;   TerminatedCString s_Can_t_get_file_info_for__0065133a
;   TerminatedCString s_wav_00651355
;   ... and 15 more
;
; Called Functions:
;   crt_file.c_makepath_FUN_005febfc
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_string.c_splitpath_FUN_005ff178
;   engine_dosio.c_findFile_FUN_00481760
;   engine_dosio.c_getFileSize_FUN_00481880
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
;   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
;   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;   ... and 8 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ad5c0
        ;   Label: sound_sndmain.cpp_testSoundFiles_FUN_005ad5c0
    PUSH ESI                            ; 005ad5c1
    PUSH EDI                            ; 005ad5c2
    PUSH EBP                            ; 005ad5c3
    SUB ESP,0xf10                       ; 005ad5c4
    MOV EAX,ESP                         ; 005ad5ca
    PUSH EAX                            ; 005ad5cc
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 005ad5cd
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 005ad5d2
    PUSH 0x651292                       ; 005ad5d5 | = "Searching for orphaned sfx files"
    MOV EDX,dword ptr [0x00678a60]      ; 005ad5da | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 005ad5e0 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 005ad5e1
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0x8                         ; 005ad5e6
    LEA EAX,[ESP + 0xeec]               ; 005ad5e9
    PUSH EAX                            ; 005ad5f0
    CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20 ; 005ad5f1
        ;   XREF to: 004a2a20 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_ctor_FUN_004a2a20(CStrList * this_ptr)
    ADD ESP,0x4                         ; 005ad5f6
    PUSH 0x6512b3                       ; 005ad5f9 | = "*.sfx"
    PUSH 0x6512b9                       ; 005ad5fe | = "sound"
    LEA EAX,[ESP + 0xef4]               ; 005ad603
    PUSH EAX                            ; 005ad60a
    CALL shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0 ; 005ad60b
        ;   XREF to: 004a37b0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0(CStrList * this_ptr, char * directory_path, char * file_pattern)
    ADD ESP,0xc                         ; 005ad610
    MOV ECX,dword ptr [ESP + 0xeec]     ; 005ad613
    XOR EBX,EBX                         ; 005ad61a
    TEST ECX,ECX                        ; 005ad61c
    JLE 0x005ad6d1                      ; 005ad61e
        ;   XREF to: 005ad6d1 (CONDITIONAL_JUMP)  ; LAB_005ad6d1
    PUSH 0x1                            ; 005ad624
        ;   Label: LAB_005ad624
    MOV EAX,[0x0067cf44]                ; 005ad626 | g_CKeysPtr
    PUSH EAX                            ; 005ad62b | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005ad62c | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005ad62e
    ADD ESP,0x8                         ; 005ad630
    TEST EAX,EAX                        ; 005ad633
    JNZ 0x005ad6d1                      ; 005ad635
        ;   XREF to: 005ad6d1 (CONDITIONAL_JUMP)  ; LAB_005ad6d1
    PUSH EAX                            ; 005ad63b
    LEA EAX,[ESP + 0xce0]               ; 005ad63c
    PUSH EAX                            ; 005ad643
    PUSH 0x0                            ; 005ad644
    PUSH 0x0                            ; 005ad646
    PUSH EBX                            ; 005ad648
    LEA EAX,[ESP + 0xf00]               ; 005ad649
    PUSH EAX                            ; 005ad650
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 005ad651
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 005ad656
    PUSH EAX                            ; 005ad659
    CALL crt_string.c_splitpath_FUN_005ff178 ; 005ad65a
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 005ad65f
    PUSH 0x6512bf                       ; 005ad662 | = "mp3"
    LEA EAX,[ESP + 0xce0]               ; 005ad667
    PUSH EAX                            ; 005ad66e
    PUSH 0x0                            ; 005ad66f
    PUSH 0x0                            ; 005ad671
    LEA EAX,[ESP + 0xae4]               ; 005ad673
    PUSH EAX                            ; 005ad67a
    CALL crt_file.c_makepath_FUN_005febfc ; 005ad67b
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 005ad680
    PUSH 0x6512c3                       ; 005ad683 | = "wav"
    LEA EAX,[ESP + 0xce0]               ; 005ad688
    PUSH EAX                            ; 005ad68f
    PUSH 0x0                            ; 005ad690
    PUSH 0x0                            ; 005ad692
    LEA EAX,[ESP + 0xbe8]               ; 005ad694
    PUSH EAX                            ; 005ad69b
    CALL crt_file.c_makepath_FUN_005febfc ; 005ad69c
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 005ad6a1
    LEA EAX,[ESP + 0xad4]               ; 005ad6a4
    PUSH EAX                            ; 005ad6ab
    PUSH 0x6512c7                       ; 005ad6ac | = "sound"
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 005ad6b1
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
    ADD ESP,0x8                         ; 005ad6b6
    TEST EAX,EAX                        ; 005ad6b9
    JLE 0x005ad848                      ; 005ad6bb
        ;   XREF to: 005ad848 (CONDITIONAL_JUMP)  ; LAB_005ad848
    MOV ESI,dword ptr [ESP + 0xeec]     ; 005ad6c1
        ;   Label: LAB_005ad6c1
    INC EBX                             ; 005ad6c8
    CMP EBX,ESI                         ; 005ad6c9
    JL 0x005ad624                       ; 005ad6cb
        ;   XREF to: 005ad624 (CONDITIONAL_JUMP)  ; LAB_005ad624
    CALL sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0 ; 005ad6d1
        ;   XREF to: 005aaef0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0()
        ;   Label: LAB_005ad6d1
    CALL sound_sndmain.cpp_isSoundBusy_FUN_005ab540 ; 005ad6d6
        ;   XREF to: 005ab540 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundBusy_FUN_005ab540()
    TEST EAX,EAX                        ; 005ad6db
    JZ 0x005ad8a6                       ; 005ad6dd
        ;   XREF to: 005ad8a6 (CONDITIONAL_JUMP)  ; LAB_005ad8a6
    LEA EAX,[ESP + 0xefc]               ; 005ad6e3
    PUSH EAX                            ; 005ad6ea
    CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20 ; 005ad6eb
        ;   XREF to: 004a2a20 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_ctor_FUN_004a2a20(CStrList * this_ptr)
    ADD ESP,0x4                         ; 005ad6f0
    PUSH 0x651310                       ; 005ad6f3 | = "*.mp3"
    PUSH 0x651316                       ; 005ad6f8 | = "sound"
    LEA EAX,[ESP + 0xf04]               ; 005ad6fd
    PUSH EAX                            ; 005ad704
    CALL shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0 ; 005ad705
        ;   XREF to: 004a37b0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0(CStrList * this_ptr, char * directory_path, char * file_pattern)
    ADD ESP,0xc                         ; 005ad70a
    PUSH 0x65131c                       ; 005ad70d | = "Testing MP3 files..."
    MOV EBP,dword ptr [0x00678a60]      ; 005ad712 | g_CEditorToolsPtr
    PUSH EBP                            ; 005ad718 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430 ; 005ad719
        ;   XREF to: 004a0430 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430(CEditorTools * this_ptr, char * message_text)
    ADD ESP,0x8                         ; 005ad71e
    MOV EAX,dword ptr [ESP + 0xefc]     ; 005ad721
    XOR EBX,EBX                         ; 005ad728
    TEST EAX,EAX                        ; 005ad72a
    JLE 0x005ad745                      ; 005ad72c
        ;   XREF to: 005ad745 (CONDITIONAL_JUMP)  ; LAB_005ad745
    PUSH 0x1                            ; 005ad72e
        ;   Label: LAB_005ad72e
    MOV EAX,[0x0067cf44]                ; 005ad730 | g_CKeysPtr
    PUSH EAX                            ; 005ad735 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005ad736 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005ad738
    ADD ESP,0x8                         ; 005ad73a
    TEST EAX,EAX                        ; 005ad73d
    JZ 0x005ad8bc                       ; 005ad73f
        ;   XREF to: 005ad8bc (CONDITIONAL_JUMP)  ; LAB_005ad8bc
    MOV EDI,dword ptr [0x00678a60]      ; 005ad745 | g_CEditorToolsPtr
        ;   Label: LAB_005ad745
    PUSH EDI                            ; 005ad74b | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 005ad74c
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 005ad751
    LEA EAX,[ESP + 0xedc]               ; 005ad754
    PUSH EAX                            ; 005ad75b
    CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20 ; 005ad75c
        ;   XREF to: 004a2a20 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_ctor_FUN_004a2a20(CStrList * this_ptr)
    ADD ESP,0x4                         ; 005ad761
    PUSH 0x6513b1                       ; 005ad764 | = "*.wav"
    PUSH 0x6513b7                       ; 005ad769 | = "sound"
    LEA EAX,[ESP + 0xee4]               ; 005ad76e
    PUSH EAX                            ; 005ad775
    CALL shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0 ; 005ad776
        ;   XREF to: 004a37b0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0(CStrList * this_ptr, char * directory_path, char * file_pattern)
    ADD ESP,0xc                         ; 005ad77b
    PUSH 0x6513bd                       ; 005ad77e | = "Testing WAV files..."
    MOV EBP,dword ptr [0x00678a60]      ; 005ad783 | g_CEditorToolsPtr
    PUSH EBP                            ; 005ad789 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430 ; 005ad78a
        ;   XREF to: 004a0430 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430(CEditorTools * this_ptr, char * message_text)
    ADD ESP,0x8                         ; 005ad78f
    MOV EAX,dword ptr [ESP + 0xedc]     ; 005ad792
    XOR EBX,EBX                         ; 005ad799
    TEST EAX,EAX                        ; 005ad79b
    JLE 0x005ad7b6                      ; 005ad79d
        ;   XREF to: 005ad7b6 (CONDITIONAL_JUMP)  ; LAB_005ad7b6
    PUSH 0x1                            ; 005ad79f
        ;   Label: LAB_005ad79f
    MOV EAX,[0x0067cf44]                ; 005ad7a1 | g_CKeysPtr
    PUSH EAX                            ; 005ad7a6 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005ad7a7 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005ad7a9
    ADD ESP,0x8                         ; 005ad7ab
    TEST EAX,EAX                        ; 005ad7ae
    JZ 0x005adb05                       ; 005ad7b0
        ;   XREF to: 005adb05 (CONDITIONAL_JUMP)  ; LAB_005adb05
    MOV EBX,dword ptr [0x00678a60]      ; 005ad7b6 | g_CEditorToolsInstance | g_CEditorToolsPtr
        ;   Label: LAB_005ad7b6
    PUSH EBX                            ; 005ad7bc | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 005ad7bd
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 005ad7c2
    CALL sound_sndmain.cpp_resetSoundDevice_FUN_005ab130 ; 005ad7c5
        ;   XREF to: 005ab130 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_resetSoundDevice_FUN_005ab130()
    PUSH 0x1                            ; 005ad7ca
    MOV EAX,[0x0067cf44]                ; 005ad7cc | g_CKeysPtr
    PUSH EAX                            ; 005ad7d1 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005ad7d2 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 005ad7d4
    ADD ESP,0x8                         ; 005ad7d7
    CMP dword ptr [ESP],0x1             ; 005ad7da
    JGE 0x005adb84                      ; 005ad7de
        ;   XREF to: 005adb84 (CONDITIONAL_JUMP)  ; LAB_005adb84
    PUSH 0x6513d2                       ; 005ad7e4 | = "No sound file problems found"
    MOV EDI,dword ptr [0x00678a60]      ; 005ad7e9 | g_CEditorToolsPtr
    PUSH EDI                            ; 005ad7ef | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 005ad7f0
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 005ad7f5
    PUSH 0x0                            ; 005ad7f8
        ;   Label: LAB_005ad7f8
    LEA EAX,[ESP + 0xee0]               ; 005ad7fa
    PUSH EAX                            ; 005ad801
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 005ad802
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005ad807
    PUSH 0x0                            ; 005ad80a
    LEA EAX,[ESP + 0xf00]               ; 005ad80c
    PUSH EAX                            ; 005ad813
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 005ad814
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005ad819
        ;   Label: LAB_005ad819
    PUSH 0x0                            ; 005ad81c
    LEA EAX,[ESP + 0xef0]               ; 005ad81e
    PUSH EAX                            ; 005ad825
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 005ad826
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005ad82b
    PUSH 0x0                            ; 005ad82e
    LEA EAX,[ESP + 0x4]                 ; 005ad830
    PUSH EAX                            ; 005ad834
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 005ad835
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005ad83a
    ADD ESP,0xf10                       ; 005ad83d
    POP EBP                             ; 005ad843
    POP EDI                             ; 005ad844
    POP ESI                             ; 005ad845
    POP EBX                             ; 005ad846
    RET                                 ; 005ad847
    LEA EAX,[ESP + 0xbd8]               ; 005ad848
        ;   Label: LAB_005ad848
    PUSH EAX                            ; 005ad84f
    PUSH 0x6512cd                       ; 005ad850 | = "sound"
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 005ad855
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
    ADD ESP,0x8                         ; 005ad85a
    TEST EAX,EAX                        ; 005ad85d
    JG 0x005ad6c1                       ; 005ad85f
        ;   XREF to: 005ad6c1 (CONDITIONAL_JUMP)  ; LAB_005ad6c1
    PUSH EBX                            ; 005ad865
    LEA EAX,[ESP + 0xef0]               ; 005ad866
    PUSH EAX                            ; 005ad86d
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 005ad86e
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 005ad873
    PUSH EAX                            ; 005ad876
    PUSH 0x6512d3                       ; 005ad877 | = "Orphaned sfx file %s"
    LEA EAX,[ESP + 0x7d8]               ; 005ad87c
    PUSH EAX                            ; 005ad883
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005ad884
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005ad889
    LEA EAX,[ESP + 0x7d0]               ; 005ad88c
    PUSH EAX                            ; 005ad893
    LEA EAX,[ESP + 0x4]                 ; 005ad894
    PUSH EAX                            ; 005ad898
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 005ad899
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 005ad89e
    JMP 0x005ad6c1                      ; 005ad8a1
        ;   XREF to: 005ad6c1 (UNCONDITIONAL_JUMP)  ; LAB_005ad6c1
    PUSH 0x6512e8                       ; 005ad8a6 | = "Can't start sound output to test sounds"
        ;   Label: LAB_005ad8a6
    MOV EDI,dword ptr [0x00678a60]      ; 005ad8ab | g_CEditorToolsPtr
    PUSH EDI                            ; 005ad8b1 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 005ad8b2
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    JMP 0x005ad819                      ; 005ad8b7
        ;   XREF to: 005ad819 (UNCONDITIONAL_JUMP)  ; LAB_005ad819
    MOV EAX,dword ptr [ESP + 0xefc]     ; 005ad8bc
        ;   Label: LAB_005ad8bc
    MOV dword ptr [ESP + 0xf0c],EAX     ; 005ad8c3
    FILD dword ptr [ESP + 0xf0c]        ; 005ad8ca
    SUB ESP,0x4                         ; 005ad8d1
    MOV dword ptr [ESP + 0xf10],EBX     ; 005ad8d4
    FSTP float ptr [ESP]                ; 005ad8db
    FILD dword ptr [ESP + 0xf10]        ; 005ad8de
    SUB ESP,0x4                         ; 005ad8e5
    MOV ECX,dword ptr [0x00678a60]      ; 005ad8e8 | g_CEditorToolsInstance | g_CEditorToolsPtr
    FSTP float ptr [ESP]                ; 005ad8ee
    PUSH ECX                            ; 005ad8f1 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 ; 005ad8f2
        ;   XREF to: 004a0530 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530(CEditorTools * this_ptr, float progress_min, float progress_max)
    ADD ESP,0xc                         ; 005ad8f7
    PUSH EBX                            ; 005ad8fa
    LEA EAX,[ESP + 0xf00]               ; 005ad8fb
    PUSH EAX                            ; 005ad902
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 005ad903
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 005ad908
    PUSH EAX                            ; 005ad90b
    PUSH 0x651331                       ; 005ad90c | = "sound\\%s"
    LEA EAX,[ESP + 0x5c4]               ; 005ad911
    PUSH EAX                            ; 005ad918
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005ad919
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005ad91e
    LEA EAX,[ESP + 0x5bc]               ; 005ad921
    PUSH EAX                            ; 005ad928
    CALL engine_dosio.c_findFile_FUN_00481760 ; 005ad929
        ;   XREF to: 00481760 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_findFile_FUN_00481760(SFoundFileInfo * context)
    ADD ESP,0x4                         ; 005ad92e
    TEST EAX,EAX                        ; 005ad931
    JZ 0x005ada52                       ; 005ad933
        ;   XREF to: 005ada52 (CONDITIONAL_JUMP)  ; LAB_005ada52
    PUSH 0x0                            ; 005ad939
    LEA EAX,[ESP + 0xde0]               ; 005ad93b
    PUSH EAX                            ; 005ad942
    PUSH 0x0                            ; 005ad943
    PUSH 0x0                            ; 005ad945
    LEA EAX,[ESP + 0x5cc]               ; 005ad947
    PUSH EAX                            ; 005ad94e
    CALL crt_string.c_splitpath_FUN_005ff178 ; 005ad94f
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 005ad954
    PUSH 0x651355                       ; 005ad957 | = "wav"
    LEA EAX,[ESP + 0xde0]               ; 005ad95c
    PUSH EAX                            ; 005ad963
    PUSH 0x0                            ; 005ad964
    PUSH 0x0                            ; 005ad966
    LEA EAX,[ESP + 0x9e0]               ; 005ad968
    PUSH EAX                            ; 005ad96f
    CALL crt_file.c_makepath_FUN_005febfc ; 005ad970
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 005ad975
    LEA EAX,[ESP + 0x9d0]               ; 005ad978
    PUSH EAX                            ; 005ad97f
    PUSH 0x651359                       ; 005ad980 | = "sound"
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 005ad985
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
    ADD ESP,0x8                         ; 005ad98a
    TEST EAX,EAX                        ; 005ad98d
    JL 0x005ad9c3                       ; 005ad98f
        ;   XREF to: 005ad9c3 (CONDITIONAL_JUMP)  ; LAB_005ad9c3
    LEA EAX,[ESP + 0xddc]               ; 005ad991
    PUSH EAX                            ; 005ad998
    PUSH 0x65135f                       ; 005ad999 | = "%s found in both wav and mp3 format"
    LEA EAX,[ESP + 0x7d8]               ; 005ad99e
    PUSH EAX                            ; 005ad9a5
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005ad9a6
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005ad9ab
    LEA EAX,[ESP + 0x7d0]               ; 005ad9ae
    PUSH EAX                            ; 005ad9b5
    LEA EAX,[ESP + 0x4]                 ; 005ad9b6
    PUSH EAX                            ; 005ad9ba
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 005ad9bb
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 005ad9c0
    PUSH 0x651383                       ; 005ad9c3 | = "sfx"
        ;   Label: LAB_005ad9c3
    LEA EAX,[ESP + 0xde0]               ; 005ad9c8
    PUSH EAX                            ; 005ad9cf
    PUSH 0x651387                       ; 005ad9d0 | = "sound"
    PUSH 0x0                            ; 005ad9d5
    LEA EAX,[ESP + 0x3b8]               ; 005ad9d7
    PUSH EAX                            ; 005ad9de
    CALL crt_file.c_makepath_FUN_005febfc ; 005ad9df
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 005ad9e4
    LEA EAX,[ESP + 0x3a8]               ; 005ad9e7
    PUSH EAX                            ; 005ad9ee
    CALL engine_dosio.c_findFile_FUN_00481760 ; 005ad9ef
        ;   XREF to: 00481760 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_findFile_FUN_00481760(SFoundFileInfo * context)
    ADD ESP,0x4                         ; 005ad9f4
    TEST EAX,EAX                        ; 005ad9f7
    JZ 0x005ada90                       ; 005ad9f9
        ;   XREF to: 005ada90 (CONDITIONAL_JUMP)  ; LAB_005ada90
    MOV EAX,dword ptr [ESP + 0x5b4]     ; 005ad9ff
    CMP EAX,dword ptr [ESP + 0x7c8]     ; 005ada06
    JNC 0x005adac4                      ; 005ada0d
        ;   XREF to: 005adac4 (CONDITIONAL_JUMP)  ; LAB_005adac4
    LEA EAX,[ESP + 0x5bc]               ; 005ada13
    PUSH EAX                            ; 005ada1a
    LEA EAX,[ESP + 0x3ac]               ; 005ada1b
    PUSH EAX                            ; 005ada22
    PUSH 0x6513a0                       ; 005ada23 | = "%s older than %s"
    LEA EAX,[ESP + 0x7dc]               ; 005ada28
    PUSH EAX                            ; 005ada2f
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005ada30
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005ada35
    LEA EAX,[ESP + 0x7d0]               ; 005ada38
    PUSH EAX                            ; 005ada3f
    LEA EAX,[ESP + 0x4]                 ; 005ada40
    PUSH EAX                            ; 005ada44
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 005ada45
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 005ada4a
    JMP 0x005adaf0                      ; 005ada4d
        ;   XREF to: 005adaf0 (UNCONDITIONAL_JUMP)  ; LAB_005adaf0
    PUSH EBX                            ; 005ada52
        ;   Label: LAB_005ada52
    LEA EAX,[ESP + 0xf00]               ; 005ada53
    PUSH EAX                            ; 005ada5a
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 005ada5b
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 005ada60
    PUSH EAX                            ; 005ada63
    PUSH 0x65133a                       ; 005ada64 | = "Can't get file info for %s"
    LEA EAX,[ESP + 0x7d8]               ; 005ada69
    PUSH EAX                            ; 005ada70
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005ada71
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005ada76
    LEA EAX,[ESP + 0x7d0]               ; 005ada79
    PUSH EAX                            ; 005ada80
    LEA EAX,[ESP + 0x4]                 ; 005ada81
    PUSH EAX                            ; 005ada85
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 005ada86
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 005ada8b
    JMP 0x005adaf0                      ; 005ada8e
        ;   XREF to: 005adaf0 (UNCONDITIONAL_JUMP)  ; LAB_005adaf0
    LEA EAX,[ESP + 0x5bc]               ; 005ada90
        ;   Label: LAB_005ada90
    PUSH EAX                            ; 005ada97
    PUSH 0x65138d                       ; 005ada98 | = "No sfx file for %s"
    LEA EAX,[ESP + 0x7d8]               ; 005ada9d
    PUSH EAX                            ; 005adaa4
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005adaa5
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005adaaa
    LEA EAX,[ESP + 0x7d0]               ; 005adaad
    PUSH EAX                            ; 005adab4
    LEA EAX,[ESP + 0x4]                 ; 005adab5
    PUSH EAX                            ; 005adab9
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 005adaba
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 005adabf
    JMP 0x005adaf0                      ; 005adac2
        ;   XREF to: 005adaf0 (UNCONDITIONAL_JUMP)  ; LAB_005adaf0
    PUSH EBX                            ; 005adac4
        ;   Label: LAB_005adac4
    LEA EAX,[ESP + 0xf00]               ; 005adac5
    PUSH EAX                            ; 005adacc
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 005adacd
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 005adad2
    PUSH EAX                            ; 005adad5
    CALL sound_sndmain.cpp_testSoundFile_FUN_005ad3b0 ; 005adad6
        ;   XREF to: 005ad3b0 (UNCONDITIONAL_CALL)  ; char * sound_sndmain.cpp_testSoundFile_FUN_005ad3b0(char * sample_name)
    ADD ESP,0x4                         ; 005adadb
    TEST EAX,EAX                        ; 005adade
    JZ 0x005adaf0                       ; 005adae0
        ;   XREF to: 005adaf0 (CONDITIONAL_JUMP)  ; LAB_005adaf0
    PUSH EAX                            ; 005adae2
    LEA EAX,[ESP + 0x4]                 ; 005adae3
    PUSH EAX                            ; 005adae7
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 005adae8
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 005adaed
    MOV EDX,dword ptr [ESP + 0xefc]     ; 005adaf0
        ;   Label: LAB_005adaf0
    INC EBX                             ; 005adaf7
    CMP EBX,EDX                         ; 005adaf8
    JL 0x005ad72e                       ; 005adafa
        ;   XREF to: 005ad72e (CONDITIONAL_JUMP)  ; LAB_005ad72e
    JMP 0x005ad745                      ; 005adb00
        ;   XREF to: 005ad745 (UNCONDITIONAL_JUMP)  ; LAB_005ad745
    MOV EAX,dword ptr [ESP + 0xedc]     ; 005adb05
        ;   Label: LAB_005adb05
    MOV dword ptr [ESP + 0xf0c],EAX     ; 005adb0c
    FILD dword ptr [ESP + 0xf0c]        ; 005adb13
    SUB ESP,0x4                         ; 005adb1a
    MOV dword ptr [ESP + 0xf10],EBX     ; 005adb1d
    FSTP float ptr [ESP]                ; 005adb24
    FILD dword ptr [ESP + 0xf10]        ; 005adb27
    SUB ESP,0x4                         ; 005adb2e
    MOV ECX,dword ptr [0x00678a60]      ; 005adb31 | g_CEditorToolsInstance | g_CEditorToolsPtr
    FSTP float ptr [ESP]                ; 005adb37
    PUSH ECX                            ; 005adb3a | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 ; 005adb3b
        ;   XREF to: 004a0530 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530(CEditorTools * this_ptr, float progress_min, float progress_max)
    ADD ESP,0xc                         ; 005adb40
    PUSH EBX                            ; 005adb43
    LEA EAX,[ESP + 0xee0]               ; 005adb44
    PUSH EAX                            ; 005adb4b
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 005adb4c
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 005adb51
    PUSH EAX                            ; 005adb54
    CALL sound_sndmain.cpp_testSoundFile_FUN_005ad3b0 ; 005adb55
        ;   XREF to: 005ad3b0 (UNCONDITIONAL_CALL)  ; char * sound_sndmain.cpp_testSoundFile_FUN_005ad3b0(char * sample_name)
    ADD ESP,0x4                         ; 005adb5a
    TEST EAX,EAX                        ; 005adb5d
    JZ 0x005adb6f                       ; 005adb5f
        ;   XREF to: 005adb6f (CONDITIONAL_JUMP)  ; LAB_005adb6f
    PUSH EAX                            ; 005adb61
    LEA EAX,[ESP + 0x4]                 ; 005adb62
    PUSH EAX                            ; 005adb66
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 005adb67
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 005adb6c
    MOV EDX,dword ptr [ESP + 0xedc]     ; 005adb6f
        ;   Label: LAB_005adb6f
    INC EBX                             ; 005adb76
    CMP EBX,EDX                         ; 005adb77
    JL 0x005ad79f                       ; 005adb79
        ;   XREF to: 005ad79f (CONDITIONAL_JUMP)  ; LAB_005ad79f
    JMP 0x005ad7b6                      ; 005adb7f
        ;   XREF to: 005ad7b6 (UNCONDITIONAL_JUMP)  ; LAB_005ad7b6
    PUSH 0x0                            ; 005adb84
        ;   Label: LAB_005adb84
    PUSH -0x1                           ; 005adb86
    PUSH 0x6513ef                       ; 005adb88 | = "Possible sound file problems"
    LEA EAX,[ESP + 0xc]                 ; 005adb8d
    PUSH EAX                            ; 005adb91
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 005adb92
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 005adb97
    JMP 0x005ad7f8                      ; 005adb9a
        ;   XREF to: 005ad7f8 (UNCONDITIONAL_JUMP)  ; LAB_005ad7f8

