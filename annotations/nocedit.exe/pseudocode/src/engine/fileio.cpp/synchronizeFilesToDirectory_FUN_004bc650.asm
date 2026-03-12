; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_fileio_cpp_synchronizeFilesToDirectory_FUN_004bc650(_FILE *file_list_output,char *source_directory,char *file_pattern,char *dest_directory)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file_list_output
; char *           Stack[0x8]:4   source_directory
; char *           Stack[0xc]:4   file_pattern
; char *           Stack[0x10]:4   dest_directory
; Local Variables:
; SFoundFileInfo   Stack[-0x750]:532  local_750
; SFoundFileInfo   Stack[-0x53c]:532  local_53c
; char[260]        Stack[-0x328]:260  local_328
; char[256]        Stack[-0x224]:256  local_224
; char[256]        Stack[-0x124]:256  local_124
; CStrList         Stack[-0x24]:16  local_24
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fileman.cpp_refreshSoundDirectory_FUN_004be590 at 004be5e4
;
; Referenced Globals:
;   TerminatedCString s_WARNING_Error_setting_da_00626577
;   TerminatedCString s_s_0062906d
;   TerminatedCString s_engine_fileio_cpp_00629071
;   TerminatedCString s_Can_t_get_info_on_s_00629086
;   TerminatedCString s_Skipping_files_already_i_0062909b
;   TerminatedCString s_engine_fileio_cpp_006290bd
;   TerminatedCString s_rb_006290d2
;   TerminatedCString s_engine_fileio_cpp_006290d5
;   TerminatedCString s_Can_t_open_s_006290ea
;   TerminatedCString s_engine_fileio_cpp_006290f8
;   TerminatedCString s_wb_0062910d
;   TerminatedCString s_engine_fileio_cpp_00629110
;   TerminatedCString s_Can_t_create_s_00629125
;   TerminatedCString s_Copying_s_s_00629135
;   TerminatedCString s_engine_fileio_cpp_00629146
;   ... and 9 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   crt_stdio.c_fputc_FUN_006007a0
;   engine_dosio.c_copyFileTimestamp_FUN_00481910
;   engine_dosio.c_findFileNormally_FUN_004817c0
;   engine_dosio.c_makePath_FUN_00481f50
;   engine_dosio.c_splitPath_FUN_00481f20
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
;   shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;   shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bc650
        ;   Label: engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650
    PUSH ESI                            ; 004bc651
    PUSH EDI                            ; 004bc652
    PUSH EBP                            ; 004bc653
    SUB ESP,0x740                       ; 004bc654
    LEA EAX,[ESP + 0x72c]               ; 004bc65a
    PUSH EAX                            ; 004bc661
    CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20 ; 004bc662
        ;   XREF to: 004a2a20 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_ctor_FUN_004a2a20(CStrList * this_ptr)
    ADD ESP,0x4                         ; 004bc667
    MOV EDX,dword ptr [ESP + 0x75c]     ; 004bc66a
    PUSH EDX                            ; 004bc671
    MOV ECX,dword ptr [ESP + 0x75c]     ; 004bc672
    PUSH ECX                            ; 004bc679
    LEA EAX,[ESP + 0x734]               ; 004bc67a
    PUSH EAX                            ; 004bc681
    CALL shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0 ; 004bc682
        ;   XREF to: 004a39e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0(CStrList * this_ptr, char * base_path, char * search_path)
    ADD ESP,0xc                         ; 004bc687
    XOR EBX,EBX                         ; 004bc68a
    MOV EDI,dword ptr [ESP + 0x72c]     ; 004bc68c
    MOV dword ptr [ESP + 0x73c],EBX     ; 004bc693
    TEST EDI,EDI                        ; 004bc69a
    JLE 0x004bc7f0                      ; 004bc69c
        ;   XREF to: 004bc7f0 (CONDITIONAL_JUMP)  ; LAB_004bc7f0
    MOV ECX,dword ptr [ESP + 0x73c]     ; 004bc6a2
        ;   Label: LAB_004bc6a2
    PUSH ECX                            ; 004bc6a9
    LEA EAX,[ESP + 0x730]               ; 004bc6aa
    PUSH EAX                            ; 004bc6b1
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 004bc6b2
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    MOV ESI,EAX                         ; 004bc6b7
    ADD ESP,0x8                         ; 004bc6b9
    MOV EBP,EAX                         ; 004bc6bc
    LEA EAX,[ESP + 0x62c]               ; 004bc6be
    PUSH EAX                            ; 004bc6c5
    LEA EAX,[ESP + 0x530]               ; 004bc6c6
    PUSH EAX                            ; 004bc6cd
    PUSH 0x0                            ; 004bc6ce
    PUSH 0x0                            ; 004bc6d0
    PUSH ESI                            ; 004bc6d2
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 004bc6d3
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004bc6d8
    LEA EAX,[ESP + 0x62c]               ; 004bc6db
    PUSH EAX                            ; 004bc6e2
    LEA EAX,[ESP + 0x530]               ; 004bc6e3
    PUSH EAX                            ; 004bc6ea
    MOV EDI,dword ptr [ESP + 0x768]     ; 004bc6eb
    PUSH EDI                            ; 004bc6f2
    PUSH 0x0                            ; 004bc6f3
    LEA EAX,[ESP + 0x438]               ; 004bc6f5
    PUSH EAX                            ; 004bc6fc
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 004bc6fd
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004bc702
    LEA EAX,[ESP + 0x428]               ; 004bc705
    PUSH EAX                            ; 004bc70c
    MOV EAX,dword ptr [ESP + 0x758]     ; 004bc70d
    PUSH 0x62906d                       ; 004bc714 | = "%s\n"
    MOV EDX,dword ptr [EAX]             ; 004bc719
    PUSH EDX                            ; 004bc71b
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004bc71c
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004bc721
    LEA EDI,[ESP + 0x214]               ; 004bc724
    PUSH EDI                            ; 004bc72b
    MOV AL,byte ptr [ESI]               ; 004bc72c
        ;   Label: LAB_004bc72c
    MOV byte ptr [EDI],AL               ; 004bc72e
    CMP AL,0x0                          ; 004bc730
    JZ 0x004bc744                       ; 004bc732
        ;   XREF to: 004bc744 (CONDITIONAL_JUMP)  ; LAB_004bc744
    MOV AL,byte ptr [ESI + 0x1]         ; 004bc734
    ADD ESI,0x2                         ; 004bc737
    MOV byte ptr [EDI + 0x1],AL         ; 004bc73a
    ADD EDI,0x2                         ; 004bc73d
    CMP AL,0x0                          ; 004bc740
    JNZ 0x004bc72c                      ; 004bc742
        ;   XREF to: 004bc72c (CONDITIONAL_JUMP)  ; LAB_004bc72c
    POP EDI                             ; 004bc744
        ;   Label: LAB_004bc744
    LEA ESI,[ESP + 0x428]               ; 004bc745
    MOV EDI,ESP                         ; 004bc74c
    PUSH EDI                            ; 004bc74e
    MOV AL,byte ptr [ESI]               ; 004bc74f
        ;   Label: LAB_004bc74f
    MOV byte ptr [EDI],AL               ; 004bc751
    CMP AL,0x0                          ; 004bc753
    JZ 0x004bc767                       ; 004bc755
        ;   XREF to: 004bc767 (CONDITIONAL_JUMP)  ; LAB_004bc767
    MOV AL,byte ptr [ESI + 0x1]         ; 004bc757
    ADD ESI,0x2                         ; 004bc75a
    MOV byte ptr [EDI + 0x1],AL         ; 004bc75d
    ADD EDI,0x2                         ; 004bc760
    CMP AL,0x0                          ; 004bc763
    JNZ 0x004bc74f                      ; 004bc765
        ;   XREF to: 004bc74f (CONDITIONAL_JUMP)  ; LAB_004bc74f
    POP EDI                             ; 004bc767
        ;   Label: LAB_004bc767
    LEA EAX,[ESP + 0x214]               ; 004bc768
    PUSH EAX                            ; 004bc76f
    CALL engine_dosio.c_findFileNormally_FUN_004817c0 ; 004bc770
        ;   XREF to: 004817c0 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_findFileNormally_FUN_004817c0(SFoundFileInfo * info)
    ADD ESP,0x4                         ; 004bc775
    TEST EAX,EAX                        ; 004bc778
    JZ 0x004bc80d                       ; 004bc77a
        ;   XREF to: 004bc80d (CONDITIONAL_JUMP)  ; LAB_004bc80d
    MOV EAX,ESP                         ; 004bc780
        ;   Label: LAB_004bc780
    PUSH EAX                            ; 004bc782
    CALL engine_dosio.c_findFileNormally_FUN_004817c0 ; 004bc783
        ;   XREF to: 004817c0 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_findFileNormally_FUN_004817c0(SFoundFileInfo * info)
    ADD ESP,0x4                         ; 004bc788
    TEST EAX,EAX                        ; 004bc78b
    JZ 0x004bc85b                       ; 004bc78d
        ;   XREF to: 004bc85b (CONDITIONAL_JUMP)  ; LAB_004bc85b
    MOV EAX,dword ptr [ESP + 0x20c]     ; 004bc793
    MOV EDI,dword ptr [ESP + 0x420]     ; 004bc79a
    DEC EAX                             ; 004bc7a1
    CMP EAX,EDI                         ; 004bc7a2
    JA 0x004bc85b                       ; 004bc7a4
        ;   XREF to: 004bc85b (CONDITIONAL_JUMP)  ; LAB_004bc85b
    MOV EAX,dword ptr [ESP + 0x20c]     ; 004bc7aa
    INC EAX                             ; 004bc7b1
    CMP EAX,EDI                         ; 004bc7b2
    JC 0x004bc85b                       ; 004bc7b4
        ;   XREF to: 004bc85b (CONDITIONAL_JUMP)  ; LAB_004bc85b
    MOV EAX,dword ptr [ESP + 0x418]     ; 004bc7ba
    CMP EAX,dword ptr [ESP + 0x204]     ; 004bc7c1
    JNZ 0x004bc85b                      ; 004bc7c8
        ;   XREF to: 004bc85b (CONDITIONAL_JUMP)  ; LAB_004bc85b
    TEST EBX,EBX                        ; 004bc7ce
    JZ 0x004bc83d                       ; 004bc7d0
        ;   XREF to: 004bc83d (CONDITIONAL_JUMP)  ; LAB_004bc83d
    MOV EBP,dword ptr [ESP + 0x73c]     ; 004bc7d2
        ;   Label: LAB_004bc7d2
    INC EBP                             ; 004bc7d9
    MOV EDX,dword ptr [ESP + 0x72c]     ; 004bc7da
    MOV dword ptr [ESP + 0x73c],EBP     ; 004bc7e1
    CMP EBP,EDX                         ; 004bc7e8
    JL 0x004bc6a2                       ; 004bc7ea
        ;   XREF to: 004bc6a2 (CONDITIONAL_JUMP)  ; LAB_004bc6a2
    PUSH 0x0                            ; 004bc7f0
        ;   Label: LAB_004bc7f0
    LEA EAX,[ESP + 0x730]               ; 004bc7f2
    PUSH EAX                            ; 004bc7f9
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 004bc7fa
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bc7ff
    ADD ESP,0x740                       ; 004bc802
    POP EBP                             ; 004bc808
    POP EDI                             ; 004bc809
    POP ESI                             ; 004bc80a
    POP EBX                             ; 004bc80b
    RET                                 ; 004bc80c
    LEA EAX,[ESP + 0x214]               ; 004bc80d
        ;   Label: LAB_004bc80d
    PUSH EAX                            ; 004bc814
    MOV ECX,0x629071                    ; 004bc815 | = "..\\engine\\fileio.cpp"
    MOV ESI,0xfe7                       ; 004bc81a
    PUSH 0x629086                       ; 004bc81f | = "Can't get info on %s"
    MOV dword ptr [0x02f0ca48],ECX      ; 004bc824 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 004bc82a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004bc830
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 004bc835
    JMP 0x004bc780                      ; 004bc838
        ;   XREF to: 004bc780 (UNCONDITIONAL_JUMP)  ; LAB_004bc780
    PUSH 0x62909b                       ; 004bc83d | = "Skipping files already in sync..."
        ;   Label: LAB_004bc83d
    MOV EBX,dword ptr [0x00678a60]      ; 004bc842 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EBX                            ; 004bc848 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004bc849
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    MOV EBX,0x1                         ; 004bc84e
    ADD ESP,0x8                         ; 004bc853
    JMP 0x004bc7d2                      ; 004bc856
        ;   XREF to: 004bc7d2 (UNCONDITIONAL_JUMP)  ; LAB_004bc7d2
    PUSH 0xff8                          ; 004bc85b
        ;   Label: LAB_004bc85b
    PUSH 0x6290bd                       ; 004bc860 | = "..\\engine\\fileio.cpp"
    PUSH 0x6290d2                       ; 004bc865 | = "rb"
    PUSH 0x0                            ; 004bc86a
    PUSH EBP                            ; 004bc86c
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004bc86d
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 004bc872
    MOV ESI,EAX                         ; 004bc875
    TEST EAX,EAX                        ; 004bc877
    JNZ 0x004bc89f                      ; 004bc879
        ;   XREF to: 004bc89f (CONDITIONAL_JUMP)  ; LAB_004bc89f
    PUSH EBP                            ; 004bc87b
    MOV EBX,0x6290d5                    ; 004bc87c | = "..\\engine\\fileio.cpp"
    MOV EDI,0xff9                       ; 004bc881
    PUSH 0x6290ea                       ; 004bc886 | = "Can't open %s"
    MOV dword ptr [0x02f0ca48],EBX      ; 004bc88b | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 004bc891 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004bc897
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 004bc89c
    PUSH 0xffa                          ; 004bc89f
        ;   Label: LAB_004bc89f
    PUSH 0x6290f8                       ; 004bc8a4 | = "..\\engine\\fileio.cpp"
    PUSH 0x62910d                       ; 004bc8a9 | = "wb"
    PUSH 0x0                            ; 004bc8ae
    LEA EAX,[ESP + 0x438]               ; 004bc8b0
    PUSH EAX                            ; 004bc8b7
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004bc8b8
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 004bc8bd
    MOV EBX,EAX                         ; 004bc8c0
    TEST EAX,EAX                        ; 004bc8c2
    JZ 0x004bc8fd                       ; 004bc8c4
        ;   XREF to: 004bc8fd (CONDITIONAL_JUMP)  ; LAB_004bc8fd
    LEA EAX,[ESP + 0x428]               ; 004bc8c6
        ;   Label: LAB_004bc8c6
    PUSH EAX                            ; 004bc8cd
    PUSH EBP                            ; 004bc8ce
    PUSH 0x629135                       ; 004bc8cf | = "Copying %s -> %s"
    MOV ECX,dword ptr [0x00678a60]      ; 004bc8d4 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 004bc8da | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004bc8db
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 004bc8e0
    PUSH ESI                            ; 004bc8e3
        ;   Label: LAB_004bc8e3
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 004bc8e4
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 004bc8e9
    CMP EAX,-0x1                        ; 004bc8ec
    JZ 0x004bc929                       ; 004bc8ef
        ;   XREF to: 004bc929 (CONDITIONAL_JUMP)  ; LAB_004bc929
    PUSH EBX                            ; 004bc8f1
    PUSH EAX                            ; 004bc8f2
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 004bc8f3
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_006007a0(int character, _FILE * file)
    ADD ESP,0x8                         ; 004bc8f8
    JMP 0x004bc8e3                      ; 004bc8fb
        ;   XREF to: 004bc8e3 (UNCONDITIONAL_JUMP)  ; LAB_004bc8e3
    MOV dword ptr [0x02f0ca48],0x629110 ; 004bc8fd | g_CurrentFilename | = "..\\engine\\fileio.cpp"
        ;   Label: LAB_004bc8fd
    LEA EAX,[ESP + 0x428]               ; 004bc907
    PUSH EAX                            ; 004bc90e
    MOV EDX,0xffb                       ; 004bc90f
    PUSH 0x629125                       ; 004bc914 | = "Can't create %s"
    MOV dword ptr [0x02f0ca4c],EDX      ; 004bc919 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004bc91f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 004bc924
    JMP 0x004bc8c6                      ; 004bc927
        ;   XREF to: 004bc8c6 (UNCONDITIONAL_JUMP)  ; LAB_004bc8c6
    TEST byte ptr [ESI + 0xc],0x20      ; 004bc929
        ;   Label: LAB_004bc929
    JZ 0x004bc952                       ; 004bc92d
        ;   XREF to: 004bc952 (CONDITIONAL_JUMP)  ; LAB_004bc952
    PUSH EBP                            ; 004bc92f
    MOV EDI,0x629146                    ; 004bc930 | = "..\\engine\\fileio.cpp"
    MOV EAX,0x1008                      ; 004bc935
    PUSH 0x62915b                       ; 004bc93a | = "Error reading %s"
    MOV dword ptr [0x02f0ca48],EDI      ; 004bc93f | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 004bc945 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004bc94a
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 004bc94f
    TEST byte ptr [EBX + 0xc],0x20      ; 004bc952
        ;   Label: LAB_004bc952
    JZ 0x004bc983                       ; 004bc956
        ;   XREF to: 004bc983 (CONDITIONAL_JUMP)  ; LAB_004bc983
    LEA EAX,[ESP + 0x428]               ; 004bc958
    PUSH EAX                            ; 004bc95f
    MOV EDX,0x62916c                    ; 004bc960 | = "..\\engine\\fileio.cpp"
    MOV ECX,0x1009                      ; 004bc965
    PUSH 0x629181                       ; 004bc96a | = "Error writing %s"
    MOV dword ptr [0x02f0ca48],EDX      ; 004bc96f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004bc975 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004bc97b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 004bc980
    PUSH 0x100d                         ; 004bc983
        ;   Label: LAB_004bc983
    PUSH 0x629192                       ; 004bc988 | = "..\\engine\\fileio.cpp"
    PUSH ESI                            ; 004bc98d
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004bc98e
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004bc993
    PUSH 0x100e                         ; 004bc996
    PUSH 0x6291a7                       ; 004bc99b | = "..\\engine\\fileio.cpp"
    PUSH EBX                            ; 004bc9a0
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004bc9a1
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004bc9a6
    MOV EBX,dword ptr [ESP + 0x420]     ; 004bc9a9
    PUSH EBX                            ; 004bc9b0
    LEA EAX,[ESP + 0x42c]               ; 004bc9b1
    PUSH EAX                            ; 004bc9b8
    CALL engine_dosio.c_copyFileTimestamp_FUN_00481910 ; 004bc9b9
        ;   XREF to: 00481910 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_copyFileTimestamp_FUN_00481910(char * source_file, char * dest_file)
    ADD ESP,0x8                         ; 004bc9be
    TEST EAX,EAX                        ; 004bc9c1
    JZ 0x004bc9cc                       ; 004bc9c3
        ;   XREF to: 004bc9cc (CONDITIONAL_JUMP)  ; LAB_004bc9cc
    XOR EBX,EBX                         ; 004bc9c5
    JMP 0x004bc7d2                      ; 004bc9c7
        ;   XREF to: 004bc7d2 (UNCONDITIONAL_JUMP)  ; LAB_004bc7d2
    LEA EAX,[ESP + 0x428]               ; 004bc9cc
        ;   Label: LAB_004bc9cc
    PUSH EAX                            ; 004bc9d3
    PUSH 0x626577                       ; 004bc9d4 | = "WARNING: Error setting date/time on %..."
    MOV ESI,dword ptr [0x00678a60]      ; 004bc9d9 | g_CEditorToolsPtr
    PUSH ESI                            ; 004bc9df | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004bc9e0
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004bc9e5
    XOR EBX,EBX                         ; 004bc9e8
    JMP 0x004bc7d2                      ; 004bc9ea
        ;   XREF to: 004bc7d2 (UNCONDITIONAL_JUMP)  ; LAB_004bc7d2

