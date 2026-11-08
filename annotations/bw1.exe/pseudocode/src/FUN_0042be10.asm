; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042be10(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0040c5a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0042be10
        ;   Label: FUN_0042be10
    PUSH EDX                            ; 0042be14
    CALL FUN_0040c5a0                   ; 0042be15
        ;   XREF to: 0040c5a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c5a0()
    ADD ESP,0x4                         ; 0042be1a
    RET                                 ; 0042be1d

