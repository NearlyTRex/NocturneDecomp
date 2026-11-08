; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00554aa0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5fbc80                       ; 00554aa0
        ;   Label: FUN_00554aa0
    PUSH 0x40                           ; 00554aa5
    MOV EDX,dword ptr [ESP + 0xc]       ; 00554aa7
    PUSH EDX                            ; 00554aab
    CALL FUN_005b854f                   ; 00554aac
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined FUN_005b854f()
    ADD ESP,0xc                         ; 00554ab1
    RET                                 ; 00554ab4

