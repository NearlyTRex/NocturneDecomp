; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049f100(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f6670                       ; 0049f100
        ;   Label: FUN_0049f100
    PUSH 0x100                          ; 0049f105
    MOV EDX,dword ptr [ESP + 0xc]       ; 0049f10a
    PUSH EDX                            ; 0049f10e
    CALL FUN_005b854f                   ; 0049f10f
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined FUN_005b854f()
    ADD ESP,0xc                         ; 0049f114
    RET                                 ; 0049f117

