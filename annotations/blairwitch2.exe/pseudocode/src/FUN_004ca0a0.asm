; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ca0a0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f7c10                       ; 004ca0a0
        ;   Label: FUN_004ca0a0
    PUSH 0x100                          ; 004ca0a5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ca0aa
    PUSH EDX                            ; 004ca0ae
    CALL FUN_005b854f                   ; 004ca0af
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined FUN_005b854f()
    ADD ESP,0xc                         ; 004ca0b4
    RET                                 ; 004ca0b7

