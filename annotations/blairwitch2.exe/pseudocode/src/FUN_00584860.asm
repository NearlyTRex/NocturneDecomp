; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00584860(int param_1)
;
;
; Called Functions:
;   FUN_0044fd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00584860
        ;   Label: FUN_00584860
    PUSH EDI                            ; 00584861
    SUB ESP,0x18                        ; 00584862
    MOV EBX,ESI                         ; 00584865
    MOV EAX,dword ptr [ESP + 0x24]      ; 00584867
    ADD EAX,0x2b4                       ; 0058486b
    PUSH EAX                            ; 00584870
    LEA EDI,[ESP + 0x4]                 ; 00584871
    CALL FUN_0044fd20                   ; 00584875
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd20()
    MOV ECX,0x6                         ; 0058487a
    MOV ESI,dword ptr [EAX + 0x350]     ; 0058487f
    ADD ESP,0x4                         ; 00584885
    MOVSD.REP ES:EDI,ESI                ; 00584888
    MOV ECX,0x6                         ; 0058488a
    MOV ESI,ESP                         ; 0058488f
    MOV EDI,EBX                         ; 00584891
    MOVSD.REP ES:EDI,ESI                ; 00584893
    MOV EAX,EBX                         ; 00584895
    ADD ESP,0x18                        ; 00584897
    POP EDI                             ; 0058489a
    POP EBX                             ; 0058489b
    RET                                 ; 0058489c

