; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00414460(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0040d2e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00414460
        ;   Label: FUN_00414460
    PUSH EDX                            ; 00414464
    CALL FUN_0040d2e0                   ; 00414465
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d2e0()
    ADD ESP,0x4                         ; 0041446a
    RET                                 ; 0041446d

