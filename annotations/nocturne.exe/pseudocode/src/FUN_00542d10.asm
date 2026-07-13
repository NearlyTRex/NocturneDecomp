; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00542d10(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004b49a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00542d10
        ;   Label: FUN_00542d10
    PUSH EDX                            ; 00542d14
    CALL FUN_004b49a0                   ; 00542d15
        ;   XREF to: 004b49a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b49a0()
    ADD ESP,0x4                         ; 00542d1a
    RET                                 ; 00542d1d

