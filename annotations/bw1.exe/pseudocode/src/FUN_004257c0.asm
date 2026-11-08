; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004257c0(int param_1)
;
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004257c0
        ;   Label: FUN_004257c0
    SUB ESP,0x18                        ; 004257c1
    MOV EAX,ESI                         ; 004257c4
    MOV ESI,dword ptr [ESP + 0x20]      ; 004257c6
    MOV ECX,0x6                         ; 004257ca
    MOV EDI,ESP                         ; 004257cf
    LEA ESI,[ESI + 0x19d78]             ; 004257d1
    MOVSD.REP ES:EDI,ESI                ; 004257d7
    MOV ECX,0x6                         ; 004257d9
    MOV ESI,ESP                         ; 004257de
    MOV EDI,EAX                         ; 004257e0
    MOVSD.REP ES:EDI,ESI                ; 004257e2
    ADD ESP,0x18                        ; 004257e4
    POP EDI                             ; 004257e7
    RET                                 ; 004257e8

