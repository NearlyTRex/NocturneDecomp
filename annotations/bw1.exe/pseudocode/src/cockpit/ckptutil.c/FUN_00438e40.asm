; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_FUN_00438e40(char *param_1,int param_2,int param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_stdio.c_fclose_FUN_005c0d10
;   crt_unknown.c_FUN_005c03c0
;   crt_unknown.c_sprintf_FUN_005bfb40
;   engine_dosio.cpp_FUN_00479180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438e40
        ;   Label: cockpit_ckptutil.c_FUN_00438e40
    PUSH ESI                            ; 00438e41
    PUSH EDI                            ; 00438e42
    PUSH EBP                            ; 00438e43
    SUB ESP,0x5c                        ; 00438e44
    MOV ESI,dword ptr [ESP + 0x70]      ; 00438e47
    MOV EBX,dword ptr [ESP + 0x78]      ; 00438e4b
    CMP dword ptr [ESP + 0x74],0x0      ; 00438e4f
    JZ 0x00438f44                       ; 00438e54
        ;   XREF to: 00438f44 (CONDITIONAL_JUMP)  ; LAB_00438f44
    PUSH 0x5d6301                       ; 00438e5a
        ;   Label: LAB_00438e5a
    PUSH ESI                            ; 00438e5f
    PUSH 0x5d6304                       ; 00438e60
    CALL engine_dosio.cpp_FUN_00479180  ; 00438e65
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00438e6a
    MOV EDI,EAX                         ; 00438e6d
    TEST EAX,EAX                        ; 00438e6f
    JNZ 0x00438ea6                      ; 00438e71
        ;   XREF to: 00438ea6 (CONDITIONAL_JUMP)  ; LAB_00438ea6
    PUSH ESI                            ; 00438e73
    PUSH 0x5d6308                       ; 00438e74
    LEA EAX,[ESP + 0x8]                 ; 00438e79
    PUSH EAX                            ; 00438e7d
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00438e7e
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    MOV EAX,0x4fe                       ; 00438e83
    ADD ESP,0xc                         ; 00438e88
    MOV [0x01d1d404],EAX                ; 00438e8b | DAT_01d1d404
    MOV EAX,ESP                         ; 00438e90
    MOV EBP,0x5d632b                    ; 00438e92
    PUSH EAX                            ; 00438e97
    MOV dword ptr [0x01d1d400],EBP      ; 00438e98 | DAT_01d1d400
    CALL core_main.c_FUN_005030e0       ; 00438e9e
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00438ea3
    PUSH EBX                            ; 00438ea6
        ;   Label: LAB_00438ea6
    PUSH 0x5d6341                       ; 00438ea7
    PUSH EDI                            ; 00438eac
    CALL crt_unknown.c_FUN_005c03c0     ; 00438ead
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 00438eb2
    TEST EBX,EBX                        ; 00438eb5
    JLE 0x00438f8e                      ; 00438eb7
        ;   XREF to: 00438f8e (CONDITIONAL_JUMP)  ; LAB_00438f8e
    MOV EAX,dword ptr [ESP + 0x74]      ; 00438ebd
    SHL EBX,0x3                         ; 00438ec1
    XOR ESI,ESI                         ; 00438ec4
    MOV dword ptr [ESP + 0x54],EAX      ; 00438ec6
    MOV dword ptr [ESP + 0x50],EBX      ; 00438eca
    MOV dword ptr [ESP + 0x58],ESI      ; 00438ece
    MOV EAX,dword ptr [ESP + 0x54]      ; 00438ed2
        ;   Label: LAB_00438ed2
    MOV EBP,dword ptr [EAX + 0x4]       ; 00438ed6
    PUSH EBP                            ; 00438ed9
    PUSH 0x5d6345                       ; 00438eda
    PUSH EDI                            ; 00438edf
    XOR EBX,EBX                         ; 00438ee0
    CALL crt_unknown.c_FUN_005c03c0     ; 00438ee2
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 00438ee7
    XOR ESI,ESI                         ; 00438eea
    MOV EBP,dword ptr [ESP + 0x58]      ; 00438eec
    MOV EAX,dword ptr [ESP + 0x74]      ; 00438ef0
        ;   Label: LAB_00438ef0
    ADD EAX,EBP                         ; 00438ef4
    CMP EBX,dword ptr [EAX + 0x4]       ; 00438ef6
    JGE 0x00438f6c                      ; 00438ef9
        ;   XREF to: 00438f6c (CONDITIONAL_JUMP)  ; LAB_00438f6c
    MOV EAX,dword ptr [EAX]             ; 00438efb
    MOV DX,word ptr [ESI + EAX*0x1 + 0x6] ; 00438efd
    MOV ECX,EDX                         ; 00438f02
    SHR CX,0xf                          ; 00438f04
    ADD EDX,EDX                         ; 00438f08
    AND ECX,0xffff                      ; 00438f0a
    SAR DX,0x1                          ; 00438f10
    PUSH ECX                            ; 00438f13
    MOVSX ECX,DX                        ; 00438f14
    MOV DX,word ptr [ESI + EAX*0x1 + 0x4] ; 00438f17
    PUSH ECX                            ; 00438f1c
    MOVSX ECX,DX                        ; 00438f1d
    MOV DX,word ptr [ESI + EAX*0x1 + 0x2] ; 00438f20
    PUSH ECX                            ; 00438f25
    MOVSX ECX,DX                        ; 00438f26
    MOV AX,word ptr [ESI + EAX*0x1]     ; 00438f29
    PUSH ECX                            ; 00438f2d
    CWDE                                ; 00438f2e
    PUSH EAX                            ; 00438f2f
    PUSH 0x5d6349                       ; 00438f30
    PUSH EDI                            ; 00438f35
    ADD ESI,0x8                         ; 00438f36
    INC EBX                             ; 00438f39
    CALL crt_unknown.c_FUN_005c03c0     ; 00438f3a
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x1c                        ; 00438f3f
    JMP 0x00438ef0                      ; 00438f42
        ;   XREF to: 00438ef0 (UNCONDITIONAL_JUMP)  ; LAB_00438ef0
    MOV ECX,0x5d62d1                    ; 00438f44
        ;   Label: LAB_00438f44
    MOV EDI,0x4f7                       ; 00438f49
    PUSH 0x5d62e7                       ; 00438f4e
    MOV dword ptr [0x01d1d400],ECX      ; 00438f53 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 00438f59 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00438f5f
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00438f64
    JMP 0x00438e5a                      ; 00438f67
        ;   XREF to: 00438e5a (UNCONDITIONAL_JUMP)  ; LAB_00438e5a
    MOV EDX,dword ptr [ESP + 0x58]      ; 00438f6c
        ;   Label: LAB_00438f6c
    MOV ECX,dword ptr [ESP + 0x54]      ; 00438f70
    MOV EBX,dword ptr [ESP + 0x50]      ; 00438f74
    ADD EDX,0x8                         ; 00438f78
    ADD ECX,0x8                         ; 00438f7b
    MOV dword ptr [ESP + 0x58],EDX      ; 00438f7e
    MOV dword ptr [ESP + 0x54],ECX      ; 00438f82
    CMP EDX,EBX                         ; 00438f86
    JL 0x00438ed2                       ; 00438f88
        ;   XREF to: 00438ed2 (CONDITIONAL_JUMP)  ; LAB_00438ed2
    PUSH EDI                            ; 00438f8e
        ;   Label: LAB_00438f8e
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 00438f8f
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 00438f94
    ADD ESP,0x5c                        ; 00438f97
    POP EBP                             ; 00438f9a
    POP EDI                             ; 00438f9b
    POP ESI                             ; 00438f9c
    POP EBX                             ; 00438f9d
    RET                                 ; 00438f9e

