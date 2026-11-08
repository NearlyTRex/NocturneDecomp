; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b910c(undefined4 param_1,undefined4 param_2)
;
;
; XREF[19]:
;   FUN_00436710 at 004367a7
;   FUN_00460c70 at 00460cca
;   FUN_004bb9b0 at 004bba8a
;   FUN_004bbf70 at 004bc2ee
;   FUN_004bc840 at 004bc8c3
;   FUN_004d8180 at 004d81a7
;   FUN_004d8360 at 004d8388
;   FUN_004d8530 at 004d8591
;   FUN_004e46c0 at 004e46f7
;   FUN_005146c0 at 00514736
;   ... and 9 more
;
; Called Functions:
;   FUN_005b90b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b910c
        ;   Label: FUN_005b910c
    PUSH 0x0                            ; 005b910d
    MOV EDX,dword ptr [ESP + 0x10]      ; 005b910f
    PUSH EDX                            ; 005b9113
    MOV EBX,dword ptr [ESP + 0x10]      ; 005b9114
    PUSH EBX                            ; 005b9118
    CALL FUN_005b90b0                   ; 005b9119
        ;   XREF to: 005b90b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b90b0()
    ADD ESP,0xc                         ; 005b911e
    POP EBX                             ; 005b9121
    RET                                 ; 005b9122

