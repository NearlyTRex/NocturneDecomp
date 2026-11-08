; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ad430(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dbf20                       ; 004ad430
        ;   Label: FUN_004ad430
    PUSH 0x6                            ; 004ad435
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ad437
    PUSH EDX                            ; 004ad43b
    CALL FUN_005a3de6                   ; 004ad43c
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3de6()
    ADD ESP,0xc                         ; 004ad441
    RET                                 ; 004ad444

