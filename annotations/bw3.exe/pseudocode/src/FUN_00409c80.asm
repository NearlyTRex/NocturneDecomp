; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00409c80(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00433130 at 0043313d
;
; Called Functions:
;   FUN_0040d180
;   FUN_0040d1a0
;   FUN_0040d1c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00409c80
        ;   Label: FUN_00409c80
    PUSH ESI                            ; 00409c81
    MOV EBX,dword ptr [ESP + 0xc]       ; 00409c82
    MOV ESI,dword ptr [ESP + 0x10]      ; 00409c86
    PUSH EBX                            ; 00409c8a
    PUSH ESI                            ; 00409c8b
    CALL FUN_0040d1c0                   ; 00409c8c
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d1c0()
    ADD ESP,0x8                         ; 00409c91
    LEA EAX,[EBX + 0x20]                ; 00409c94
    PUSH EAX                            ; 00409c97
    PUSH ESI                            ; 00409c98
    CALL FUN_0040d1a0                   ; 00409c99
        ;   XREF to: 0040d1a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d1a0()
    ADD ESP,0x8                         ; 00409c9e
    LEA EAX,[EBX + 0x30]                ; 00409ca1
    PUSH EAX                            ; 00409ca4
    PUSH ESI                            ; 00409ca5
    CALL FUN_0040d1a0                   ; 00409ca6
        ;   XREF to: 0040d1a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d1a0()
    ADD ESP,0x8                         ; 00409cab
    MOV EDX,dword ptr [EBX + 0x70]      ; 00409cae
    PUSH EDX                            ; 00409cb1
    PUSH ESI                            ; 00409cb2
    CALL FUN_0040d180                   ; 00409cb3
        ;   XREF to: 0040d180 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d180()
    ADD ESP,0x8                         ; 00409cb8
    POP ESI                             ; 00409cbb
    POP EBX                             ; 00409cbc
    RET                                 ; 00409cbd

