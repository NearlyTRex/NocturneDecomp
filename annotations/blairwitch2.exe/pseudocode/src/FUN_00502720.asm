; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00502720(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f6f60                       ; 00502720
        ;   Label: FUN_00502720
    PUSH 0x4b                           ; 00502725
    MOV EDX,dword ptr [ESP + 0xc]       ; 00502727
    PUSH EDX                            ; 0050272b
    CALL FUN_005b854f                   ; 0050272c
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined FUN_005b854f()
    ADD ESP,0xc                         ; 00502731
    RET                                 ; 00502734

