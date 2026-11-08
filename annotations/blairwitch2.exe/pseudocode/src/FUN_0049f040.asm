; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049f040(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f6790                       ; 0049f040
        ;   Label: FUN_0049f040
    PUSH 0x40                           ; 0049f045
    MOV EDX,dword ptr [ESP + 0xc]       ; 0049f047
    PUSH EDX                            ; 0049f04b
    CALL FUN_005b854f                   ; 0049f04c
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined FUN_005b854f()
    ADD ESP,0xc                         ; 0049f051
    RET                                 ; 0049f054

