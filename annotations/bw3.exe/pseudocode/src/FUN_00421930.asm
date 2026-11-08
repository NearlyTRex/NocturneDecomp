; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00421930(int param_1)
;
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00421930
        ;   Label: FUN_00421930
    SUB ESP,0x18                        ; 00421931
    MOV EAX,ESI                         ; 00421934
    MOV ESI,dword ptr [ESP + 0x20]      ; 00421936
    MOV ECX,0x6                         ; 0042193a
    MOV EDI,ESP                         ; 0042193f
    LEA ESI,[ESI + 0x1be68]             ; 00421941
    MOVSD.REP ES:EDI,ESI                ; 00421947
    MOV ECX,0x6                         ; 00421949
    MOV ESI,ESP                         ; 0042194e
    MOV EDI,EAX                         ; 00421950
    MOVSD.REP ES:EDI,ESI                ; 00421952
    ADD ESP,0x18                        ; 00421954
    POP EDI                             ; 00421957
    RET                                 ; 00421958

