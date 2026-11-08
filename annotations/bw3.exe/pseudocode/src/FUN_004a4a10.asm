; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a4a10(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dfab0                       ; 004a4a10
        ;   Label: FUN_004a4a10
    PUSH 0x40                           ; 004a4a15
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a4a17
    PUSH EDX                            ; 004a4a1b
    CALL FUN_005a3de6                   ; 004a4a1c
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3de6()
    ADD ESP,0xc                         ; 004a4a21
    RET                                 ; 004a4a24

