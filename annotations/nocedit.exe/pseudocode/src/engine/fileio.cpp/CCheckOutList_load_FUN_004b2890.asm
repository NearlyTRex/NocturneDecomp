; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl engine_fileio_cpp_CCheckOutList_load_FUN_004b2890(CCheckOutList *this_ptr)
;
; Parameters:
; CCheckOutList *  Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x21c]:1  local_21c
; undefined1       Stack[-0x21b]:1  local_21b
; undefined        Stack[-0x118]:1  local_118
; undefined4       Stack[-0x18]:4  local_18
; undefined        Stack[-0x14]:1  local_14
;
; XREF[5]:
;   engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920 at 004b396d
;   engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030 at 004b5078
;   engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50 at 004b3f9f
;   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 at 004ba819
;   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 at 004b8868
;
; Referenced Globals:
;   Sleep* g_SleepFunc = 00212228
;   TerminatedCString s_engine_fileio_cpp_0062604b
;   TerminatedCString s_engine_fileio_cpp_00626060
;   TerminatedCString s_versionControlDirectory__00626075
;   TerminatedCString s_checkout_txt_00626096
;   undefined4 s_heckout.txt_00626097
;   undefined4 s_eckout.txt_00626098
;   undefined4 s_ckout.txt_00626099
;   TerminatedCString s_engine_fileio_cpp_00626129
;   TerminatedCString s_rt_00626293
;   TerminatedCString s_Can_t_access_s_00626296
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsInstance
;   char[264] g_VersionControlDirectory
;   char* g_CurrentFilename
;   ... and 1 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_errno.c__errno_FUN_00601450
;   crt_stdio.c_setvbuf_FUN_00601490
;   engine_dosio.c_ensureTrailingSlash_FUN_00481f80
;   engine_dosio.c_makePath_FUN_00481f50
;   engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60
;   engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b2890
        ;   Label: engine_fileio.cpp_CCheckOutList_load_FUN_004b2890
    PUSH ESI                            ; 004b2891
    PUSH EDI                            ; 004b2892
    PUSH EBP                            ; 004b2893
    SUB ESP,0x20c                       ; 004b2894
    MOV EDX,dword ptr [ESP + 0x220]     ; 004b289a
    PUSH EDX                            ; 004b28a1
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004b28a2
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
    MOV AH,byte ptr [0x02d12ac8]        ; 004b28a7 | g_VersionControlDirectory
    ADD ESP,0x4                         ; 004b28ad
    TEST AH,AH                          ; 004b28b0
    JZ 0x004b29b8                       ; 004b28b2
        ;   XREF to: 004b29b8 (CONDITIONAL_JUMP)  ; LAB_004b29b8
    MOV EDI,ESP                         ; 004b28b8
    JZ 0x004b29c8                       ; 004b28ba
        ;   XREF to: 004b29c8 (CONDITIONAL_JUMP)  ; LAB_004b29c8
    LEA EAX,[ESP + 0x104]               ; 004b28c0
        ;   Label: LAB_004b28c0
    PUSH EAX                            ; 004b28c7
    LEA EAX,[ESP + 0x20c]               ; 004b28c8
    PUSH EAX                            ; 004b28cf
    PUSH 0x2d12ac8                      ; 004b28d0 | g_VersionControlDirectory
    CALL engine_dosio.c_ensureTrailingSlash_FUN_00481f80 ; 004b28d5
        ;   XREF to: 00481f80 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_ensureTrailingSlash_FUN_00481f80(char * input_path, char * drive, char * output_path)
    ADD ESP,0xc                         ; 004b28da
    PUSH 0x0                            ; 004b28dd
    PUSH 0x0                            ; 004b28df
    LEA EAX,[ESP + 0x10c]               ; 004b28e1
    PUSH EAX                            ; 004b28e8
    LEA EAX,[ESP + 0x214]               ; 004b28e9
    PUSH EAX                            ; 004b28f0
    PUSH EDI                            ; 004b28f1
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 004b28f2
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004b28f7
    MOV ESI,0x626096                    ; 004b28fa | = "checkout.txt"
    PUSH EDI                            ; 004b28ff
    SUB ECX,ECX                         ; 004b2900
    DEC ECX                             ; 004b2902
    MOV AL,0x0                          ; 004b2903
    SCASB.REPNE ES:EDI                  ; 004b2905
    DEC EDI                             ; 004b2907
    MOV AL,byte ptr [ESI]               ; 004b2908 | = "checkout.txt" | s_eckout.txt_00626098
        ;   Label: LAB_004b2908
    MOV byte ptr [EDI],AL               ; 004b290a
    CMP AL,0x0                          ; 004b290c
    JZ 0x004b2920                       ; 004b290e
        ;   XREF to: 004b2920 (CONDITIONAL_JUMP)  ; LAB_004b2920
    MOV AL,byte ptr [ESI + 0x1]         ; 004b2910 | s_heckout.txt_00626097 | s_ckout.txt_00626099
    ADD ESI,0x2                         ; 004b2913
    MOV byte ptr [EDI + 0x1],AL         ; 004b2916
    ADD EDI,0x2                         ; 004b2919
    CMP AL,0x0                          ; 004b291c
    JNZ 0x004b2908                      ; 004b291e
        ;   XREF to: 004b2908 (CONDITIONAL_JUMP)  ; LAB_004b2908
    POP EDI                             ; 004b2920
        ;   Label: LAB_004b2920
    MOV EDI,ESP                         ; 004b2921
    XOR ESI,ESI                         ; 004b2923
    PUSH 0x153                          ; 004b2925
        ;   Label: LAB_004b2925
    PUSH 0x626129                       ; 004b292a | = "..\\engine\\fileio.cpp"
    PUSH 0x626293                       ; 004b292f | = "rt"
    PUSH 0x0                            ; 004b2934
    PUSH EDI                            ; 004b2936
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004b2937
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    MOV EBX,EAX                         ; 004b293c
    ADD ESP,0x14                        ; 004b293e
    TEST EAX,EAX                        ; 004b2941
    JZ 0x004b29f0                       ; 004b2943
        ;   XREF to: 004b29f0 (CONDITIONAL_JUMP)  ; LAB_004b29f0
    PUSH 0x400                          ; 004b2949
    PUSH 0x0                            ; 004b294e
    PUSH 0x0                            ; 004b2950
    PUSH EAX                            ; 004b2952
    CALL crt_stdio.c_setvbuf_FUN_00601490 ; 004b2953
        ;   XREF to: 00601490 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_setvbuf_FUN_00601490(_FILE * stream_ptr, char * buffer_ptr, int buffer_mode, SIZE_T buffer_size)
    ADD ESP,0x10                        ; 004b2958
    MOV dword ptr [ESP + 0x204],EBX     ; 004b295b
        ;   Label: LAB_004b295b
    TEST EBX,EBX                        ; 004b2962
    JZ 0x004b2a17                       ; 004b2964
        ;   XREF to: 004b2a17 (CONDITIONAL_JUMP)  ; LAB_004b2a17
    LEA EAX,[ESP + 0x204]               ; 004b296a
    PUSH EAX                            ; 004b2971
    MOV EAX,dword ptr [ESP + 0x224]     ; 004b2972
    PUSH EAX                            ; 004b2979
    CALL engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60 ; 004b297a
        ;   XREF to: 004b2a60 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60(CCheckOutList * this_ptr, _FILE * * file)
    ADD ESP,0x8                         ; 004b297f
    MOV EDX,dword ptr [ESP + 0x204]     ; 004b2982
    MOV EBX,EAX                         ; 004b2989
    TEST EDX,EDX                        ; 004b298b
    JZ 0x004b29ab                       ; 004b298d
        ;   XREF to: 004b29ab (CONDITIONAL_JUMP)  ; LAB_004b29ab
    PUSH 0xc4                           ; 004b298f
    PUSH 0x62604b                       ; 004b2994 | = "..\\engine\\fileio.cpp"
    PUSH EDX                            ; 004b2999
    XOR ESI,ESI                         ; 004b299a
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b299c
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004b29a1
    MOV dword ptr [ESP + 0x204],ESI     ; 004b29a4
    MOV EAX,EBX                         ; 004b29ab
        ;   Label: LAB_004b29ab
    ADD ESP,0x20c                       ; 004b29ad
    POP EBP                             ; 004b29b3
    POP EDI                             ; 004b29b4
    POP ESI                             ; 004b29b5
    POP EBX                             ; 004b29b6
    RET                                 ; 004b29b7
    MOV EAX,0x1                         ; 004b29b8
        ;   Label: LAB_004b29b8
    ADD ESP,0x20c                       ; 004b29bd
    POP EBP                             ; 004b29c3
    POP EDI                             ; 004b29c4
    POP ESI                             ; 004b29c5
    POP EBX                             ; 004b29c6
    RET                                 ; 004b29c7
    MOV ECX,0x626060                    ; 004b29c8 | = "..\\engine\\fileio.cpp"
        ;   Label: LAB_004b29c8
    MOV EBX,0xdd                        ; 004b29cd
    PUSH 0x626075                       ; 004b29d2 | = "versionControlDirectory not set!"
    MOV dword ptr [0x02f0ca48],ECX      ; 004b29d7 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 004b29dd | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b29e3
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004b29e8
    JMP 0x004b28c0                      ; 004b29eb
        ;   XREF to: 004b28c0 (UNCONDITIONAL_JUMP)  ; LAB_004b28c0
    CALL crt_errno.c__errno_FUN_00601450 ; 004b29f0
        ;   XREF to: 00601450 (UNCONDITIONAL_CALL)  ; undefined crt_errno.c__errno_FUN_00601450()
        ;   Label: LAB_004b29f0
    CMP dword ptr [EAX],0x6             ; 004b29f5
    JNZ 0x004b2a10                      ; 004b29f8
        ;   XREF to: 004b2a10 (CONDITIONAL_JUMP)  ; LAB_004b2a10
    PUSH 0x1f4                          ; 004b29fa
    INC ESI                             ; 004b29ff
    CALL dword ptr CS:[0x611644]        ; 004b2a00 | g_SleepFunc
    CMP ESI,0xa                         ; 004b2a07
    JL 0x004b2925                       ; 004b2a0a
        ;   XREF to: 004b2925 (CONDITIONAL_JUMP)  ; LAB_004b2925
    XOR EBX,EBX                         ; 004b2a10
        ;   Label: LAB_004b2a10
    JMP 0x004b295b                      ; 004b2a12
        ;   XREF to: 004b295b (UNCONDITIONAL_JUMP)  ; LAB_004b295b
    CALL crt_errno.c__errno_FUN_00601450 ; 004b2a17
        ;   XREF to: 00601450 (UNCONDITIONAL_CALL)  ; undefined crt_errno.c__errno_FUN_00601450()
        ;   Label: LAB_004b2a17
    MOV EDI,dword ptr [EAX]             ; 004b2a1c
    CMP EDI,0x1                         ; 004b2a1e
    JNZ 0x004b2a30                      ; 004b2a21
        ;   XREF to: 004b2a30 (CONDITIONAL_JUMP)  ; LAB_004b2a30
    MOV EAX,EDI                         ; 004b2a23
    ADD ESP,0x20c                       ; 004b2a25
    POP EBP                             ; 004b2a2b
    POP EDI                             ; 004b2a2c
    POP ESI                             ; 004b2a2d
    POP EBX                             ; 004b2a2e
    RET                                 ; 004b2a2f
    MOV EAX,ESP                         ; 004b2a30
        ;   Label: LAB_004b2a30
    PUSH EAX                            ; 004b2a32
    PUSH 0x626296                       ; 004b2a33 | = "Can't access %s."
    MOV EBP,dword ptr [0x00678a60]      ; 004b2a38 | g_CEditorToolsPtr
    PUSH EBP                            ; 004b2a3e | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b2a3f
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b2a44
    XOR EAX,EAX                         ; 004b2a47
    ADD ESP,0x20c                       ; 004b2a49
    POP EBP                             ; 004b2a4f
    POP EDI                             ; 004b2a50
    POP ESI                             ; 004b2a51
    POP EBX                             ; 004b2a52
    RET                                 ; 004b2a53

