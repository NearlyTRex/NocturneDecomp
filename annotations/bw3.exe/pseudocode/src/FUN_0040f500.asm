; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040f500(int param_1)
;
;
; Called Functions:
;   FUN_00408890
;   FUN_00462580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f500
        ;   Label: FUN_0040f500
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040f501
    PUSH EBX                            ; 0040f505
    CALL FUN_00408890                   ; 0040f506
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; undefined FUN_00408890()
    ADD ESP,0x4                         ; 0040f50b
    LEA EAX,[EBX + 0x158]               ; 0040f50e
    PUSH EAX                            ; 0040f514
    CALL FUN_00462580                   ; 0040f515
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; undefined FUN_00462580()
    ADD ESP,0x4                         ; 0040f51a
    MOV dword ptr [EBX + 0x2d4],0x0     ; 0040f51d
    POP EBX                             ; 0040f527
    RET                                 ; 0040f528

