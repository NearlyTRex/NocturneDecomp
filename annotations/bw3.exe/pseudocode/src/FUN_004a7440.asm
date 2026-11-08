; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a7440(int param_1)
;
;
; Called Functions:
;   FUN_004625a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a7440
        ;   Label: FUN_004a7440
    PUSH EDI                            ; 004a7441
    SUB ESP,0x18                        ; 004a7442
    MOV EBX,ESI                         ; 004a7445
    MOV EAX,dword ptr [ESP + 0x24]      ; 004a7447
    ADD EAX,0x158                       ; 004a744b
    PUSH EAX                            ; 004a7450
    LEA EDI,[ESP + 0x4]                 ; 004a7451
    CALL FUN_004625a0                   ; 004a7455
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625a0()
    MOV ECX,0x6                         ; 004a745a
    MOV ESI,dword ptr [EAX + 0x350]     ; 004a745f
    ADD ESP,0x4                         ; 004a7465
    MOVSD.REP ES:EDI,ESI                ; 004a7468
    MOV ECX,0x6                         ; 004a746a
    MOV ESI,ESP                         ; 004a746f
    MOV EDI,EBX                         ; 004a7471
    MOVSD.REP ES:EDI,ESI                ; 004a7473
    MOV EAX,EBX                         ; 004a7475
    ADD ESP,0x18                        ; 004a7477
    POP EDI                             ; 004a747a
    POP EBX                             ; 004a747b
    RET                                 ; 004a747c

