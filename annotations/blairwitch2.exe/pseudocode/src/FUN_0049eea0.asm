; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049eea0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00510df0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 0049eea0
        ;   Label: FUN_0049eea0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0049eea2
    PUSH EDX                            ; 0049eea6
    CALL FUN_00510df0                   ; 0049eea7
        ;   XREF to: 00510df0 (UNCONDITIONAL_CALL)  ; undefined FUN_00510df0()
    ADD ESP,0x8                         ; 0049eeac
    RET                                 ; 0049eeaf

