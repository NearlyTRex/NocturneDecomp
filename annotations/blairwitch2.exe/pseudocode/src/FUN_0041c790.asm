; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041c790(int param_1)
;
;
; Called Functions:
;   FUN_0044fd20
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041c790
        ;   Label: FUN_0041c790
    PUSH EDI                            ; 0041c791
    SUB ESP,0x1c                        ; 0041c792
    MOV EAX,dword ptr [ESP + 0x28]      ; 0041c795
    MOV EBX,ESI                         ; 0041c799
    FLD float ptr [EAX + 0x46c]         ; 0041c79b
    ADD EAX,0x2b4                       ; 0041c7a1
    CALL FUN_005b7ff0                   ; 0041c7a6
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    PUSH EAX                            ; 0041c7ab
    FISTP dword ptr [ESP + 0x1c]        ; 0041c7ac
    CALL FUN_0044fd20                   ; 0041c7b0
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd20()
    ADD ESP,0x4                         ; 0041c7b5
    MOV EDX,dword ptr [ESP + 0x18]      ; 0041c7b8
    MOV ESI,EAX                         ; 0041c7bc
    LEA EAX,[EDX*0x4 + 0x0]             ; 0041c7be
    MOV EDI,ESP                         ; 0041c7c5
    SUB EAX,EDX                         ; 0041c7c7
    MOV ESI,dword ptr [ESI + 0x350]     ; 0041c7c9
    SHL EAX,0x3                         ; 0041c7cf
    MOV ECX,0x6                         ; 0041c7d2
    ADD ESI,EAX                         ; 0041c7d7
    MOVSD.REP ES:EDI,ESI                ; 0041c7d9
    MOV ECX,0x6                         ; 0041c7db
    MOV ESI,ESP                         ; 0041c7e0
    MOV EDI,EBX                         ; 0041c7e2
    MOVSD.REP ES:EDI,ESI                ; 0041c7e4
    MOV EAX,EBX                         ; 0041c7e6
    ADD ESP,0x1c                        ; 0041c7e8
    POP EDI                             ; 0041c7eb
    POP EBX                             ; 0041c7ec
    RET                                 ; 0041c7ed

