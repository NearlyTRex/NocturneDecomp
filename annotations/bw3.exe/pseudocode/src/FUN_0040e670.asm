; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040e670(int param_1)
;
;
; Called Functions:
;   FUN_00408890
;   FUN_00462580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e670
        ;   Label: FUN_0040e670
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040e671
    LEA EAX,[EBX + 0x158]               ; 0040e675
    PUSH EAX                            ; 0040e67b
    CALL FUN_00462580                   ; 0040e67c
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; undefined FUN_00462580()
    ADD ESP,0x4                         ; 0040e681
    PUSH EBX                            ; 0040e684
    CALL FUN_00408890                   ; 0040e685
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; undefined FUN_00408890()
    ADD ESP,0x4                         ; 0040e68a
    MOV dword ptr [EBX + 0x348],0x0     ; 0040e68d
    POP EBX                             ; 0040e697
    LEA EAX,[EAX]                       ; 0040e698
    MOV EDX,EDX                         ; 0040e69e
    RET                                 ; 0040e6a0

