; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00459f30(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dcb50                       ; 00459f30
        ;   Label: FUN_00459f30
    PUSH 0x4                            ; 00459f35
    MOV EDX,dword ptr [ESP + 0xc]       ; 00459f37
    PUSH EDX                            ; 00459f3b
    CALL FUN_005a3de6                   ; 00459f3c
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3de6()
    ADD ESP,0xc                         ; 00459f41
    RET                                 ; 00459f44

