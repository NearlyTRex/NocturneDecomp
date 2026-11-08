; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048c150(undefined4 param_1,undefined4 param_2)
;
;
; XREF[33]:
;   FUN_0040cab0 at 0040cb61
;   FUN_00412530 at 00412556
;   FUN_00413e30 at 00414189
;   FUN_00425da0 at 00426de9
;   FUN_00428a80 at 00428bad
;   FUN_00430d60 at 00430f76
;   FUN_00442a20 at 00442c89
;   FUN_00458950 at 00458a94
;   FUN_004591f0 at 00459387
;   FUN_00463d10 at 00463d21
;   ... and 23 more
;
; Referenced Globals:
;   undefined4 DAT_01c734ac
;
; Called Functions:
;   FUN_0048c170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048c150
        ;   Label: FUN_0048c150
    MOV ECX,dword ptr [ESP + 0xc]       ; 0048c151
    PUSH ECX                            ; 0048c155
    MOV EBX,dword ptr [ESP + 0xc]       ; 0048c156
    XOR EDX,EDX                         ; 0048c15a
    PUSH EBX                            ; 0048c15c
    MOV dword ptr [0x01c734ac],EDX      ; 0048c15d | DAT_01c734ac
    CALL FUN_0048c170                   ; 0048c163
        ;   XREF to: 0048c170 (UNCONDITIONAL_CALL)  ; undefined FUN_0048c170()
    ADD ESP,0x8                         ; 0048c168
    POP EBX                             ; 0048c16b
    RET                                 ; 0048c16c

