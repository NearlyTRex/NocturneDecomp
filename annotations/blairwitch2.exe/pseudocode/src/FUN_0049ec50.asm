; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049ec50(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00510df0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 0049ec50
        ;   Label: FUN_0049ec50
    MOV EDX,dword ptr [ESP + 0x8]       ; 0049ec52
    PUSH EDX                            ; 0049ec56
    CALL FUN_00510df0                   ; 0049ec57
        ;   XREF to: 00510df0 (UNCONDITIONAL_CALL)  ; undefined FUN_00510df0()
    ADD ESP,0x8                         ; 0049ec5c
    RET                                 ; 0049ec5f

