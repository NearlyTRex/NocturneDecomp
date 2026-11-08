; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ca090(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00510df0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004ca090
        ;   Label: FUN_004ca090
    MOV EDX,dword ptr [ESP + 0x8]       ; 004ca092
    PUSH EDX                            ; 004ca096
    CALL FUN_00510df0                   ; 004ca097
        ;   XREF to: 00510df0 (UNCONDITIONAL_CALL)  ; undefined FUN_00510df0()
    ADD ESP,0x8                         ; 004ca09c
    RET                                 ; 004ca09f

