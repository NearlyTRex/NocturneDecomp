; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c6690(int param_1)
;
;
; Called Functions:
;   FUN_00408890
;   FUN_00462580
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004c6690
        ;   Label: FUN_004c6690
    PUSH EDX                            ; 004c6694
    CALL FUN_00408890                   ; 004c6695
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; undefined FUN_00408890()
    ADD ESP,0x4                         ; 004c669a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c669d
    ADD EAX,0x158                       ; 004c66a1
    PUSH EAX                            ; 004c66a6
    CALL FUN_00462580                   ; 004c66a7
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; undefined FUN_00462580()
    ADD ESP,0x4                         ; 004c66ac
    RET                                 ; 004c66af

