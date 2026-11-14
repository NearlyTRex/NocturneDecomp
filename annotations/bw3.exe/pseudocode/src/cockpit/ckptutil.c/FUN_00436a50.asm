; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_FUN_00436a50(char *param_1,int param_2,int param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_stdio.c_fclose_FUN_005a3a90
;   crt_unknown.c_FUN_005a3140
;   crt_unknown.c_sprintf_FUN_005a28c0
;   engine_dosio.cpp_FUN_004659c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00436a50
        ;   Label: cockpit_ckptutil.c_FUN_00436a50
    PUSH ESI                            ; 00436a51
    PUSH EDI                            ; 00436a52
    PUSH EBP                            ; 00436a53
    SUB ESP,0x5c                        ; 00436a54
    MOV ESI,dword ptr [ESP + 0x70]      ; 00436a57
    MOV EBX,dword ptr [ESP + 0x78]      ; 00436a5b
    CMP dword ptr [ESP + 0x74],0x0      ; 00436a5f
    JZ 0x00436b54                       ; 00436a64
        ;   XREF to: 00436b54 (CONDITIONAL_JUMP)  ; LAB_00436b54
    PUSH 0x5b8b71                       ; 00436a6a
        ;   Label: LAB_00436a6a
    PUSH ESI                            ; 00436a6f
    PUSH 0x5b8b74                       ; 00436a70
    CALL engine_dosio.cpp_FUN_004659c0  ; 00436a75
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00436a7a
    MOV EDI,EAX                         ; 00436a7d
    TEST EAX,EAX                        ; 00436a7f
    JNZ 0x00436ab6                      ; 00436a81
        ;   XREF to: 00436ab6 (CONDITIONAL_JUMP)  ; LAB_00436ab6
    PUSH ESI                            ; 00436a83
    PUSH 0x5b8b78                       ; 00436a84
    LEA EAX,[ESP + 0x8]                 ; 00436a89
    PUSH EAX                            ; 00436a8d
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00436a8e
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV EAX,0x4fe                       ; 00436a93
    ADD ESP,0xc                         ; 00436a98
    MOV [0x01d71de4],EAX                ; 00436a9b | DAT_01d71de4
    MOV EAX,ESP                         ; 00436aa0
    MOV EBP,0x5b8b9b                    ; 00436aa2
    PUSH EAX                            ; 00436aa7
    MOV dword ptr [0x01d71de0],EBP      ; 00436aa8 | DAT_01d71de0
    CALL core_main.c_FUN_004e4330       ; 00436aae
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00436ab3
    PUSH EBX                            ; 00436ab6
        ;   Label: LAB_00436ab6
    PUSH 0x5b8bb1                       ; 00436ab7
    PUSH EDI                            ; 00436abc
    CALL crt_unknown.c_FUN_005a3140     ; 00436abd
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 00436ac2
    TEST EBX,EBX                        ; 00436ac5
    JLE 0x00436b9e                      ; 00436ac7
        ;   XREF to: 00436b9e (CONDITIONAL_JUMP)  ; LAB_00436b9e
    MOV EAX,dword ptr [ESP + 0x74]      ; 00436acd
    SHL EBX,0x3                         ; 00436ad1
    XOR ESI,ESI                         ; 00436ad4
    MOV dword ptr [ESP + 0x54],EAX      ; 00436ad6
    MOV dword ptr [ESP + 0x50],EBX      ; 00436ada
    MOV dword ptr [ESP + 0x58],ESI      ; 00436ade
    MOV EAX,dword ptr [ESP + 0x54]      ; 00436ae2
        ;   Label: LAB_00436ae2
    MOV EBP,dword ptr [EAX + 0x4]       ; 00436ae6
    PUSH EBP                            ; 00436ae9
    PUSH 0x5b8bb5                       ; 00436aea
    PUSH EDI                            ; 00436aef
    XOR EBX,EBX                         ; 00436af0
    CALL crt_unknown.c_FUN_005a3140     ; 00436af2
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 00436af7
    XOR ESI,ESI                         ; 00436afa
    MOV EBP,dword ptr [ESP + 0x58]      ; 00436afc
    MOV EAX,dword ptr [ESP + 0x74]      ; 00436b00
        ;   Label: LAB_00436b00
    ADD EAX,EBP                         ; 00436b04
    CMP EBX,dword ptr [EAX + 0x4]       ; 00436b06
    JGE 0x00436b7c                      ; 00436b09
        ;   XREF to: 00436b7c (CONDITIONAL_JUMP)  ; LAB_00436b7c
    MOV EAX,dword ptr [EAX]             ; 00436b0b
    MOV DX,word ptr [ESI + EAX*0x1 + 0x6] ; 00436b0d
    MOV ECX,EDX                         ; 00436b12
    SHR CX,0xf                          ; 00436b14
    ADD EDX,EDX                         ; 00436b18
    AND ECX,0xffff                      ; 00436b1a
    SAR DX,0x1                          ; 00436b20
    PUSH ECX                            ; 00436b23
    MOVSX ECX,DX                        ; 00436b24
    MOV DX,word ptr [ESI + EAX*0x1 + 0x4] ; 00436b27
    PUSH ECX                            ; 00436b2c
    MOVSX ECX,DX                        ; 00436b2d
    MOV DX,word ptr [ESI + EAX*0x1 + 0x2] ; 00436b30
    PUSH ECX                            ; 00436b35
    MOVSX ECX,DX                        ; 00436b36
    MOV AX,word ptr [ESI + EAX*0x1]     ; 00436b39
    PUSH ECX                            ; 00436b3d
    CWDE                                ; 00436b3e
    PUSH EAX                            ; 00436b3f
    PUSH 0x5b8bb9                       ; 00436b40
    PUSH EDI                            ; 00436b45
    ADD ESI,0x8                         ; 00436b46
    INC EBX                             ; 00436b49
    CALL crt_unknown.c_FUN_005a3140     ; 00436b4a
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x1c                        ; 00436b4f
    JMP 0x00436b00                      ; 00436b52
        ;   XREF to: 00436b00 (UNCONDITIONAL_JUMP)  ; LAB_00436b00
    MOV ECX,0x5b8b41                    ; 00436b54
        ;   Label: LAB_00436b54
    MOV EDI,0x4f7                       ; 00436b59
    PUSH 0x5b8b57                       ; 00436b5e
    MOV dword ptr [0x01d71de0],ECX      ; 00436b63 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 00436b69 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00436b6f
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00436b74
    JMP 0x00436a6a                      ; 00436b77
        ;   XREF to: 00436a6a (UNCONDITIONAL_JUMP)  ; LAB_00436a6a
    MOV EDX,dword ptr [ESP + 0x58]      ; 00436b7c
        ;   Label: LAB_00436b7c
    MOV ECX,dword ptr [ESP + 0x54]      ; 00436b80
    MOV EBX,dword ptr [ESP + 0x50]      ; 00436b84
    ADD EDX,0x8                         ; 00436b88
    ADD ECX,0x8                         ; 00436b8b
    MOV dword ptr [ESP + 0x58],EDX      ; 00436b8e
    MOV dword ptr [ESP + 0x54],ECX      ; 00436b92
    CMP EDX,EBX                         ; 00436b96
    JL 0x00436ae2                       ; 00436b98
        ;   XREF to: 00436ae2 (CONDITIONAL_JUMP)  ; LAB_00436ae2
    PUSH EDI                            ; 00436b9e
        ;   Label: LAB_00436b9e
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 00436b9f
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 00436ba4
    ADD ESP,0x5c                        ; 00436ba7
    POP EBP                             ; 00436baa
    POP EDI                             ; 00436bab
    POP ESI                             ; 00436bac
    POP EBX                             ; 00436bad
    RET                                 ; 00436bae

