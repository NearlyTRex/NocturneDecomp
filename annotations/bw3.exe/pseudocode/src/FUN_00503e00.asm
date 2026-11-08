; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00503e00(int param_1)
;
;
; Called Functions:
;   FUN_0056f8e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00503e00
        ;   Label: FUN_00503e00
    PUSH 0x0                            ; 00503e04
    ADD EAX,0x180                       ; 00503e06
    PUSH EAX                            ; 00503e0b
    CALL FUN_0056f8e0                   ; 00503e0c
        ;   XREF to: 0056f8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056f8e0()
    ADD ESP,0x8                         ; 00503e11
    SUB EAX,0x180                       ; 00503e14
    RET                                 ; 00503e19

