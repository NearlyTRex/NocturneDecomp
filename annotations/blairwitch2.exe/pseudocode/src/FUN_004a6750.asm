; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a6750(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f6f20                       ; 004a6750
        ;   Label: FUN_004a6750
    PUSH 0x6                            ; 004a6755
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a6757
    PUSH EDX                            ; 004a675b
    CALL FUN_005b854f                   ; 004a675c
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined FUN_005b854f()
    ADD ESP,0xc                         ; 004a6761
    RET                                 ; 004a6764

