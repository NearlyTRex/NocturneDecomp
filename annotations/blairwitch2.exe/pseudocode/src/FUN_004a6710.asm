; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a6710(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f6f60                       ; 004a6710
        ;   Label: FUN_004a6710
    PUSH 0x6                            ; 004a6715
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a6717
    PUSH EDX                            ; 004a671b
    CALL FUN_005b854f                   ; 004a671c
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined FUN_005b854f()
    ADD ESP,0xc                         ; 004a6721
    RET                                 ; 004a6724

