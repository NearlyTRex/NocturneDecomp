; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_captureDebugMovieFrame_FUN_004b2a50(void)
;
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_006164a4
;   undefined4 DAT_006164a8
;   undefined4 DAT_00617dd4
;   undefined4 DAT_01cb80d0
;   undefined4 DAT_01cb80d4
;   undefined4 DAT_01cb80d8
;   undefined4 DAT_01cb80dc
;
; Called Functions:
;   crt_stdio.c_fclose_FUN_005b89c0
;   crt_stdio.c_fputc_FUN_005bab40
;   crt_unknown.c_sprintf_FUN_005b7790
;   engine_2d.c_drawText_FUN_00401fe0
;   engine_dosio.cpp_FUN_00460c70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b2a50
        ;   Label: core_game.cpp_captureDebugMovieFrame_FUN_004b2a50
    PUSH ESI                            ; 004b2a51
    PUSH EDI                            ; 004b2a52
    PUSH EBP                            ; 004b2a53
    SUB ESP,0x150                       ; 004b2a54
    CMP dword ptr [0x01cb80d0],0x0      ; 004b2a5a | DAT_01cb80d0
    JNZ 0x004b2a6e                      ; 004b2a61
        ;   XREF to: 004b2a6e (CONDITIONAL_JUMP)  ; LAB_004b2a6e
    ADD ESP,0x150                       ; 004b2a63
        ;   Label: LAB_004b2a63
    POP EBP                             ; 004b2a69
    POP EDI                             ; 004b2a6a
    POP ESI                             ; 004b2a6b
    POP EBX                             ; 004b2a6c
    RET                                 ; 004b2a6d
    PUSH 0x1d                           ; 004b2a6e
        ;   Label: LAB_004b2a6e
    MOV EAX,[0x00617dd4]                ; 004b2a70 | DAT_00617dd4
    PUSH EAX                            ; 004b2a75
    MOV EDX,dword ptr [EAX]             ; 004b2a76
    CALL dword ptr [EDX]                ; 004b2a78
    ADD ESP,0x8                         ; 004b2a7a
    TEST EAX,EAX                        ; 004b2a7d
    JZ 0x004b2aab                       ; 004b2a7f
        ;   XREF to: 004b2aab (CONDITIONAL_JUMP)  ; LAB_004b2aab
    PUSH 0x2f                           ; 004b2a81
    MOV EAX,[0x00617dd4]                ; 004b2a83 | DAT_00617dd4
    PUSH EAX                            ; 004b2a88
    MOV EDX,dword ptr [EAX]             ; 004b2a89
    CALL dword ptr [EDX + 0x4]          ; 004b2a8b
    ADD ESP,0x8                         ; 004b2a8e
    TEST EAX,EAX                        ; 004b2a91
    JZ 0x004b2aab                       ; 004b2a93
        ;   XREF to: 004b2aab (CONDITIONAL_JUMP)  ; LAB_004b2aab
    MOV ECX,dword ptr [0x01cb80d4]      ; 004b2a95 | DAT_01cb80d4
    TEST ECX,ECX                        ; 004b2a9b
    JZ 0x004b2d4d                       ; 004b2a9d
        ;   XREF to: 004b2d4d (CONDITIONAL_JUMP)  ; LAB_004b2d4d
    XOR EDI,EDI                         ; 004b2aa3
    MOV dword ptr [0x01cb80d4],EDI      ; 004b2aa5 | DAT_01cb80d4
    MOV EBP,dword ptr [0x01cb80d8]      ; 004b2aab | DAT_01cb80d8
        ;   Label: LAB_004b2aab
    TEST EBP,EBP                        ; 004b2ab1
    JLE 0x004b2ac1                      ; 004b2ab3
        ;   XREF to: 004b2ac1 (CONDITIONAL_JUMP)  ; LAB_004b2ac1
    CMP EBP,dword ptr [0x01cb80dc]      ; 004b2ab5 | DAT_01cb80dc
    JLE 0x004b2d63                      ; 004b2abb
        ;   XREF to: 004b2d63 (CONDITIONAL_JUMP)  ; LAB_004b2d63
    CMP dword ptr [0x01cb80d4],0x0      ; 004b2ac1 | DAT_01cb80d4
        ;   Label: LAB_004b2ac1
    JZ 0x004b2a63                       ; 004b2ac8
        ;   XREF to: 004b2a63 (CONDITIONAL_JUMP)  ; LAB_004b2a63
    MOV EBX,dword ptr [0x01cb80dc]      ; 004b2aca | DAT_01cb80dc
    PUSH EBX                            ; 004b2ad0
    PUSH 0x5d72b7                       ; 004b2ad1
    LEA EAX,[ESP + 0xd0]                ; 004b2ad6
    PUSH EAX                            ; 004b2add
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004b2ade
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b2ae3
    LEA EAX,[ESP + 0xc8]                ; 004b2ae6
    PUSH EAX                            ; 004b2aed
    PUSH 0x5d72c3                       ; 004b2aee
    LEA EAX,[ESP + 0x8]                 ; 004b2af3
    PUSH EAX                            ; 004b2af7
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004b2af8
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b2afd
    PUSH 0x5d72e4                       ; 004b2b00
    LEA EAX,[ESP + 0xcc]                ; 004b2b05
    PUSH EAX                            ; 004b2b0c
    PUSH 0x5d72e7                       ; 004b2b0d
    CALL engine_dosio.cpp_FUN_00460c70  ; 004b2b12
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00460c70(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004b2b17
    MOV dword ptr [ESP + 0x134],EAX     ; 004b2b1a
    TEST EAX,EAX                        ; 004b2b21
    JZ 0x004b2a63                       ; 004b2b23
        ;   XREF to: 004b2a63 (CONDITIONAL_JUMP)  ; LAB_004b2a63
    XOR ESI,ESI                         ; 004b2b29
    MOV EDI,dword ptr [0x006164a8]      ; 004b2b2b | DAT_006164a8
    MOV dword ptr [ESP + 0x130],ESI     ; 004b2b31
    TEST EDI,EDI                        ; 004b2b38
    JLE 0x004b2d14                      ; 004b2b3a
        ;   XREF to: 004b2d14 (CONDITIONAL_JUMP)  ; LAB_004b2d14
    XOR ESI,ESI                         ; 004b2b40
        ;   Label: LAB_004b2b40
    MOV EDI,dword ptr [0x006164a4]      ; 004b2b42 | DAT_006164a4
    MOV dword ptr [ESP + 0x138],ESI     ; 004b2b48
    TEST EDI,EDI                        ; 004b2b4f
    JLE 0x004b2cf7                      ; 004b2b51
        ;   XREF to: 004b2cf7 (CONDITIONAL_JUMP)  ; LAB_004b2cf7
    MOV EAX,dword ptr [ESP + 0x130]     ; 004b2b57
    INC EAX                             ; 004b2b5e
    MOV dword ptr [ESP + 0x12c],EAX     ; 004b2b5f
    MOV EDX,dword ptr [ESP + 0x138]     ; 004b2b66
        ;   Label: LAB_004b2b66
    MOV ESI,dword ptr [0x006141b8]      ; 004b2b6d | DAT_006141b8
    IMUL EDX,ESI                        ; 004b2b73
    MOV EDI,dword ptr [0x006164a4]      ; 004b2b76 | DAT_006164a4
    MOV EAX,EDX                         ; 004b2b7c
    SAR EDX,0x1f                        ; 004b2b7e
    IDIV EDI                            ; 004b2b81
    MOV EDX,dword ptr [ESP + 0x138]     ; 004b2b83
    INC EDX                             ; 004b2b8a
    IMUL EDX,ESI                        ; 004b2b8b
    MOV dword ptr [ESP + 0x140],EAX     ; 004b2b8e
    MOV EAX,EDX                         ; 004b2b95
    SAR EDX,0x1f                        ; 004b2b97
    IDIV EDI                            ; 004b2b9a
    MOV EBX,dword ptr [0x006141bc]      ; 004b2b9c | DAT_006141bc
    MOV EDX,dword ptr [ESP + 0x130]     ; 004b2ba2
    IMUL EDX,EBX                        ; 004b2ba9
    MOV ESI,dword ptr [0x006164a8]      ; 004b2bac | DAT_006164a8
    MOV dword ptr [ESP + 0x148],EAX     ; 004b2bb2
    MOV EAX,EDX                         ; 004b2bb9
    SAR EDX,0x1f                        ; 004b2bbb
    IDIV ESI                            ; 004b2bbe
    MOV EDX,dword ptr [ESP + 0x12c]     ; 004b2bc0
    IMUL EDX,EBX                        ; 004b2bc7
    MOV ECX,EAX                         ; 004b2bca
    MOV EAX,EDX                         ; 004b2bcc
    SAR EDX,0x1f                        ; 004b2bce
    IDIV ESI                            ; 004b2bd1
    XOR EDI,EDI                         ; 004b2bd3
    XOR EBX,EBX                         ; 004b2bd5
    MOV EDX,EAX                         ; 004b2bd7
    XOR EAX,EAX                         ; 004b2bd9
    XOR ESI,ESI                         ; 004b2bdb
    MOV dword ptr [ESP + 0x14c],EAX     ; 004b2bdd
    CMP ECX,EDX                         ; 004b2be4
    JGE 0x004b2c8d                      ; 004b2be6
        ;   XREF to: 004b2c8d (CONDITIONAL_JUMP)  ; LAB_004b2c8d
    LEA EAX,[ECX*0x4 + 0x0]             ; 004b2bec
    SHL EDX,0x2                         ; 004b2bf3
    MOV dword ptr [ESP + 0x144],EAX     ; 004b2bf6
    MOV dword ptr [ESP + 0x13c],EDX     ; 004b2bfd
    MOV EBP,dword ptr [ESP + 0x148]     ; 004b2c04
        ;   Label: LAB_004b2c04
    MOV ECX,dword ptr [ESP + 0x140]     ; 004b2c0b
    CMP ECX,EBP                         ; 004b2c12
    JGE 0x004b2c6d                      ; 004b2c14
        ;   XREF to: 004b2c6d (CONDITIONAL_JUMP)  ; LAB_004b2c6d
    MOV EAX,dword ptr [ESP + 0x144]     ; 004b2c16
    LEA EDX,[ECX*0x4 + 0x0]             ; 004b2c1d
    MOV EAX,dword ptr [EAX + 0x1c2a38c] ; 004b2c24
    ADD EDX,EAX                         ; 004b2c2a
    MOV EAX,dword ptr [EDX]             ; 004b2c2c
        ;   Label: LAB_004b2c2c
    MOV EBP,EAX                         ; 004b2c2e
    SHR EBP,0x10                        ; 004b2c30
    AND EBP,0xff                        ; 004b2c33
    ADD EDX,0x4                         ; 004b2c39
    ADD EBX,EBP                         ; 004b2c3c
    MOV EBP,EAX                         ; 004b2c3e
    INC ECX                             ; 004b2c40
    SHR EBP,0x8                         ; 004b2c41
    AND EAX,0xff                        ; 004b2c44
    ADD EDI,EAX                         ; 004b2c49
    AND EBP,0xff                        ; 004b2c4b
    MOV EAX,dword ptr [ESP + 0x14c]     ; 004b2c51
    INC EAX                             ; 004b2c58
    ADD ESI,EBP                         ; 004b2c59
    MOV EBP,dword ptr [ESP + 0x148]     ; 004b2c5b
    MOV dword ptr [ESP + 0x14c],EAX     ; 004b2c62
    CMP ECX,EBP                         ; 004b2c69
    JL 0x004b2c2c                       ; 004b2c6b
        ;   XREF to: 004b2c2c (CONDITIONAL_JUMP)  ; LAB_004b2c2c
    MOV EDX,dword ptr [ESP + 0x144]     ; 004b2c6d
        ;   Label: LAB_004b2c6d
    ADD EDX,0x4                         ; 004b2c74
    MOV ECX,dword ptr [ESP + 0x13c]     ; 004b2c77
    MOV dword ptr [ESP + 0x144],EDX     ; 004b2c7e
    CMP EDX,ECX                         ; 004b2c85
    JL 0x004b2c04                       ; 004b2c87
        ;   XREF to: 004b2c04 (CONDITIONAL_JUMP)  ; LAB_004b2c04
    MOV EBP,dword ptr [ESP + 0x14c]     ; 004b2c8d
        ;   Label: LAB_004b2c8d
    MOV EDX,EBX                         ; 004b2c94
    MOV EAX,EBX                         ; 004b2c96
    SAR EDX,0x1f                        ; 004b2c98
    IDIV EBP                            ; 004b2c9b
    MOV EBX,EAX                         ; 004b2c9d
    MOV EDX,ESI                         ; 004b2c9f
    MOV EAX,ESI                         ; 004b2ca1
    SAR EDX,0x1f                        ; 004b2ca3
    IDIV EBP                            ; 004b2ca6
    MOV ESI,EAX                         ; 004b2ca8
    MOV EDX,EDI                         ; 004b2caa
    MOV EAX,EDI                         ; 004b2cac
    SAR EDX,0x1f                        ; 004b2cae
    IDIV EBP                            ; 004b2cb1
    MOV EBP,dword ptr [ESP + 0x134]     ; 004b2cb3
    PUSH EBP                            ; 004b2cba
    PUSH EBX                            ; 004b2cbb
    MOV EDI,EAX                         ; 004b2cbc
    CALL crt_stdio.c_fputc_FUN_005bab40 ; 004b2cbe
        ;   XREF to: 005bab40 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_005bab40(int character, _FILE * file)
    ADD ESP,0x8                         ; 004b2cc3
    PUSH EBP                            ; 004b2cc6
    PUSH ESI                            ; 004b2cc7
    CALL crt_stdio.c_fputc_FUN_005bab40 ; 004b2cc8
        ;   XREF to: 005bab40 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_005bab40(int character, _FILE * file)
    ADD ESP,0x8                         ; 004b2ccd
    PUSH EBP                            ; 004b2cd0
    PUSH EDI                            ; 004b2cd1
    CALL crt_stdio.c_fputc_FUN_005bab40 ; 004b2cd2
        ;   XREF to: 005bab40 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_005bab40(int character, _FILE * file)
    ADD ESP,0x8                         ; 004b2cd7
    MOV ECX,dword ptr [ESP + 0x138]     ; 004b2cda
    INC ECX                             ; 004b2ce1
    MOV EBX,dword ptr [0x006164a4]      ; 004b2ce2 | DAT_006164a4
    MOV dword ptr [ESP + 0x138],ECX     ; 004b2ce8
    CMP ECX,EBX                         ; 004b2cef
    JL 0x004b2b66                       ; 004b2cf1
        ;   XREF to: 004b2b66 (CONDITIONAL_JUMP)  ; LAB_004b2b66
    MOV EAX,dword ptr [ESP + 0x130]     ; 004b2cf7
        ;   Label: LAB_004b2cf7
    INC EAX                             ; 004b2cfe
    MOV EDX,dword ptr [0x006164a8]      ; 004b2cff | DAT_006164a8
    MOV dword ptr [ESP + 0x130],EAX     ; 004b2d05
    CMP EAX,EDX                         ; 004b2d0c
    JL 0x004b2b40                       ; 004b2d0e
        ;   XREF to: 004b2b40 (CONDITIONAL_JUMP)  ; LAB_004b2b40
    MOV ECX,dword ptr [ESP + 0x134]     ; 004b2d14
        ;   Label: LAB_004b2d14
    PUSH ECX                            ; 004b2d1b
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 004b2d1c
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 004b2d21
    PUSH 0x0                            ; 004b2d24
    PUSH 0x0                            ; 004b2d26
    LEA EAX,[ESP + 0x8]                 ; 004b2d28
    PUSH EAX                            ; 004b2d2c
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004b2d2d
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    MOV EBX,dword ptr [0x01cb80dc]      ; 004b2d32 | DAT_01cb80dc
    INC EBX                             ; 004b2d38
    ADD ESP,0xc                         ; 004b2d39
    MOV dword ptr [0x01cb80dc],EBX      ; 004b2d3c | DAT_01cb80dc
    ADD ESP,0x150                       ; 004b2d42
    POP EBP                             ; 004b2d48
    POP EDI                             ; 004b2d49
    POP ESI                             ; 004b2d4a
    POP EBX                             ; 004b2d4b
    RET                                 ; 004b2d4c
    MOV ESI,0x1                         ; 004b2d4d
        ;   Label: LAB_004b2d4d
    MOV dword ptr [0x01cb80dc],ECX      ; 004b2d52 | DAT_01cb80dc
    MOV dword ptr [0x01cb80d4],ESI      ; 004b2d58 | DAT_01cb80d4
    JMP 0x004b2aab                      ; 004b2d5e
        ;   XREF to: 004b2aab (UNCONDITIONAL_JUMP)  ; LAB_004b2aab
    XOR EBP,EBP                         ; 004b2d63
        ;   Label: LAB_004b2d63
    MOV dword ptr [0x01cb80d4],EBP      ; 004b2d65 | DAT_01cb80d4
    ADD ESP,0x150                       ; 004b2d6b
    POP EBP                             ; 004b2d71
    POP EDI                             ; 004b2d72
    POP ESI                             ; 004b2d73
    POP EBX                             ; 004b2d74
    RET                                 ; 004b2d75

