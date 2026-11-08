; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049ee70(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00510df0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 0049ee70
        ;   Label: FUN_0049ee70
    MOV EDX,dword ptr [ESP + 0x8]       ; 0049ee72
    PUSH EDX                            ; 0049ee76
    CALL FUN_00510df0                   ; 0049ee77
        ;   XREF to: 00510df0 (UNCONDITIONAL_CALL)  ; undefined FUN_00510df0()
    ADD ESP,0x8                         ; 0049ee7c
    RET                                 ; 0049ee7f

