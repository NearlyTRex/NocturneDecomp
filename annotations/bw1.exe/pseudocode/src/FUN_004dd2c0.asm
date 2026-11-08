; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004dd2c0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0042f240
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004dd2c0
        ;   Label: FUN_004dd2c0
    PUSH EDX                            ; 004dd2c4
    CALL FUN_0042f240                   ; 004dd2c5
        ;   XREF to: 0042f240 (UNCONDITIONAL_CALL)  ; undefined FUN_0042f240()
    ADD ESP,0x4                         ; 004dd2ca
    RET                                 ; 004dd2cd

