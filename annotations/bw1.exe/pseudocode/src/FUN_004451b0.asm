; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004451b0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0042f240
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004451b0
        ;   Label: FUN_004451b0
    PUSH EDX                            ; 004451b4
    CALL FUN_0042f240                   ; 004451b5
        ;   XREF to: 0042f240 (UNCONDITIONAL_CALL)  ; undefined FUN_0042f240()
    ADD ESP,0x4                         ; 004451ba
    RET                                 ; 004451bd

