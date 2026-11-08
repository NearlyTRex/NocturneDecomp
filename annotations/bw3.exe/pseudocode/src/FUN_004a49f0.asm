; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a49f0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dfaf0                       ; 004a49f0
        ;   Label: FUN_004a49f0
    PUSH 0x3e8                          ; 004a49f5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a49fa
    PUSH EDX                            ; 004a49fe
    CALL FUN_005a3de6                   ; 004a49ff
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3de6()
    ADD ESP,0xc                         ; 004a4a04
    RET                                 ; 004a4a07

