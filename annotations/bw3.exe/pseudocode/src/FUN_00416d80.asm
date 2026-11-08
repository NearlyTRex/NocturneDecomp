; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00416d80(int param_1)
;
;
; Called Functions:
;   FUN_00408770
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00416d80
        ;   Label: FUN_00416d80
    PUSH 0x1                            ; 00416d84
    ADD EAX,0xc                         ; 00416d86
    PUSH EAX                            ; 00416d89
    CALL FUN_00408770                   ; 00416d8a
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 00416d8f
    SUB EAX,0xc                         ; 00416d92
    RET                                 ; 00416d95

