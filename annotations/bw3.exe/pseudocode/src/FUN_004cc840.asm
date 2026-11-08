; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cc840(int param_1)
;
;
; Called Functions:
;   FUN_004625a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cc840
        ;   Label: FUN_004cc840
    PUSH EDI                            ; 004cc841
    SUB ESP,0x18                        ; 004cc842
    MOV EBX,ESI                         ; 004cc845
    MOV EAX,dword ptr [ESP + 0x24]      ; 004cc847
    ADD EAX,0x158                       ; 004cc84b
    PUSH EAX                            ; 004cc850
    LEA EDI,[ESP + 0x4]                 ; 004cc851
    CALL FUN_004625a0                   ; 004cc855
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625a0()
    MOV ECX,0x6                         ; 004cc85a
    MOV ESI,dword ptr [EAX + 0x350]     ; 004cc85f
    ADD ESP,0x4                         ; 004cc865
    MOVSD.REP ES:EDI,ESI                ; 004cc868
    MOV ECX,0x6                         ; 004cc86a
    MOV ESI,ESP                         ; 004cc86f
    MOV EDI,EBX                         ; 004cc871
    MOVSD.REP ES:EDI,ESI                ; 004cc873
    MOV EAX,EBX                         ; 004cc875
    ADD ESP,0x18                        ; 004cc877
    POP EDI                             ; 004cc87a
    POP EBX                             ; 004cc87b
    RET                                 ; 004cc87c

