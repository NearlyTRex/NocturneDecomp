; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049f0a0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f6710                       ; 0049f0a0
        ;   Label: FUN_0049f0a0
    PUSH 0x100                          ; 0049f0a5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0049f0aa
    PUSH EDX                            ; 0049f0ae
    CALL FUN_005b854f                   ; 0049f0af
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined FUN_005b854f()
    ADD ESP,0xc                         ; 0049f0b4
    RET                                 ; 0049f0b7

