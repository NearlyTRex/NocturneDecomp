; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049ecb0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00510df0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 0049ecb0
        ;   Label: FUN_0049ecb0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0049ecb2
    PUSH EDX                            ; 0049ecb6
    CALL FUN_00510df0                   ; 0049ecb7
        ;   XREF to: 00510df0 (UNCONDITIONAL_CALL)  ; undefined FUN_00510df0()
    ADD ESP,0x8                         ; 0049ecbc
    RET                                 ; 0049ecbf

