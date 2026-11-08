; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044fdb0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f50e0                       ; 0044fdb0
        ;   Label: FUN_0044fdb0
    PUSH 0x100                          ; 0044fdb5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044fdba
    PUSH EDX                            ; 0044fdbe
    CALL FUN_005b854f                   ; 0044fdbf
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined FUN_005b854f()
    ADD ESP,0xc                         ; 0044fdc4
    RET                                 ; 0044fdc7

