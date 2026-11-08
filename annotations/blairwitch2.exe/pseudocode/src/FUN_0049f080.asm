; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049f080(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f6750                       ; 0049f080
        ;   Label: FUN_0049f080
    PUSH 0x40                           ; 0049f085
    MOV EDX,dword ptr [ESP + 0xc]       ; 0049f087
    PUSH EDX                            ; 0049f08b
    CALL FUN_005b854f                   ; 0049f08c
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined FUN_005b854f()
    ADD ESP,0xc                         ; 0049f091
    RET                                 ; 0049f094

