; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056cd50(int param_1)
;
;
; Called Functions:
;   FUN_00408890
;   FUN_00462580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056cd50
        ;   Label: FUN_0056cd50
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056cd51
    PUSH EBX                            ; 0056cd55
    CALL FUN_00408890                   ; 0056cd56
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; undefined FUN_00408890()
    ADD ESP,0x4                         ; 0056cd5b
    LEA EAX,[EBX + 0x158]               ; 0056cd5e
    PUSH EAX                            ; 0056cd64
    CALL FUN_00462580                   ; 0056cd65
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; undefined FUN_00462580()
    ADD ESP,0x4                         ; 0056cd6a
    MOV dword ptr [EBX + 0x2d4],0x0     ; 0056cd6d
    POP EBX                             ; 0056cd77
    RET                                 ; 0056cd78

