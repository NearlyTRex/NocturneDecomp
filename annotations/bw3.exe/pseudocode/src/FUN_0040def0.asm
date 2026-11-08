; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040def0(int param_1)
;
;
; Called Functions:
;   FUN_00408890
;   FUN_00462580
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040def0
        ;   Label: FUN_0040def0
    ADD EAX,0x158                       ; 0040def4
    PUSH EAX                            ; 0040def9
    CALL FUN_00462580                   ; 0040defa
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; undefined FUN_00462580()
    ADD ESP,0x4                         ; 0040deff
    MOV EDX,dword ptr [ESP + 0x4]       ; 0040df02
    PUSH EDX                            ; 0040df06
    CALL FUN_00408890                   ; 0040df07
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; undefined FUN_00408890()
    ADD ESP,0x4                         ; 0040df0c
    NOP                                 ; 0040df0f
    RET                                 ; 0040df10

