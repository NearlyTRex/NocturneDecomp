; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e4e20(void)
;
;
; XREF[1]:
;   FUN_0058f310 at 0058f597
;
; Referenced Globals:
;   undefined4 DAT_00618170
;   undefined4 DAT_0061b120
;   undefined4 DAT_0061b2a0
;   undefined4 DAT_0061b40c
;   undefined4 DAT_0061c068
;   undefined4 DAT_01d34cb0
;
; Called Functions:
;   FUN_00448640
;   FUN_0044fc50
;   FUN_004d94d0
;   FUN_004e86a0
;   FUN_004fb440
;   FUN_0050b3f0
;   FUN_00510190
;   FUN_0051b370
;   FUN_00548f80
;   FUN_00549090
;   FUN_0058e9d0
;   FUN_00590040
;   FUN_0059abb0
;   thunk_FUN_00552470
;   thunk_FUN_00574db0
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e4e20
        ;   Label: FUN_004e4e20
    PUSH ESI                            ; 004e4e21
    PUSH EDI                            ; 004e4e22
    CALL FUN_0059abb0                   ; 004e4e23
        ;   XREF to: 0059abb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059abb0()
    MOV EDX,dword ptr [0x0061b120]      ; 004e4e28 | DAT_0061b120
    PUSH EDX                            ; 004e4e2e | DAT_01d34cb0
    CALL FUN_0050b3f0                   ; 004e4e2f
        ;   XREF to: 0050b3f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0050b3f0()
    ADD ESP,0x4                         ; 004e4e34
    MOV ECX,dword ptr [0x0061b2a0]      ; 004e4e37 | DAT_0061b2a0
    PUSH ECX                            ; 004e4e3d
    CALL FUN_00510190                   ; 004e4e3e
        ;   XREF to: 00510190 (UNCONDITIONAL_CALL)  ; undefined FUN_00510190()
    ADD ESP,0x4                         ; 004e4e43
    MOV EBX,dword ptr [0x00618170]      ; 004e4e46 | DAT_00618170
    PUSH EBX                            ; 004e4e4c
    CALL FUN_004fb440                   ; 004e4e4d
        ;   XREF to: 004fb440 (UNCONDITIONAL_CALL)  ; undefined FUN_004fb440()
    ADD ESP,0x4                         ; 004e4e52
    MOV ESI,dword ptr [0x0061c068]      ; 004e4e55 | DAT_0061c068
    PUSH ESI                            ; 004e4e5b
    CALL thunk_FUN_00552470             ; 004e4e5c
        ;   XREF to: 0055a160 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_00552470()
    ADD ESP,0x4                         ; 004e4e61
    CALL FUN_0044fc50                   ; 004e4e64
        ;   XREF to: 0044fc50 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fc50()
    CALL FUN_00548f80                   ; 004e4e69
        ;   XREF to: 00548f80 (UNCONDITIONAL_CALL)  ; undefined FUN_00548f80()
    CALL FUN_00549090                   ; 004e4e6e
        ;   XREF to: 00549090 (UNCONDITIONAL_CALL)  ; undefined FUN_00549090()
    CALL FUN_004e86a0                   ; 004e4e73
        ;   XREF to: 004e86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e86a0()
    CALL FUN_0058e9d0                   ; 004e4e78
        ;   XREF to: 0058e9d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0058e9d0()
    CALL thunk_FUN_00588900             ; 004e4e7d
        ;   XREF to: 00401120 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_00588900()
    CALL thunk_FUN_00574db0             ; 004e4e82
        ;   XREF to: 004037f0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_00574db0()
    CALL FUN_00448640                   ; 004e4e87
        ;   XREF to: 00448640 (UNCONDITIONAL_CALL)  ; undefined FUN_00448640()
    CALL FUN_00590040                   ; 004e4e8c
        ;   XREF to: 00590040 (UNCONDITIONAL_CALL)  ; undefined FUN_00590040()
    MOV EDI,dword ptr [0x0061b40c]      ; 004e4e91 | DAT_0061b40c
    PUSH EDI                            ; 004e4e97
    CALL FUN_0051b370                   ; 004e4e98
        ;   XREF to: 0051b370 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b370()
    ADD ESP,0x4                         ; 004e4e9d
    CALL FUN_004d94d0                   ; 004e4ea0
        ;   XREF to: 004d94d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d94d0()
    POP EDI                             ; 004e4ea5
    POP ESI                             ; 004e4ea6
    POP EBX                             ; 004e4ea7
    RET                                 ; 004e4ea8

