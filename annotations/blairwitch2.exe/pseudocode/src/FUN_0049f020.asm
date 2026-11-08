; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049f020(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f67f0                       ; 0049f020
        ;   Label: FUN_0049f020
    PUSH 0x14                           ; 0049f025
    MOV EDX,dword ptr [ESP + 0xc]       ; 0049f027
    PUSH EDX                            ; 0049f02b
    CALL FUN_005b854f                   ; 0049f02c
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined FUN_005b854f()
    ADD ESP,0xc                         ; 0049f031
    RET                                 ; 0049f034

