; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049efc0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f68d0                       ; 0049efc0
        ;   Label: FUN_0049efc0
    PUSH 0x100                          ; 0049efc5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0049efca
    PUSH EDX                            ; 0049efce
    CALL FUN_005b854f                   ; 0049efcf
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined FUN_005b854f()
    ADD ESP,0xc                         ; 0049efd4
    RET                                 ; 0049efd7

