; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053a7c0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5fb370                       ; 0053a7c0
        ;   Label: FUN_0053a7c0
    PUSH 0x5dc                          ; 0053a7c5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0053a7ca
    PUSH EDX                            ; 0053a7ce
    CALL FUN_005b854f                   ; 0053a7cf
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined FUN_005b854f()
    ADD ESP,0xc                         ; 0053a7d4
    RET                                 ; 0053a7d7

