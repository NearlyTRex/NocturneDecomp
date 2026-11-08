; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00491a40(int param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_00491920 at 00491934
;   FUN_00491960 at 00491977
;
; Called Functions:
;   FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00491a40
        ;   Label: FUN_00491a40
    PUSH ESI                            ; 00491a41
    PUSH EDI                            ; 00491a42
    PUSH EBP                            ; 00491a43
    MOV EDI,dword ptr [ESP + 0x14]      ; 00491a44
    MOV EBP,dword ptr [ESP + 0x18]      ; 00491a48
    MOV EDX,dword ptr [EDI + 0x3ac8]    ; 00491a4c
    XOR EBX,EBX                         ; 00491a52
    TEST EDX,EDX                        ; 00491a54
    JLE 0x00491a7d                      ; 00491a56
        ;   XREF to: 00491a7d (CONDITIONAL_JUMP)  ; LAB_00491a7d
    LEA ESI,[EDI + 0x3ad0]              ; 00491a58
    PUSH EBP                            ; 00491a5e
        ;   Label: LAB_00491a5e
    PUSH ESI                            ; 00491a5f
    CALL FUN_005b8130                   ; 00491a60
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 00491a65
    TEST EAX,EAX                        ; 00491a68
    JZ 0x00491a87                       ; 00491a6a
        ;   XREF to: 00491a87 (CONDITIONAL_JUMP)  ; LAB_00491a87
    INC EBX                             ; 00491a6c
    MOV ECX,dword ptr [EDI + 0x3ac8]    ; 00491a6d
    ADD ESI,0x120                       ; 00491a73
    CMP EBX,ECX                         ; 00491a79
    JL 0x00491a5e                       ; 00491a7b
        ;   XREF to: 00491a5e (CONDITIONAL_JUMP)  ; LAB_00491a5e
    MOV EAX,0xffffffff                  ; 00491a7d
        ;   Label: LAB_00491a7d
    POP EBP                             ; 00491a82
    POP EDI                             ; 00491a83
    POP ESI                             ; 00491a84
    POP EBX                             ; 00491a85
    RET                                 ; 00491a86
    MOV EAX,EBX                         ; 00491a87
        ;   Label: LAB_00491a87
    POP EBP                             ; 00491a89
    POP EDI                             ; 00491a8a
    POP ESI                             ; 00491a8b
    POP EBX                             ; 00491a8c
    RET                                 ; 00491a8d

