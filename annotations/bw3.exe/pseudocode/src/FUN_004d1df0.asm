; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d1df0(int param_1)
;
;
; Called Functions:
;   FUN_00408890
;   FUN_00462580
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d1df0
        ;   Label: FUN_004d1df0
    ADD EAX,0x158                       ; 004d1df4
    PUSH EAX                            ; 004d1df9
    CALL FUN_00462580                   ; 004d1dfa
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; undefined FUN_00462580()
    ADD ESP,0x4                         ; 004d1dff
    MOV EDX,dword ptr [ESP + 0x4]       ; 004d1e02
    PUSH EDX                            ; 004d1e06
    CALL FUN_00408890                   ; 004d1e07
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; undefined FUN_00408890()
    ADD ESP,0x4                         ; 004d1e0c
    RET                                 ; 004d1e0f

