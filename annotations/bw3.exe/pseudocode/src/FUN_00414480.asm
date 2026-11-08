; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00414480(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0040d2e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00414480
        ;   Label: FUN_00414480
    PUSH EDX                            ; 00414484
    CALL FUN_0040d2e0                   ; 00414485
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d2e0()
    ADD ESP,0x4                         ; 0041448a
    RET                                 ; 0041448d

