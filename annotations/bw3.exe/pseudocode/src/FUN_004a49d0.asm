; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a49d0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dfb30                       ; 004a49d0
        ;   Label: FUN_004a49d0
    PUSH 0x40                           ; 004a49d5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a49d7
    PUSH EDX                            ; 004a49db
    CALL FUN_005a3de6                   ; 004a49dc
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3de6()
    ADD ESP,0xc                         ; 004a49e1
    RET                                 ; 004a49e4

