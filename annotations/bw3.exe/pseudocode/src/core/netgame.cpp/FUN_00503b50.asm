; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00503b50(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01dc2690
;
; Called Functions:
;   FUN_004e4330
;   FUN_005a54c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00503b50
        ;   Label: FUN_00503b50
    PUSH EDI                            ; 00503b51
    MOV EBX,dword ptr [ESP + 0xc]       ; 00503b52
    TEST EBX,EBX                        ; 00503b56
    JL 0x00503bbb                       ; 00503b58
        ;   XREF to: 00503bbb (CONDITIONAL_JUMP)  ; LAB_00503bbb
    CMP EBX,dword ptr [0x01dc2690]      ; 00503b5a | DAT_01dc2690
    JGE 0x00503bbb                      ; 00503b60
        ;   XREF to: 00503bbb (CONDITIONAL_JUMP)  ; LAB_00503bbb
    MOV EDI,dword ptr [0x01dc2690]      ; 00503b62 | DAT_01dc2690
        ;   Label: LAB_00503b62
    DEC EDI                             ; 00503b68
    MOV EDX,EDI                         ; 00503b69
    SUB EDX,EBX                         ; 00503b6b
    MOV EAX,EDX                         ; 00503b6d
    SHL EAX,0x4                         ; 00503b6f
    ADD EAX,EDX                         ; 00503b72
    SHL EAX,0x2                         ; 00503b74
    ADD EAX,EDX                         ; 00503b77
    SHL EAX,0x2                         ; 00503b79
    LEA EDX,[EBX + 0x1]                 ; 00503b7c
    PUSH EAX                            ; 00503b7f
    MOV EAX,EDX                         ; 00503b80
    SHL EAX,0x4                         ; 00503b82
    ADD EAX,EDX                         ; 00503b85
    SHL EAX,0x2                         ; 00503b87
    ADD EAX,EDX                         ; 00503b8a
    SHL EAX,0x2                         ; 00503b8c
    ADD EAX,0x1dc2694                   ; 00503b8f
    PUSH EAX                            ; 00503b94
    MOV EAX,EBX                         ; 00503b95
    SHL EAX,0x4                         ; 00503b97
    ADD EAX,EBX                         ; 00503b9a
    SHL EAX,0x2                         ; 00503b9c
    ADD EAX,EBX                         ; 00503b9f
    SHL EAX,0x2                         ; 00503ba1
    ADD EAX,0x1dc2694                   ; 00503ba4
    PUSH EAX                            ; 00503ba9
    MOV dword ptr [0x01dc2690],EDI      ; 00503baa | DAT_01dc2690
    CALL FUN_005a54c0                   ; 00503bb0
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a54c0()
    ADD ESP,0xc                         ; 00503bb5
    POP EDI                             ; 00503bb8
    POP EBX                             ; 00503bb9
    RET                                 ; 00503bba
    PUSH ESI                            ; 00503bbb
        ;   Label: LAB_00503bbb
    MOV ECX,0x5ca409                    ; 00503bbc
    MOV ESI,0x107                       ; 00503bc1
    PUSH 0x5ca41d                       ; 00503bc6
    MOV dword ptr [0x01d71de0],ECX      ; 00503bcb | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00503bd1 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00503bd7
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00503bdc
    POP ESI                             ; 00503bdf
    JMP 0x00503b62                      ; 00503be0
        ;   XREF to: 00503b62 (UNCONDITIONAL_JUMP)  ; LAB_00503b62

