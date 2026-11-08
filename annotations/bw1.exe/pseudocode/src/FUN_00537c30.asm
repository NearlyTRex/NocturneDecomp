; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00537c30(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,int param_6)
;
;
; XREF[1]:
;   FUN_005374b0 at 005374e8
;
; Called Functions:
;   FUN_0043b2e0
;   FUN_00537550
;   FUN_005375c0
;   FUN_00537db0
;   FUN_005380b0
;   FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00537c30
        ;   Label: FUN_00537c30
    PUSH ESI                            ; 00537c31
    PUSH EDI                            ; 00537c32
    PUSH EBP                            ; 00537c33
    MOV EBX,dword ptr [ESP + 0x14]      ; 00537c34
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00537c38
    PUSH EBX                            ; 00537c3c
    CALL FUN_00537550                   ; 00537c3d
        ;   XREF to: 00537550 (UNCONDITIONAL_CALL)  ; undefined FUN_00537550()
    ADD ESP,0x4                         ; 00537c42
    MOV EDX,dword ptr [ESP + 0x18]      ; 00537c45
    PUSH EDX                            ; 00537c49
    PUSH EBX                            ; 00537c4a
    CALL FUN_005375c0                   ; 00537c4b
        ;   XREF to: 005375c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005375c0()
    ADD ESP,0x8                         ; 00537c50
    MOV ESI,dword ptr [ESP + 0x20]      ; 00537c53
    IMUL ESI,EDI                        ; 00537c57
    PUSH ESI                            ; 00537c5a
    PUSH 0x0                            ; 00537c5b
    PUSH EBX                            ; 00537c5d
    CALL FUN_0043b2e0                   ; 00537c5e
        ;   XREF to: 0043b2e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043b2e0()
    ADD ESP,0xc                         ; 00537c63
    PUSH EDI                            ; 00537c66
    MOV ECX,dword ptr [ESP + 0x28]      ; 00537c67
    PUSH ECX                            ; 00537c6b
    MOV EBP,dword ptr [ESP + 0x28]      ; 00537c6c
    PUSH EBP                            ; 00537c70
    PUSH EDI                            ; 00537c71
    PUSH EAX                            ; 00537c72
    PUSH EBX                            ; 00537c73
    MOV ESI,EAX                         ; 00537c74
    CALL FUN_00537db0                   ; 00537c76
        ;   XREF to: 00537db0 (UNCONDITIONAL_CALL)  ; undefined FUN_00537db0()
    ADD ESP,0x18                        ; 00537c7b
    PUSH ESI                            ; 00537c7e
    CALL FUN_005c09f0                   ; 00537c7f
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c09f0()
    ADD ESP,0x4                         ; 00537c84
    CMP dword ptr [ESP + 0x28],0x0      ; 00537c87
    JNZ 0x00537c93                      ; 00537c8c
        ;   XREF to: 00537c93 (CONDITIONAL_JUMP)  ; LAB_00537c93
    POP EBP                             ; 00537c8e
    POP EDI                             ; 00537c8f
    POP ESI                             ; 00537c90
    POP EBX                             ; 00537c91
    RET                                 ; 00537c92
    PUSH EBX                            ; 00537c93
        ;   Label: LAB_00537c93
    CALL FUN_005380b0                   ; 00537c94
        ;   XREF to: 005380b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005380b0()
    ADD ESP,0x4                         ; 00537c99
    POP EBP                             ; 00537c9c
    POP EDI                             ; 00537c9d
    POP ESI                             ; 00537c9e
    POP EBX                             ; 00537c9f
    RET                                 ; 00537ca0

