; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00478390(int param_1)
;
;
; Called Functions:
;   FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00478390
        ;   Label: FUN_00478390
    PUSH EDI                            ; 00478391
    SUB ESP,0x18                        ; 00478392
    MOV EBX,ESI                         ; 00478395
    MOV EAX,dword ptr [ESP + 0x24]      ; 00478397
    ADD EAX,0x158                       ; 0047839b
    PUSH EAX                            ; 004783a0
    LEA EDI,[ESP + 0x4]                 ; 004783a1
    CALL FUN_00468900                   ; 004783a5
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; undefined FUN_00468900()
    MOV ECX,0x6                         ; 004783aa
    MOV ESI,dword ptr [EAX + 0x350]     ; 004783af
    ADD ESP,0x4                         ; 004783b5
    MOVSD.REP ES:EDI,ESI                ; 004783b8
    MOV ECX,0x6                         ; 004783ba
    MOV ESI,ESP                         ; 004783bf
    MOV EDI,EBX                         ; 004783c1
    MOVSD.REP ES:EDI,ESI                ; 004783c3
    MOV EAX,EBX                         ; 004783c5
    ADD ESP,0x18                        ; 004783c7
    POP EDI                             ; 004783ca
    POP EBX                             ; 004783cb
    RET                                 ; 004783cc

