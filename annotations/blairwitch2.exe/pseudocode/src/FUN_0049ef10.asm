; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0049ef10(int param_1)
;
;
; Called Functions:
;   FUN_005b1bc0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0049ef10
        ;   Label: FUN_0049ef10
    ADD EAX,0x4                         ; 0049ef14
    PUSH EAX                            ; 0049ef17
    CALL FUN_005b1bc0                   ; 0049ef18
        ;   XREF to: 005b1bc0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1bc0()
    ADD ESP,0x4                         ; 0049ef1d
    SUB EAX,0x4                         ; 0049ef20
    RET                                 ; 0049ef23

