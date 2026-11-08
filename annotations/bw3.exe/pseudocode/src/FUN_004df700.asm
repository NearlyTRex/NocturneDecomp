; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004df700(int param_1)
;
;
; Called Functions:
;   FUN_00408890
;   FUN_00462580
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004df700
        ;   Label: FUN_004df700
    PUSH EDX                            ; 004df704
    CALL FUN_00408890                   ; 004df705
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; undefined FUN_00408890()
    ADD ESP,0x4                         ; 004df70a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004df70d
    ADD EAX,0x158                       ; 004df711
    PUSH EAX                            ; 004df716
    CALL FUN_00462580                   ; 004df717
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; undefined FUN_00462580()
    ADD ESP,0x4                         ; 004df71c
    RET                                 ; 004df71f

