; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ad730(int param_1)
;
;
; Called Functions:
;   FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ad730
        ;   Label: FUN_005ad730
    PUSH EDI                            ; 005ad731
    SUB ESP,0x18                        ; 005ad732
    MOV EBX,ESI                         ; 005ad735
    MOV EAX,dword ptr [ESP + 0x24]      ; 005ad737
    ADD EAX,0x158                       ; 005ad73b
    PUSH EAX                            ; 005ad740
    LEA EDI,[ESP + 0x4]                 ; 005ad741
    CALL FUN_00468900                   ; 005ad745
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; undefined FUN_00468900()
    MOV ECX,0x6                         ; 005ad74a
    MOV ESI,dword ptr [EAX + 0x350]     ; 005ad74f
    ADD ESP,0x4                         ; 005ad755
    MOVSD.REP ES:EDI,ESI                ; 005ad758
    MOV ECX,0x6                         ; 005ad75a
    MOV ESI,ESP                         ; 005ad75f
    MOV EDI,EBX                         ; 005ad761
    MOVSD.REP ES:EDI,ESI                ; 005ad763
    MOV EAX,EBX                         ; 005ad765
    ADD ESP,0x18                        ; 005ad767
    POP EDI                             ; 005ad76a
    POP EBX                             ; 005ad76b
    RET                                 ; 005ad76c

