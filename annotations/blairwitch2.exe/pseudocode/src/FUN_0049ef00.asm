; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049ef00(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00510df0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 0049ef00
        ;   Label: FUN_0049ef00
    MOV EDX,dword ptr [ESP + 0x8]       ; 0049ef02
    PUSH EDX                            ; 0049ef06
    CALL FUN_00510df0                   ; 0049ef07
        ;   XREF to: 00510df0 (UNCONDITIONAL_CALL)  ; undefined FUN_00510df0()
    ADD ESP,0x8                         ; 0049ef0c
    RET                                 ; 0049ef0f

