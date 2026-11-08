; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004b7800(int param_1)
;
;
; Called Functions:
;   FUN_0041dab0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b7800
        ;   Label: FUN_004b7800
    PUSH 0x0                            ; 004b7804
    ADD EAX,0x4                         ; 004b7806
    PUSH EAX                            ; 004b7809
    CALL FUN_0041dab0                   ; 004b780a
        ;   XREF to: 0041dab0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041dab0()
    ADD ESP,0x8                         ; 004b780f
    SUB EAX,0x4                         ; 004b7812
    RET                                 ; 004b7815

