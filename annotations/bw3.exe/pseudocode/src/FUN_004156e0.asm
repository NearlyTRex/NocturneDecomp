; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004156e0(int param_1)
;
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004156e0
        ;   Label: FUN_004156e0
    SUB ESP,0x18                        ; 004156e1
    MOV EAX,ESI                         ; 004156e4
    MOV ESI,dword ptr [ESP + 0x20]      ; 004156e6
    MOV ECX,0x6                         ; 004156ea
    MOV EDI,ESP                         ; 004156ef
    LEA ESI,[ESI + 0x15c]               ; 004156f1
    MOVSD.REP ES:EDI,ESI                ; 004156f7
    MOV ECX,0x6                         ; 004156f9
    MOV ESI,ESP                         ; 004156fe
    MOV EDI,EAX                         ; 00415700
    MOVSD.REP ES:EDI,ESI                ; 00415702
    ADD ESP,0x18                        ; 00415704
    POP EDI                             ; 00415707
    RET                                 ; 00415708

