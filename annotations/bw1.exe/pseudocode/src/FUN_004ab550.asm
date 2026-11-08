; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ab550(int param_1)
;
;
; Called Functions:
;   FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ab550
        ;   Label: FUN_004ab550
    PUSH EDI                            ; 004ab551
    SUB ESP,0x18                        ; 004ab552
    MOV EBX,ESI                         ; 004ab555
    MOV EAX,dword ptr [ESP + 0x24]      ; 004ab557
    ADD EAX,0x158                       ; 004ab55b
    PUSH EAX                            ; 004ab560
    LEA EDI,[ESP + 0x4]                 ; 004ab561
    CALL FUN_00468900                   ; 004ab565
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; undefined FUN_00468900()
    MOV ECX,0x6                         ; 004ab56a
    MOV ESI,dword ptr [EAX + 0x350]     ; 004ab56f
    ADD ESP,0x4                         ; 004ab575
    MOVSD.REP ES:EDI,ESI                ; 004ab578
    MOV ECX,0x6                         ; 004ab57a
    MOV ESI,ESP                         ; 004ab57f
    MOV EDI,EBX                         ; 004ab581
    MOVSD.REP ES:EDI,ESI                ; 004ab583
    MOV EAX,EBX                         ; 004ab585
    ADD ESP,0x18                        ; 004ab587
    POP EDI                             ; 004ab58a
    POP EBX                             ; 004ab58b
    RET                                 ; 004ab58c

