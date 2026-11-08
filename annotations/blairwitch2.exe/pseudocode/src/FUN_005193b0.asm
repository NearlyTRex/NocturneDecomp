; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005193b0(int param_1)
;
;
; Called Functions:
;   FUN_0044fd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005193b0
        ;   Label: FUN_005193b0
    PUSH EDI                            ; 005193b1
    SUB ESP,0x18                        ; 005193b2
    MOV EBX,ESI                         ; 005193b5
    MOV EAX,dword ptr [ESP + 0x24]      ; 005193b7
    ADD EAX,0x2b4                       ; 005193bb
    PUSH EAX                            ; 005193c0
    LEA EDI,[ESP + 0x4]                 ; 005193c1
    CALL FUN_0044fd20                   ; 005193c5
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd20()
    MOV ECX,0x6                         ; 005193ca
    MOV ESI,dword ptr [EAX + 0x350]     ; 005193cf
    ADD ESP,0x4                         ; 005193d5
    MOVSD.REP ES:EDI,ESI                ; 005193d8
    MOV ECX,0x6                         ; 005193da
    MOV ESI,ESP                         ; 005193df
    MOV EDI,EBX                         ; 005193e1
    MOVSD.REP ES:EDI,ESI                ; 005193e3
    MOV EAX,EBX                         ; 005193e5
    ADD ESP,0x18                        ; 005193e7
    POP EDI                             ; 005193ea
    POP EBX                             ; 005193eb
    RET                                 ; 005193ec

