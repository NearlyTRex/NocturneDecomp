; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004de890(int param_1)
;
;
; Called Functions:
;   FUN_00408890
;   FUN_00462580
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004de890
        ;   Label: FUN_004de890
    ADD EAX,0x158                       ; 004de894
    PUSH EAX                            ; 004de899
    CALL FUN_00462580                   ; 004de89a
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; undefined FUN_00462580()
    ADD ESP,0x4                         ; 004de89f
    MOV EDX,dword ptr [ESP + 0x4]       ; 004de8a2
    PUSH EDX                            ; 004de8a6
    CALL FUN_00408890                   ; 004de8a7
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; undefined FUN_00408890()
    ADD ESP,0x4                         ; 004de8ac
    RET                                 ; 004de8af

