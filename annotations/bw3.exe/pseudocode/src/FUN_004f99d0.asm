; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f99d0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dbf20                       ; 004f99d0
        ;   Label: FUN_004f99d0
    PUSH 0x1e                           ; 004f99d5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004f99d7
    PUSH EDX                            ; 004f99db
    CALL FUN_005a3de6                   ; 004f99dc
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3de6()
    ADD ESP,0xc                         ; 004f99e1
    RET                                 ; 004f99e4

