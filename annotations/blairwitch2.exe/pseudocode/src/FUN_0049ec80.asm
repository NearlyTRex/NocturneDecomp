; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049ec80(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00510df0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 0049ec80
        ;   Label: FUN_0049ec80
    MOV EDX,dword ptr [ESP + 0x8]       ; 0049ec82
    PUSH EDX                            ; 0049ec86
    CALL FUN_00510df0                   ; 0049ec87
        ;   XREF to: 00510df0 (UNCONDITIONAL_CALL)  ; undefined FUN_00510df0()
    ADD ESP,0x8                         ; 0049ec8c
    RET                                 ; 0049ec8f

