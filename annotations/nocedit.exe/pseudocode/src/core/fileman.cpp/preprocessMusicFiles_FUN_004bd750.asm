; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_fileman_cpp_preprocessMusicFiles_FUN_004bd750(char *source_directory)
;
; Parameters:
; char *           Stack[0x4]:4   source_directory
; Local Variables:
; undefined1       Stack[-0x64c]:1  local_64c
; undefined1       Stack[-0x64b]:1  local_64b
; undefined4       Stack[-0x440]:4  local_440
; undefined1       Stack[-0x438]:1  local_438
; undefined4       Stack[-0x22c]:4  local_22c
; undefined1       Stack[-0x224]:1  local_224
; undefined1       Stack[-0x124]:1  local_124
; undefined4       Stack[-0x24]:4  local_24
; undefined1       Stack[-0x14]:1  local_14
;
; XREF[1]:
;   core_fileman.cpp_refreshSoundDirectory_FUN_004be590 at 004be5a8
;
; Referenced Globals:
;   TerminatedCString s_mp3_00629552
;   TerminatedCString s_core_fileman_cpp_00629558
;   TerminatedCString s_Can_t_access_s_0062956c
;   TerminatedCString s_sfx_0062957c
;   TerminatedCString s_Computing_length_of_s_00629580
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsInstance
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_file.c_makepath_FUN_005febfc
;   crt_string.c_splitpath_FUN_005ff178
;   engine_dosio.c_findFileNormally_FUN_004817c0
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;   shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
;   shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;   shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0
;   sound_sndmain.cpp_convertMp3ToSfxMetadata_FUN_005acf20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bd750
        ;   Label: core_fileman.cpp_preprocessMusicFiles_FUN_004bd750
    PUSH ESI                            ; 004bd751
    PUSH EDI                            ; 004bd752
    PUSH EBP                            ; 004bd753
    SUB ESP,0x63c                       ; 004bd754
    LEA EAX,[ESP + 0x628]               ; 004bd75a
    PUSH EAX                            ; 004bd761
    CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20 ; 004bd762
        ;   XREF to: 004a2a20 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_ctor_FUN_004a2a20(CStrList * this_ptr)
    ADD ESP,0x4                         ; 004bd767
    PUSH 0x629552                       ; 004bd76a | = "*.mp3"
    MOV EDX,dword ptr [ESP + 0x654]     ; 004bd76f
    PUSH EDX                            ; 004bd776
    LEA EAX,[ESP + 0x630]               ; 004bd777
    PUSH EAX                            ; 004bd77e
    CALL shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0 ; 004bd77f
        ;   XREF to: 004a39e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0(CStrList * this_ptr, char * base_path, char * search_path)
    ADD ESP,0xc                         ; 004bd784
    MOV ECX,dword ptr [ESP + 0x628]     ; 004bd787
    XOR EBX,EBX                         ; 004bd78e
    TEST ECX,ECX                        ; 004bd790
    JLE 0x004bd86a                      ; 004bd792
        ;   XREF to: 004bd86a (CONDITIONAL_JUMP)  ; LAB_004bd86a
    MOV EBP,0x3c                        ; 004bd798
    PUSH EBX                            ; 004bd79d
        ;   Label: LAB_004bd79d
    LEA EAX,[ESP + 0x62c]               ; 004bd79e
    PUSH EAX                            ; 004bd7a5
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 004bd7a6
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004bd7ab
    MOV EDI,ESP                         ; 004bd7ae
    MOV ESI,EAX                         ; 004bd7b0
    PUSH EDI                            ; 004bd7b2
    MOV AL,byte ptr [ESI]               ; 004bd7b3
        ;   Label: LAB_004bd7b3
    MOV byte ptr [EDI],AL               ; 004bd7b5
    CMP AL,0x0                          ; 004bd7b7
    JZ 0x004bd7cb                       ; 004bd7b9
        ;   XREF to: 004bd7cb (CONDITIONAL_JUMP)  ; LAB_004bd7cb
    MOV AL,byte ptr [ESI + 0x1]         ; 004bd7bb
    ADD ESI,0x2                         ; 004bd7be
    MOV byte ptr [EDI + 0x1],AL         ; 004bd7c1
    ADD EDI,0x2                         ; 004bd7c4
    CMP AL,0x0                          ; 004bd7c7
    JNZ 0x004bd7b3                      ; 004bd7c9
        ;   XREF to: 004bd7b3 (CONDITIONAL_JUMP)  ; LAB_004bd7b3
    POP EDI                             ; 004bd7cb
        ;   Label: LAB_004bd7cb
    MOV EAX,ESP                         ; 004bd7cc
    PUSH EAX                            ; 004bd7ce
    CALL engine_dosio.c_findFileNormally_FUN_004817c0 ; 004bd7cf
        ;   XREF to: 004817c0 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_findFileNormally_FUN_004817c0(SFoundFileInfo * info)
    ADD ESP,0x4                         ; 004bd7d4
    TEST EAX,EAX                        ; 004bd7d7
    JZ 0x004bd887                       ; 004bd7d9
        ;   XREF to: 004bd887 (CONDITIONAL_JUMP)  ; LAB_004bd887
    PUSH 0x0                            ; 004bd7df
        ;   Label: LAB_004bd7df
    LEA EAX,[ESP + 0x42c]               ; 004bd7e1
    PUSH EAX                            ; 004bd7e8
    LEA EAX,[ESP + 0x530]               ; 004bd7e9
    PUSH EAX                            ; 004bd7f0
    LEA EAX,[ESP + 0x644]               ; 004bd7f1
    PUSH EAX                            ; 004bd7f8
    LEA EAX,[ESP + 0x10]                ; 004bd7f9
    PUSH EAX                            ; 004bd7fd
    CALL crt_string.c_splitpath_FUN_005ff178 ; 004bd7fe
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 004bd803
    PUSH 0x62957c                       ; 004bd806 | = "sfx"
    LEA EAX,[ESP + 0x42c]               ; 004bd80b
    PUSH EAX                            ; 004bd812
    LEA EAX,[ESP + 0x530]               ; 004bd813
    PUSH EAX                            ; 004bd81a
    LEA EAX,[ESP + 0x644]               ; 004bd81b
    PUSH EAX                            ; 004bd822
    LEA EAX,[ESP + 0x224]               ; 004bd823
    PUSH EAX                            ; 004bd82a
    CALL crt_file.c_makepath_FUN_005febfc ; 004bd82b
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004bd830
    LEA EAX,[ESP + 0x214]               ; 004bd833
    PUSH EAX                            ; 004bd83a
    CALL engine_dosio.c_findFileNormally_FUN_004817c0 ; 004bd83b
        ;   XREF to: 004817c0 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_findFileNormally_FUN_004817c0(SFoundFileInfo * info)
    ADD ESP,0x4                         ; 004bd840
    TEST EAX,EAX                        ; 004bd843
    JZ 0x004bd8ad                       ; 004bd845
        ;   XREF to: 004bd8ad (CONDITIONAL_JUMP)  ; LAB_004bd8ad
    MOV EAX,dword ptr [ESP + 0x20c]     ; 004bd847
    MOV EDX,dword ptr [ESP + 0x420]     ; 004bd84e
    DEC EAX                             ; 004bd855
    CMP EAX,EDX                         ; 004bd856
    JA 0x004bd8ad                       ; 004bd858
        ;   XREF to: 004bd8ad (CONDITIONAL_JUMP)  ; LAB_004bd8ad
    MOV ESI,dword ptr [ESP + 0x628]     ; 004bd85a
        ;   Label: LAB_004bd85a
    INC EBX                             ; 004bd861
    CMP EBX,ESI                         ; 004bd862
    JL 0x004bd79d                       ; 004bd864
        ;   XREF to: 004bd79d (CONDITIONAL_JUMP)  ; LAB_004bd79d
    PUSH 0x0                            ; 004bd86a
        ;   Label: LAB_004bd86a
    LEA EAX,[ESP + 0x62c]               ; 004bd86c
    PUSH EAX                            ; 004bd873
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 004bd874
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bd879
    ADD ESP,0x63c                       ; 004bd87c
    POP EBP                             ; 004bd882
    POP EDI                             ; 004bd883
    POP ESI                             ; 004bd884
    POP EBX                             ; 004bd885
    RET                                 ; 004bd886
    MOV EAX,ESP                         ; 004bd887
        ;   Label: LAB_004bd887
    PUSH EAX                            ; 004bd889
    MOV EDI,0x629558                    ; 004bd88a | = "..\\core\\fileman.cpp"
    PUSH 0x62956c                       ; 004bd88f | = "Can't access %s"
    MOV dword ptr [0x02f0ca4c],EBP      ; 004bd894 | g_CurrentLineNumber
    MOV dword ptr [0x02f0ca48],EDI      ; 004bd89a | g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004bd8a0
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 004bd8a5
    JMP 0x004bd7df                      ; 004bd8a8
        ;   XREF to: 004bd7df (UNCONDITIONAL_JUMP)  ; LAB_004bd7df
    MOV EAX,ESP                         ; 004bd8ad
        ;   Label: LAB_004bd8ad
    PUSH EAX                            ; 004bd8af
    PUSH 0x629580                       ; 004bd8b0 | = "Computing length of %s"
    MOV ECX,dword ptr [0x00678a60]      ; 004bd8b5 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 004bd8bb | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004bd8bc
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0xc                         ; 004bd8c1
    MOV EAX,ESP                         ; 004bd8c4
    PUSH EAX                            ; 004bd8c6
    CALL sound_sndmain.cpp_convertMp3ToSfxMetadata_FUN_005acf20 ; 004bd8c7
        ;   XREF to: 005acf20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_convertMp3ToSfxMetadata_FUN_005acf20(char * mp3_filename)
    ADD ESP,0x4                         ; 004bd8cc
    JMP 0x004bd85a                      ; 004bd8cf
        ;   XREF to: 004bd85a (UNCONDITIONAL_JUMP)  ; LAB_004bd85a

