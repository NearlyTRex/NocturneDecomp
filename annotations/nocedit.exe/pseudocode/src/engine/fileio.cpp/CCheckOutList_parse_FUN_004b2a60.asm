; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_fileio_cpp_CCheckOutList_parse_FUN_004b2a60(CCheckOutList *this_ptr,_FILE **file)
;
; Parameters:
; CCheckOutList *  Stack[0x4]:4   this_ptr
; _FILE * *        Stack[0x8]:4   file
; Local Variables:
; CCheckOutItem    Stack[-0x178]:360  local_178
;
; XREF[6]:
;   engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920 at 004b3c96
;   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 at 004b4b6e
;   engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0 at 004b37ab
;   engine_fileio.cpp_CCheckOutList_load_FUN_004b2890 at 004b297a
;   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 at 004bbcd5
;   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 at 004bab49
;
; Referenced Globals:
;   TerminatedCString s_engine_fileio_cpp_0062604b
;   TerminatedCString s_File_I_O_error_accessing_006262a7
;   TerminatedCString s_anon_006262cf
;   TerminatedCString s_anon_006262d1
;   TerminatedCString s_Checkout_file_is_corrupt_006262df
;   TerminatedCString s_Multiple_checkout_detect_00626335
;   TerminatedCString s_Out_of_memory_reading_ch_006263b3
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   uchar[257] g_CharacterClassificationTable
;   CEditorTools g_CEditorToolsInstance
;
; Called Functions:
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   crt_stdio.c_fseek_FUN_005ffacc
;   crt_string.c_memmove_FUN_005fe5e0
;   engine_fileio.cpp_CCheckOutList_add_FUN_004b2d00
;   engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60
;   engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b2a60
        ;   Label: engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60
    PUSH ESI                            ; 004b2a61
    PUSH EDI                            ; 004b2a62
    PUSH EBP                            ; 004b2a63
    SUB ESP,0x168                       ; 004b2a64
    MOV EBP,dword ptr [ESP + 0x180]     ; 004b2a6a
    MOV EDX,dword ptr [ESP + 0x17c]     ; 004b2a71
    PUSH EDX                            ; 004b2a78
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004b2a79
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
    ADD ESP,0x4                         ; 004b2a7e
    PUSH 0x0                            ; 004b2a81
    PUSH 0x0                            ; 004b2a83
    MOV ECX,dword ptr [EBP]             ; 004b2a85
    PUSH ECX                            ; 004b2a88
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 004b2a89
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005ffacc(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 004b2a8e
    TEST EAX,EAX                        ; 004b2a91
    JNZ 0x004b2ac1                      ; 004b2a93
        ;   XREF to: 004b2ac1 (CONDITIONAL_JUMP)  ; LAB_004b2ac1
    PUSH 0x6262cf                       ; 004b2a95 | = " "
        ;   Label: LAB_004b2a95
    MOV ESI,dword ptr [EBP]             ; 004b2a9a
    PUSH ESI                            ; 004b2a9d
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004b2a9e
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    MOV EAX,dword ptr [EBP]             ; 004b2aa3
    MOV DL,byte ptr [EAX + 0xc]         ; 004b2aa6
    ADD ESP,0x8                         ; 004b2aa9
    TEST DL,0x10                        ; 004b2aac
    JZ 0x004b2b0a                       ; 004b2aaf
        ;   XREF to: 004b2b0a (CONDITIONAL_JUMP)  ; LAB_004b2b0a
    MOV EAX,0x1                         ; 004b2ab1
    ADD ESP,0x168                       ; 004b2ab6
        ;   Label: LAB_004b2ab6
    POP EBP                             ; 004b2abc
    POP EDI                             ; 004b2abd
    POP ESI                             ; 004b2abe
    POP EBX                             ; 004b2abf
    RET                                 ; 004b2ac0
    PUSH 0x6262a7                       ; 004b2ac1 | = "File I/O error accessing checkout file."
        ;   Label: LAB_004b2ac1
    MOV EBX,dword ptr [0x00678a60]      ; 004b2ac6 | g_CEditorToolsPtr
    PUSH EBX                            ; 004b2acc | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b2acd
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   Label: LAB_004b2acd
    ADD ESP,0x8                         ; 004b2ad2
    MOV ESI,dword ptr [EBP]             ; 004b2ad5
        ;   Label: LAB_004b2ad5
    TEST ESI,ESI                        ; 004b2ad8
    JZ 0x004b2af6                       ; 004b2ada
        ;   XREF to: 004b2af6 (CONDITIONAL_JUMP)  ; LAB_004b2af6
    PUSH 0xc4                           ; 004b2adc
    PUSH 0x62604b                       ; 004b2ae1 | = "..\\engine\\fileio.cpp"
    PUSH ESI                            ; 004b2ae6
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b2ae7
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004b2aec
    MOV dword ptr [EBP],0x0             ; 004b2aef
    MOV EBP,dword ptr [ESP + 0x17c]     ; 004b2af6
        ;   Label: LAB_004b2af6
    PUSH EBP                            ; 004b2afd
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004b2afe
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
    ADD ESP,0x4                         ; 004b2b03
    XOR EAX,EAX                         ; 004b2b06
    JMP 0x004b2ab6                      ; 004b2b08
        ;   XREF to: 004b2ab6 (UNCONDITIONAL_JUMP)  ; LAB_004b2ab6
    LEA EDX,[ESP + 0x104]               ; 004b2b0a
        ;   Label: LAB_004b2b0a
    PUSH EDX                            ; 004b2b11
    LEA EDX,[ESP + 0x4]                 ; 004b2b12
    PUSH EDX                            ; 004b2b16
    PUSH 0x6262d1                       ; 004b2b17 | = "%[^=]= %[^\n]\n"
    PUSH EAX                            ; 004b2b1c
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004b2b1d
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 004b2b22
    CMP EAX,0x2                         ; 004b2b25
    JZ 0x004b2b5c                       ; 004b2b28
        ;   XREF to: 004b2b5c (CONDITIONAL_JUMP)  ; LAB_004b2b5c
    MOV EDI,dword ptr [EBP]             ; 004b2b2a
    TEST EDI,EDI                        ; 004b2b2d
    JZ 0x004b2b4b                       ; 004b2b2f
        ;   XREF to: 004b2b4b (CONDITIONAL_JUMP)  ; LAB_004b2b4b
    PUSH 0xc4                           ; 004b2b31
    PUSH 0x62604b                       ; 004b2b36 | = "..\\engine\\fileio.cpp"
    PUSH EDI                            ; 004b2b3b
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b2b3c
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004b2b41
    MOV dword ptr [EBP],0x0             ; 004b2b44
    PUSH 0x6262df                       ; 004b2b4b | = "Checkout file is corrupt, or file I/O..."
        ;   Label: LAB_004b2b4b
    MOV EDX,dword ptr [0x00678a60]      ; 004b2b50 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 004b2b56 | g_CEditorToolsInstance
    JMP 0x004b2acd                      ; 004b2b57
        ;   XREF to: 004b2acd (UNCONDITIONAL_JUMP)  ; LAB_004b2acd
    MOV EDI,ESP                         ; 004b2b5c
        ;   Label: LAB_004b2b5c
    MOV EBX,ESP                         ; 004b2b5e
    SUB ECX,ECX                         ; 004b2b60
    DEC ECX                             ; 004b2b62
    XOR EAX,EAX                         ; 004b2b63
    SCASB.REPNE ES:EDI                  ; 004b2b65
    NOT ECX                             ; 004b2b67
    DEC ECX                             ; 004b2b69
    MOV EAX,ECX                         ; 004b2b6a
    MOV EDI,ECX                         ; 004b2b6c
    TEST ECX,ECX                        ; 004b2b6e
    JLE 0x004b2b8b                      ; 004b2b70
        ;   XREF to: 004b2b8b (CONDITIONAL_JUMP)  ; LAB_004b2b8b
    MOV EDX,ESP                         ; 004b2b72
    LEA EAX,[ECX + EDX*0x1]             ; 004b2b74
    MOV DL,byte ptr [EAX + -0x1]        ; 004b2b77
        ;   Label: LAB_004b2b77
    INC DL                              ; 004b2b7a
    AND EDX,0xff                        ; 004b2b7c
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 004b2b82 | g_CharacterClassificationTable
    JNZ 0x004b2bb4                      ; 004b2b89
        ;   XREF to: 004b2bb4 (CONDITIONAL_JUMP)  ; LAB_004b2bb4
    LEA EAX,[EBX + EDI*0x1]             ; 004b2b8b
        ;   Label: LAB_004b2b8b
    LEA ESI,[EBX + 0x1]                 ; 004b2b8e
    MOV byte ptr [EAX],0x0              ; 004b2b91
    MOV AL,byte ptr [EBX]               ; 004b2b94
        ;   Label: LAB_004b2b94
    INC AL                              ; 004b2b96
    AND EAX,0xff                        ; 004b2b98
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004b2b9d | g_CharacterClassificationTable
    JZ 0x004b2bbc                       ; 004b2ba4
        ;   XREF to: 004b2bbc (CONDITIONAL_JUMP)  ; LAB_004b2bbc
    PUSH EDI                            ; 004b2ba6
    PUSH ESI                            ; 004b2ba7
    PUSH EBX                            ; 004b2ba8
    DEC EDI                             ; 004b2ba9
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004b2baa
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004b2baf
    JMP 0x004b2b94                      ; 004b2bb2
        ;   XREF to: 004b2b94 (UNCONDITIONAL_JUMP)  ; LAB_004b2b94
    DEC EDI                             ; 004b2bb4
        ;   Label: LAB_004b2bb4
    DEC EAX                             ; 004b2bb5
    TEST EDI,EDI                        ; 004b2bb6
    JG 0x004b2b77                       ; 004b2bb8
        ;   XREF to: 004b2b77 (CONDITIONAL_JUMP)  ; LAB_004b2b77
    JMP 0x004b2b8b                      ; 004b2bba
        ;   XREF to: 004b2b8b (UNCONDITIONAL_JUMP)  ; LAB_004b2b8b
    LEA EDI,[ESP + 0x104]               ; 004b2bbc
        ;   Label: LAB_004b2bbc
    LEA EBX,[ESP + 0x104]               ; 004b2bc3
    SUB ECX,ECX                         ; 004b2bca
    DEC ECX                             ; 004b2bcc
    XOR EAX,EAX                         ; 004b2bcd
    SCASB.REPNE ES:EDI                  ; 004b2bcf
    NOT ECX                             ; 004b2bd1
    DEC ECX                             ; 004b2bd3
    MOV EDI,ECX                         ; 004b2bd4
    TEST ECX,ECX                        ; 004b2bd6
    JLE 0x004b2bf7                      ; 004b2bd8
        ;   XREF to: 004b2bf7 (CONDITIONAL_JUMP)  ; LAB_004b2bf7
    LEA EAX,[ESP + 0x104]               ; 004b2bda
    ADD EAX,ECX                         ; 004b2be1
    MOV DL,byte ptr [EAX + -0x1]        ; 004b2be3
        ;   Label: LAB_004b2be3
    INC DL                              ; 004b2be6
    AND EDX,0xff                        ; 004b2be8
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 004b2bee | g_CharacterClassificationTable
    JNZ 0x004b2c20                      ; 004b2bf5
        ;   XREF to: 004b2c20 (CONDITIONAL_JUMP)  ; LAB_004b2c20
    LEA EAX,[EBX + EDI*0x1]             ; 004b2bf7
        ;   Label: LAB_004b2bf7
    LEA ESI,[EBX + 0x1]                 ; 004b2bfa
    MOV byte ptr [EAX],0x0              ; 004b2bfd
    MOV AL,byte ptr [EBX]               ; 004b2c00
        ;   Label: LAB_004b2c00
    INC AL                              ; 004b2c02
    AND EAX,0xff                        ; 004b2c04
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004b2c09 | g_CharacterClassificationTable
    JZ 0x004b2c28                       ; 004b2c10
        ;   XREF to: 004b2c28 (CONDITIONAL_JUMP)  ; LAB_004b2c28
    PUSH EDI                            ; 004b2c12
    PUSH ESI                            ; 004b2c13
    PUSH EBX                            ; 004b2c14
    DEC EDI                             ; 004b2c15
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004b2c16
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004b2c1b
    JMP 0x004b2c00                      ; 004b2c1e
        ;   XREF to: 004b2c00 (UNCONDITIONAL_JUMP)  ; LAB_004b2c00
    DEC EDI                             ; 004b2c20
        ;   Label: LAB_004b2c20
    DEC EAX                             ; 004b2c21
    TEST EDI,EDI                        ; 004b2c22
    JG 0x004b2be3                       ; 004b2c24
        ;   XREF to: 004b2be3 (CONDITIONAL_JUMP)  ; LAB_004b2be3
    JMP 0x004b2bf7                      ; 004b2c26
        ;   XREF to: 004b2bf7 (UNCONDITIONAL_JUMP)  ; LAB_004b2bf7
    MOV EAX,ESP                         ; 004b2c28
        ;   Label: LAB_004b2c28
    PUSH EAX                            ; 004b2c2a
    MOV ECX,dword ptr [ESP + 0x180]     ; 004b2c2b
    PUSH ECX                            ; 004b2c32
    CALL engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60 ; 004b2c33
        ;   XREF to: 004b2e60 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60(CCheckOutList * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004b2c38
    MOV EBX,EAX                         ; 004b2c3b
    TEST EAX,EAX                        ; 004b2c3d
    JL 0x004b2cad                       ; 004b2c3f
        ;   XREF to: 004b2cad (CONDITIONAL_JUMP)  ; LAB_004b2cad
    MOV EDX,dword ptr [EBP]             ; 004b2c41
    TEST EDX,EDX                        ; 004b2c44
    JZ 0x004b2c62                       ; 004b2c46
        ;   XREF to: 004b2c62 (CONDITIONAL_JUMP)  ; LAB_004b2c62
    PUSH 0xc4                           ; 004b2c48
    PUSH 0x62604b                       ; 004b2c4d | = "..\\engine\\fileio.cpp"
    PUSH EDX                            ; 004b2c52
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b2c53
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004b2c58
    MOV dword ptr [EBP],0x0             ; 004b2c5b
    LEA EAX,[ESP + 0x104]               ; 004b2c62
        ;   Label: LAB_004b2c62
    PUSH EAX                            ; 004b2c69
    LEA EAX,[EBX*0x4 + 0x0]             ; 004b2c6a
    SUB EAX,EBX                         ; 004b2c71
    SHL EAX,0x3                         ; 004b2c73
    MOV EDX,dword ptr [ESP + 0x180]     ; 004b2c76
    MOV EBX,EAX                         ; 004b2c7d
    SHL EAX,0x4                         ; 004b2c7f
    MOV EDX,dword ptr [EDX + 0x4]       ; 004b2c82
    SUB EAX,EBX                         ; 004b2c85
    ADD EAX,EDX                         ; 004b2c87
    ADD EAX,0x104                       ; 004b2c89
    PUSH EAX                            ; 004b2c8e
    LEA EAX,[ESP + 0x8]                 ; 004b2c8f
    PUSH EAX                            ; 004b2c93
    PUSH 0x626335                       ; 004b2c94 | = "Multiple checkout detected for %s (us..."
    MOV EBX,dword ptr [0x00678a60]      ; 004b2c99 | g_CEditorToolsPtr
    PUSH EBX                            ; 004b2c9f | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b2ca0
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 004b2ca5
    JMP 0x004b2ad5                      ; 004b2ca8
        ;   XREF to: 004b2ad5 (UNCONDITIONAL_JUMP)  ; LAB_004b2ad5
    MOV EAX,ESP                         ; 004b2cad
        ;   Label: LAB_004b2cad
    PUSH EAX                            ; 004b2caf
    MOV EBX,dword ptr [ESP + 0x180]     ; 004b2cb0
    PUSH EBX                            ; 004b2cb7
    CALL engine_fileio.cpp_CCheckOutList_add_FUN_004b2d00 ; 004b2cb8
        ;   XREF to: 004b2d00 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CCheckOutList_add_FUN_004b2d00(CCheckOutList * this_ptr, CCheckOutItem * new_entry)
    ADD ESP,0x8                         ; 004b2cbd
    TEST EAX,EAX                        ; 004b2cc0
    JNZ 0x004b2a95                      ; 004b2cc2
        ;   XREF to: 004b2a95 (CONDITIONAL_JUMP)  ; LAB_004b2a95
    MOV ESI,dword ptr [EBP]             ; 004b2cc8
    TEST ESI,ESI                        ; 004b2ccb
    JZ 0x004b2ce9                       ; 004b2ccd
        ;   XREF to: 004b2ce9 (CONDITIONAL_JUMP)  ; LAB_004b2ce9
    PUSH 0xc4                           ; 004b2ccf
    PUSH 0x62604b                       ; 004b2cd4 | = "..\\engine\\fileio.cpp"
    PUSH ESI                            ; 004b2cd9
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b2cda
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004b2cdf
    MOV dword ptr [EBP],0x0             ; 004b2ce2
    PUSH 0x6263b3                       ; 004b2ce9 | = "Out of memory reading checkout file....."
        ;   Label: LAB_004b2ce9
    MOV EAX,[0x00678a60]                ; 004b2cee | g_CEditorToolsPtr
    PUSH EAX                            ; 004b2cf3 | g_CEditorToolsInstance
    JMP 0x004b2acd                      ; 004b2cf4
        ;   XREF to: 004b2acd (UNCONDITIONAL_JUMP)  ; LAB_004b2acd

