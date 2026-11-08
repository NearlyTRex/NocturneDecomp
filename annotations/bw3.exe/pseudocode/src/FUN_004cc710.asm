; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cc710(int param_1)
;
;
; Called Functions:
;   FUN_00408890
;   FUN_00462580
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004cc710
        ;   Label: FUN_004cc710
    PUSH EDX                            ; 004cc714
    CALL FUN_00408890                   ; 004cc715
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; undefined FUN_00408890()
    ADD ESP,0x4                         ; 004cc71a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004cc71d
    ADD EAX,0x158                       ; 004cc721
    PUSH EAX                            ; 004cc726
    CALL FUN_00462580                   ; 004cc727
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; undefined FUN_00462580()
    ADD ESP,0x4                         ; 004cc72c
    RET                                 ; 004cc72f

