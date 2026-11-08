; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00436be0(int param_1)
;
;
; Called Functions:
;   FUN_00408bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00436be0
        ;   Label: FUN_00436be0
    PUSH EDI                            ; 00436be1
    PUSH EBP                            ; 00436be2
    SUB ESP,0x60                        ; 00436be3
    MOV EBX,dword ptr [ESP + 0x70]      ; 00436be6
    MOV EBP,ESI                         ; 00436bea
    MOV EDX,0x461c3c00                  ; 00436bec
    MOV EDI,0xc61c3c00                  ; 00436bf1
    MOV dword ptr [ESP + 0x40],EDX      ; 00436bf6
    MOV dword ptr [ESP + 0x44],EDX      ; 00436bfa
    MOV dword ptr [ESP + 0x30],EDI      ; 00436bfe
    MOV dword ptr [ESP + 0x34],EDI      ; 00436c02
    MOV dword ptr [ESP + 0x38],EDI      ; 00436c06
    MOV dword ptr [ESP + 0x3c],EDX      ; 00436c0a
    MOV ECX,dword ptr [EBX + 0x158]     ; 00436c0e
    XOR EDI,EDI                         ; 00436c14
    TEST ECX,ECX                        ; 00436c16
    JLE 0x00436ca2                      ; 00436c18
        ;   XREF to: 00436ca2 (CONDITIONAL_JUMP)  ; LAB_00436ca2
    LEA ESI,[EBX + 0x28c]               ; 00436c1e
    FLD float ptr [ESI]                 ; 00436c24
        ;   Label: LAB_00436c24
    MOV EDX,ESI                         ; 00436c26
    FCOMP float ptr [ESP + 0x3c]        ; 00436c28
    FNSTSW AX                           ; 00436c2c
    SAHF                                ; 00436c2e
    JNC 0x00436c37                      ; 00436c2f
        ;   XREF to: 00436c37 (CONDITIONAL_JUMP)  ; LAB_00436c37
    MOV EAX,dword ptr [ESI]             ; 00436c31
    MOV dword ptr [ESP + 0x3c],EAX      ; 00436c33
    FLD float ptr [EDX + 0x4]           ; 00436c37
        ;   Label: LAB_00436c37
    FCOMP float ptr [ESP + 0x40]        ; 00436c3a
    FNSTSW AX                           ; 00436c3e
    SAHF                                ; 00436c40
    JNC 0x00436c4a                      ; 00436c41
        ;   XREF to: 00436c4a (CONDITIONAL_JUMP)  ; LAB_00436c4a
    MOV EAX,dword ptr [EDX + 0x4]       ; 00436c43
    MOV dword ptr [ESP + 0x40],EAX      ; 00436c46
    FLD float ptr [EDX + 0x8]           ; 00436c4a
        ;   Label: LAB_00436c4a
    FCOMP float ptr [ESP + 0x44]        ; 00436c4d
    FNSTSW AX                           ; 00436c51
    SAHF                                ; 00436c53
    JNC 0x00436c5d                      ; 00436c54
        ;   XREF to: 00436c5d (CONDITIONAL_JUMP)  ; LAB_00436c5d
    MOV EAX,dword ptr [EDX + 0x8]       ; 00436c56
    MOV dword ptr [ESP + 0x44],EAX      ; 00436c59
    FLD float ptr [EDX]                 ; 00436c5d
        ;   Label: LAB_00436c5d
    FCOMP float ptr [ESP + 0x30]        ; 00436c5f
    FNSTSW AX                           ; 00436c63
    SAHF                                ; 00436c65
    JBE 0x00436c6e                      ; 00436c66
        ;   XREF to: 00436c6e (CONDITIONAL_JUMP)  ; LAB_00436c6e
    MOV EAX,dword ptr [EDX]             ; 00436c68
    MOV dword ptr [ESP + 0x30],EAX      ; 00436c6a
    FLD float ptr [EDX + 0x4]           ; 00436c6e
        ;   Label: LAB_00436c6e
    FCOMP float ptr [ESP + 0x34]        ; 00436c71
    FNSTSW AX                           ; 00436c75
    SAHF                                ; 00436c77
    JBE 0x00436c81                      ; 00436c78
        ;   XREF to: 00436c81 (CONDITIONAL_JUMP)  ; LAB_00436c81
    MOV EAX,dword ptr [EDX + 0x4]       ; 00436c7a
    MOV dword ptr [ESP + 0x34],EAX      ; 00436c7d
    FLD float ptr [EDX + 0x8]           ; 00436c81
        ;   Label: LAB_00436c81
    FCOMP float ptr [ESP + 0x38]        ; 00436c84
    FNSTSW AX                           ; 00436c88
    SAHF                                ; 00436c8a
    JBE 0x00436c94                      ; 00436c8b
        ;   XREF to: 00436c94 (CONDITIONAL_JUMP)  ; LAB_00436c94
    MOV EAX,dword ptr [EDX + 0x8]       ; 00436c8d
    MOV dword ptr [ESP + 0x38],EAX      ; 00436c90
    INC EDI                             ; 00436c94
        ;   Label: LAB_00436c94
    MOV EAX,dword ptr [EBX + 0x158]     ; 00436c95
    ADD ESI,0x24                        ; 00436c9b
    CMP EDI,EAX                         ; 00436c9e
    JL 0x00436c24                       ; 00436ca0
        ;   XREF to: 00436c24 (CONDITIONAL_JUMP)  ; LAB_00436c24
    LEA EAX,[ESP + 0x3c]                ; 00436ca2
        ;   Label: LAB_00436ca2
    PUSH EAX                            ; 00436ca6
    PUSH EBX                            ; 00436ca7
    LEA ESI,[ESP + 0x50]                ; 00436ca8
    LEA EDI,[ESP + 0x5c]                ; 00436cac
    CALL FUN_00408bb0                   ; 00436cb0
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bb0()
    LEA ESI,[ESP + 0x50]                ; 00436cb5
    LEA EDX,[ESP + 0x5c]                ; 00436cb9
    ADD ESP,0x8                         ; 00436cbd
    MOV EAX,ESP                         ; 00436cc0
    MOVSD ES:EDI,ESI                    ; 00436cc2
    MOVSD ES:EDI,ESI                    ; 00436cc3
    MOVSD ES:EDI,ESI                    ; 00436cc4
    CMP EAX,EDX                         ; 00436cc5
    JZ 0x00436ce0                       ; 00436cc7
        ;   XREF to: 00436ce0 (CONDITIONAL_JUMP)  ; LAB_00436ce0
    MOV EAX,dword ptr [ESP + 0x54]      ; 00436cc9
    MOV dword ptr [ESP],EAX             ; 00436ccd
    MOV EAX,dword ptr [ESP + 0x58]      ; 00436cd0
    MOV dword ptr [ESP + 0x4],EAX       ; 00436cd4
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00436cd8
    MOV dword ptr [ESP + 0x8],EAX       ; 00436cdc
    LEA EAX,[ESP + 0x30]                ; 00436ce0
        ;   Label: LAB_00436ce0
    PUSH EAX                            ; 00436ce4
    PUSH EBX                            ; 00436ce5
    LEA ESI,[ESP + 0x2c]                ; 00436ce6
    LEA EDI,[ESP + 0x20]                ; 00436cea
    CALL FUN_00408bb0                   ; 00436cee
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bb0()
    LEA ESI,[ESP + 0x2c]                ; 00436cf3
    LEA EAX,[ESP + 0x20]                ; 00436cf7
    ADD ESP,0x8                         ; 00436cfb
    LEA EDX,[ESP + 0xc]                 ; 00436cfe
    MOVSD ES:EDI,ESI                    ; 00436d02
    MOVSD ES:EDI,ESI                    ; 00436d03
    MOVSD ES:EDI,ESI                    ; 00436d04
    CMP EDX,EAX                         ; 00436d05
    JNZ 0x00436d1d                      ; 00436d07
        ;   XREF to: 00436d1d (CONDITIONAL_JUMP)  ; LAB_00436d1d
    MOV ECX,0x6                         ; 00436d09
    MOV ESI,ESP                         ; 00436d0e
    MOV EDI,EBP                         ; 00436d10
    MOVSD.REP ES:EDI,ESI                ; 00436d12
    MOV EAX,EBP                         ; 00436d14
    ADD ESP,0x60                        ; 00436d16
    POP EBP                             ; 00436d19
    POP EDI                             ; 00436d1a
    POP EBX                             ; 00436d1b
    RET                                 ; 00436d1c
    MOV EAX,dword ptr [ESP + 0x18]      ; 00436d1d
        ;   Label: LAB_00436d1d
    MOV dword ptr [ESP + 0xc],EAX       ; 00436d21
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00436d25
    MOV dword ptr [ESP + 0x10],EAX      ; 00436d29
    MOV EAX,dword ptr [ESP + 0x20]      ; 00436d2d
    MOV dword ptr [ESP + 0x14],EAX      ; 00436d31
    MOV ECX,0x6                         ; 00436d35
    MOV ESI,ESP                         ; 00436d3a
    MOV EDI,EBP                         ; 00436d3c
    MOVSD.REP ES:EDI,ESI                ; 00436d3e
    MOV EAX,EBP                         ; 00436d40
    ADD ESP,0x60                        ; 00436d42
    POP EBP                             ; 00436d45
    POP EDI                             ; 00436d46
    POP EBX                             ; 00436d47
    RET                                 ; 00436d48

