; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049f0e0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f6690                       ; 0049f0e0
        ;   Label: FUN_0049f0e0
    PUSH 0x100                          ; 0049f0e5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0049f0ea
    PUSH EDX                            ; 0049f0ee
    CALL FUN_005b854f                   ; 0049f0ef
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined FUN_005b854f()
    ADD ESP,0xc                         ; 0049f0f4
    RET                                 ; 0049f0f7

