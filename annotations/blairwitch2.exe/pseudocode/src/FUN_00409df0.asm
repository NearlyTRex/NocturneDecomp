; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00409df0(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00429c70 at 00429c7d
;
; Called Functions:
;   FUN_0040d2a0
;   FUN_0040d2c0
;   FUN_0040d2e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00409df0
        ;   Label: FUN_00409df0
    PUSH ESI                            ; 00409df1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00409df2
    MOV ESI,dword ptr [ESP + 0x10]      ; 00409df6
    PUSH EBX                            ; 00409dfa
    PUSH ESI                            ; 00409dfb
    CALL FUN_0040d2e0                   ; 00409dfc
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d2e0()
    ADD ESP,0x8                         ; 00409e01
    LEA EAX,[EBX + 0x20]                ; 00409e04
    PUSH EAX                            ; 00409e07
    PUSH ESI                            ; 00409e08
    CALL FUN_0040d2c0                   ; 00409e09
        ;   XREF to: 0040d2c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d2c0()
    ADD ESP,0x8                         ; 00409e0e
    LEA EAX,[EBX + 0x30]                ; 00409e11
    PUSH EAX                            ; 00409e14
    PUSH ESI                            ; 00409e15
    CALL FUN_0040d2c0                   ; 00409e16
        ;   XREF to: 0040d2c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d2c0()
    ADD ESP,0x8                         ; 00409e1b
    MOV EDX,dword ptr [EBX + 0x70]      ; 00409e1e
    PUSH EDX                            ; 00409e21
    PUSH ESI                            ; 00409e22
    CALL FUN_0040d2a0                   ; 00409e23
        ;   XREF to: 0040d2a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d2a0()
    ADD ESP,0x8                         ; 00409e28
    POP ESI                             ; 00409e2b
    POP EBX                             ; 00409e2c
    RET                                 ; 00409e2d

