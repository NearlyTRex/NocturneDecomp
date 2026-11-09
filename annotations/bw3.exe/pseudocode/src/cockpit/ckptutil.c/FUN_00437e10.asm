; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_FUN_00437e10(undefined4 *param_1,int param_2,uint param_3,uint param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_unknown.c_FUN_005a28c0
;   crt_unknown.c_FUN_005a3650
;   crt_unknown.c_FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00437e10
        ;   Label: cockpit_ckptutil.c_FUN_00437e10
    PUSH ESI                            ; 00437e11
    PUSH EDI                            ; 00437e12
    PUSH EBP                            ; 00437e13
    SUB ESP,0x68                        ; 00437e14
    MOV EBP,dword ptr [ESP + 0x88]      ; 00437e17
    MOV EAX,dword ptr [ESP + 0x80]      ; 00437e1e
    IMUL EAX,EBP                        ; 00437e25
    MOV EBX,dword ptr [ESP + 0x80]      ; 00437e28
    IMUL EBX,dword ptr [ESP + 0x84]     ; 00437e2f
    IMUL EBX,EBP                        ; 00437e37
    PUSH EBX                            ; 00437e3a
    MOV dword ptr [ESP + 0x64],EAX      ; 00437e3b
    CALL crt_unknown.c_FUN_005a3650     ; 00437e3f
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 00437e44
    MOV dword ptr [ESP + 0x54],EAX      ; 00437e47
    TEST EAX,EAX                        ; 00437e4b
    JZ 0x00437efc                       ; 00437e4d
        ;   XREF to: 00437efc (CONDITIONAL_JUMP)  ; LAB_00437efc
    CMP EBP,0x1                         ; 00437e53
        ;   Label: LAB_00437e53
    JNZ 0x00437f35                      ; 00437e56
        ;   XREF to: 00437f35 (CONDITIONAL_JUMP)  ; LAB_00437f35
    MOV EAX,dword ptr [ESP + 0x84]      ; 00437e5c
    XOR ESI,ESI                         ; 00437e63
    TEST EAX,EAX                        ; 00437e65
    JBE 0x00437ebd                      ; 00437e67
        ;   XREF to: 00437ebd (CONDITIONAL_JUMP)  ; LAB_00437ebd
    MOV EAX,dword ptr [ESP + 0x60]      ; 00437e69
    MOV dword ptr [ESP + 0x50],EAX      ; 00437e6d
    IMUL EDI,EAX,0x0                    ; 00437e71
    MOV EAX,dword ptr [ESP + 0x84]      ; 00437e74
        ;   Label: LAB_00437e74
    MOV EDX,dword ptr [ESP + 0x7c]      ; 00437e7b
    MOV EBX,dword ptr [ESP + 0x54]      ; 00437e7f
    SUB EAX,ESI                         ; 00437e83
    MOV ECX,dword ptr [ESP + 0x60]      ; 00437e85
    DEC EAX                             ; 00437e89
    ADD EDX,EDI                         ; 00437e8a
    ADD EBX,EAX                         ; 00437e8c
    XOR EAX,EAX                         ; 00437e8e
    TEST ECX,ECX                        ; 00437e90
    JBE 0x00437eab                      ; 00437e92
        ;   XREF to: 00437eab (CONDITIONAL_JUMP)  ; LAB_00437eab
    MOV CL,byte ptr [EDX]               ; 00437e94
        ;   Label: LAB_00437e94
    MOV byte ptr [EBX],CL               ; 00437e96
    MOV ECX,dword ptr [ESP + 0x84]      ; 00437e98
    INC EAX                             ; 00437e9f
    ADD EBX,ECX                         ; 00437ea0
    MOV ECX,dword ptr [ESP + 0x60]      ; 00437ea2
    INC EDX                             ; 00437ea6
    CMP EAX,ECX                         ; 00437ea7
    JC 0x00437e94                       ; 00437ea9
        ;   XREF to: 00437e94 (CONDITIONAL_JUMP)  ; LAB_00437e94
    MOV EBX,dword ptr [ESP + 0x50]      ; 00437eab
        ;   Label: LAB_00437eab
    MOV EAX,dword ptr [ESP + 0x84]      ; 00437eaf
    INC ESI                             ; 00437eb6
    ADD EDI,EBX                         ; 00437eb7
    CMP ESI,EAX                         ; 00437eb9
    JC 0x00437e74                       ; 00437ebb
        ;   XREF to: 00437e74 (CONDITIONAL_JUMP)  ; LAB_00437e74
    MOV ECX,dword ptr [ESP + 0x80]      ; 00437ebd
        ;   Label: LAB_00437ebd
    IMUL ECX,dword ptr [ESP + 0x84]     ; 00437ec4
    IMUL ECX,EBP                        ; 00437ecc
    MOV ESI,dword ptr [ESP + 0x54]      ; 00437ecf
    MOV EDI,dword ptr [ESP + 0x7c]      ; 00437ed3
    PUSH EDI                            ; 00437ed7
    MOV EAX,ECX                         ; 00437ed8
    SHR ECX,0x2                         ; 00437eda
    MOVSD.REP ES:EDI,ESI                ; 00437edd
    MOV CL,AL                           ; 00437edf
    AND CL,0x3                          ; 00437ee1
    MOVSB.REP ES:EDI,ESI                ; 00437ee4
    POP EDI                             ; 00437ee6
    MOV ESI,dword ptr [ESP + 0x54]      ; 00437ee7
    PUSH ESI                            ; 00437eeb
    CALL crt_unknown.c_FUN_005a3770     ; 00437eec
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 00437ef1
    ADD ESP,0x68                        ; 00437ef4
    POP EBP                             ; 00437ef7
    POP EDI                             ; 00437ef8
    POP ESI                             ; 00437ef9
    POP EBX                             ; 00437efa
    RET                                 ; 00437efb
    PUSH EBX                            ; 00437efc
        ;   Label: LAB_00437efc
    PUSH 0x5b8cf4                       ; 00437efd
    LEA EAX,[ESP + 0x8]                 ; 00437f02
    PUSH EAX                            ; 00437f06
    MOV EBX,0x801                       ; 00437f07
    CALL crt_unknown.c_FUN_005a28c0     ; 00437f0c
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 00437f11
    MOV EAX,ESP                         ; 00437f14
    MOV ECX,0x5b8d2e                    ; 00437f16
    PUSH EAX                            ; 00437f1b
    MOV dword ptr [0x01d71de4],EBX      ; 00437f1c | DAT_01d71de4
    MOV dword ptr [0x01d71de0],ECX      ; 00437f22 | DAT_01d71de0
    CALL core_main.c_FUN_004e4330       ; 00437f28
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00437f2d
    JMP 0x00437e53                      ; 00437f30
        ;   XREF to: 00437e53 (UNCONDITIONAL_JUMP)  ; LAB_00437e53
    XOR ESI,ESI                         ; 00437f35
        ;   Label: LAB_00437f35
    MOV EDI,dword ptr [ESP + 0x84]      ; 00437f37
    MOV dword ptr [ESP + 0x58],ESI      ; 00437f3e
    TEST EDI,EDI                        ; 00437f42
    JBE 0x00437ebd                      ; 00437f44
        ;   XREF to: 00437ebd (CONDITIONAL_JUMP)  ; LAB_00437ebd
    MOV EAX,EDI                         ; 00437f4a
    IMUL EAX,EBP                        ; 00437f4c
    MOV dword ptr [ESP + 0x5c],EAX      ; 00437f4f
    MOV EDX,dword ptr [ESP + 0x58]      ; 00437f53
        ;   Label: LAB_00437f53
    IMUL EDX,dword ptr [ESP + 0x60]     ; 00437f57
    MOV EAX,dword ptr [ESP + 0x84]      ; 00437f5c
    SUB EAX,dword ptr [ESP + 0x58]      ; 00437f63
    DEC EAX                             ; 00437f67
    IMUL EAX,EBP                        ; 00437f68
    MOV ESI,dword ptr [ESP + 0x7c]      ; 00437f6b
    MOV EBX,dword ptr [ESP + 0x54]      ; 00437f6f
    MOV ECX,dword ptr [ESP + 0x60]      ; 00437f73
    ADD EBX,EAX                         ; 00437f77
    XOR EAX,EAX                         ; 00437f79
    ADD EDX,ESI                         ; 00437f7b
    MOV dword ptr [ESP + 0x64],EAX      ; 00437f7d
    TEST ECX,ECX                        ; 00437f81
    JBE 0x00437fb4                      ; 00437f83
        ;   XREF to: 00437fb4 (CONDITIONAL_JUMP)  ; LAB_00437fb4
    MOV ECX,EBP                         ; 00437f85
        ;   Label: LAB_00437f85
    MOV ESI,EDX                         ; 00437f87
    MOV EDI,EBX                         ; 00437f89
    PUSH EDI                            ; 00437f8b
    MOV EAX,ECX                         ; 00437f8c
    SHR ECX,0x2                         ; 00437f8e
    MOVSD.REP ES:EDI,ESI                ; 00437f91
    MOV CL,AL                           ; 00437f93
    AND CL,0x3                          ; 00437f95
    MOVSB.REP ES:EDI,ESI                ; 00437f98
    POP EDI                             ; 00437f9a
    MOV ESI,dword ptr [ESP + 0x5c]      ; 00437f9b
    MOV EDI,dword ptr [ESP + 0x64]      ; 00437f9f
    MOV ECX,dword ptr [ESP + 0x60]      ; 00437fa3
    ADD EDX,EBP                         ; 00437fa7
    INC EDI                             ; 00437fa9
    ADD EBX,ESI                         ; 00437faa
    MOV dword ptr [ESP + 0x64],EDI      ; 00437fac
    CMP EDI,ECX                         ; 00437fb0
    JC 0x00437f85                       ; 00437fb2
        ;   XREF to: 00437f85 (CONDITIONAL_JUMP)  ; LAB_00437f85
    MOV EDX,dword ptr [ESP + 0x58]      ; 00437fb4
        ;   Label: LAB_00437fb4
    INC EDX                             ; 00437fb8
    MOV ECX,dword ptr [ESP + 0x84]      ; 00437fb9
    MOV dword ptr [ESP + 0x58],EDX      ; 00437fc0
    CMP EDX,ECX                         ; 00437fc4
    JNC 0x00437ebd                      ; 00437fc6
        ;   XREF to: 00437ebd (CONDITIONAL_JUMP)  ; LAB_00437ebd
    JMP 0x00437f53                      ; 00437fcc
        ;   XREF to: 00437f53 (UNCONDITIONAL_JUMP)  ; LAB_00437f53

