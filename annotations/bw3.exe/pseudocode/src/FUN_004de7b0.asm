; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004de7b0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dbf20                       ; 004de7b0
        ;   Label: FUN_004de7b0
    PUSH 0x10                           ; 004de7b5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004de7b7
    PUSH EDX                            ; 004de7bb
    CALL FUN_005a3de6                   ; 004de7bc
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3de6()
    ADD ESP,0xc                         ; 004de7c1
    RET                                 ; 004de7c4

