; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00416da0(int param_1)
;
;
; Called Functions:
;   FUN_00462500
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00416da0
        ;   Label: FUN_00416da0
    ADD EAX,0x18                        ; 00416da4
    PUSH EAX                            ; 00416da7
    CALL FUN_00462500                   ; 00416da8
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; undefined FUN_00462500()
    ADD ESP,0x4                         ; 00416dad
    SUB EAX,0x18                        ; 00416db0
    RET                                 ; 00416db3

