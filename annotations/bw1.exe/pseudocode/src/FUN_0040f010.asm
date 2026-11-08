; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040f010(int param_1)
;
;
; Called Functions:
;   FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f010
        ;   Label: FUN_0040f010
    PUSH EDI                            ; 0040f011
    SUB ESP,0x18                        ; 0040f012
    MOV EBX,ESI                         ; 0040f015
    MOV EAX,dword ptr [ESP + 0x24]      ; 0040f017
    ADD EAX,0x15c                       ; 0040f01b
    PUSH EAX                            ; 0040f020
    LEA EDI,[ESP + 0x4]                 ; 0040f021
    CALL FUN_00468900                   ; 0040f025
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; undefined FUN_00468900()
    MOV ECX,0x6                         ; 0040f02a
    MOV ESI,dword ptr [EAX + 0x350]     ; 0040f02f
    ADD ESP,0x4                         ; 0040f035
    MOVSD.REP ES:EDI,ESI                ; 0040f038
    MOV ECX,0x6                         ; 0040f03a
    MOV ESI,ESP                         ; 0040f03f
    MOV EDI,EBX                         ; 0040f041
    MOVSD.REP ES:EDI,ESI                ; 0040f043
    MOV EAX,EBX                         ; 0040f045
    ADD ESP,0x18                        ; 0040f047
    POP EDI                             ; 0040f04a
    POP EBX                             ; 0040f04b
    RET                                 ; 0040f04c

