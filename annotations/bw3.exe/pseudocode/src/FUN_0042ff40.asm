; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042ff40(int param_1)
;
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0042ff40
        ;   Label: FUN_0042ff40
    SUB ESP,0x18                        ; 0042ff41
    MOV EAX,ESI                         ; 0042ff44
    MOV ESI,dword ptr [ESP + 0x20]      ; 0042ff46
    MOV ECX,0x6                         ; 0042ff4a
    MOV EDI,ESP                         ; 0042ff4f
    LEA ESI,[ESI + 0x2788]              ; 0042ff51
    MOVSD.REP ES:EDI,ESI                ; 0042ff57
    MOV ECX,0x6                         ; 0042ff59
    MOV ESI,ESP                         ; 0042ff5e
    MOV EDI,EAX                         ; 0042ff60
    MOVSD.REP ES:EDI,ESI                ; 0042ff62
    ADD ESP,0x18                        ; 0042ff64
    POP EDI                             ; 0042ff67
    RET                                 ; 0042ff68

