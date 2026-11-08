; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ea440(int param_1)
;
;
; Called Functions:
;   FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ea440
        ;   Label: FUN_004ea440
    PUSH EDI                            ; 004ea441
    SUB ESP,0x18                        ; 004ea442
    MOV EBX,ESI                         ; 004ea445
    MOV EAX,dword ptr [ESP + 0x24]      ; 004ea447
    ADD EAX,0x158                       ; 004ea44b
    PUSH EAX                            ; 004ea450
    LEA EDI,[ESP + 0x4]                 ; 004ea451
    CALL FUN_00468900                   ; 004ea455
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; undefined FUN_00468900()
    MOV ECX,0x6                         ; 004ea45a
    MOV ESI,dword ptr [EAX + 0x350]     ; 004ea45f
    ADD ESP,0x4                         ; 004ea465
    MOVSD.REP ES:EDI,ESI                ; 004ea468
    MOV ECX,0x6                         ; 004ea46a
    MOV ESI,ESP                         ; 004ea46f
    MOV EDI,EBX                         ; 004ea471
    MOVSD.REP ES:EDI,ESI                ; 004ea473
    MOV EAX,EBX                         ; 004ea475
    ADD ESP,0x18                        ; 004ea477
    POP EDI                             ; 004ea47a
    POP EBX                             ; 004ea47b
    RET                                 ; 004ea47c

