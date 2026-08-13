; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_initializeHuffmanTablesOnce_FUN_004e7b00(void)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   TerminatedCString s_d_0058b77c
;   TerminatedCString s_u_0058b77f
;   TerminatedCString s_sound_mp3_cpp_0058b782
;   TerminatedCString s_wrong_table_number_u_Fil_0058b793
;   TerminatedCString s_sound_mp3_cpp_0058b7b4
;   TerminatedCString s_wrong_table_u_reference_0058b7c5
;   TerminatedCString s_sound_mp3_cpp_0058b7e9
;   TerminatedCString s_MP3_Huffman_tree_overflo_0058b7fa
;   TerminatedCString s_sound_mp3_cpp_0058b81f
;   TerminatedCString s_huffman_decodertable_err_0058b830
;   TerminatedCString s_sound_mp3_cpp_0058b862
;   TerminatedCString s_decoder_table_read_error_0058b873
;   undefined4 DAT_005bdba0
;   undefined4 DAT_005bdba4
;   undefined4 DAT_005bdba8
;   ... and 8 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   crt_stdio.c_sprintf_FUN_00563c90
;   crt_stdio.c_sscanf_FUN_00566b5c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004e7b00
        ;   Label: sound_mp3.cpp_initializeHuffmanTablesOnce_FUN_004e7b00
    SUB ESP,0xc                         ; 004e7b01
    MOV EDX,dword ptr [0x01cd6320]      ; 004e7b04 | DAT_01cd6320
    TEST EDX,EDX                        ; 004e7b0a
    JNZ 0x004e7c97                      ; 004e7b0c
        ;   XREF to: 004e7c97 (CONDITIONAL_JUMP)  ; LAB_004e7c97
    PUSH EDI                            ; 004e7b12
    PUSH ESI                            ; 004e7b13
    PUSH EBX                            ; 004e7b14
    MOV ECX,0x1cd8c28                   ; 004e7b15
    MOV dword ptr [ESP + 0x14],EDX      ; 004e7b1a
    XOR EBX,EBX                         ; 004e7b1e
    XOR EBP,EBP                         ; 004e7b20
    MOV dword ptr [ESP + 0x10],ECX      ; 004e7b22
    PUSH EBP                            ; 004e7b26
        ;   Label: LAB_004e7b26
    PUSH 0x58b77c                       ; 004e7b27 | = "%d"
    MOV EDI,dword ptr [ESP + 0x18]      ; 004e7b2c
    PUSH EDI                            ; 004e7b30
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004e7b31
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 004e7b36
    MOV EAX,dword ptr [ESP + 0x14]      ; 004e7b39
    MOV EAX,dword ptr [EAX + 0x5bdba0]  ; 004e7b3d | DAT_005bdba0
    MOV dword ptr [EBX + 0x1cd944c],EAX ; 004e7b43 | DAT_01cd944c
    MOV EAX,dword ptr [ESP + 0x14]      ; 004e7b49
    MOV EAX,dword ptr [EAX + 0x5bdba4]  ; 004e7b4d | DAT_005bdba4
    MOV dword ptr [EBX + 0x1cd8c2c],EAX ; 004e7b53
    MOV EAX,dword ptr [ESP + 0x14]      ; 004e7b59
    MOV EAX,dword ptr [EAX + 0x5bdba8]  ; 004e7b5d | DAT_005bdba8
    MOV dword ptr [EBX + 0x1cd8c30],EAX ; 004e7b63
    MOV EAX,dword ptr [ESP + 0x14]      ; 004e7b69
    MOV EAX,dword ptr [EAX + 0x5bdbac]  ; 004e7b6d | DAT_005bdbac
    MOV dword ptr [EBX + 0x1cd8c34],EAX ; 004e7b73
    MOV EAX,0x1                         ; 004e7b79
    MOV CL,byte ptr [EBX + 0x1cd8c34]   ; 004e7b7e
    SHL EAX,CL                          ; 004e7b84
    DEC EAX                             ; 004e7b86
    MOV dword ptr [EBX + 0x1cd8c38],EAX ; 004e7b87
    LEA EAX,[ESP + 0xc]                 ; 004e7b8d
    PUSH EAX                            ; 004e7b91
    PUSH 0x58b77f                       ; 004e7b92 | = "%u"
    PUSH EDI                            ; 004e7b97
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 004e7b98
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0xc                         ; 004e7b9d
    CMP EBP,dword ptr [ESP + 0xc]       ; 004e7ba0
    JNZ 0x004e7c9c                      ; 004e7ba4
        ;   XREF to: 004e7c9c (CONDITIONAL_JUMP)  ; LAB_004e7c9c
    MOV EAX,dword ptr [ESP + 0x14]      ; 004e7baa
        ;   Label: LAB_004e7baa
    MOV EAX,dword ptr [EAX + 0x5bdbb0]  ; 004e7bae | DAT_005bdbb0
    TEST EAX,EAX                        ; 004e7bb4
    JL 0x004e7ce1                       ; 004e7bb6
        ;   XREF to: 004e7ce1 (CONDITIONAL_JUMP)  ; LAB_004e7ce1
    MOV dword ptr [EBX + 0x1cd8c3c],EAX ; 004e7bbc
    IMUL EDX,EAX,0x828                  ; 004e7bc2
    MOV ESI,0x1cd8c28                   ; 004e7bc8
    MOV EDI,0x1cd8c28                   ; 004e7bcd
    MOV ECX,0x802                       ; 004e7bd2
    ADD EDI,EBX                         ; 004e7bd7
    ADD ESI,EDX                         ; 004e7bd9
    ADD EDI,0x20                        ; 004e7bdb
    ADD ESI,0x20                        ; 004e7bde
    PUSH EDI                            ; 004e7be1
    MOV EAX,ECX                         ; 004e7be2
    SHR ECX,0x2                         ; 004e7be4
    MOVSD.REP ES:EDI,ESI                ; 004e7be7
    MOV CL,AL                           ; 004e7be9
    AND CL,0x3                          ; 004e7beb
    MOVSB.REP ES:EDI,ESI                ; 004e7bee
    POP EDI                             ; 004e7bf0
    MOV EAX,dword ptr [EDX + 0x1cd944c] ; 004e7bf1 | DAT_01cd944c
    MOV dword ptr [EBX + 0x1cd944c],EAX ; 004e7bf7 | DAT_01cd944c
    MOV EAX,dword ptr [EBX + 0x1cd8c2c] ; 004e7bfd
    CMP EAX,dword ptr [EDX + 0x1cd8c2c] ; 004e7c03
    JZ 0x004e7cca                       ; 004e7c09
        ;   XREF to: 004e7cca (CONDITIONAL_JUMP)  ; LAB_004e7cca
    PUSH 0x1cd8b28                      ; 004e7c0f | DAT_01cd8b28
        ;   Label: LAB_004e7c0f
    PUSH EBP                            ; 004e7c14
    MOV EDI,0x58b7b4                    ; 004e7c15 | = "..\\sound\\mp3.cpp"
    MOV EAX,0xd76                       ; 004e7c1a
    PUSH 0x58b7c5                       ; 004e7c1f | = "wrong table %u reference.  File: %s"
    MOV dword ptr [0x01cc4800],EDI      ; 004e7c24 | g_CurrentFilename
        ;   Label: LAB_004e7c24
    MOV [0x01cc4804],EAX                ; 004e7c2a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 004e7c2f
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0xc                         ; 004e7c34
    MOV ESI,dword ptr [ESP + 0x14]      ; 004e7c37
        ;   Label: LAB_004e7c37
    MOV ECX,dword ptr [ESP + 0x10]      ; 004e7c3b
    ADD EBX,0x828                       ; 004e7c3f
    INC EBP                             ; 004e7c45
    ADD ESI,0x18                        ; 004e7c46
    ADD ECX,0x828                       ; 004e7c49
    MOV dword ptr [ESP + 0x14],ESI      ; 004e7c4f
    MOV dword ptr [ESP + 0x10],ECX      ; 004e7c53
    CMP EBP,0x22                        ; 004e7c57
    JL 0x004e7b26                       ; 004e7c5a
        ;   XREF to: 004e7b26 (CONDITIONAL_JUMP)  ; LAB_004e7b26
    JZ 0x004e7c8a                       ; 004e7c60
        ;   XREF to: 004e7c8a (CONDITIONAL_JUMP)  ; LAB_004e7c8a
    PUSH 0x1cd8b28                      ; 004e7c62 | DAT_01cd8b28
    MOV EDI,0x58b862                    ; 004e7c67 | = "..\\sound\\mp3.cpp"
    MOV EBP,0xda1                       ; 004e7c6c
    PUSH 0x58b873                       ; 004e7c71 | = "decoder table read error.  File: %s"
    MOV dword ptr [0x01cc4800],EDI      ; 004e7c76 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EBP      ; 004e7c7c | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 004e7c82
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x8                         ; 004e7c87
    MOV dword ptr [0x01cd6320],0x1      ; 004e7c8a | DAT_01cd6320
        ;   Label: LAB_004e7c8a
    POP EBX                             ; 004e7c94
    POP ESI                             ; 004e7c95
    POP EDI                             ; 004e7c96
    ADD ESP,0xc                         ; 004e7c97
        ;   Label: LAB_004e7c97
    POP EBP                             ; 004e7c9a
    RET                                 ; 004e7c9b
    PUSH 0x1cd8b28                      ; 004e7c9c | DAT_01cd8b28
        ;   Label: LAB_004e7c9c
    PUSH EBP                            ; 004e7ca1
    MOV ECX,0x58b782                    ; 004e7ca2 | = "..\\sound\\mp3.cpp"
    MOV ESI,0xd6b                       ; 004e7ca7
    PUSH 0x58b793                       ; 004e7cac | = "wrong table number %u.  File: %s"
    MOV dword ptr [0x01cc4800],ECX      ; 004e7cb1 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ESI      ; 004e7cb7 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 004e7cbd
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0xc                         ; 004e7cc2
    JMP 0x004e7baa                      ; 004e7cc5
        ;   XREF to: 004e7baa (UNCONDITIONAL_JUMP)  ; LAB_004e7baa
    MOV ESI,dword ptr [EDX + 0x1cd8c30] ; 004e7cca
        ;   Label: LAB_004e7cca
    CMP ESI,dword ptr [EBX + 0x1cd8c30] ; 004e7cd0
    JNZ 0x004e7c0f                      ; 004e7cd6
        ;   XREF to: 004e7c0f (CONDITIONAL_JUMP)  ; LAB_004e7c0f
    JMP 0x004e7c37                      ; 004e7cdc
        ;   XREF to: 004e7c37 (UNCONDITIONAL_JUMP)  ; LAB_004e7c37
    CMP EAX,-0x1                        ; 004e7ce1
        ;   Label: LAB_004e7ce1
    JNZ 0x004e7d70                      ; 004e7ce4
        ;   XREF to: 004e7d70 (CONDITIONAL_JUMP)  ; LAB_004e7d70
    MOV ECX,dword ptr [EBX + 0x1cd944c] ; 004e7cea | DAT_01cd944c
    MOV dword ptr [EBX + 0x1cd8c3c],EAX ; 004e7cf0
    CMP ECX,0x401                       ; 004e7cf6
    JNC 0x004e7d46                      ; 004e7cfc
        ;   XREF to: 004e7d46 (CONDITIONAL_JUMP)  ; LAB_004e7d46
    MOV EAX,dword ptr [ESP + 0x14]      ; 004e7cfe
        ;   Label: LAB_004e7cfe
    MOV EDI,EBX                         ; 004e7d02
    MOV ECX,EBX                         ; 004e7d04
    MOV EDX,dword ptr [EBX + 0x1cd944c] ; 004e7d06 | DAT_01cd944c
    XOR ESI,ESI                         ; 004e7d0c
    MOV EAX,dword ptr [EAX + 0x5bdbb4]  ; 004e7d0e | DAT_005bdbb4
    TEST EDX,EDX                        ; 004e7d14
    JBE 0x004e7c37                      ; 004e7d16
        ;   XREF to: 004e7c37 (CONDITIONAL_JUMP)  ; LAB_004e7c37
    MOV EDX,EAX                         ; 004e7d1c
        ;   Label: LAB_004e7d1c
    MOV DL,byte ptr [EDX]               ; 004e7d1e
    INC EAX                             ; 004e7d20
    MOV byte ptr [ECX + 0x1cd8c48],DL   ; 004e7d21
    MOV EDX,EAX                         ; 004e7d27
    ADD ECX,0x2                         ; 004e7d29
    MOV DL,byte ptr [EDX]               ; 004e7d2c
    MOV byte ptr [ECX + 0x1cd8c47],DL   ; 004e7d2e
    INC ESI                             ; 004e7d34
    MOV EDX,dword ptr [EDI + 0x1cd944c] ; 004e7d35 | DAT_01cd944c
    INC EAX                             ; 004e7d3b
    CMP ESI,EDX                         ; 004e7d3c
    JNC 0x004e7c37                      ; 004e7d3e
        ;   XREF to: 004e7c37 (CONDITIONAL_JUMP)  ; LAB_004e7c37
    JMP 0x004e7d1c                      ; 004e7d44
        ;   XREF to: 004e7d1c (UNCONDITIONAL_JUMP)  ; LAB_004e7d1c
    PUSH 0x1cd8b28                      ; 004e7d46 | DAT_01cd8b28
        ;   Label: LAB_004e7d46
    MOV ESI,0x58b7e9                    ; 004e7d4b | = "..\\sound\\mp3.cpp"
    MOV EDI,0xd7e                       ; 004e7d50
    PUSH 0x58b7fa                       ; 004e7d55 | = "MP3 Huffman tree overflow!  File: %s"
    MOV dword ptr [0x01cc4800],ESI      ; 004e7d5a | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDI      ; 004e7d60 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 004e7d66
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x8                         ; 004e7d6b
    JMP 0x004e7cfe                      ; 004e7d6e
        ;   XREF to: 004e7cfe (UNCONDITIONAL_JUMP)  ; LAB_004e7cfe
    PUSH 0x1cd8b28                      ; 004e7d70 | DAT_01cd8b28
        ;   Label: LAB_004e7d70
    PUSH EBP                            ; 004e7d75
    MOV EDI,0x58b81f                    ; 004e7d76 | = "..\\sound\\mp3.cpp"
    MOV EAX,0xd8d                       ; 004e7d7b
    PUSH 0x58b830                       ; 004e7d80 | = "huffman decodertable error at table %..."
    JMP 0x004e7c24                      ; 004e7d85
        ;   XREF to: 004e7c24 (UNCONDITIONAL_JUMP)  ; LAB_004e7c24

