; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050d600(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5e3180                       ; 0050d600
        ;   Label: FUN_0050d600
    PUSH 0xc                            ; 0050d605
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050d607
    PUSH EDX                            ; 0050d60b
    CALL FUN_005a3de6                   ; 0050d60c
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3de6()
    ADD ESP,0xc                         ; 0050d611
    RET                                 ; 0050d614

