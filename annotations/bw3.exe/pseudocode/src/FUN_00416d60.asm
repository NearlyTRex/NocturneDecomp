; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00416d60(int param_1)
;
;
; Called Functions:
;   FUN_004a59b0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00416d60
        ;   Label: FUN_00416d60
    ADD EAX,0xc                         ; 00416d64
    PUSH EAX                            ; 00416d67
    CALL FUN_004a59b0                   ; 00416d68
        ;   XREF to: 004a59b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a59b0()
    ADD ESP,0x4                         ; 00416d6d
    SUB EAX,0xc                         ; 00416d70
    RET                                 ; 00416d73

