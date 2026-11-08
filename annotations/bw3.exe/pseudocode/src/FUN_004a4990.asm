; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a4990(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dfb70                       ; 004a4990
        ;   Label: FUN_004a4990
    PUSH 0x40                           ; 004a4995
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a4997
    PUSH EDX                            ; 004a499b
    CALL FUN_005a3de6                   ; 004a499c
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3de6()
    ADD ESP,0xc                         ; 004a49a1
    RET                                 ; 004a49a4

