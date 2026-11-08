; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00462630(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5de580                       ; 00462630
        ;   Label: FUN_00462630
    PUSH 0x100                          ; 00462635
    MOV EDX,dword ptr [ESP + 0xc]       ; 0046263a
    PUSH EDX                            ; 0046263e
    CALL FUN_005a3de6                   ; 0046263f
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3de6()
    ADD ESP,0xc                         ; 00462644
    RET                                 ; 00462647

