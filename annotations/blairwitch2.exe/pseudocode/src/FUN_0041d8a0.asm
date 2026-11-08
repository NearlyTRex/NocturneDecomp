; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041d8a0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f3c00                       ; 0041d8a0
        ;   Label: FUN_0041d8a0
    PUSH 0x8                            ; 0041d8a5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0041d8a7
    PUSH EDX                            ; 0041d8ab
    CALL FUN_005b854f                   ; 0041d8ac
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined FUN_005b854f()
    ADD ESP,0xc                         ; 0041d8b1
    RET                                 ; 0041d8b4

