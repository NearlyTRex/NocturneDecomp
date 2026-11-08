; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049eed0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00510df0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 0049eed0
        ;   Label: FUN_0049eed0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0049eed2
    PUSH EDX                            ; 0049eed6
    CALL FUN_00510df0                   ; 0049eed7
        ;   XREF to: 00510df0 (UNCONDITIONAL_CALL)  ; undefined FUN_00510df0()
    ADD ESP,0x8                         ; 0049eedc
    RET                                 ; 0049eedf

