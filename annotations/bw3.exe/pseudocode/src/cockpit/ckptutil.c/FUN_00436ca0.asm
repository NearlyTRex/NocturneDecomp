; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_FUN_00436ca0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_unknown.c_sprintf_FUN_005a28c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00436ca0
        ;   Label: cockpit_ckptutil.c_FUN_00436ca0
    PUSH ESI                            ; 00436ca1
    PUSH EDI                            ; 00436ca2
    PUSH EBP                            ; 00436ca3
    SUB ESP,0x104                       ; 00436ca4
    CMP dword ptr [ESP + 0x118],0x0     ; 00436caa
    JZ 0x00436dcd                       ; 00436cb2
        ;   XREF to: 00436dcd (CONDITIONAL_JUMP)  ; LAB_00436dcd
    MOV ECX,0xfb                        ; 00436cb8
    MOV EBX,dword ptr [ESP + 0x120]     ; 00436cbd
    XOR EDI,EDI                         ; 00436cc4
    MOV dword ptr [ESP + 0x100],ECX     ; 00436cc6
    TEST EBX,EBX                        ; 00436ccd
    JLE 0x00436dcd                      ; 00436ccf
        ;   XREF to: 00436dcd (CONDITIONAL_JUMP)  ; LAB_00436dcd
    MOV EBP,dword ptr [ESP + 0x124]     ; 00436cd5
    IMUL EBP,dword ptr [ESP + 0x128]    ; 00436cdc
    MOV ESI,dword ptr [ESP + 0x11c]     ; 00436ce4
    DEC EBP                             ; 00436ceb
    MOV AX,word ptr [ESI + 0x2]         ; 00436cec
        ;   Label: LAB_00436cec
    MOV EBX,dword ptr [ESP + 0x124]     ; 00436cf0
    MOVSX EDX,AX                        ; 00436cf7
    IMUL EDX,EBX                        ; 00436cfa
    MOV AX,word ptr [ESI]               ; 00436cfd
    MOVSX EBX,AX                        ; 00436d00
    ADD EBX,EDX                         ; 00436d03
    TEST EBX,EBX                        ; 00436d05
    JL 0x00436d0d                       ; 00436d07
        ;   XREF to: 00436d0d (CONDITIONAL_JUMP)  ; LAB_00436d0d
    CMP EBX,EBP                         ; 00436d09
    JLE 0x00436d40                      ; 00436d0b
        ;   XREF to: 00436d40 (CONDITIONAL_JUMP)  ; LAB_00436d40
    PUSH EDI                            ; 00436d0d
        ;   Label: LAB_00436d0d
    PUSH 0x5b8bcd                       ; 00436d0e
    LEA EAX,[ESP + 0x8]                 ; 00436d13
    PUSH EAX                            ; 00436d17
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00436d18
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV EAX,0x5b8be8                    ; 00436d1d
    ADD ESP,0xc                         ; 00436d22
    MOV [0x01d71de0],EAX                ; 00436d25 | DAT_01d71de0
    MOV EAX,ESP                         ; 00436d2a
    MOV EDX,0x54a                       ; 00436d2c
    PUSH EAX                            ; 00436d31
    MOV dword ptr [0x01d71de4],EDX      ; 00436d32 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00436d38
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00436d3d
    ADD EBX,dword ptr [ESP + 0x118]     ; 00436d40
        ;   Label: LAB_00436d40
    MOV AL,byte ptr [ESP + 0x100]       ; 00436d47
    MOV byte ptr [EBX],AL               ; 00436d4e
    MOV AX,word ptr [ESI + 0x6]         ; 00436d50
    ADD EAX,EAX                         ; 00436d54
    SAR AX,0x1                          ; 00436d56
    MOV EDX,dword ptr [ESP + 0x124]     ; 00436d59
    CWDE                                ; 00436d60
    IMUL EDX,EAX                        ; 00436d61
    MOV AX,word ptr [ESI + 0x4]         ; 00436d64
    MOVSX EBX,AX                        ; 00436d68
    ADD EBX,EDX                         ; 00436d6b
    TEST EBX,EBX                        ; 00436d6d
    JL 0x00436d75                       ; 00436d6f
        ;   XREF to: 00436d75 (CONDITIONAL_JUMP)  ; LAB_00436d75
    CMP EBX,EBP                         ; 00436d71
    JLE 0x00436da8                      ; 00436d73
        ;   XREF to: 00436da8 (CONDITIONAL_JUMP)  ; LAB_00436da8
    PUSH EDI                            ; 00436d75
        ;   Label: LAB_00436d75
    PUSH 0x5b8bfe                       ; 00436d76
    LEA EAX,[ESP + 0x8]                 ; 00436d7b
    PUSH EAX                            ; 00436d7f
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00436d80
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV EAX,0x5b8c19                    ; 00436d85
    ADD ESP,0xc                         ; 00436d8a
    MOV [0x01d71de0],EAX                ; 00436d8d | DAT_01d71de0
    MOV EAX,ESP                         ; 00436d92
    MOV EDX,0x553                       ; 00436d94
    PUSH EAX                            ; 00436d99
    MOV dword ptr [0x01d71de4],EDX      ; 00436d9a | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00436da0
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00436da5
    MOV EAX,dword ptr [ESP + 0x118]     ; 00436da8
        ;   Label: LAB_00436da8
    MOV EDX,dword ptr [ESP + 0x120]     ; 00436daf
    ADD ESI,0x8                         ; 00436db6
    ADD EBX,EAX                         ; 00436db9
    MOV AL,byte ptr [ESP + 0x100]       ; 00436dbb
    INC EDI                             ; 00436dc2
    MOV byte ptr [EBX],AL               ; 00436dc3
    CMP EDI,EDX                         ; 00436dc5
    JL 0x00436cec                       ; 00436dc7
        ;   XREF to: 00436cec (CONDITIONAL_JUMP)  ; LAB_00436cec
    ADD ESP,0x104                       ; 00436dcd
        ;   Label: LAB_00436dcd
    POP EBP                             ; 00436dd3
    POP EDI                             ; 00436dd4
    POP ESI                             ; 00436dd5
    POP EBX                             ; 00436dd6
    RET                                 ; 00436dd7

