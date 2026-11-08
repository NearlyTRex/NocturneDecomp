; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059bfe0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f6f60                       ; 0059bfe0
        ;   Label: FUN_0059bfe0
    PUSH 0x4                            ; 0059bfe5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0059bfe7
    PUSH EDX                            ; 0059bfeb
    CALL FUN_005b854f                   ; 0059bfec
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined FUN_005b854f()
    ADD ESP,0xc                         ; 0059bff1
    RET                                 ; 0059bff4

