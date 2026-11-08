; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a8a80(int param_1)
;
;
; Called Functions:
;   FUN_00468860
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a8a80
        ;   Label: FUN_005a8a80
    ADD EAX,0x14                        ; 005a8a84
    PUSH EAX                            ; 005a8a87
    CALL FUN_00468860                   ; 005a8a88
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; undefined FUN_00468860()
    ADD ESP,0x4                         ; 005a8a8d
    SUB EAX,0x14                        ; 005a8a90
    RET                                 ; 005a8a93

