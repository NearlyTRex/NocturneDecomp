; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_fileio_cpp_CFileManager_load_FUN_004b6c00(CFileManager *this_ptr)
;
; Parameters:
; CFileManager *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x224]:1  local_224
; undefined1       Stack[-0x223]:1  local_223
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 at 004b5abc
;
; Referenced Globals:
;   TerminatedCString s_engine_fileio_cpp_00627ab1
;   TerminatedCString s_rt_00627ac6
;   TerminatedCString s_level_lst_00627ac9
;   TerminatedCString s_engine_fileio_cpp_00627ad3
;   TerminatedCString s_Unable_to_open_read_leve_00627ae8
;   TerminatedCString s_anon_00627b06
;   TerminatedCString s_engine_fileio_cpp_00627b0e
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_ctype.c_toupper_FUN_005ff9e0
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   crt_string.c__stricmp_FUN_005fe7f0
;   engine_fileio.cpp_CFileManager_registerFiles_FUN_004b5640
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b6c00
        ;   Label: engine_fileio.cpp_CFileManager_load_FUN_004b6c00
    PUSH ESI                            ; 004b6c01
    PUSH EDI                            ; 004b6c02
    PUSH EBP                            ; 004b6c03
    SUB ESP,0x214                       ; 004b6c04
    PUSH 0x906                          ; 004b6c0a
    PUSH 0x627ab1                       ; 004b6c0f | = "..\\engine\\fileio.cpp"
    PUSH 0x627ac6                       ; 004b6c14 | = "rt"
    PUSH 0x0                            ; 004b6c19
    MOV EAX,dword ptr [ESP + 0x238]     ; 004b6c1b
    PUSH 0x627ac9                       ; 004b6c22 | = "level.lst"
    MOV dword ptr [EAX + 0x4],0x0       ; 004b6c27
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004b6c2e
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 004b6c33
    MOV EBP,EAX                         ; 004b6c36
    TEST EAX,EAX                        ; 004b6c38
    JZ 0x004b6c7b                       ; 004b6c3a
        ;   XREF to: 004b6c7b (CONDITIONAL_JUMP)  ; LAB_004b6c7b
    MOV EAX,ESP                         ; 004b6c3c
        ;   Label: LAB_004b6c3c
    PUSH EAX                            ; 004b6c3e
    PUSH 0x627b06                       ; 004b6c3f | = " %[^\n]\n"
    PUSH EBP                            ; 004b6c44
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004b6c45
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004b6c4a
    MOV ESI,EAX                         ; 004b6c4d
    CMP EAX,-0x1                        ; 004b6c4f
    JZ 0x004b6cb3                       ; 004b6c52
        ;   XREF to: 004b6cb3 (CONDITIONAL_JUMP)  ; LAB_004b6cb3
    XOR EBX,EBX                         ; 004b6c54
    MOV EDI,ESP                         ; 004b6c56
        ;   Label: LAB_004b6c56
    SUB ECX,ECX                         ; 004b6c58
    DEC ECX                             ; 004b6c5a
    XOR EAX,EAX                         ; 004b6c5b
    SCASB.REPNE ES:EDI                  ; 004b6c5d
    NOT ECX                             ; 004b6c5f
    DEC ECX                             ; 004b6c61
    CMP EBX,ECX                         ; 004b6c62
    JNC 0x004b6ca0                      ; 004b6c64
        ;   XREF to: 004b6ca0 (CONDITIONAL_JUMP)  ; LAB_004b6ca0
    XOR EAX,EAX                         ; 004b6c66
    MOV AL,byte ptr [ESP + EBX*0x1]     ; 004b6c68
    PUSH EAX                            ; 004b6c6b
    INC EBX                             ; 004b6c6c
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004b6c6d
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004b6c72
    MOV byte ptr [ESP + EBX*0x1 + -0x1],AL ; 004b6c75
    JMP 0x004b6c56                      ; 004b6c79
        ;   XREF to: 004b6c56 (UNCONDITIONAL_JUMP)  ; LAB_004b6c56
    MOV EDX,0x627ad3                    ; 004b6c7b | = "..\\engine\\fileio.cpp"
        ;   Label: LAB_004b6c7b
    MOV ECX,0x907                       ; 004b6c80
    PUSH 0x627ae8                       ; 004b6c85 | = "Unable to open read level.lst"
    MOV dword ptr [0x02f0ca48],EDX      ; 004b6c8a | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004b6c90 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b6c96
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004b6c9b
    JMP 0x004b6c3c                      ; 004b6c9e
        ;   XREF to: 004b6c3c (UNCONDITIONAL_JUMP)  ; LAB_004b6c3c
    MOV EAX,ESP                         ; 004b6ca0
        ;   Label: LAB_004b6ca0
    PUSH EAX                            ; 004b6ca2
    MOV EBX,dword ptr [ESP + 0x22c]     ; 004b6ca3
    PUSH EBX                            ; 004b6caa
    CALL engine_fileio.cpp_CFileManager_registerFiles_FUN_004b5640 ; 004b6cab
        ;   XREF to: 004b5640 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CFileManager_registerFiles_FUN_004b5640(CFileManager * this_ptr, char * filename_list)
    ADD ESP,0x8                         ; 004b6cb0
    CMP ESI,-0x1                        ; 004b6cb3
        ;   Label: LAB_004b6cb3
    JNZ 0x004b6c3c                      ; 004b6cb6
        ;   XREF to: 004b6c3c (CONDITIONAL_JUMP)  ; LAB_004b6c3c
    PUSH 0x914                          ; 004b6cb8
    PUSH 0x627b0e                       ; 004b6cbd | = "..\\engine\\fileio.cpp"
    PUSH EBP                            ; 004b6cc2
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b6cc3
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004b6cc8
    XOR ESI,ESI                         ; 004b6ccb
    MOV EAX,dword ptr [ESP + 0x228]     ; 004b6ccd
    MOV dword ptr [ESP + 0x204],ESI     ; 004b6cd4
    ADD EAX,0x8                         ; 004b6cdb
    MOV dword ptr [ESP + 0x200],ESI     ; 004b6cde
    MOV dword ptr [ESP + 0x20c],EAX     ; 004b6ce5
    MOV EAX,dword ptr [ESP + 0x228]     ; 004b6cec
        ;   Label: LAB_004b6cec
    MOV EAX,dword ptr [EAX + 0x4]       ; 004b6cf3
    MOV EBP,dword ptr [ESP + 0x204]     ; 004b6cf6
    DEC EAX                             ; 004b6cfd
    CMP EAX,EBP                         ; 004b6cfe
    JLE 0x004b370a                      ; 004b6d00
        ;   XREF to: 004b370a (CONDITIONAL_JUMP)  ; LAB_004b370a
    MOV ECX,dword ptr [ESP + 0x228]     ; 004b6d06
    LEA EAX,[EBP + 0x1]                 ; 004b6d0d
    MOV EDX,dword ptr [ECX + 0x4]       ; 004b6d10
    MOV dword ptr [ESP + 0x210],EAX     ; 004b6d13
    CMP EAX,EDX                         ; 004b6d1a
    JL 0x004b6de9                       ; 004b6d1c
        ;   XREF to: 004b6de9 (CONDITIONAL_JUMP)  ; LAB_004b6de9
    MOV EBP,dword ptr [ESP + 0x204]     ; 004b6d22
        ;   Label: LAB_004b6d22
    MOV EDI,dword ptr [ESP + 0x200]     ; 004b6d29
    INC EBP                             ; 004b6d30
    ADD EDI,0x80                        ; 004b6d31
    MOV dword ptr [ESP + 0x204],EBP     ; 004b6d37
    MOV dword ptr [ESP + 0x200],EDI     ; 004b6d3e
    JMP 0x004b6cec                      ; 004b6d45
        ;   XREF to: 004b6cec (UNCONDITIONAL_JUMP)  ; LAB_004b6cec
    MOV ECX,dword ptr [ESP + 0x210]     ; 004b6d47
        ;   Label: LAB_004b6d47
    INC ECX                             ; 004b6d4e
    MOV dword ptr [ESP + 0x210],ECX     ; 004b6d4f
    MOV EAX,ECX                         ; 004b6d56
    MOV ECX,dword ptr [ESP + 0x228]     ; 004b6d58
    MOV ESI,dword ptr [ECX + 0x4]       ; 004b6d5f
    ADD EBX,0x80                        ; 004b6d62
    CMP EAX,ESI                         ; 004b6d68
    JGE 0x004b6d22                      ; 004b6d6a
        ;   XREF to: 004b6d22 (CONDITIONAL_JUMP)  ; LAB_004b6d22
    MOV EBP,dword ptr [ESP + 0x20c]     ; 004b6d6c
        ;   Label: LAB_004b6d6c
    MOV EDX,dword ptr [ESP + 0x208]     ; 004b6d73
    PUSH EBX                            ; 004b6d7a
    ADD EBP,EDX                         ; 004b6d7b
    PUSH EBP                            ; 004b6d7d
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004b6d7e
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004b6d83
    TEST EAX,EAX                        ; 004b6d86
    JLE 0x004b6d47                      ; 004b6d88
        ;   XREF to: 004b6d47 (CONDITIONAL_JUMP)  ; LAB_004b6d47
    MOV EDI,ESP                         ; 004b6d8a
    MOV ESI,EBP                         ; 004b6d8c
    PUSH EDI                            ; 004b6d8e
    MOV AL,byte ptr [ESI]               ; 004b6d8f
        ;   Label: LAB_004b6d8f
    MOV byte ptr [EDI],AL               ; 004b6d91
    CMP AL,0x0                          ; 004b6d93
    JZ 0x004b6da7                       ; 004b6d95
        ;   XREF to: 004b6da7 (CONDITIONAL_JUMP)  ; LAB_004b6da7
    MOV AL,byte ptr [ESI + 0x1]         ; 004b6d97
    ADD ESI,0x2                         ; 004b6d9a
    MOV byte ptr [EDI + 0x1],AL         ; 004b6d9d
    ADD EDI,0x2                         ; 004b6da0
    CMP AL,0x0                          ; 004b6da3
    JNZ 0x004b6d8f                      ; 004b6da5
        ;   XREF to: 004b6d8f (CONDITIONAL_JUMP)  ; LAB_004b6d8f
    POP EDI                             ; 004b6da7
        ;   Label: LAB_004b6da7
    MOV ESI,EBX                         ; 004b6da8
    MOV EDI,EBP                         ; 004b6daa
    PUSH EDI                            ; 004b6dac
    MOV AL,byte ptr [ESI]               ; 004b6dad
        ;   Label: LAB_004b6dad
    MOV byte ptr [EDI],AL               ; 004b6daf
    CMP AL,0x0                          ; 004b6db1
    JZ 0x004b6dc5                       ; 004b6db3
        ;   XREF to: 004b6dc5 (CONDITIONAL_JUMP)  ; LAB_004b6dc5
    MOV AL,byte ptr [ESI + 0x1]         ; 004b6db5
    ADD ESI,0x2                         ; 004b6db8
    MOV byte ptr [EDI + 0x1],AL         ; 004b6dbb
    ADD EDI,0x2                         ; 004b6dbe
    CMP AL,0x0                          ; 004b6dc1
    JNZ 0x004b6dad                      ; 004b6dc3
        ;   XREF to: 004b6dad (CONDITIONAL_JUMP)  ; LAB_004b6dad
    POP EDI                             ; 004b6dc5
        ;   Label: LAB_004b6dc5
    MOV ESI,ESP                         ; 004b6dc6
    MOV EDI,EBX                         ; 004b6dc8
    PUSH EDI                            ; 004b6dca
    MOV AL,byte ptr [ESI]               ; 004b6dcb
        ;   Label: LAB_004b6dcb
    MOV byte ptr [EDI],AL               ; 004b6dcd
    CMP AL,0x0                          ; 004b6dcf
    JZ 0x004b6de3                       ; 004b6dd1
        ;   XREF to: 004b6de3 (CONDITIONAL_JUMP)  ; LAB_004b6de3
    MOV AL,byte ptr [ESI + 0x1]         ; 004b6dd3
    ADD ESI,0x2                         ; 004b6dd6
    MOV byte ptr [EDI + 0x1],AL         ; 004b6dd9
    ADD EDI,0x2                         ; 004b6ddc
    CMP AL,0x0                          ; 004b6ddf
    JNZ 0x004b6dcb                      ; 004b6de1
        ;   XREF to: 004b6dcb (CONDITIONAL_JUMP)  ; LAB_004b6dcb
    POP EDI                             ; 004b6de3
        ;   Label: LAB_004b6de3
    JMP 0x004b6d47                      ; 004b6de4
        ;   XREF to: 004b6d47 (UNCONDITIONAL_JUMP)  ; LAB_004b6d47
    MOV EAX,dword ptr [ESP + 0x200]     ; 004b6de9
        ;   Label: LAB_004b6de9
    MOV EBX,dword ptr [ESP + 0x210]     ; 004b6df0
    MOV dword ptr [ESP + 0x208],EAX     ; 004b6df7
    SHL EBX,0x7                         ; 004b6dfe
    ADD EBX,dword ptr [ESP + 0x20c]     ; 004b6e01
    JMP 0x004b6d6c                      ; 004b6e08
        ;   XREF to: 004b6d6c (UNCONDITIONAL_JUMP)  ; LAB_004b6d6c

