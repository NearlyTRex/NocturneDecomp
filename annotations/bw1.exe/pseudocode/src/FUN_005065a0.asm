; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005065a0(int param_1)
;
;
; Called Functions:
;   FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005065a0
        ;   Label: FUN_005065a0
    PUSH EDI                            ; 005065a1
    SUB ESP,0x18                        ; 005065a2
    MOV EBX,ESI                         ; 005065a5
    MOV EAX,dword ptr [ESP + 0x24]      ; 005065a7
    ADD EAX,0x158                       ; 005065ab
    PUSH EAX                            ; 005065b0
    LEA EDI,[ESP + 0x4]                 ; 005065b1
    CALL FUN_00468900                   ; 005065b5
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; undefined FUN_00468900()
    MOV ECX,0x6                         ; 005065ba
    LEA ESI,[EAX + 0x338]               ; 005065bf
    ADD ESP,0x4                         ; 005065c5
    MOVSD.REP ES:EDI,ESI                ; 005065c8
    MOV ECX,0x6                         ; 005065ca
    MOV ESI,ESP                         ; 005065cf
    MOV EDI,EBX                         ; 005065d1
    MOVSD.REP ES:EDI,ESI                ; 005065d3
    MOV EAX,EBX                         ; 005065d5
    ADD ESP,0x18                        ; 005065d7
    POP EDI                             ; 005065da
    POP EBX                             ; 005065db
    RET                                 ; 005065dc

