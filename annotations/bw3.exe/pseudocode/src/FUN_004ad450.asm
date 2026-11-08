; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ad450(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5e0300                       ; 004ad450
        ;   Label: FUN_004ad450
    PUSH 0xa                            ; 004ad455
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ad457
    PUSH EDX                            ; 004ad45b
    CALL FUN_005a3de6                   ; 004ad45c
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3de6()
    ADD ESP,0xc                         ; 004ad461
    RET                                 ; 004ad464

