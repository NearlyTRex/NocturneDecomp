; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049ee40(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00510df0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 0049ee40
        ;   Label: FUN_0049ee40
    MOV EDX,dword ptr [ESP + 0x8]       ; 0049ee42
    PUSH EDX                            ; 0049ee46
    CALL FUN_00510df0                   ; 0049ee47
        ;   XREF to: 00510df0 (UNCONDITIONAL_CALL)  ; undefined FUN_00510df0()
    ADD ESP,0x8                         ; 0049ee4c
    RET                                 ; 0049ee4f

