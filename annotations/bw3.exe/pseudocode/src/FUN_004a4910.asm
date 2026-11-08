; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a4910(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dfcb0                       ; 004a4910
        ;   Label: FUN_004a4910
    PUSH 0x100                          ; 004a4915
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a491a
    PUSH EDX                            ; 004a491e
    CALL FUN_005a3de6                   ; 004a491f
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3de6()
    ADD ESP,0xc                         ; 004a4924
    RET                                 ; 004a4927

