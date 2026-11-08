; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004104c0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0056b520
;   FUN_005ad640
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004104c0
        ;   Label: FUN_004104c0
    PUSH EDX                            ; 004104c4
    CALL FUN_005ad640                   ; 004104c5
        ;   XREF to: 005ad640 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad640()
    ADD ESP,0x4                         ; 004104ca
    PUSH 0x5d3512                       ; 004104cd
    CALL FUN_0056b520                   ; 004104d2
        ;   XREF to: 0056b520 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b520()
    ADD ESP,0x4                         ; 004104d7
    RET                                 ; 004104da

